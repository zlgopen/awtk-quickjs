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

#include "cutils.h"
#include "awtk_js.h"
#include "tkc/fs.h"
#include "tkc/mem.h"

static int eval_buf(JSContext *ctx, const void *buf, int buf_len,
                    const char *filename, int eval_flags)
{
    JSValue val;
    int ret;

    if ((eval_flags & JS_EVAL_TYPE_MASK) == JS_EVAL_TYPE_MODULE) {
        /* for the modules, we compile then run to be able to set
           import.meta */
        val = JS_Eval(ctx, buf, buf_len, filename,
                      eval_flags | JS_EVAL_FLAG_COMPILE_ONLY);
        if (!JS_IsException(val)) {
            js_module_set_import_meta(ctx, val, TRUE, TRUE);
            val = JS_EvalFunction(ctx, val);
        }
    } else {
        val = JS_Eval(ctx, buf, buf_len, filename, eval_flags);
    }
    if (JS_IsException(val)) {
        js_std_dump_error(ctx);
        ret = -1;
    } else {
        ret = 0;
    }
    JS_FreeValue(ctx, val);
    return ret;
}

ret_t awtk_quickjs_eval_script(JSContext* ctx, const char* filename, const char* script,
                               uint32_t size, bool_t global) {
  eval_buf(ctx, script, size, filename, global ? JS_EVAL_TYPE_GLOBAL : JS_EVAL_TYPE_MODULE); 
  return RET_OK;
}

static int eval_file(JSContext *ctx, const char *filename, int module)
{
    uint8_t *buf;
    int ret, eval_flags;
    size_t buf_len;

    buf = js_load_file(ctx, &buf_len, filename);
    if (!buf) {
        perror(filename);
        exit(1);
    }

    if (module < 0) {
        module = (has_suffix(filename, ".mjs") ||
                  JS_DetectModule((const char *)buf, buf_len));
    }
    if (module)
        eval_flags = JS_EVAL_TYPE_MODULE;
    else
        eval_flags = JS_EVAL_TYPE_GLOBAL;
    ret = eval_buf(ctx, buf, buf_len, filename, eval_flags);
    js_free(ctx, buf);
    return ret;
}

ret_t awtk_quickjs_try_eval(JSContext* ctx, const char* filename, bool_t global) {
  eval_file(ctx, filename, !global);

  return RET_OK;
}

ret_t awtk_quickjs_eval_awtk_js(JSContext* ctx, const char* filename) {
  if (file_exist(filename)) {
    return awtk_quickjs_try_eval(ctx, filename, TRUE);
  } else if (file_exist("./awtk.js")) {
    return awtk_quickjs_try_eval(ctx, "./awtk.js", TRUE);
  } else if (file_exist("./js/awtk.js")) {
    return awtk_quickjs_try_eval(ctx, "./js/awtk.js", TRUE);
  } else {
    log_debug("not found awtk.js: %s\n", filename);
    return RET_FAIL;
  }
}

ret_t awtk_quickjs_eval(JSContext* ctx, const char* filename) {
  if (file_exist(filename)) {
    return awtk_quickjs_try_eval(ctx, filename, FALSE);
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
