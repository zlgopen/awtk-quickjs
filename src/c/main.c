/**
 * File:   run_js.c
 * Author: AWTK Develop Team
 * Brief:  entry of javascript awtk
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

#include "tkc/fs.h"
#include "tkc/mem.h"
#include "demos/assets.h"

#include "awtk.h"
#include "awtk_js.h"
#include "ext_widgets/ext_widgets.h"

#include "quickjs.h"

static JSValue js_gc(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  /*TODO: call gc*/
  return JS_NULL;
}

#ifdef WITH_QUICKJS_LIBC
#include "quickjs-libc.h"
#else
static JSValue js_print(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  int i;
  const char* str;

  for (i = 0; i < argc; i++) {
    if (i != 0) putchar(' ');
    str = JS_ToCString(ctx, argv[i]);
    if (!str) return JS_EXCEPTION;
    fputs(str, stdout);
    JS_FreeCString(ctx, str);
  }
  putchar('\n');
  return JS_UNDEFINED;
}

void js_std_dump_error(JSContext* ctx) {
  JSValue exception_val, val;
  const char* stack;
  bool_t is_error;

  exception_val = JS_GetException(ctx);
  is_error = JS_IsError(ctx, exception_val);
  if (!is_error) printf("Throw: ");
  js_print(ctx, JS_NULL, 1, (JSValueConst*)&exception_val);
  if (is_error) {
    val = JS_GetPropertyStr(ctx, exception_val, "stack");
    if (!JS_IsUndefined(val)) {
      stack = JS_ToCString(ctx, val);
      printf("%s\n", stack);
      JS_FreeCString(ctx, stack);
    }
    JS_FreeValue(ctx, val);
  }
  JS_FreeValue(ctx, exception_val);
}
#endif /*WITH_QUICKJS_LIBC*/

static ret_t quickjs_on_idle(const idle_info_t* info) {
  int err = 0;
  JSContext* ctx1 = NULL;
  JSContext* ctx = (JSContext*)(info->ctx);

  for (;;) {
    err = JS_ExecutePendingJob(JS_GetRuntime(ctx), &ctx1);
    if (err <= 0) {
      if (err < 0) {
        js_std_dump_error(ctx1);
      }
      break;
    }
    log_debug("quickjs_on_idle\n");
  }

  return RET_REPEAT;
}

static JSValue global_obj;
static JSRuntime* rt = NULL;
static JSContext* ctx = NULL;
static const char* script_file = "./demos/demoui.js";

static ret_t on_cmd_line(int argc, char* argv[]) {
  if (argc > 1) {
    script_file = argv[1];
  }

  return RET_OK;
}

static ret_t application_init(void) {
  const char* STR_LOAD_STD =
      "import * as std from 'std';\n"
      "import * as os from 'os';\n"
      "globalThis.std = std;\n"
      "globalThis.os = os;\n";
  const char* STR_BOOT_JS = "var exports = {};\n";

  rt = JS_NewRuntime();
  ctx = JS_NewContext(rt);
  awtk_quickjs_init(ctx);
  global_obj = JS_GetGlobalObject(ctx);

#ifdef WITH_QUICKJS_LIBC
  JS_SetModuleLoaderFunc(rt, NULL, js_module_loader, NULL);
  js_std_add_helpers(ctx, 0, NULL);
  js_init_module_std(ctx, "std");
  js_init_module_os(ctx, "os");
#else
  JS_SetPropertyStr(ctx, global_obj, "print", JS_NewCFunction(ctx, js_print, "print", 1));
#endif /*WITH_QUICKJS_LIBC*/
  JS_SetPropertyStr(ctx, global_obj, "gc", JS_NewCFunction(ctx, js_gc, "gc", 1));

  awtk_quickjs_eval_script(ctx, "boot.js", STR_BOOT_JS, strlen(STR_BOOT_JS), TRUE);
  awtk_quickjs_eval_script(ctx, "load_std.js", STR_LOAD_STD, strlen(STR_LOAD_STD), FALSE);
  return_value_if_fail(awtk_quickjs_eval_awtk_js(ctx, "src/js/awtk.js") == RET_OK, 0);
  return_value_if_fail(awtk_quickjs_eval(ctx, script_file) == RET_OK, 0);

  idle_add(quickjs_on_idle, ctx);

  return RET_OK;
}

static ret_t application_exit(void) {
  return RET_OK;
}

static ret_t final_exit(void) {
  awtk_quickjs_deinit(ctx);

#ifdef WITH_QUICKJS_LIBC
  js_std_free_handlers(rt);
#endif /*WITH_QUICKJS_LIBC*/

  JS_FreeValue(ctx, global_obj);
  JS_FreeContext(ctx);
  JS_FreeRuntime(rt);

  return RET_OK;
}

#define ON_CMD_LINE(argc, argv) on_cmd_line(argc, argv)
#define FINAL_EXIT() final_exit()

#include "../../res/assets.inc"
#include "awtk_main.inc"
