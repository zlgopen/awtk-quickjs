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

#include "demos/assets.h"
#include "tkc/fs.h"
#include "tkc/mem.h"

#include "awtk.h"
#include "awtk_js.h"
#include "ext_widgets/ext_widgets.h"

int main(int argc, char *argv[]) {
  JSRuntime *rt = NULL;
  JSContext *ctx = NULL;
  const char *script_file = argc == 2 ? argv[1] : "./demos/demoui.js";

  rt = JS_NewRuntime();
  ctx = JS_NewContext(rt);

  tk_init(320, 480, APP_SIMULATOR, NULL, RES_ROOT);

  assets_init();
  tk_ext_widgets_init();

  awtk_quickjs_init(ctx);
  return_value_if_fail(awtk_quickjs_eval_awtk_js(ctx, "src/awtk.js") == RET_OK,
                       0);
  return_value_if_fail(awtk_quickjs_eval(ctx, script_file) == RET_OK, 0);

  tk_run();

  awtk_quickjs_deinit(ctx);
  JS_FreeContext(ctx);
  JS_FreeRuntime(rt);

  return 0;
}
