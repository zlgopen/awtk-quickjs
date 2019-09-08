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
#include "quickjs-libc.h"

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

int main(int argc, char* argv[]) {
  JSRuntime* rt = NULL;
  JSContext* ctx = NULL;
  const char* script_file = argc == 2 ? argv[1] : "./demos/demoui.js";

  rt = JS_NewRuntime();
  ctx = JS_NewContext(rt);

  tk_init(320, 480, APP_SIMULATOR, NULL, RES_ROOT);

  assets_init();
  tk_ext_widgets_init();

  awtk_quickjs_init(ctx);

  JS_SetModuleLoaderFunc(rt, NULL, js_module_loader, NULL);
  js_std_add_helpers(ctx, 0, NULL);
  js_init_module_std(ctx, "std");
  js_init_module_os(ctx, "os");
  return_value_if_fail(awtk_quickjs_eval_awtk_js(ctx, "src/awtk.js") == RET_OK, 0);
  return_value_if_fail(awtk_quickjs_eval(ctx, script_file) == RET_OK, 0);

  idle_add(quickjs_on_idle, ctx);

  tk_run();

  awtk_quickjs_deinit(ctx);

  js_std_free_handlers(rt);
  JS_FreeContext(ctx);
  JS_FreeRuntime(rt);

  return 0;
}
