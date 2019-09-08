
char *quickjs_get_utf8_string(JSContext *ctx, JSValue v) {
  return (char *)JS_ToCString(ctx, v);
}

wchar_t *quickjs_get_wstring(JSContext *ctx, JSValue v) {
  uint32_t size = 0;
  wchar_t *wstr = NULL;
  char *str = (char *)JS_ToCString(ctx, v);
  return_value_if_fail(str != NULL, NULL);

  size = strlen(str);
  wstr = (wchar_t *)TKMEM_ALLOC(sizeof(wchar_t) * (size + 1));
  if (wstr != NULL) {
    utf8_to_utf16(str, wstr, size + 1);
    wstr[size] = '\0';
  }
  JS_FreeCString(ctx, str);

  return wstr;
}

void *quickjs_get_pointer(JSContext *ctx, JSValue v, const char *type) {
  return JS_GetOpaque(v, 1 /*JS_CLASS_OBJECT*/);
}

int32_t quickjs_get_int_value(JSContext *ctx, JSValue v) {
  int32_t ret = 0;
  JS_ToInt32(ctx, &ret, v);

  return ret;
}

double quickjs_get_number_value(JSContext *ctx, JSValue v) {
  double ret = 0;
  JS_ToFloat64(ctx, &ret, v);

  return ret;
}

bool_t quickjs_get_boolean_value(JSContext *ctx, JSValue v) {
  return JS_ToBool(ctx, v);
}

JSValue quickjs_create_string_from_wstring(JSContext *ctx,
                                           const wchar_t *wstr) {
  str_t str;
  JSValue jret;
  return_value_if_fail(wstr != NULL, JS_NULL);

  str_init(&str, 0);
  str_from_wstr(&str, wstr);
  jret = JS_NewString(ctx, str.str);
  str_reset(&str);

  return jret;
}

JSValue quickjs_create_string(JSContext *ctx, const char *str) {

  return str != NULL ? JS_NewString(ctx, str) : JS_NULL;
}

JSValue quickjs_create_pointer(JSContext *ctx, const void *ptr,
                               const char *type) {
  JSValue jret = JS_NewObject(ctx);

  JS_SetOpaque(jret, ptr);

  return jret;
}

JSValue quickjs_create_int(JSContext *ctx, uint32_t ret) {
  return JS_NewInt32(ctx, ret);
}

JSValue quickjs_create_number(JSContext *ctx, double ret) {
  return JS_NewFloat64(ctx, ret);
}

JSValue quickjs_create_object(JSContext *ctx, const void *ptr, const char *type,
                              tk_destroy_t destroy) {
  JSValue jret = JS_NewObject(ctx);

  JS_SetOpaque(jret, ptr);
  /*FIXME: how to call destroy when the jret is destroied ?*/

  return jret;
}

typedef struct _sync_callback_info_t {
  JSContext *ctx;
  JSValue func;
} sync_callback_info_t;

sync_callback_info_t *sync_callback_info_init(sync_callback_info_t *info,
                                              JSContext *ctx, JSValue func) {
  return_value_if_fail(info != NULL, NULL);
  info->ctx = ctx;
  info->func = func;

  return info;
}

typedef struct _async_callback_info_t {
  JSContext *ctx;
  JSValue func;
} async_callback_info_t;

static ret_t call_on_event(void *ctx, event_t *e) {
  JSValue jret;
  JSValueConst argv[1];
  ret_t ret = RET_REMOVE;
  async_callback_info_t *info = (async_callback_info_t *)(ctx);
  JSContext *jctx = info->ctx;

  argv[0] = quickjs_create_pointer(info->ctx, e, "event_t*");
  jret = JS_Call(jctx, info->func, JS_NULL, 1, argv);
  ret = (ret_t)quickjs_get_int_value(jctx, jret);
  JS_FreeValue(jctx, jret);

  return ret;
}

static async_callback_info_t *async_callback_info_create(JSContext *ctx,
                                                         JSValue func) {
  async_callback_info_t *info = TKMEM_ZALLOC(async_callback_info_t);
  return_value_if_fail(info != NULL, NULL);

  info->ctx = ctx;
  info->func = func;

  return info;
}

static ret_t async_callback_info_destroy(async_callback_info_t *info) {
  return_value_if_fail(info != NULL, RET_BAD_PARAMS);
  JS_FreeValue(info->ctx, info->func);

  return RET_OK;
}

static ret_t emitter_item_on_destroy(void *data) {
  emitter_item_t *item = (emitter_item_t *)data;

  async_callback_info_destroy((async_callback_info_t *)(item->ctx));

  return RET_OK;
}

JSValue wrap_widget_on(JSContext *ctx, JSValueConst this_val, int argc,
                       JSValueConst *argv) {
  ret_t ret = RET_FAIL;

  if (argc >= 3) {
    widget_t *widget =
        (widget_t *)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t type = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    async_callback_info_t *info =
        async_callback_info_create(ctx, JS_DupValue(ctx, argv[2]));

    ret = widget_on(widget, type, call_on_event, info);
    emitter_set_on_destroy(widget->emitter, ret, emitter_item_on_destroy, NULL);
  }

  return quickjs_create_int(ctx, ret);
}

JSValue wrap_emitter_on(JSContext *ctx, JSValueConst this_val, int argc,
                        JSValueConst *argv) {
  ret_t ret = RET_OK;

  return quickjs_create_int(ctx, ret);
}

JSValue wrap_locale_info_on(JSContext *ctx, JSValueConst this_val, int argc,
                            JSValueConst *argv) {
  ret_t ret = RET_OK;

  return quickjs_create_int(ctx, ret);
}

static ret_t timer_info_on_destroy(void *data) {
  timer_info_t *item = (timer_info_t *)data;

  async_callback_info_destroy((async_callback_info_t *)(item->ctx));

  return RET_OK;
}

static ret_t call_on_timer(const timer_info_t *timer) {
  JSValue jret;
  JSValueConst argv[1];
  ret_t ret = RET_REMOVE;
  async_callback_info_t *info = (async_callback_info_t *)(timer->ctx);
  JSContext *jctx = info->ctx;

  argv[0] = JS_NULL;
  jret = JS_Call(jctx, info->func, JS_NULL, 1, argv);
  ret = (ret_t)quickjs_get_int_value(jctx, jret);
  JS_FreeValue(jctx, jret);

  return ret;
}

JSValue wrap_timer_add(JSContext *ctx, JSValueConst this_val, int argc,
                       JSValueConst *argv) {
  uint32_t ret = TK_INVALID_ID;

  if (argc >= 2) {
    async_callback_info_t *info =
        async_callback_info_create(ctx, JS_DupValue(ctx, argv[0]));
    uint32_t duration = (uint32_t)quickjs_get_int_value(ctx, argv[1]);

    ret = timer_add(call_on_timer, info, duration);
    timer_set_on_destroy(ret, timer_info_on_destroy, NULL);
  }

  return quickjs_create_int(ctx, ret);
}

static ret_t idle_info_on_destroy(void *data) {
  idle_info_t *item = (idle_info_t *)data;

  async_callback_info_destroy((async_callback_info_t *)(item->ctx));

  return RET_OK;
}

static ret_t call_on_idle(const idle_info_t *idle) {
  JSValue jret;
  JSValueConst argv[1];
  ret_t ret = RET_REMOVE;
  async_callback_info_t *info = (async_callback_info_t *)(idle->ctx);
  JSContext *jctx = info->ctx;

  argv[0] = JS_NULL;
  jret = JS_Call(jctx, info->func, JS_NULL, 1, argv);
  ret = (ret_t)quickjs_get_int_value(jctx, jret);
  JS_FreeValue(jctx, jret);

  return ret;
}

JSValue wrap_idle_add(JSContext *ctx, JSValueConst this_val, int argc,
                      JSValueConst *argv) {
  uint32_t ret = TK_INVALID_ID;

  if (argc >= 1) {
    async_callback_info_t *info =
        async_callback_info_create(ctx, JS_DupValue(ctx, argv[0]));

    ret = idle_add(call_on_idle, info);
    idle_set_on_destroy(ret, idle_info_on_destroy, NULL);
  }

  return quickjs_create_int(ctx, ret);
}

static ret_t call_visit(void *ctx, const void *data) {
  JSValue jret;
  JSValueConst argv[1];
  ret_t ret = RET_REMOVE;
  sync_callback_info_t *info = (sync_callback_info_t *)(ctx);
  JSContext *jctx = info->ctx;

  argv[0] = quickjs_create_pointer(info->ctx, data, NULL);
  jret = JS_Call(jctx, info->func, JS_NULL, 1, argv);
  ret = (ret_t)quickjs_get_int_value(jctx, jret);
  JS_FreeValue(jctx, jret);

  return ret;
}

JSValue wrap_object_foreach_prop(JSContext *ctx, JSValueConst this_val,
                                 int argc, JSValueConst *argv) {
  ret_t ret = RET_OK;

  return quickjs_create_int(ctx, ret);
}

JSValue wrap_widget_foreach(JSContext *ctx, JSValueConst this_val, int argc,
                            JSValueConst *argv) {
  ret_t ret = RET_FAIL;

  if (argc >= 2) {
    sync_callback_info_t info;
    widget_t *widget =
        (widget_t *)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    JSValue func = JS_DupValue(ctx, argv[1]);
    ret = widget_foreach(widget, call_visit,
                         sync_callback_info_init(&info, ctx, func));
    JS_FreeValue(ctx, func);
  }

  return quickjs_create_int(ctx, ret);
}
