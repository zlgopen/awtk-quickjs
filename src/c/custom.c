#include "jsengine.h"

jsvalue_t jsvalue_create_string_from_wstring(JSContext* ctx, const wchar_t* wstr) {
  str_t str;
  jsvalue_t jret;
  return_value_if_fail(wstr != NULL, JS_NULL);

  str_init(&str, 0);
  str_from_wstr(&str, wstr);
  jret = jsvalue_create_string(ctx, str.str);
  str_reset(&str);

  return jret;
}

wchar_t* jsvalue_get_wstring(JSContext* ctx, jsvalue_t v) {
  uint32_t size = 0;
  wchar_t* wstr = NULL;
  char* str = (char*)jsvalue_get_utf8_string(ctx, v);
  return_value_if_fail(str != NULL, NULL);

  size = strlen(str);
  wstr = (wchar_t*)TKMEM_ALLOC(sizeof(wchar_t) * (size + 1));
  if (wstr != NULL) {
    tk_utf8_to_utf16(str, wstr, size + 1);
    wstr[size] = '\0';
  }
  jsvalue_free_str(ctx, str);

  return wstr;
}

typedef struct _async_callback_info_t {
  JSContext* ctx;
  jsvalue_t func;
} async_callback_info_t;

static async_callback_info_t* async_callback_info_create(JSContext* ctx, jsvalue_t func) {
  async_callback_info_t* info = TKMEM_ZALLOC(async_callback_info_t);
  return_value_if_fail(info != NULL, NULL);

  info->ctx = ctx;
  info->func = jsvalue_ref(ctx, func);

  return info;
}

static ret_t async_callback_info_call(async_callback_info_t* info, const void* data,
                                      const char* type) {
  jsvalue_t jret;
  jsvalue_const_t argv[1];
  ret_t ret = RET_REMOVE;
  JSContext* jctx = info->ctx;

  argv[0] = jsvalue_create_pointer(info->ctx, (void*)data, type);
  jret = jsfunc_call(jctx, info->func, JS_NULL, 1, argv);
  ret = (ret_t)jsvalue_get_int_value(jctx, jret);

  jsvalue_unref(jctx, argv[0]);
  jsvalue_unref(jctx, jret);

  return ret;
}

static ret_t async_callback_info_destroy(async_callback_info_t* info) {
  return_value_if_fail(info != NULL, RET_BAD_PARAMS);
  jsvalue_unref(info->ctx, info->func);
  TKMEM_FREE(info);

  return RET_OK;
}

static ret_t call_on_timer(const timer_info_t* timer) {
  return async_callback_info_call((async_callback_info_t*)(timer->ctx), timer, "timer_info_t*");
}

static ret_t call_on_idle(const idle_info_t* idle) {
  return async_callback_info_call((async_callback_info_t*)(idle->ctx), idle, "idle_info_t*");
}

static ret_t call_on_data(void* ctx, const void* data) {
  return async_callback_info_call((async_callback_info_t*)(ctx), data, NULL);
}

static ret_t call_on_event(void* ctx, event_t* e) {
  return async_callback_info_call((async_callback_info_t*)(ctx), e, "event_t*");
}

static ret_t emitter_item_on_destroy(void* data) {
  emitter_item_t* item = (emitter_item_t*)data;

  async_callback_info_destroy((async_callback_info_t*)(item->ctx));

  return RET_OK;
}

JSFUNC_DECL(wrap_widget_on)
uint32_t ret = TK_INVALID_ID;

if (argc >= 3) {
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t type = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  async_callback_info_t* info = async_callback_info_create(ctx, argv[2]);

  ret = widget_on(widget, type, call_on_event, info);
  emitter_set_on_destroy(widget->emitter, ret, emitter_item_on_destroy, NULL);
}

return jsvalue_create_int(ctx, ret);
}

JSFUNC_DECL(wrap_emitter_on)
uint32_t ret = TK_INVALID_ID;

if (argc >= 3) {
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  uint32_t type = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  async_callback_info_t* info = async_callback_info_create(ctx, argv[2]);

  ret = emitter_on(emitter, type, call_on_event, info);
  if (ret == TK_INVALID_ID) {
    async_callback_info_destroy(info);
  } else {
    emitter_set_on_destroy(emitter, ret, emitter_item_on_destroy, NULL);
  }
}

return jsvalue_create_int(ctx, ret);
}

static ret_t timer_info_on_destroy(void* data) {
  timer_info_t* item = (timer_info_t*)data;

  async_callback_info_destroy((async_callback_info_t*)(item->ctx));

  return RET_OK;
}

JSFUNC_DECL(wrap_timer_add)
uint32_t ret = TK_INVALID_ID;

if (argc >= 2) {
  async_callback_info_t* info = async_callback_info_create(ctx, argv[0]);
  uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = timer_add(call_on_timer, info, duration);
  if (ret == TK_INVALID_ID) {
    async_callback_info_destroy(info);
  } else {
    timer_set_on_destroy(ret, timer_info_on_destroy, NULL);
  }
}

return jsvalue_create_int(ctx, ret);
}

static ret_t idle_info_on_destroy(void* data) {
  idle_info_t* item = (idle_info_t*)data;

  async_callback_info_destroy((async_callback_info_t*)(item->ctx));

  return RET_OK;
}

JSFUNC_DECL(wrap_idle_add)
uint32_t ret = TK_INVALID_ID;

if (argc >= 1) {
  async_callback_info_t* info = async_callback_info_create(ctx, argv[0]);
  ret = idle_add(call_on_idle, info);
  if (ret == TK_INVALID_ID) {
    async_callback_info_destroy(info);
  } else {
    idle_set_on_destroy(ret, idle_info_on_destroy, NULL);
  }
}

return jsvalue_create_int(ctx, ret);
}

JSFUNC_DECL(wrap_widget_foreach)
ret_t ret = RET_FAIL;

if (argc >= 2) {
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  async_callback_info_t* info = async_callback_info_create(ctx, argv[1]);
  ret = widget_foreach(widget, call_on_data, info);
  async_callback_info_destroy(info);
}

return jsvalue_create_int(ctx, ret);
}
