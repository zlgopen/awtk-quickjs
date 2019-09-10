#ifndef JS_ENGINE_H
#define JS_ENGINE_H

typedef JSValue jsvalue_t;
typedef JSValue jsvalue_const_t;

#define jsvalue_ref(ctx, v) JS_DupValue(ctx, v)
#define jsvalue_unref(ctx, v) JS_FreeValue(ctx, v)
#define jsvalue_free_str(ctx, v) JS_FreeCString(ctx, v)
#define jsfunc_call(ctx, func, this_value, argc, argv) JS_Call(ctx, func, this_value, argc, argv)
#define JSFUNC_DECL(func_name) \
  jsvalue_t func_name(JSContext* ctx, jsvalue_const_t this_val, int argc, jsvalue_const_t* argv) {
static inline char* jsvalue_get_utf8_string(JSContext* ctx, jsvalue_t v) {
  return (char*)JS_ToCString(ctx, v);
}

static inline void* jsvalue_get_pointer(JSContext* ctx, jsvalue_t v, const char* type) {
  return JS_GetOpaque(v, 1 /*JS_CLASS_OBJECT*/);
}

static inline int32_t jsvalue_get_int_value(JSContext* ctx, jsvalue_t v) {
  int32_t ret = 0;
  JS_ToInt32(ctx, &ret, v);
  jsvalue_unref(ctx, v);

  return ret;
}

static inline double jsvalue_get_number_value(JSContext* ctx, jsvalue_t v) {
  double ret = 0;
  JS_ToFloat64(ctx, &ret, v);
  jsvalue_unref(ctx, v);

  return ret;
}

static inline bool_t jsvalue_get_boolean_value(JSContext* ctx, jsvalue_t v) {
  bool_t ret = JS_ToBool(ctx, v);

  jsvalue_unref(ctx, v);

  return ret;
}

static inline jsvalue_t jsvalue_create_string(JSContext* ctx, const char* str) {
  return str != NULL ? JS_NewString(ctx, str) : JS_NULL;
}

static inline jsvalue_t jsvalue_create_pointer(JSContext* ctx, const void* ptr, const char* type) {
  jsvalue_t jret = JS_NewObject(ctx);

  JS_SetOpaque(jret, (void*)ptr);

  return jret;
}

static inline jsvalue_t jsvalue_create_int(JSContext* ctx, uint32_t ret) {
  return JS_NewInt32(ctx, ret);
}

static inline jsvalue_t jsvalue_create_bool(JSContext* ctx, bool_t ret) {
  return JS_NewBool(ctx, ret);
}

static inline jsvalue_t jsvalue_create_number(JSContext* ctx, double ret) {
  return JS_NewFloat64(ctx, ret);
}

static inline jsvalue_t jsvalue_create_object(JSContext* ctx, const void* ptr, const char* type,
                                              tk_destroy_t destroy) {
  jsvalue_t jret = JS_NewObject(ctx);

  JS_SetOpaque(jret, (void*)ptr);
  /*FIXME: how to call destroy when the jret is destroied ?*/

  return jret;
}

#endif /*JS_ENGINE_H*/
