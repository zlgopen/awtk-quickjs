/**
 * File:   utils.c
 * Author: AWTK Develop Team
 * Brief:  utils
 *
 * Copyright (c) 2019 - 2019  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2019-09-08 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#include "quickjs-libc.h"
#include "quickjs.h"

#include "awtk_js.h"
#include "tkc/fs.h"
#include "tkc/mem.h"

ret_t awtk_quickjs_eval_script(JSContext* ctx, const char* filename, const char* script,
                               uint32_t size) {
  ret_t ret = RET_OK;
  JSValue val = JS_Eval(ctx, script, size, filename, JS_EVAL_TYPE_GLOBAL);
  if (JS_IsException(val)) {
    js_std_dump_error(ctx);
    ret = RET_FAIL;
  }
  JS_FreeValue(ctx, val);

  return ret;
}

ret_t awtk_quickjs_try_eval(JSContext* ctx, const char* filename) {
  uint32_t size = 0;
  char* script = NULL;
  ret_t ret = RET_FAIL;
  return_value_if_fail(filename != NULL, RET_BAD_PARAMS);
  script = file_read(filename, &size);
  return_value_if_fail(script != NULL && size > 0, RET_NOT_FOUND);

  ret = awtk_quickjs_eval_script(ctx, filename, script, size);

  TKMEM_FREE(script);

  log_debug("awtk_quickjs_try_eval %s ret=%d\n", filename, ret);

  return ret;
}

ret_t awtk_quickjs_eval_awtk_js(JSContext* ctx, const char* filename) {
  if (file_exist(filename)) {
    return awtk_quickjs_try_eval(ctx, filename);
  } else if (file_exist("./awtk.js")) {
    return awtk_quickjs_try_eval(ctx, "./awtk.js");
  } else if (file_exist("./js/awtk.js")) {
    return awtk_quickjs_try_eval(ctx, "./js/awtk.js");
  } else {
    log_debug("not found awtk.js: %s\n", filename);
    return RET_FAIL;
  }
}

ret_t awtk_quickjs_eval(JSContext* ctx, const char* filename) {
  if (file_exist(filename)) {
    return awtk_quickjs_try_eval(ctx, filename);
  } else {
    log_debug("Not found: %s\n", filename);
    return RET_FAIL;
  }
}

ret_t awtk_quickjs_init(JSContext* ctx) {
  awtk_js_init(ctx);

  return RET_OK;
}

ret_t awtk_iotjs_quickjs_init(JSContext* ctx) {
  awtk_js_init(ctx);

  return RET_OK;
}

ret_t awtk_quickjs_deinit(JSContext* ctx) {
  return RET_OK;
}
