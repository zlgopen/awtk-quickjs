/*XXX: GENERATED CODE, DONT EDIT IT.*/
#include "tkc/utf8.h"
#include "tkc/mem.h"
#include "quickjs.h"
#include "src/awtk_global.h"
#include "base/bitmap.h"
#include "base/canvas.h"
#include "base/clip_board.h"
#include "base/events.h"
#include "base/font_manager.h"
#include "base/font.h"
#include "base/idle.h"
#include "base/image_manager.h"
#include "base/input_method.h"
#include "base/keys.h"
#include "base/locale_info.h"
#include "base/style.h"
#include "base/theme.h"
#include "base/timer.h"
#include "base/types_def.h"
#include "base/vgcanvas.h"
#include "base/widget_consts.h"
#include "base/widget.h"
#include "ext_widgets/ext_widgets.h"
#include "base/assets_manager.h"
#include "tkc/asset_info.h"
#include "tkc/color.h"
#include "tkc/date_time.h"
#include "tkc/emitter.h"
#include "tkc/event.h"
#include "tkc/named_value.h"
#include "tkc/rect.h"
#include "tkc/time_now.h"
#include "tkc/types_def.h"
#include "tkc/value.h"
#include "slide_view/slide_indicator.h"
#include "slide_view/slide_view.h"
#include "widgets/slider.h"
#include "switch/switch.h"
#include "text_selector/text_selector.h"
#include "time_clock/digit_clock.h"
#include "time_clock/time_clock.h"
#include "widgets/row.h"
#include "widgets/progress_bar.h"
#include "widgets/popup.h"
#include "widgets/pages.h"
#include "widgets/overlay.h"
#include "widgets/label.h"
#include "widgets/group_box.h"
#include "widgets/view.h"
#include "base/image_base.h"
#include "base/dialog.h"
#include "base/window_base.h"
#include "base/window_manager.h"
#include "base/window.h"
#include "canvas_widget/canvas_widget.h"
#include "color_picker/color_picker.h"
#include "widgets/grid.h"
#include "widgets/grid_item.h"
#include "widgets/edit.h"
#include "widgets/tab_control.h"
#include "base/style_mutable.h"
#include "widgets/tab_button.h"
#include "widgets/dragger.h"
#include "tkc/object.h"
#include "widgets/dialog_title.h"
#include "guage/guage_pointer.h"
#include "guage/guage.h"
#include "image_animation/image_animation.h"
#include "image_value/image_value.h"
#include "widgets/dialog_client.h"
#include "mledit/line_number.h"
#include "mledit/mledit.h"
#include "widgets/tab_button_group.h"
#include "progress_circle/progress_circle.h"
#include "rich_text/rich_text.h"
#include "scroll_label/hscroll_label.h"
#include "scroll_view/list_item.h"
#include "scroll_view/list_view_h.h"
#include "scroll_view/list_view.h"
#include "scroll_view/scroll_bar.h"
#include "scroll_view/scroll_view.h"
#include "slide_menu/slide_menu.h"
#include "widgets/app_bar.h"
#include "widgets/button_group.h"
#include "widgets/button.h"
#include "widgets/check_button.h"
#include "widgets/color_tile.h"
#include "widgets/column.h"
#include "widgets/combo_box_item.h"
#include "widgets/combo_box.h"
#include "tkc/timer_info.h"
#include "window_manager/window_manager_simple.h"
#include "tkc/object_default.h"
#include "tkc/idle_info.h"
#include "window_manager/window_manager_default.h"
#include "widgets/image.h"
#include "combo_box_ex/combo_box_ex.h"
#include "gif_image/gif_image.h"
#include "svg_image/svg_image.h"
#include "widgets/spin_box.h"
#include "widgets/system_bar.h"
#include "custom.c"

JSValue wrap_tk_quit(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    ret_t ret = 0;
    ret = (ret_t)tk_quit();

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_tk_get_pointer_x(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    int32_t ret = 0;
    ret = (int32_t)tk_get_pointer_x();

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_tk_get_pointer_y(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    int32_t ret = 0;
    ret = (int32_t)tk_get_pointer_y();

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_tk_is_pointer_pressed(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    bool_t ret = 0;
    ret = (bool_t)tk_is_pointer_pressed();

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

ret_t global_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "tk_quit", JS_NewCFunction(ctx, wrap_tk_quit, "tk_quit", 1));
  JS_SetPropertyStr(ctx, global_obj, "tk_get_pointer_x",
                    JS_NewCFunction(ctx, wrap_tk_get_pointer_x, "tk_get_pointer_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "tk_get_pointer_y",
                    JS_NewCFunction(ctx, wrap_tk_get_pointer_y, "tk_get_pointer_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "tk_is_pointer_pressed",
                    JS_NewCFunction(ctx, wrap_tk_is_pointer_pressed, "tk_is_pointer_pressed", 1));

  return RET_OK;
}

JSValue get_BITMAP_FLAG_NONE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FLAG_NONE);
}

JSValue get_BITMAP_FLAG_OPAQUE(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FLAG_OPAQUE);
}

JSValue get_BITMAP_FLAG_IMMUTABLE(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FLAG_IMMUTABLE);
}

JSValue get_BITMAP_FLAG_TEXTURE(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FLAG_TEXTURE);
}

JSValue get_BITMAP_FLAG_CHANGED(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FLAG_CHANGED);
}

JSValue get_BITMAP_FLAG_PREMULTI_ALPHA(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FLAG_PREMULTI_ALPHA);
}

ret_t bitmap_flag_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FLAG_NONE",
                    JS_NewCFunction(ctx, get_BITMAP_FLAG_NONE, "BITMAP_FLAG_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FLAG_OPAQUE",
                    JS_NewCFunction(ctx, get_BITMAP_FLAG_OPAQUE, "BITMAP_FLAG_OPAQUE", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FLAG_IMMUTABLE",
                    JS_NewCFunction(ctx, get_BITMAP_FLAG_IMMUTABLE, "BITMAP_FLAG_IMMUTABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FLAG_TEXTURE",
                    JS_NewCFunction(ctx, get_BITMAP_FLAG_TEXTURE, "BITMAP_FLAG_TEXTURE", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FLAG_CHANGED",
                    JS_NewCFunction(ctx, get_BITMAP_FLAG_CHANGED, "BITMAP_FLAG_CHANGED", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "BITMAP_FLAG_PREMULTI_ALPHA",
      JS_NewCFunction(ctx, get_BITMAP_FLAG_PREMULTI_ALPHA, "BITMAP_FLAG_PREMULTI_ALPHA", 1));

  return RET_OK;
}

JSValue wrap_bitmap_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    bitmap_t* ret = NULL;
    ret = (bitmap_t*)bitmap_create();

    jret = quickjs_create_object(ctx, ret, "bitmap_t*", (tk_destroy_t)bitmap_destroy);
  }
  return jret;
}

JSValue wrap_bitmap_create_ex(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    bitmap_t* ret = NULL;
    uint32_t w = (uint32_t)quickjs_get_int_value(ctx, argv[0]);
    uint32_t h = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    uint32_t line_length = (uint32_t)quickjs_get_int_value(ctx, argv[2]);
    bitmap_format_t format = (bitmap_format_t)quickjs_get_number_value(ctx, argv[3]);
    ret = (bitmap_t*)bitmap_create_ex(w, h, line_length, format);

    jret = quickjs_create_object(ctx, ret, "bitmap_t*", (tk_destroy_t)bitmap_destroy);
  }
  return jret;
}

JSValue wrap_bitmap_get_bpp(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    uint32_t ret = 0;
    bitmap_t* bitmap = (bitmap_t*)quickjs_get_pointer(ctx, argv[0], "bitmap_t*");
    ret = (uint32_t)bitmap_get_bpp(bitmap);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_bitmap_t_get_prop_w(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)quickjs_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = JS_NewInt32(ctx, obj->w);
  return jret;
}

JSValue wrap_bitmap_t_get_prop_h(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)quickjs_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = JS_NewInt32(ctx, obj->h);
  return jret;
}

JSValue wrap_bitmap_t_get_prop_line_length(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)quickjs_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = JS_NewInt32(ctx, obj->line_length);
  return jret;
}

JSValue wrap_bitmap_t_get_prop_flags(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)quickjs_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = JS_NewInt32(ctx, obj->flags);
  return jret;
}

JSValue wrap_bitmap_t_get_prop_format(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)quickjs_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = JS_NewInt32(ctx, obj->format);
  return jret;
}

JSValue wrap_bitmap_t_get_prop_name(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)quickjs_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = quickjs_create_string(ctx, obj->name);
  return jret;
}

ret_t bitmap_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "bitmap_create",
                    JS_NewCFunction(ctx, wrap_bitmap_create, "bitmap_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "bitmap_create_ex",
                    JS_NewCFunction(ctx, wrap_bitmap_create_ex, "bitmap_create_ex", 1));
  JS_SetPropertyStr(ctx, global_obj, "bitmap_get_bpp",
                    JS_NewCFunction(ctx, wrap_bitmap_get_bpp, "bitmap_get_bpp", 1));
  JS_SetPropertyStr(ctx, global_obj, "bitmap_t_get_prop_w",
                    JS_NewCFunction(ctx, wrap_bitmap_t_get_prop_w, "bitmap_t_get_prop_w", 1));
  JS_SetPropertyStr(ctx, global_obj, "bitmap_t_get_prop_h",
                    JS_NewCFunction(ctx, wrap_bitmap_t_get_prop_h, "bitmap_t_get_prop_h", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "bitmap_t_get_prop_line_length",
      JS_NewCFunction(ctx, wrap_bitmap_t_get_prop_line_length, "bitmap_t_get_prop_line_length", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "bitmap_t_get_prop_flags",
      JS_NewCFunction(ctx, wrap_bitmap_t_get_prop_flags, "bitmap_t_get_prop_flags", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "bitmap_t_get_prop_format",
      JS_NewCFunction(ctx, wrap_bitmap_t_get_prop_format, "bitmap_t_get_prop_format", 1));
  JS_SetPropertyStr(ctx, global_obj, "bitmap_t_get_prop_name",
                    JS_NewCFunction(ctx, wrap_bitmap_t_get_prop_name, "bitmap_t_get_prop_name", 1));

  return RET_OK;
}

JSValue get_IMAGE_DRAW_DEFAULT(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_DEFAULT);
}

JSValue get_IMAGE_DRAW_CENTER(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_CENTER);
}

JSValue get_IMAGE_DRAW_ICON(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_ICON);
}

JSValue get_IMAGE_DRAW_SCALE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_SCALE);
}

JSValue get_IMAGE_DRAW_SCALE_AUTO(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_SCALE_AUTO);
}

JSValue get_IMAGE_DRAW_SCALE_DOWN(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_SCALE_DOWN);
}

JSValue get_IMAGE_DRAW_SCALE_W(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_SCALE_W);
}

JSValue get_IMAGE_DRAW_SCALE_H(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_SCALE_H);
}

JSValue get_IMAGE_DRAW_REPEAT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_REPEAT);
}

JSValue get_IMAGE_DRAW_REPEAT_X(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_REPEAT_X);
}

JSValue get_IMAGE_DRAW_REPEAT_Y(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_REPEAT_Y);
}

JSValue get_IMAGE_DRAW_PATCH9(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_PATCH9);
}

JSValue get_IMAGE_DRAW_PATCH3_X(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_PATCH3_X);
}

JSValue get_IMAGE_DRAW_PATCH3_Y(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_PATCH3_Y);
}

JSValue get_IMAGE_DRAW_PATCH3_X_SCALE_Y(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_PATCH3_X_SCALE_Y);
}

JSValue get_IMAGE_DRAW_PATCH3_Y_SCALE_X(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  return JS_NewInt32(ctx, IMAGE_DRAW_PATCH3_Y_SCALE_X);
}

ret_t image_draw_type_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_DEFAULT",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_DEFAULT, "IMAGE_DRAW_DEFAULT", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_CENTER",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_CENTER, "IMAGE_DRAW_CENTER", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_ICON",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_ICON, "IMAGE_DRAW_ICON", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_SCALE",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_SCALE, "IMAGE_DRAW_SCALE", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_SCALE_AUTO",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_SCALE_AUTO, "IMAGE_DRAW_SCALE_AUTO", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_SCALE_DOWN",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_SCALE_DOWN, "IMAGE_DRAW_SCALE_DOWN", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_SCALE_W",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_SCALE_W, "IMAGE_DRAW_SCALE_W", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_SCALE_H",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_SCALE_H, "IMAGE_DRAW_SCALE_H", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_REPEAT",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_REPEAT, "IMAGE_DRAW_REPEAT", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_REPEAT_X",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_REPEAT_X, "IMAGE_DRAW_REPEAT_X", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_REPEAT_Y",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_REPEAT_Y, "IMAGE_DRAW_REPEAT_Y", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_PATCH9",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_PATCH9, "IMAGE_DRAW_PATCH9", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_PATCH3_X",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_PATCH3_X, "IMAGE_DRAW_PATCH3_X", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_PATCH3_Y",
                    JS_NewCFunction(ctx, get_IMAGE_DRAW_PATCH3_Y, "IMAGE_DRAW_PATCH3_Y", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "IMAGE_DRAW_PATCH3_X_SCALE_Y",
      JS_NewCFunction(ctx, get_IMAGE_DRAW_PATCH3_X_SCALE_Y, "IMAGE_DRAW_PATCH3_X_SCALE_Y", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "IMAGE_DRAW_PATCH3_Y_SCALE_X",
      JS_NewCFunction(ctx, get_IMAGE_DRAW_PATCH3_Y_SCALE_X, "IMAGE_DRAW_PATCH3_Y_SCALE_X", 1));

  return RET_OK;
}

JSValue wrap_canvas_get_width(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    wh_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    ret = (wh_t)canvas_get_width(c);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_get_height(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    wh_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    ret = (wh_t)canvas_get_height(c);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_get_clip_rect(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    rect_t* r = (rect_t*)quickjs_get_pointer(ctx, argv[1], "rect_t*");
    ret = (ret_t)canvas_get_clip_rect(c, r);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_set_clip_rect(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    const rect_t* r = (const rect_t*)quickjs_get_pointer(ctx, argv[1], "const rect_t*");
    ret = (ret_t)canvas_set_clip_rect(c, r);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_set_clip_rect_ex(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    const rect_t* r = (const rect_t*)quickjs_get_pointer(ctx, argv[1], "const rect_t*");
    bool_t translate = (bool_t)quickjs_get_boolean_value(ctx, argv[2]);
    ret = (ret_t)canvas_set_clip_rect_ex(c, r, translate);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_set_fill_color_str(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    const char* color = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)canvas_set_fill_color_str(c, color);
    JS_FreeCString(ctx, color);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_set_text_color_str(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    const char* color = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)canvas_set_text_color_str(c, color);
    JS_FreeCString(ctx, color);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_set_stroke_color_str(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    const char* color = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)canvas_set_stroke_color_str(c, color);
    JS_FreeCString(ctx, color);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_set_global_alpha(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    uint8_t alpha = (uint8_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)canvas_set_global_alpha(c, alpha);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_translate(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    xy_t dx = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t dy = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)canvas_translate(c, dx, dy);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_untranslate(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    xy_t dx = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t dy = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)canvas_untranslate(c, dx, dy);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_draw_vline(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    ret = (ret_t)canvas_draw_vline(c, x, y, h);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_draw_hline(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    ret = (ret_t)canvas_draw_hline(c, x, y, w);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_fill_rect(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (ret_t)canvas_fill_rect(c, x, y, w, h);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_stroke_rect(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (ret_t)canvas_stroke_rect(c, x, y, w, h);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_set_font(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    font_size_t size = (font_size_t)quickjs_get_number_value(ctx, argv[2]);
    ret = (ret_t)canvas_set_font(c, name, size);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_measure_utf8(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    float_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    const char* str = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (float_t)canvas_measure_utf8(c, str);
    JS_FreeCString(ctx, str);

    jret = JS_NewFloat64(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_draw_utf8(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    const char* str = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[3]);
    ret = (ret_t)canvas_draw_utf8(c, str, x, y);
    JS_FreeCString(ctx, str);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_draw_utf8_in_rect(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    const char* str = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    const rect_t* r = (const rect_t*)quickjs_get_pointer(ctx, argv[2], "const rect_t*");
    ret = (ret_t)canvas_draw_utf8_in_rect(c, str, r);
    JS_FreeCString(ctx, str);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_draw_icon(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    bitmap_t* img = (bitmap_t*)quickjs_get_pointer(ctx, argv[1], "bitmap_t*");
    xy_t cx = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    xy_t cy = (xy_t)quickjs_get_int_value(ctx, argv[3]);
    ret = (ret_t)canvas_draw_icon(c, img, cx, cy);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_draw_image(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    bitmap_t* img = (bitmap_t*)quickjs_get_pointer(ctx, argv[1], "bitmap_t*");
    rect_t* src = (rect_t*)quickjs_get_pointer(ctx, argv[2], "rect_t*");
    rect_t* dst = (rect_t*)quickjs_get_pointer(ctx, argv[3], "rect_t*");
    ret = (ret_t)canvas_draw_image(c, img, src, dst);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_get_vgcanvas(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    vgcanvas_t* ret = NULL;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    ret = (vgcanvas_t*)canvas_get_vgcanvas(c);

    jret = quickjs_create_pointer(ctx, ret, "vgcanvas_t*");
  }
  return jret;
}

JSValue wrap_canvas_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    canvas_t* ret = NULL;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    ret = (canvas_t*)canvas_cast(c);

    jret = quickjs_create_pointer(ctx, ret, "canvas_t*");
  }
  return jret;
}

JSValue wrap_canvas_reset(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    canvas_t* c = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");
    ret = (ret_t)canvas_reset(c);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_canvas_t_get_prop_ox(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  canvas_t* obj = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");

  jret = JS_NewInt32(ctx, obj->ox);
  return jret;
}

JSValue wrap_canvas_t_get_prop_oy(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  canvas_t* obj = (canvas_t*)quickjs_get_pointer(ctx, argv[0], "canvas_t*");

  jret = JS_NewInt32(ctx, obj->oy);
  return jret;
}

ret_t canvas_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "canvas_get_width",
                    JS_NewCFunction(ctx, wrap_canvas_get_width, "canvas_get_width", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_get_height",
                    JS_NewCFunction(ctx, wrap_canvas_get_height, "canvas_get_height", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_get_clip_rect",
                    JS_NewCFunction(ctx, wrap_canvas_get_clip_rect, "canvas_get_clip_rect", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_set_clip_rect",
                    JS_NewCFunction(ctx, wrap_canvas_set_clip_rect, "canvas_set_clip_rect", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "canvas_set_clip_rect_ex",
      JS_NewCFunction(ctx, wrap_canvas_set_clip_rect_ex, "canvas_set_clip_rect_ex", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "canvas_set_fill_color_str",
      JS_NewCFunction(ctx, wrap_canvas_set_fill_color_str, "canvas_set_fill_color_str", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "canvas_set_text_color_str",
      JS_NewCFunction(ctx, wrap_canvas_set_text_color_str, "canvas_set_text_color_str", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "canvas_set_stroke_color_str",
      JS_NewCFunction(ctx, wrap_canvas_set_stroke_color_str, "canvas_set_stroke_color_str", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "canvas_set_global_alpha",
      JS_NewCFunction(ctx, wrap_canvas_set_global_alpha, "canvas_set_global_alpha", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_translate",
                    JS_NewCFunction(ctx, wrap_canvas_translate, "canvas_translate", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_untranslate",
                    JS_NewCFunction(ctx, wrap_canvas_untranslate, "canvas_untranslate", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_draw_vline",
                    JS_NewCFunction(ctx, wrap_canvas_draw_vline, "canvas_draw_vline", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_draw_hline",
                    JS_NewCFunction(ctx, wrap_canvas_draw_hline, "canvas_draw_hline", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_fill_rect",
                    JS_NewCFunction(ctx, wrap_canvas_fill_rect, "canvas_fill_rect", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_stroke_rect",
                    JS_NewCFunction(ctx, wrap_canvas_stroke_rect, "canvas_stroke_rect", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_set_font",
                    JS_NewCFunction(ctx, wrap_canvas_set_font, "canvas_set_font", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_measure_utf8",
                    JS_NewCFunction(ctx, wrap_canvas_measure_utf8, "canvas_measure_utf8", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_draw_utf8",
                    JS_NewCFunction(ctx, wrap_canvas_draw_utf8, "canvas_draw_utf8", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "canvas_draw_utf8_in_rect",
      JS_NewCFunction(ctx, wrap_canvas_draw_utf8_in_rect, "canvas_draw_utf8_in_rect", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_draw_icon",
                    JS_NewCFunction(ctx, wrap_canvas_draw_icon, "canvas_draw_icon", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_draw_image",
                    JS_NewCFunction(ctx, wrap_canvas_draw_image, "canvas_draw_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_get_vgcanvas",
                    JS_NewCFunction(ctx, wrap_canvas_get_vgcanvas, "canvas_get_vgcanvas", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_cast",
                    JS_NewCFunction(ctx, wrap_canvas_cast, "canvas_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_reset",
                    JS_NewCFunction(ctx, wrap_canvas_reset, "canvas_reset", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_t_get_prop_ox",
                    JS_NewCFunction(ctx, wrap_canvas_t_get_prop_ox, "canvas_t_get_prop_ox", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_t_get_prop_oy",
                    JS_NewCFunction(ctx, wrap_canvas_t_get_prop_oy, "canvas_t_get_prop_oy", 1));

  return RET_OK;
}

JSValue get_CLIP_BOARD_DATA_TYPE_NONE(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  return JS_NewInt32(ctx, CLIP_BOARD_DATA_TYPE_NONE);
}

JSValue get_CLIP_BOARD_DATA_TYPE_TEXT(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  return JS_NewInt32(ctx, CLIP_BOARD_DATA_TYPE_TEXT);
}

ret_t clip_board_data_type_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(
      ctx, global_obj, "CLIP_BOARD_DATA_TYPE_NONE",
      JS_NewCFunction(ctx, get_CLIP_BOARD_DATA_TYPE_NONE, "CLIP_BOARD_DATA_TYPE_NONE", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "CLIP_BOARD_DATA_TYPE_TEXT",
      JS_NewCFunction(ctx, get_CLIP_BOARD_DATA_TYPE_TEXT, "CLIP_BOARD_DATA_TYPE_TEXT", 1));

  return RET_OK;
}

JSValue wrap_clip_board_set_text(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    const char* text = (const char*)quickjs_get_utf8_string(ctx, argv[0]);
    ret = (ret_t)clip_board_set_text(text);
    JS_FreeCString(ctx, text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_clip_board_get_text(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    const char* ret = NULL;
    ret = (const char*)clip_board_get_text();

    jret = quickjs_create_string(ctx, ret);
  }
  return jret;
}

ret_t clip_board_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "clip_board_set_text",
                    JS_NewCFunction(ctx, wrap_clip_board_set_text, "clip_board_set_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "clip_board_get_text",
                    JS_NewCFunction(ctx, wrap_clip_board_get_text, "clip_board_get_text", 1));

  return RET_OK;
}

JSValue get_EVT_POINTER_DOWN(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_POINTER_DOWN);
}

JSValue get_EVT_POINTER_DOWN_BEFORE_CHILDREN(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_POINTER_DOWN_BEFORE_CHILDREN);
}

JSValue get_EVT_POINTER_MOVE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_POINTER_MOVE);
}

JSValue get_EVT_POINTER_MOVE_BEFORE_CHILDREN(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_POINTER_MOVE_BEFORE_CHILDREN);
}

JSValue get_EVT_POINTER_UP(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_POINTER_UP);
}

JSValue get_EVT_POINTER_UP_BEFORE_CHILDREN(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_POINTER_UP_BEFORE_CHILDREN);
}

JSValue get_EVT_WHEEL(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_WHEEL);
}

JSValue get_EVT_POINTER_DOWN_ABORT(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_POINTER_DOWN_ABORT);
}

JSValue get_EVT_CONTEXT_MENU(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_CONTEXT_MENU);
}

JSValue get_EVT_POINTER_ENTER(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_POINTER_ENTER);
}

JSValue get_EVT_POINTER_LEAVE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_POINTER_LEAVE);
}

JSValue get_EVT_LONG_PRESS(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_LONG_PRESS);
}

JSValue get_EVT_CLICK(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_CLICK);
}

JSValue get_EVT_FOCUS(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_FOCUS);
}

JSValue get_EVT_BLUR(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_BLUR);
}

JSValue get_EVT_KEY_DOWN(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_KEY_DOWN);
}

JSValue get_EVT_KEY_DOWN_BEFORE_CHILDREN(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_KEY_DOWN_BEFORE_CHILDREN);
}

JSValue get_EVT_KEY_REPEAT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_KEY_REPEAT);
}

JSValue get_EVT_KEY_UP(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_KEY_UP);
}

JSValue get_EVT_KEY_UP_BEFORE_CHILDREN(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_KEY_UP_BEFORE_CHILDREN);
}

JSValue get_EVT_WILL_MOVE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_WILL_MOVE);
}

JSValue get_EVT_MOVE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_MOVE);
}

JSValue get_EVT_WILL_RESIZE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_WILL_RESIZE);
}

JSValue get_EVT_RESIZE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_RESIZE);
}

JSValue get_EVT_WILL_MOVE_RESIZE(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_WILL_MOVE_RESIZE);
}

JSValue get_EVT_MOVE_RESIZE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_MOVE_RESIZE);
}

JSValue get_EVT_VALUE_WILL_CHANGE(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_VALUE_WILL_CHANGE);
}

JSValue get_EVT_VALUE_CHANGED(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_VALUE_CHANGED);
}

JSValue get_EVT_VALUE_CHANGING(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_VALUE_CHANGING);
}

JSValue get_EVT_PAINT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_PAINT);
}

JSValue get_EVT_BEFORE_PAINT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_BEFORE_PAINT);
}

JSValue get_EVT_AFTER_PAINT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_AFTER_PAINT);
}

JSValue get_EVT_PAINT_DONE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_PAINT_DONE);
}

JSValue get_EVT_LOCALE_CHANGED(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_LOCALE_CHANGED);
}

JSValue get_EVT_ANIM_START(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_ANIM_START);
}

JSValue get_EVT_ANIM_STOP(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_ANIM_STOP);
}

JSValue get_EVT_ANIM_PAUSE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_ANIM_PAUSE);
}

JSValue get_EVT_ANIM_ONCE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_ANIM_ONCE);
}

JSValue get_EVT_ANIM_END(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_ANIM_END);
}

JSValue get_EVT_WINDOW_LOAD(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_WINDOW_LOAD);
}

JSValue get_EVT_WINDOW_WILL_OPEN(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_WINDOW_WILL_OPEN);
}

JSValue get_EVT_WINDOW_OPEN(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_WINDOW_OPEN);
}

JSValue get_EVT_WINDOW_TO_BACKGROUND(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_WINDOW_TO_BACKGROUND);
}

JSValue get_EVT_WINDOW_TO_FOREGROUND(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_WINDOW_TO_FOREGROUND);
}

JSValue get_EVT_WINDOW_CLOSE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_WINDOW_CLOSE);
}

JSValue get_EVT_REQUEST_CLOSE_WINDOW(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_REQUEST_CLOSE_WINDOW);
}

JSValue get_EVT_TOP_WINDOW_CHANGED(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_TOP_WINDOW_CHANGED);
}

JSValue get_EVT_IM_COMMIT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_IM_COMMIT);
}

JSValue get_EVT_IM_SHOW_CANDIDATES(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_IM_SHOW_CANDIDATES);
}

JSValue get_EVT_IM_ACTION(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_IM_ACTION);
}

JSValue get_EVT_IM_ACTION_INFO(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_IM_ACTION_INFO);
}

JSValue get_EVT_DRAG_START(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_DRAG_START);
}

JSValue get_EVT_DRAG(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_DRAG);
}

JSValue get_EVT_DRAG_END(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_DRAG_END);
}

JSValue get_EVT_SCREEN_SAVER(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_SCREEN_SAVER);
}

JSValue get_EVT_LOW_MEMORY(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_LOW_MEMORY);
}

JSValue get_EVT_OUT_OF_MEMORY(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_OUT_OF_MEMORY);
}

JSValue get_EVT_ORIENTATION_WILL_CHANGED(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_ORIENTATION_WILL_CHANGED);
}

JSValue get_EVT_ORIENTATION_CHANGED(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_ORIENTATION_CHANGED);
}

JSValue get_EVT_WIDGET_CREATED(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_WIDGET_CREATED);
}

JSValue get_EVT_REQ_START(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_REQ_START);
}

JSValue get_EVT_USER_START(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_USER_START);
}

ret_t event_type_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_DOWN",
                    JS_NewCFunction(ctx, get_EVT_POINTER_DOWN, "EVT_POINTER_DOWN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_DOWN_BEFORE_CHILDREN",
                    JS_NewCFunction(ctx, get_EVT_POINTER_DOWN_BEFORE_CHILDREN,
                                    "EVT_POINTER_DOWN_BEFORE_CHILDREN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_MOVE",
                    JS_NewCFunction(ctx, get_EVT_POINTER_MOVE, "EVT_POINTER_MOVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_MOVE_BEFORE_CHILDREN",
                    JS_NewCFunction(ctx, get_EVT_POINTER_MOVE_BEFORE_CHILDREN,
                                    "EVT_POINTER_MOVE_BEFORE_CHILDREN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_UP",
                    JS_NewCFunction(ctx, get_EVT_POINTER_UP, "EVT_POINTER_UP", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_UP_BEFORE_CHILDREN",
                    JS_NewCFunction(ctx, get_EVT_POINTER_UP_BEFORE_CHILDREN,
                                    "EVT_POINTER_UP_BEFORE_CHILDREN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WHEEL",
                    JS_NewCFunction(ctx, get_EVT_WHEEL, "EVT_WHEEL", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_DOWN_ABORT",
                    JS_NewCFunction(ctx, get_EVT_POINTER_DOWN_ABORT, "EVT_POINTER_DOWN_ABORT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_CONTEXT_MENU",
                    JS_NewCFunction(ctx, get_EVT_CONTEXT_MENU, "EVT_CONTEXT_MENU", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_ENTER",
                    JS_NewCFunction(ctx, get_EVT_POINTER_ENTER, "EVT_POINTER_ENTER", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_LEAVE",
                    JS_NewCFunction(ctx, get_EVT_POINTER_LEAVE, "EVT_POINTER_LEAVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_LONG_PRESS",
                    JS_NewCFunction(ctx, get_EVT_LONG_PRESS, "EVT_LONG_PRESS", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_CLICK",
                    JS_NewCFunction(ctx, get_EVT_CLICK, "EVT_CLICK", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_FOCUS",
                    JS_NewCFunction(ctx, get_EVT_FOCUS, "EVT_FOCUS", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_BLUR", JS_NewCFunction(ctx, get_EVT_BLUR, "EVT_BLUR", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_KEY_DOWN",
                    JS_NewCFunction(ctx, get_EVT_KEY_DOWN, "EVT_KEY_DOWN", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "EVT_KEY_DOWN_BEFORE_CHILDREN",
      JS_NewCFunction(ctx, get_EVT_KEY_DOWN_BEFORE_CHILDREN, "EVT_KEY_DOWN_BEFORE_CHILDREN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_KEY_REPEAT",
                    JS_NewCFunction(ctx, get_EVT_KEY_REPEAT, "EVT_KEY_REPEAT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_KEY_UP",
                    JS_NewCFunction(ctx, get_EVT_KEY_UP, "EVT_KEY_UP", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "EVT_KEY_UP_BEFORE_CHILDREN",
      JS_NewCFunction(ctx, get_EVT_KEY_UP_BEFORE_CHILDREN, "EVT_KEY_UP_BEFORE_CHILDREN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WILL_MOVE",
                    JS_NewCFunction(ctx, get_EVT_WILL_MOVE, "EVT_WILL_MOVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_MOVE", JS_NewCFunction(ctx, get_EVT_MOVE, "EVT_MOVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WILL_RESIZE",
                    JS_NewCFunction(ctx, get_EVT_WILL_RESIZE, "EVT_WILL_RESIZE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_RESIZE",
                    JS_NewCFunction(ctx, get_EVT_RESIZE, "EVT_RESIZE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WILL_MOVE_RESIZE",
                    JS_NewCFunction(ctx, get_EVT_WILL_MOVE_RESIZE, "EVT_WILL_MOVE_RESIZE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_MOVE_RESIZE",
                    JS_NewCFunction(ctx, get_EVT_MOVE_RESIZE, "EVT_MOVE_RESIZE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_VALUE_WILL_CHANGE",
                    JS_NewCFunction(ctx, get_EVT_VALUE_WILL_CHANGE, "EVT_VALUE_WILL_CHANGE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_VALUE_CHANGED",
                    JS_NewCFunction(ctx, get_EVT_VALUE_CHANGED, "EVT_VALUE_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_VALUE_CHANGING",
                    JS_NewCFunction(ctx, get_EVT_VALUE_CHANGING, "EVT_VALUE_CHANGING", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_PAINT",
                    JS_NewCFunction(ctx, get_EVT_PAINT, "EVT_PAINT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_BEFORE_PAINT",
                    JS_NewCFunction(ctx, get_EVT_BEFORE_PAINT, "EVT_BEFORE_PAINT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_AFTER_PAINT",
                    JS_NewCFunction(ctx, get_EVT_AFTER_PAINT, "EVT_AFTER_PAINT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_PAINT_DONE",
                    JS_NewCFunction(ctx, get_EVT_PAINT_DONE, "EVT_PAINT_DONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_LOCALE_CHANGED",
                    JS_NewCFunction(ctx, get_EVT_LOCALE_CHANGED, "EVT_LOCALE_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_ANIM_START",
                    JS_NewCFunction(ctx, get_EVT_ANIM_START, "EVT_ANIM_START", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_ANIM_STOP",
                    JS_NewCFunction(ctx, get_EVT_ANIM_STOP, "EVT_ANIM_STOP", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_ANIM_PAUSE",
                    JS_NewCFunction(ctx, get_EVT_ANIM_PAUSE, "EVT_ANIM_PAUSE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_ANIM_ONCE",
                    JS_NewCFunction(ctx, get_EVT_ANIM_ONCE, "EVT_ANIM_ONCE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_ANIM_END",
                    JS_NewCFunction(ctx, get_EVT_ANIM_END, "EVT_ANIM_END", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WINDOW_LOAD",
                    JS_NewCFunction(ctx, get_EVT_WINDOW_LOAD, "EVT_WINDOW_LOAD", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WINDOW_WILL_OPEN",
                    JS_NewCFunction(ctx, get_EVT_WINDOW_WILL_OPEN, "EVT_WINDOW_WILL_OPEN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WINDOW_OPEN",
                    JS_NewCFunction(ctx, get_EVT_WINDOW_OPEN, "EVT_WINDOW_OPEN", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "EVT_WINDOW_TO_BACKGROUND",
      JS_NewCFunction(ctx, get_EVT_WINDOW_TO_BACKGROUND, "EVT_WINDOW_TO_BACKGROUND", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "EVT_WINDOW_TO_FOREGROUND",
      JS_NewCFunction(ctx, get_EVT_WINDOW_TO_FOREGROUND, "EVT_WINDOW_TO_FOREGROUND", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WINDOW_CLOSE",
                    JS_NewCFunction(ctx, get_EVT_WINDOW_CLOSE, "EVT_WINDOW_CLOSE", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "EVT_REQUEST_CLOSE_WINDOW",
      JS_NewCFunction(ctx, get_EVT_REQUEST_CLOSE_WINDOW, "EVT_REQUEST_CLOSE_WINDOW", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_TOP_WINDOW_CHANGED",
                    JS_NewCFunction(ctx, get_EVT_TOP_WINDOW_CHANGED, "EVT_TOP_WINDOW_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_IM_COMMIT",
                    JS_NewCFunction(ctx, get_EVT_IM_COMMIT, "EVT_IM_COMMIT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_IM_SHOW_CANDIDATES",
                    JS_NewCFunction(ctx, get_EVT_IM_SHOW_CANDIDATES, "EVT_IM_SHOW_CANDIDATES", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_IM_ACTION",
                    JS_NewCFunction(ctx, get_EVT_IM_ACTION, "EVT_IM_ACTION", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_IM_ACTION_INFO",
                    JS_NewCFunction(ctx, get_EVT_IM_ACTION_INFO, "EVT_IM_ACTION_INFO", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_DRAG_START",
                    JS_NewCFunction(ctx, get_EVT_DRAG_START, "EVT_DRAG_START", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_DRAG", JS_NewCFunction(ctx, get_EVT_DRAG, "EVT_DRAG", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_DRAG_END",
                    JS_NewCFunction(ctx, get_EVT_DRAG_END, "EVT_DRAG_END", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_SCREEN_SAVER",
                    JS_NewCFunction(ctx, get_EVT_SCREEN_SAVER, "EVT_SCREEN_SAVER", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_LOW_MEMORY",
                    JS_NewCFunction(ctx, get_EVT_LOW_MEMORY, "EVT_LOW_MEMORY", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_OUT_OF_MEMORY",
                    JS_NewCFunction(ctx, get_EVT_OUT_OF_MEMORY, "EVT_OUT_OF_MEMORY", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "EVT_ORIENTATION_WILL_CHANGED",
      JS_NewCFunction(ctx, get_EVT_ORIENTATION_WILL_CHANGED, "EVT_ORIENTATION_WILL_CHANGED", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "EVT_ORIENTATION_CHANGED",
      JS_NewCFunction(ctx, get_EVT_ORIENTATION_CHANGED, "EVT_ORIENTATION_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WIDGET_CREATED",
                    JS_NewCFunction(ctx, get_EVT_WIDGET_CREATED, "EVT_WIDGET_CREATED", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_REQ_START",
                    JS_NewCFunction(ctx, get_EVT_REQ_START, "EVT_REQ_START", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_USER_START",
                    JS_NewCFunction(ctx, get_EVT_USER_START, "EVT_USER_START", 1));

  return RET_OK;
}

JSValue wrap_font_manager_unload_font(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    font_manager_t* fm = (font_manager_t*)quickjs_get_pointer(ctx, argv[0], "font_manager_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    font_size_t size = (font_size_t)quickjs_get_number_value(ctx, argv[2]);
    ret = (ret_t)font_manager_unload_font(fm, name, size);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

ret_t font_manager_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(
      ctx, global_obj, "font_manager_unload_font",
      JS_NewCFunction(ctx, wrap_font_manager_unload_font, "font_manager_unload_font", 1));

  return RET_OK;
}

JSValue get_GLYPH_FMT_ALPHA(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, GLYPH_FMT_ALPHA);
}

JSValue get_GLYPH_FMT_MONO(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, GLYPH_FMT_MONO);
}

JSValue get_GLYPH_FMT_RGBA(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, GLYPH_FMT_RGBA);
}

ret_t glyph_format_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "GLYPH_FMT_ALPHA",
                    JS_NewCFunction(ctx, get_GLYPH_FMT_ALPHA, "GLYPH_FMT_ALPHA", 1));
  JS_SetPropertyStr(ctx, global_obj, "GLYPH_FMT_MONO",
                    JS_NewCFunction(ctx, get_GLYPH_FMT_MONO, "GLYPH_FMT_MONO", 1));
  JS_SetPropertyStr(ctx, global_obj, "GLYPH_FMT_RGBA",
                    JS_NewCFunction(ctx, get_GLYPH_FMT_RGBA, "GLYPH_FMT_RGBA", 1));

  return RET_OK;
}

JSValue wrap_idle_remove(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    uint32_t idle_id = (uint32_t)quickjs_get_int_value(ctx, argv[0]);
    ret = (ret_t)idle_remove(idle_id);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

ret_t idle_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "idle_add",
                    JS_NewCFunction(ctx, wrap_idle_add, "idle_add", 1));
  JS_SetPropertyStr(ctx, global_obj, "idle_remove",
                    JS_NewCFunction(ctx, wrap_idle_remove, "idle_remove", 1));

  return RET_OK;
}

JSValue wrap_image_manager(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    image_manager_t* ret = NULL;
    ret = (image_manager_t*)image_manager();

    jret = quickjs_create_pointer(ctx, ret, "image_manager_t*");
  }
  return jret;
}

JSValue wrap_image_manager_get_bitmap(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    image_manager_t* imm = (image_manager_t*)quickjs_get_pointer(ctx, argv[0], "image_manager_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    bitmap_t* image = (bitmap_t*)quickjs_get_pointer(ctx, argv[2], "bitmap_t*");
    ret = (ret_t)image_manager_get_bitmap(imm, name, image);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

ret_t image_manager_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "image_manager",
                    JS_NewCFunction(ctx, wrap_image_manager, "image_manager", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_manager_get_bitmap",
      JS_NewCFunction(ctx, wrap_image_manager_get_bitmap, "image_manager_get_bitmap", 1));

  return RET_OK;
}

JSValue get_INPUT_TEXT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, INPUT_TEXT);
}

JSValue get_INPUT_INT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, INPUT_INT);
}

JSValue get_INPUT_UINT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, INPUT_UINT);
}

JSValue get_INPUT_HEX(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, INPUT_HEX);
}

JSValue get_INPUT_FLOAT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, INPUT_FLOAT);
}

JSValue get_INPUT_UFLOAT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, INPUT_UFLOAT);
}

JSValue get_INPUT_EMAIL(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, INPUT_EMAIL);
}

JSValue get_INPUT_PASSWORD(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, INPUT_PASSWORD);
}

JSValue get_INPUT_PHONE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, INPUT_PHONE);
}

JSValue get_INPUT_CUSTOM(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, INPUT_CUSTOM);
}

ret_t input_type_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "INPUT_TEXT",
                    JS_NewCFunction(ctx, get_INPUT_TEXT, "INPUT_TEXT", 1));
  JS_SetPropertyStr(ctx, global_obj, "INPUT_INT",
                    JS_NewCFunction(ctx, get_INPUT_INT, "INPUT_INT", 1));
  JS_SetPropertyStr(ctx, global_obj, "INPUT_UINT",
                    JS_NewCFunction(ctx, get_INPUT_UINT, "INPUT_UINT", 1));
  JS_SetPropertyStr(ctx, global_obj, "INPUT_HEX",
                    JS_NewCFunction(ctx, get_INPUT_HEX, "INPUT_HEX", 1));
  JS_SetPropertyStr(ctx, global_obj, "INPUT_FLOAT",
                    JS_NewCFunction(ctx, get_INPUT_FLOAT, "INPUT_FLOAT", 1));
  JS_SetPropertyStr(ctx, global_obj, "INPUT_UFLOAT",
                    JS_NewCFunction(ctx, get_INPUT_UFLOAT, "INPUT_UFLOAT", 1));
  JS_SetPropertyStr(ctx, global_obj, "INPUT_EMAIL",
                    JS_NewCFunction(ctx, get_INPUT_EMAIL, "INPUT_EMAIL", 1));
  JS_SetPropertyStr(ctx, global_obj, "INPUT_PASSWORD",
                    JS_NewCFunction(ctx, get_INPUT_PASSWORD, "INPUT_PASSWORD", 1));
  JS_SetPropertyStr(ctx, global_obj, "INPUT_PHONE",
                    JS_NewCFunction(ctx, get_INPUT_PHONE, "INPUT_PHONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "INPUT_CUSTOM",
                    JS_NewCFunction(ctx, get_INPUT_CUSTOM, "INPUT_CUSTOM", 1));

  return RET_OK;
}

JSValue wrap_input_method_commit_text(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    input_method_t* im = (input_method_t*)quickjs_get_pointer(ctx, argv[0], "input_method_t*");
    char* text = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)input_method_commit_text(im, text);
    JS_FreeCString(ctx, text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_input_method_dispatch_key(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    input_method_t* im = (input_method_t*)quickjs_get_pointer(ctx, argv[0], "input_method_t*");
    uint32_t key = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)input_method_dispatch_key(im, key);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_input_method(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    input_method_t* ret = NULL;
    ret = (input_method_t*)input_method();

    jret = quickjs_create_pointer(ctx, ret, "input_method_t*");
  }
  return jret;
}

ret_t input_method_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(
      ctx, global_obj, "input_method_commit_text",
      JS_NewCFunction(ctx, wrap_input_method_commit_text, "input_method_commit_text", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "input_method_dispatch_key",
      JS_NewCFunction(ctx, wrap_input_method_dispatch_key, "input_method_dispatch_key", 1));
  JS_SetPropertyStr(ctx, global_obj, "input_method",
                    JS_NewCFunction(ctx, wrap_input_method, "input_method", 1));

  return RET_OK;
}

JSValue get_TK_KEY_RETURN(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_RETURN);
}

JSValue get_TK_KEY_ESCAPE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_ESCAPE);
}

JSValue get_TK_KEY_BACKSPACE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_BACKSPACE);
}

JSValue get_TK_KEY_TAB(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_TAB);
}

JSValue get_TK_KEY_SPACE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_SPACE);
}

JSValue get_TK_KEY_EXCLAIM(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_EXCLAIM);
}

JSValue get_TK_KEY_QUOTEDBL(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_QUOTEDBL);
}

JSValue get_TK_KEY_HASH(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_HASH);
}

JSValue get_TK_KEY_PERCENT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_PERCENT);
}

JSValue get_TK_KEY_DOLLAR(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_DOLLAR);
}

JSValue get_TK_KEY_AMPERSAND(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_AMPERSAND);
}

JSValue get_TK_KEY_QUOTE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_QUOTE);
}

JSValue get_TK_KEY_LEFTPAREN(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_LEFTPAREN);
}

JSValue get_TK_KEY_RIGHTPAREN(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_RIGHTPAREN);
}

JSValue get_TK_KEY_ASTERISK(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_ASTERISK);
}

JSValue get_TK_KEY_PLUS(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_PLUS);
}

JSValue get_TK_KEY_COMMA(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_COMMA);
}

JSValue get_TK_KEY_MINUS(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_MINUS);
}

JSValue get_TK_KEY_PERIOD(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_PERIOD);
}

JSValue get_TK_KEY_SLASH(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_SLASH);
}

JSValue get_TK_KEY_0(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_0);
}

JSValue get_TK_KEY_1(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_1);
}

JSValue get_TK_KEY_2(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_2);
}

JSValue get_TK_KEY_3(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_3);
}

JSValue get_TK_KEY_4(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_4);
}

JSValue get_TK_KEY_5(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_5);
}

JSValue get_TK_KEY_6(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_6);
}

JSValue get_TK_KEY_7(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_7);
}

JSValue get_TK_KEY_8(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_8);
}

JSValue get_TK_KEY_9(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_9);
}

JSValue get_TK_KEY_COLON(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_COLON);
}

JSValue get_TK_KEY_SEMICOLON(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_SEMICOLON);
}

JSValue get_TK_KEY_LESS(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_LESS);
}

JSValue get_TK_KEY_EQUAL(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_EQUAL);
}

JSValue get_TK_KEY_GREATER(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_GREATER);
}

JSValue get_TK_KEY_QUESTION(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_QUESTION);
}

JSValue get_TK_KEY_AT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_AT);
}

JSValue get_TK_KEY_LEFTBRACKET(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_LEFTBRACKET);
}

JSValue get_TK_KEY_BACKSLASH(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_BACKSLASH);
}

JSValue get_TK_KEY_RIGHTBRACKET(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_RIGHTBRACKET);
}

JSValue get_TK_KEY_CARET(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_CARET);
}

JSValue get_TK_KEY_UNDERSCORE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_UNDERSCORE);
}

JSValue get_TK_KEY_BACKQUOTE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_BACKQUOTE);
}

JSValue get_TK_KEY_a(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_a);
}

JSValue get_TK_KEY_b(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_b);
}

JSValue get_TK_KEY_c(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_c);
}

JSValue get_TK_KEY_d(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_d);
}

JSValue get_TK_KEY_e(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_e);
}

JSValue get_TK_KEY_f(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_f);
}

JSValue get_TK_KEY_g(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_g);
}

JSValue get_TK_KEY_h(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_h);
}

JSValue get_TK_KEY_i(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_i);
}

JSValue get_TK_KEY_j(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_j);
}

JSValue get_TK_KEY_k(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_k);
}

JSValue get_TK_KEY_l(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_l);
}

JSValue get_TK_KEY_m(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_m);
}

JSValue get_TK_KEY_n(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_n);
}

JSValue get_TK_KEY_o(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_o);
}

JSValue get_TK_KEY_p(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_p);
}

JSValue get_TK_KEY_q(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_q);
}

JSValue get_TK_KEY_r(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_r);
}

JSValue get_TK_KEY_s(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_s);
}

JSValue get_TK_KEY_t(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_t);
}

JSValue get_TK_KEY_u(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_u);
}

JSValue get_TK_KEY_v(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_v);
}

JSValue get_TK_KEY_w(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_w);
}

JSValue get_TK_KEY_x(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_x);
}

JSValue get_TK_KEY_y(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_y);
}

JSValue get_TK_KEY_z(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_z);
}

JSValue get_TK_KEY_A(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_A);
}

JSValue get_TK_KEY_B(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_B);
}

JSValue get_TK_KEY_C(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_C);
}

JSValue get_TK_KEY_D(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_D);
}

JSValue get_TK_KEY_E(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_E);
}

JSValue get_TK_KEY_F(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_F);
}

JSValue get_TK_KEY_G(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_G);
}

JSValue get_TK_KEY_H(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_H);
}

JSValue get_TK_KEY_I(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_I);
}

JSValue get_TK_KEY_J(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_J);
}

JSValue get_TK_KEY_K(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_K);
}

JSValue get_TK_KEY_L(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_L);
}

JSValue get_TK_KEY_M(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_M);
}

JSValue get_TK_KEY_N(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_N);
}

JSValue get_TK_KEY_O(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_O);
}

JSValue get_TK_KEY_P(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_P);
}

JSValue get_TK_KEY_Q(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_Q);
}

JSValue get_TK_KEY_R(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_R);
}

JSValue get_TK_KEY_S(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_S);
}

JSValue get_TK_KEY_T(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_T);
}

JSValue get_TK_KEY_U(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_U);
}

JSValue get_TK_KEY_V(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_V);
}

JSValue get_TK_KEY_W(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_W);
}

JSValue get_TK_KEY_X(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_X);
}

JSValue get_TK_KEY_Y(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_Y);
}

JSValue get_TK_KEY_Z(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_Z);
}

JSValue get_TK_KEY_DOT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_DOT);
}

JSValue get_TK_KEY_DELETE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_DELETE);
}

JSValue get_TK_KEY_LEFTBRACE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_LEFTBRACE);
}

JSValue get_TK_KEY_RIGHTBRACE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, TK_KEY_RIGHTBRACE);
}

ret_t key_code_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_RETURN",
                    JS_NewCFunction(ctx, get_TK_KEY_RETURN, "TK_KEY_RETURN", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_ESCAPE",
                    JS_NewCFunction(ctx, get_TK_KEY_ESCAPE, "TK_KEY_ESCAPE", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_BACKSPACE",
                    JS_NewCFunction(ctx, get_TK_KEY_BACKSPACE, "TK_KEY_BACKSPACE", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_TAB",
                    JS_NewCFunction(ctx, get_TK_KEY_TAB, "TK_KEY_TAB", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_SPACE",
                    JS_NewCFunction(ctx, get_TK_KEY_SPACE, "TK_KEY_SPACE", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_EXCLAIM",
                    JS_NewCFunction(ctx, get_TK_KEY_EXCLAIM, "TK_KEY_EXCLAIM", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_QUOTEDBL",
                    JS_NewCFunction(ctx, get_TK_KEY_QUOTEDBL, "TK_KEY_QUOTEDBL", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_HASH",
                    JS_NewCFunction(ctx, get_TK_KEY_HASH, "TK_KEY_HASH", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_PERCENT",
                    JS_NewCFunction(ctx, get_TK_KEY_PERCENT, "TK_KEY_PERCENT", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_DOLLAR",
                    JS_NewCFunction(ctx, get_TK_KEY_DOLLAR, "TK_KEY_DOLLAR", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_AMPERSAND",
                    JS_NewCFunction(ctx, get_TK_KEY_AMPERSAND, "TK_KEY_AMPERSAND", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_QUOTE",
                    JS_NewCFunction(ctx, get_TK_KEY_QUOTE, "TK_KEY_QUOTE", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_LEFTPAREN",
                    JS_NewCFunction(ctx, get_TK_KEY_LEFTPAREN, "TK_KEY_LEFTPAREN", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_RIGHTPAREN",
                    JS_NewCFunction(ctx, get_TK_KEY_RIGHTPAREN, "TK_KEY_RIGHTPAREN", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_ASTERISK",
                    JS_NewCFunction(ctx, get_TK_KEY_ASTERISK, "TK_KEY_ASTERISK", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_PLUS",
                    JS_NewCFunction(ctx, get_TK_KEY_PLUS, "TK_KEY_PLUS", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_COMMA",
                    JS_NewCFunction(ctx, get_TK_KEY_COMMA, "TK_KEY_COMMA", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_MINUS",
                    JS_NewCFunction(ctx, get_TK_KEY_MINUS, "TK_KEY_MINUS", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_PERIOD",
                    JS_NewCFunction(ctx, get_TK_KEY_PERIOD, "TK_KEY_PERIOD", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_SLASH",
                    JS_NewCFunction(ctx, get_TK_KEY_SLASH, "TK_KEY_SLASH", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_0", JS_NewCFunction(ctx, get_TK_KEY_0, "TK_KEY_0", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_1", JS_NewCFunction(ctx, get_TK_KEY_1, "TK_KEY_1", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_2", JS_NewCFunction(ctx, get_TK_KEY_2, "TK_KEY_2", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_3", JS_NewCFunction(ctx, get_TK_KEY_3, "TK_KEY_3", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_4", JS_NewCFunction(ctx, get_TK_KEY_4, "TK_KEY_4", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_5", JS_NewCFunction(ctx, get_TK_KEY_5, "TK_KEY_5", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_6", JS_NewCFunction(ctx, get_TK_KEY_6, "TK_KEY_6", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_7", JS_NewCFunction(ctx, get_TK_KEY_7, "TK_KEY_7", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_8", JS_NewCFunction(ctx, get_TK_KEY_8, "TK_KEY_8", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_9", JS_NewCFunction(ctx, get_TK_KEY_9, "TK_KEY_9", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_COLON",
                    JS_NewCFunction(ctx, get_TK_KEY_COLON, "TK_KEY_COLON", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_SEMICOLON",
                    JS_NewCFunction(ctx, get_TK_KEY_SEMICOLON, "TK_KEY_SEMICOLON", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_LESS",
                    JS_NewCFunction(ctx, get_TK_KEY_LESS, "TK_KEY_LESS", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_EQUAL",
                    JS_NewCFunction(ctx, get_TK_KEY_EQUAL, "TK_KEY_EQUAL", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_GREATER",
                    JS_NewCFunction(ctx, get_TK_KEY_GREATER, "TK_KEY_GREATER", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_QUESTION",
                    JS_NewCFunction(ctx, get_TK_KEY_QUESTION, "TK_KEY_QUESTION", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_AT",
                    JS_NewCFunction(ctx, get_TK_KEY_AT, "TK_KEY_AT", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_LEFTBRACKET",
                    JS_NewCFunction(ctx, get_TK_KEY_LEFTBRACKET, "TK_KEY_LEFTBRACKET", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_BACKSLASH",
                    JS_NewCFunction(ctx, get_TK_KEY_BACKSLASH, "TK_KEY_BACKSLASH", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_RIGHTBRACKET",
                    JS_NewCFunction(ctx, get_TK_KEY_RIGHTBRACKET, "TK_KEY_RIGHTBRACKET", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_CARET",
                    JS_NewCFunction(ctx, get_TK_KEY_CARET, "TK_KEY_CARET", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_UNDERSCORE",
                    JS_NewCFunction(ctx, get_TK_KEY_UNDERSCORE, "TK_KEY_UNDERSCORE", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_BACKQUOTE",
                    JS_NewCFunction(ctx, get_TK_KEY_BACKQUOTE, "TK_KEY_BACKQUOTE", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_a", JS_NewCFunction(ctx, get_TK_KEY_a, "TK_KEY_a", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_b", JS_NewCFunction(ctx, get_TK_KEY_b, "TK_KEY_b", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_c", JS_NewCFunction(ctx, get_TK_KEY_c, "TK_KEY_c", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_d", JS_NewCFunction(ctx, get_TK_KEY_d, "TK_KEY_d", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_e", JS_NewCFunction(ctx, get_TK_KEY_e, "TK_KEY_e", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_f", JS_NewCFunction(ctx, get_TK_KEY_f, "TK_KEY_f", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_g", JS_NewCFunction(ctx, get_TK_KEY_g, "TK_KEY_g", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_h", JS_NewCFunction(ctx, get_TK_KEY_h, "TK_KEY_h", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_i", JS_NewCFunction(ctx, get_TK_KEY_i, "TK_KEY_i", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_j", JS_NewCFunction(ctx, get_TK_KEY_j, "TK_KEY_j", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_k", JS_NewCFunction(ctx, get_TK_KEY_k, "TK_KEY_k", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_l", JS_NewCFunction(ctx, get_TK_KEY_l, "TK_KEY_l", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_m", JS_NewCFunction(ctx, get_TK_KEY_m, "TK_KEY_m", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_n", JS_NewCFunction(ctx, get_TK_KEY_n, "TK_KEY_n", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_o", JS_NewCFunction(ctx, get_TK_KEY_o, "TK_KEY_o", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_p", JS_NewCFunction(ctx, get_TK_KEY_p, "TK_KEY_p", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_q", JS_NewCFunction(ctx, get_TK_KEY_q, "TK_KEY_q", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_r", JS_NewCFunction(ctx, get_TK_KEY_r, "TK_KEY_r", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_s", JS_NewCFunction(ctx, get_TK_KEY_s, "TK_KEY_s", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_t", JS_NewCFunction(ctx, get_TK_KEY_t, "TK_KEY_t", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_u", JS_NewCFunction(ctx, get_TK_KEY_u, "TK_KEY_u", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_v", JS_NewCFunction(ctx, get_TK_KEY_v, "TK_KEY_v", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_w", JS_NewCFunction(ctx, get_TK_KEY_w, "TK_KEY_w", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_x", JS_NewCFunction(ctx, get_TK_KEY_x, "TK_KEY_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_y", JS_NewCFunction(ctx, get_TK_KEY_y, "TK_KEY_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_z", JS_NewCFunction(ctx, get_TK_KEY_z, "TK_KEY_z", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_A", JS_NewCFunction(ctx, get_TK_KEY_A, "TK_KEY_A", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_B", JS_NewCFunction(ctx, get_TK_KEY_B, "TK_KEY_B", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_C", JS_NewCFunction(ctx, get_TK_KEY_C, "TK_KEY_C", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_D", JS_NewCFunction(ctx, get_TK_KEY_D, "TK_KEY_D", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_E", JS_NewCFunction(ctx, get_TK_KEY_E, "TK_KEY_E", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F", JS_NewCFunction(ctx, get_TK_KEY_F, "TK_KEY_F", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_G", JS_NewCFunction(ctx, get_TK_KEY_G, "TK_KEY_G", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_H", JS_NewCFunction(ctx, get_TK_KEY_H, "TK_KEY_H", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_I", JS_NewCFunction(ctx, get_TK_KEY_I, "TK_KEY_I", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_J", JS_NewCFunction(ctx, get_TK_KEY_J, "TK_KEY_J", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_K", JS_NewCFunction(ctx, get_TK_KEY_K, "TK_KEY_K", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_L", JS_NewCFunction(ctx, get_TK_KEY_L, "TK_KEY_L", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_M", JS_NewCFunction(ctx, get_TK_KEY_M, "TK_KEY_M", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_N", JS_NewCFunction(ctx, get_TK_KEY_N, "TK_KEY_N", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_O", JS_NewCFunction(ctx, get_TK_KEY_O, "TK_KEY_O", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_P", JS_NewCFunction(ctx, get_TK_KEY_P, "TK_KEY_P", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_Q", JS_NewCFunction(ctx, get_TK_KEY_Q, "TK_KEY_Q", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_R", JS_NewCFunction(ctx, get_TK_KEY_R, "TK_KEY_R", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_S", JS_NewCFunction(ctx, get_TK_KEY_S, "TK_KEY_S", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_T", JS_NewCFunction(ctx, get_TK_KEY_T, "TK_KEY_T", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_U", JS_NewCFunction(ctx, get_TK_KEY_U, "TK_KEY_U", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_V", JS_NewCFunction(ctx, get_TK_KEY_V, "TK_KEY_V", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_W", JS_NewCFunction(ctx, get_TK_KEY_W, "TK_KEY_W", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_X", JS_NewCFunction(ctx, get_TK_KEY_X, "TK_KEY_X", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_Y", JS_NewCFunction(ctx, get_TK_KEY_Y, "TK_KEY_Y", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_Z", JS_NewCFunction(ctx, get_TK_KEY_Z, "TK_KEY_Z", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_DOT",
                    JS_NewCFunction(ctx, get_TK_KEY_DOT, "TK_KEY_DOT", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_DELETE",
                    JS_NewCFunction(ctx, get_TK_KEY_DELETE, "TK_KEY_DELETE", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_LEFTBRACE",
                    JS_NewCFunction(ctx, get_TK_KEY_LEFTBRACE, "TK_KEY_LEFTBRACE", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_RIGHTBRACE",
                    JS_NewCFunction(ctx, get_TK_KEY_RIGHTBRACE, "TK_KEY_RIGHTBRACE", 1));

  return RET_OK;
}

JSValue wrap_locale_info(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    locale_info_t* ret = NULL;
    ret = (locale_info_t*)locale_info();

    jret = quickjs_create_pointer(ctx, ret, "locale_info_t*");
  }
  return jret;
}

JSValue wrap_locale_info_tr(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    char* ret = NULL;
    locale_info_t* locale_info =
        (locale_info_t*)quickjs_get_pointer(ctx, argv[0], "locale_info_t*");
    char* text = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (char*)locale_info_tr(locale_info, text);
    JS_FreeCString(ctx, text);

    jret = quickjs_create_string(ctx, ret);
  }
  return jret;
}

JSValue wrap_locale_info_change(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    locale_info_t* locale_info =
        (locale_info_t*)quickjs_get_pointer(ctx, argv[0], "locale_info_t*");
    char* language = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    char* country = (char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)locale_info_change(locale_info, language, country);
    JS_FreeCString(ctx, language);
    JS_FreeCString(ctx, country);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_locale_info_off(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    locale_info_t* locale_info =
        (locale_info_t*)quickjs_get_pointer(ctx, argv[0], "locale_info_t*");
    uint32_t id = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)locale_info_off(locale_info, id);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

ret_t locale_info_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "locale_info",
                    JS_NewCFunction(ctx, wrap_locale_info, "locale_info", 1));
  JS_SetPropertyStr(ctx, global_obj, "locale_info_tr",
                    JS_NewCFunction(ctx, wrap_locale_info_tr, "locale_info_tr", 1));
  JS_SetPropertyStr(ctx, global_obj, "locale_info_change",
                    JS_NewCFunction(ctx, wrap_locale_info_change, "locale_info_change", 1));
  JS_SetPropertyStr(ctx, global_obj, "locale_info_on",
                    JS_NewCFunction(ctx, wrap_locale_info_on, "locale_info_on", 1));
  JS_SetPropertyStr(ctx, global_obj, "locale_info_off",
                    JS_NewCFunction(ctx, wrap_locale_info_off, "locale_info_off", 1));

  return RET_OK;
}

JSValue get_STYLE_ID_BG_COLOR(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_BG_COLOR);
}

JSValue get_STYLE_ID_FG_COLOR(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_FG_COLOR);
}

JSValue get_STYLE_ID_MASK_COLOR(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_MASK_COLOR);
}

JSValue get_STYLE_ID_FONT_NAME(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_FONT_NAME);
}

JSValue get_STYLE_ID_FONT_SIZE(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_FONT_SIZE);
}

JSValue get_STYLE_ID_FONT_STYLE(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_FONT_STYLE);
}

JSValue get_STYLE_ID_TEXT_COLOR(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_TEXT_COLOR);
}

JSValue get_STYLE_ID_TIPS_TEXT_COLOR(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_TIPS_TEXT_COLOR);
}

JSValue get_STYLE_ID_TEXT_ALIGN_H(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_TEXT_ALIGN_H);
}

JSValue get_STYLE_ID_TEXT_ALIGN_V(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_TEXT_ALIGN_V);
}

JSValue get_STYLE_ID_BORDER_COLOR(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_BORDER_COLOR);
}

JSValue get_STYLE_ID_BORDER_WIDTH(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_BORDER_WIDTH);
}

JSValue get_STYLE_ID_BORDER(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_BORDER);
}

JSValue get_STYLE_ID_BG_IMAGE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_BG_IMAGE);
}

JSValue get_STYLE_ID_BG_IMAGE_DRAW_TYPE(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_BG_IMAGE_DRAW_TYPE);
}

JSValue get_STYLE_ID_ICON(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_ICON);
}

JSValue get_STYLE_ID_FG_IMAGE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_FG_IMAGE);
}

JSValue get_STYLE_ID_FG_IMAGE_DRAW_TYPE(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_FG_IMAGE_DRAW_TYPE);
}

JSValue get_STYLE_ID_SPACER(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_SPACER);
}

JSValue get_STYLE_ID_MARGIN(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_MARGIN);
}

JSValue get_STYLE_ID_MARGIN_LEFT(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_MARGIN_LEFT);
}

JSValue get_STYLE_ID_MARGIN_RIGHT(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_MARGIN_RIGHT);
}

JSValue get_STYLE_ID_MARGIN_TOP(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_MARGIN_TOP);
}

JSValue get_STYLE_ID_MARGIN_BOTTOM(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_MARGIN_BOTTOM);
}

JSValue get_STYLE_ID_ICON_AT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_ICON_AT);
}

JSValue get_STYLE_ID_ACTIVE_ICON(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_ACTIVE_ICON);
}

JSValue get_STYLE_ID_X_OFFSET(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_X_OFFSET);
}

JSValue get_STYLE_ID_Y_OFFSET(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_Y_OFFSET);
}

JSValue get_STYLE_ID_SELECTED_BG_COLOR(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_SELECTED_BG_COLOR);
}

JSValue get_STYLE_ID_SELECTED_FG_COLOR(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_SELECTED_FG_COLOR);
}

JSValue get_STYLE_ID_SELECTED_TEXT_COLOR(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_SELECTED_TEXT_COLOR);
}

JSValue get_STYLE_ID_ROUND_RADIUS(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, STYLE_ID_ROUND_RADIUS);
}

ret_t style_id_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_BG_COLOR",
                    JS_NewCFunction(ctx, get_STYLE_ID_BG_COLOR, "STYLE_ID_BG_COLOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_FG_COLOR",
                    JS_NewCFunction(ctx, get_STYLE_ID_FG_COLOR, "STYLE_ID_FG_COLOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_MASK_COLOR",
                    JS_NewCFunction(ctx, get_STYLE_ID_MASK_COLOR, "STYLE_ID_MASK_COLOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_FONT_NAME",
                    JS_NewCFunction(ctx, get_STYLE_ID_FONT_NAME, "STYLE_ID_FONT_NAME", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_FONT_SIZE",
                    JS_NewCFunction(ctx, get_STYLE_ID_FONT_SIZE, "STYLE_ID_FONT_SIZE", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_FONT_STYLE",
                    JS_NewCFunction(ctx, get_STYLE_ID_FONT_STYLE, "STYLE_ID_FONT_STYLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_TEXT_COLOR",
                    JS_NewCFunction(ctx, get_STYLE_ID_TEXT_COLOR, "STYLE_ID_TEXT_COLOR", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "STYLE_ID_TIPS_TEXT_COLOR",
      JS_NewCFunction(ctx, get_STYLE_ID_TIPS_TEXT_COLOR, "STYLE_ID_TIPS_TEXT_COLOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_TEXT_ALIGN_H",
                    JS_NewCFunction(ctx, get_STYLE_ID_TEXT_ALIGN_H, "STYLE_ID_TEXT_ALIGN_H", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_TEXT_ALIGN_V",
                    JS_NewCFunction(ctx, get_STYLE_ID_TEXT_ALIGN_V, "STYLE_ID_TEXT_ALIGN_V", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_BORDER_COLOR",
                    JS_NewCFunction(ctx, get_STYLE_ID_BORDER_COLOR, "STYLE_ID_BORDER_COLOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_BORDER_WIDTH",
                    JS_NewCFunction(ctx, get_STYLE_ID_BORDER_WIDTH, "STYLE_ID_BORDER_WIDTH", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_BORDER",
                    JS_NewCFunction(ctx, get_STYLE_ID_BORDER, "STYLE_ID_BORDER", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_BG_IMAGE",
                    JS_NewCFunction(ctx, get_STYLE_ID_BG_IMAGE, "STYLE_ID_BG_IMAGE", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "STYLE_ID_BG_IMAGE_DRAW_TYPE",
      JS_NewCFunction(ctx, get_STYLE_ID_BG_IMAGE_DRAW_TYPE, "STYLE_ID_BG_IMAGE_DRAW_TYPE", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_ICON",
                    JS_NewCFunction(ctx, get_STYLE_ID_ICON, "STYLE_ID_ICON", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_FG_IMAGE",
                    JS_NewCFunction(ctx, get_STYLE_ID_FG_IMAGE, "STYLE_ID_FG_IMAGE", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "STYLE_ID_FG_IMAGE_DRAW_TYPE",
      JS_NewCFunction(ctx, get_STYLE_ID_FG_IMAGE_DRAW_TYPE, "STYLE_ID_FG_IMAGE_DRAW_TYPE", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_SPACER",
                    JS_NewCFunction(ctx, get_STYLE_ID_SPACER, "STYLE_ID_SPACER", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_MARGIN",
                    JS_NewCFunction(ctx, get_STYLE_ID_MARGIN, "STYLE_ID_MARGIN", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_MARGIN_LEFT",
                    JS_NewCFunction(ctx, get_STYLE_ID_MARGIN_LEFT, "STYLE_ID_MARGIN_LEFT", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_MARGIN_RIGHT",
                    JS_NewCFunction(ctx, get_STYLE_ID_MARGIN_RIGHT, "STYLE_ID_MARGIN_RIGHT", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_MARGIN_TOP",
                    JS_NewCFunction(ctx, get_STYLE_ID_MARGIN_TOP, "STYLE_ID_MARGIN_TOP", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_MARGIN_BOTTOM",
                    JS_NewCFunction(ctx, get_STYLE_ID_MARGIN_BOTTOM, "STYLE_ID_MARGIN_BOTTOM", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_ICON_AT",
                    JS_NewCFunction(ctx, get_STYLE_ID_ICON_AT, "STYLE_ID_ICON_AT", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_ACTIVE_ICON",
                    JS_NewCFunction(ctx, get_STYLE_ID_ACTIVE_ICON, "STYLE_ID_ACTIVE_ICON", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_X_OFFSET",
                    JS_NewCFunction(ctx, get_STYLE_ID_X_OFFSET, "STYLE_ID_X_OFFSET", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_Y_OFFSET",
                    JS_NewCFunction(ctx, get_STYLE_ID_Y_OFFSET, "STYLE_ID_Y_OFFSET", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "STYLE_ID_SELECTED_BG_COLOR",
      JS_NewCFunction(ctx, get_STYLE_ID_SELECTED_BG_COLOR, "STYLE_ID_SELECTED_BG_COLOR", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "STYLE_ID_SELECTED_FG_COLOR",
      JS_NewCFunction(ctx, get_STYLE_ID_SELECTED_FG_COLOR, "STYLE_ID_SELECTED_FG_COLOR", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "STYLE_ID_SELECTED_TEXT_COLOR",
      JS_NewCFunction(ctx, get_STYLE_ID_SELECTED_TEXT_COLOR, "STYLE_ID_SELECTED_TEXT_COLOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_ROUND_RADIUS",
                    JS_NewCFunction(ctx, get_STYLE_ID_ROUND_RADIUS, "STYLE_ID_ROUND_RADIUS", 1));

  return RET_OK;
}

JSValue wrap_style_notify_widget_state_changed(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    style_t* s = (style_t*)quickjs_get_pointer(ctx, argv[0], "style_t*");
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[1], "widget_t*");
    ret = (ret_t)style_notify_widget_state_changed(s, widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_style_is_valid(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = 0;
    style_t* s = (style_t*)quickjs_get_pointer(ctx, argv[0], "style_t*");
    ret = (bool_t)style_is_valid(s);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_style_get_int(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    int32_t ret = 0;
    style_t* s = (style_t*)quickjs_get_pointer(ctx, argv[0], "style_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    int32_t defval = (int32_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (int32_t)style_get_int(s, name, defval);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_style_get_str(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    const char* ret = NULL;
    style_t* s = (style_t*)quickjs_get_pointer(ctx, argv[0], "style_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    const char* defval = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (const char*)style_get_str(s, name, defval);
    JS_FreeCString(ctx, name);
    JS_FreeCString(ctx, defval);

    jret = quickjs_create_string(ctx, ret);
  }
  return jret;
}

JSValue wrap_style_set(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = 0;
    style_t* s = (style_t*)quickjs_get_pointer(ctx, argv[0], "style_t*");
    const char* state = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    const value_t* value = (const value_t*)quickjs_get_pointer(ctx, argv[3], "const value_t*");
    ret = (ret_t)style_set(s, state, name, value);
    JS_FreeCString(ctx, state);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_style_is_mutable(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = 0;
    style_t* s = (style_t*)quickjs_get_pointer(ctx, argv[0], "style_t*");
    ret = (bool_t)style_is_mutable(s);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

ret_t style_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "style_notify_widget_state_changed",
                    JS_NewCFunction(ctx, wrap_style_notify_widget_state_changed,
                                    "style_notify_widget_state_changed", 1));
  JS_SetPropertyStr(ctx, global_obj, "style_is_valid",
                    JS_NewCFunction(ctx, wrap_style_is_valid, "style_is_valid", 1));
  JS_SetPropertyStr(ctx, global_obj, "style_get_int",
                    JS_NewCFunction(ctx, wrap_style_get_int, "style_get_int", 1));
  JS_SetPropertyStr(ctx, global_obj, "style_get_str",
                    JS_NewCFunction(ctx, wrap_style_get_str, "style_get_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "style_set",
                    JS_NewCFunction(ctx, wrap_style_set, "style_set", 1));
  JS_SetPropertyStr(ctx, global_obj, "style_is_mutable",
                    JS_NewCFunction(ctx, wrap_style_is_mutable, "style_is_mutable", 1));

  return RET_OK;
}

JSValue wrap_theme(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    theme_t* ret = NULL;
    ret = (theme_t*)theme();

    jret = quickjs_create_pointer(ctx, ret, "theme_t*");
  }
  return jret;
}

ret_t theme_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "theme", JS_NewCFunction(ctx, wrap_theme, "theme", 1));

  return RET_OK;
}

JSValue wrap_timer_remove(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    uint32_t timer_id = (uint32_t)quickjs_get_int_value(ctx, argv[0]);
    ret = (ret_t)timer_remove(timer_id);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_timer_reset(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    uint32_t timer_id = (uint32_t)quickjs_get_int_value(ctx, argv[0]);
    ret = (ret_t)timer_reset(timer_id);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_timer_modify(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    uint32_t timer_id = (uint32_t)quickjs_get_int_value(ctx, argv[0]);
    uint32_t duration = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)timer_modify(timer_id, duration);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

ret_t timer_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "timer_add",
                    JS_NewCFunction(ctx, wrap_timer_add, "timer_add", 1));
  JS_SetPropertyStr(ctx, global_obj, "timer_remove",
                    JS_NewCFunction(ctx, wrap_timer_remove, "timer_remove", 1));
  JS_SetPropertyStr(ctx, global_obj, "timer_reset",
                    JS_NewCFunction(ctx, wrap_timer_reset, "timer_reset", 1));
  JS_SetPropertyStr(ctx, global_obj, "timer_modify",
                    JS_NewCFunction(ctx, wrap_timer_modify, "timer_modify", 1));

  return RET_OK;
}

JSValue get_ALIGN_V_NONE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ALIGN_V_NONE);
}

JSValue get_ALIGN_V_MIDDLE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ALIGN_V_MIDDLE);
}

JSValue get_ALIGN_V_TOP(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ALIGN_V_TOP);
}

JSValue get_ALIGN_V_BOTTOM(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ALIGN_V_BOTTOM);
}

ret_t align_v_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_V_NONE",
                    JS_NewCFunction(ctx, get_ALIGN_V_NONE, "ALIGN_V_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_V_MIDDLE",
                    JS_NewCFunction(ctx, get_ALIGN_V_MIDDLE, "ALIGN_V_MIDDLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_V_TOP",
                    JS_NewCFunction(ctx, get_ALIGN_V_TOP, "ALIGN_V_TOP", 1));
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_V_BOTTOM",
                    JS_NewCFunction(ctx, get_ALIGN_V_BOTTOM, "ALIGN_V_BOTTOM", 1));

  return RET_OK;
}

JSValue get_ALIGN_H_NONE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ALIGN_H_NONE);
}

JSValue get_ALIGN_H_CENTER(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ALIGN_H_CENTER);
}

JSValue get_ALIGN_H_LEFT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ALIGN_H_LEFT);
}

JSValue get_ALIGN_H_RIGHT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ALIGN_H_RIGHT);
}

ret_t align_h_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_H_NONE",
                    JS_NewCFunction(ctx, get_ALIGN_H_NONE, "ALIGN_H_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_H_CENTER",
                    JS_NewCFunction(ctx, get_ALIGN_H_CENTER, "ALIGN_H_CENTER", 1));
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_H_LEFT",
                    JS_NewCFunction(ctx, get_ALIGN_H_LEFT, "ALIGN_H_LEFT", 1));
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_H_RIGHT",
                    JS_NewCFunction(ctx, get_ALIGN_H_RIGHT, "ALIGN_H_RIGHT", 1));

  return RET_OK;
}

JSValue wrap_vgcanvas_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    vgcanvas_t* ret = NULL;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (vgcanvas_t*)vgcanvas_cast(vg);

    jret = quickjs_create_pointer(ctx, ret, "vgcanvas_t*");
  }
  return jret;
}

JSValue wrap_vgcanvas_flush(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_flush(vg);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_begin_path(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_begin_path(vg);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_move_to(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t y = (float_t)quickjs_get_number_value(ctx, argv[2]);
    ret = (ret_t)vgcanvas_move_to(vg, x, y);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_line_to(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t y = (float_t)quickjs_get_number_value(ctx, argv[2]);
    ret = (ret_t)vgcanvas_line_to(vg, x, y);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_quad_to(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t cpx = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t cpy = (float_t)quickjs_get_number_value(ctx, argv[2]);
    float_t x = (float_t)quickjs_get_number_value(ctx, argv[3]);
    float_t y = (float_t)quickjs_get_number_value(ctx, argv[4]);
    ret = (ret_t)vgcanvas_quad_to(vg, cpx, cpy, x, y);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_bezier_to(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 7) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t cp1x = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t cp1y = (float_t)quickjs_get_number_value(ctx, argv[2]);
    float_t cp2x = (float_t)quickjs_get_number_value(ctx, argv[3]);
    float_t cp2y = (float_t)quickjs_get_number_value(ctx, argv[4]);
    float_t x = (float_t)quickjs_get_number_value(ctx, argv[5]);
    float_t y = (float_t)quickjs_get_number_value(ctx, argv[6]);
    ret = (ret_t)vgcanvas_bezier_to(vg, cp1x, cp1y, cp2x, cp2y, x, y);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_arc_to(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 6) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x1 = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t y1 = (float_t)quickjs_get_number_value(ctx, argv[2]);
    float_t x2 = (float_t)quickjs_get_number_value(ctx, argv[3]);
    float_t y2 = (float_t)quickjs_get_number_value(ctx, argv[4]);
    float_t r = (float_t)quickjs_get_number_value(ctx, argv[5]);
    ret = (ret_t)vgcanvas_arc_to(vg, x1, y1, x2, y2, r);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_arc(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 7) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t y = (float_t)quickjs_get_number_value(ctx, argv[2]);
    float_t r = (float_t)quickjs_get_number_value(ctx, argv[3]);
    float_t start_angle = (float_t)quickjs_get_number_value(ctx, argv[4]);
    float_t end_angle = (float_t)quickjs_get_number_value(ctx, argv[5]);
    bool_t ccw = (bool_t)quickjs_get_boolean_value(ctx, argv[6]);
    ret = (ret_t)vgcanvas_arc(vg, x, y, r, start_angle, end_angle, ccw);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_is_point_in_path(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    bool_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t y = (float_t)quickjs_get_number_value(ctx, argv[2]);
    ret = (bool_t)vgcanvas_is_point_in_path(vg, x, y);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_rect(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t y = (float_t)quickjs_get_number_value(ctx, argv[2]);
    float_t w = (float_t)quickjs_get_number_value(ctx, argv[3]);
    float_t h = (float_t)quickjs_get_number_value(ctx, argv[4]);
    ret = (ret_t)vgcanvas_rect(vg, x, y, w, h);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_rounded_rect(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 6) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t y = (float_t)quickjs_get_number_value(ctx, argv[2]);
    float_t w = (float_t)quickjs_get_number_value(ctx, argv[3]);
    float_t h = (float_t)quickjs_get_number_value(ctx, argv[4]);
    float_t r = (float_t)quickjs_get_number_value(ctx, argv[5]);
    ret = (ret_t)vgcanvas_rounded_rect(vg, x, y, w, h, r);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_ellipse(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t y = (float_t)quickjs_get_number_value(ctx, argv[2]);
    float_t rx = (float_t)quickjs_get_number_value(ctx, argv[3]);
    float_t ry = (float_t)quickjs_get_number_value(ctx, argv[4]);
    ret = (ret_t)vgcanvas_ellipse(vg, x, y, rx, ry);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_close_path(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_close_path(vg);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_rotate(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t rad = (float_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)vgcanvas_rotate(vg, rad);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_scale(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t y = (float_t)quickjs_get_number_value(ctx, argv[2]);
    ret = (ret_t)vgcanvas_scale(vg, x, y);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_translate(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t y = (float_t)quickjs_get_number_value(ctx, argv[2]);
    ret = (ret_t)vgcanvas_translate(vg, x, y);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_transform(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 7) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t a = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t b = (float_t)quickjs_get_number_value(ctx, argv[2]);
    float_t c = (float_t)quickjs_get_number_value(ctx, argv[3]);
    float_t d = (float_t)quickjs_get_number_value(ctx, argv[4]);
    float_t e = (float_t)quickjs_get_number_value(ctx, argv[5]);
    float_t f = (float_t)quickjs_get_number_value(ctx, argv[6]);
    ret = (ret_t)vgcanvas_transform(vg, a, b, c, d, e, f);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_set_transform(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 7) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t a = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t b = (float_t)quickjs_get_number_value(ctx, argv[2]);
    float_t c = (float_t)quickjs_get_number_value(ctx, argv[3]);
    float_t d = (float_t)quickjs_get_number_value(ctx, argv[4]);
    float_t e = (float_t)quickjs_get_number_value(ctx, argv[5]);
    float_t f = (float_t)quickjs_get_number_value(ctx, argv[6]);
    ret = (ret_t)vgcanvas_set_transform(vg, a, b, c, d, e, f);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_clip_rect(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t x = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t y = (float_t)quickjs_get_number_value(ctx, argv[2]);
    float_t w = (float_t)quickjs_get_number_value(ctx, argv[3]);
    float_t h = (float_t)quickjs_get_number_value(ctx, argv[4]);
    ret = (ret_t)vgcanvas_clip_rect(vg, x, y, w, h);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_fill(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_fill(vg);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_stroke(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_stroke(vg);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_paint(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    bool_t stroke = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    bitmap_t* img = (bitmap_t*)quickjs_get_pointer(ctx, argv[2], "bitmap_t*");
    ret = (ret_t)vgcanvas_paint(vg, stroke, img);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_set_font(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* font = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_font(vg, font);
    JS_FreeCString(ctx, font);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_set_font_size(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t font = (float_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_font_size(vg, font);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_set_text_align(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* value = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_text_align(vg, value);
    JS_FreeCString(ctx, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_set_text_baseline(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* value = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_text_baseline(vg, value);
    JS_FreeCString(ctx, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_fill_text(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* text = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    float_t x = (float_t)quickjs_get_number_value(ctx, argv[2]);
    float_t y = (float_t)quickjs_get_number_value(ctx, argv[3]);
    float_t max_width = (float_t)quickjs_get_number_value(ctx, argv[4]);
    ret = (ret_t)vgcanvas_fill_text(vg, text, x, y, max_width);
    JS_FreeCString(ctx, text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_measure_text(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    float_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* text = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (float_t)vgcanvas_measure_text(vg, text);
    JS_FreeCString(ctx, text);

    jret = JS_NewFloat64(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_draw_image(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 10) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    bitmap_t* img = (bitmap_t*)quickjs_get_pointer(ctx, argv[1], "bitmap_t*");
    float_t sx = (float_t)quickjs_get_number_value(ctx, argv[2]);
    float_t sy = (float_t)quickjs_get_number_value(ctx, argv[3]);
    float_t sw = (float_t)quickjs_get_number_value(ctx, argv[4]);
    float_t sh = (float_t)quickjs_get_number_value(ctx, argv[5]);
    float_t dx = (float_t)quickjs_get_number_value(ctx, argv[6]);
    float_t dy = (float_t)quickjs_get_number_value(ctx, argv[7]);
    float_t dw = (float_t)quickjs_get_number_value(ctx, argv[8]);
    float_t dh = (float_t)quickjs_get_number_value(ctx, argv[9]);
    ret = (ret_t)vgcanvas_draw_image(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_draw_icon(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 10) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    bitmap_t* img = (bitmap_t*)quickjs_get_pointer(ctx, argv[1], "bitmap_t*");
    float_t sx = (float_t)quickjs_get_number_value(ctx, argv[2]);
    float_t sy = (float_t)quickjs_get_number_value(ctx, argv[3]);
    float_t sw = (float_t)quickjs_get_number_value(ctx, argv[4]);
    float_t sh = (float_t)quickjs_get_number_value(ctx, argv[5]);
    float_t dx = (float_t)quickjs_get_number_value(ctx, argv[6]);
    float_t dy = (float_t)quickjs_get_number_value(ctx, argv[7]);
    float_t dw = (float_t)quickjs_get_number_value(ctx, argv[8]);
    float_t dh = (float_t)quickjs_get_number_value(ctx, argv[9]);
    ret = (ret_t)vgcanvas_draw_icon(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_set_antialias(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    bool_t value = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_antialias(vg, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_set_global_alpha(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t alpha = (float_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_global_alpha(vg, alpha);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_set_line_width(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t value = (float_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_line_width(vg, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_set_fill_color_str(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    const char* color = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_fill_color_str(vg, color);
    JS_FreeCString(ctx, color);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_set_stroke_color_str(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    const char* color = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_stroke_color_str(vg, color);
    JS_FreeCString(ctx, color);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_set_line_cap(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* value = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_line_cap(vg, value);
    JS_FreeCString(ctx, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_set_line_join(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    char* value = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_line_join(vg, value);
    JS_FreeCString(ctx, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_set_miter_limit(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    float_t value = (float_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)vgcanvas_set_miter_limit(vg, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_save(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_save(vg);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_restore(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    vgcanvas_t* vg = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");
    ret = (ret_t)vgcanvas_restore(vg);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_vgcanvas_t_get_prop_w(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = JS_NewInt32(ctx, obj->w);
  return jret;
}

JSValue wrap_vgcanvas_t_get_prop_h(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = JS_NewInt32(ctx, obj->h);
  return jret;
}

JSValue wrap_vgcanvas_t_get_prop_ratio(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = JS_NewFloat64(ctx, obj->ratio);
  return jret;
}

JSValue wrap_vgcanvas_t_get_prop_anti_alias(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = JS_NewBool(ctx, obj->anti_alias);
  return jret;
}

JSValue wrap_vgcanvas_t_get_prop_line_width(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = JS_NewFloat64(ctx, obj->line_width);
  return jret;
}

JSValue wrap_vgcanvas_t_get_prop_global_alpha(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = JS_NewFloat64(ctx, obj->global_alpha);
  return jret;
}

JSValue wrap_vgcanvas_t_get_prop_miter_limit(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = JS_NewFloat64(ctx, obj->miter_limit);
  return jret;
}

JSValue wrap_vgcanvas_t_get_prop_line_cap(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = quickjs_create_string(ctx, obj->line_cap);
  return jret;
}

JSValue wrap_vgcanvas_t_get_prop_line_join(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = quickjs_create_string(ctx, obj->line_join);
  return jret;
}

JSValue wrap_vgcanvas_t_get_prop_font(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = quickjs_create_string(ctx, obj->font);
  return jret;
}

JSValue wrap_vgcanvas_t_get_prop_font_size(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = JS_NewFloat64(ctx, obj->font_size);
  return jret;
}

JSValue wrap_vgcanvas_t_get_prop_text_align(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = quickjs_create_string(ctx, obj->text_align);
  return jret;
}

JSValue wrap_vgcanvas_t_get_prop_text_baseline(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)quickjs_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = quickjs_create_string(ctx, obj->text_baseline);
  return jret;
}

ret_t vgcanvas_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_cast",
                    JS_NewCFunction(ctx, wrap_vgcanvas_cast, "vgcanvas_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_flush",
                    JS_NewCFunction(ctx, wrap_vgcanvas_flush, "vgcanvas_flush", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_begin_path",
                    JS_NewCFunction(ctx, wrap_vgcanvas_begin_path, "vgcanvas_begin_path", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_move_to",
                    JS_NewCFunction(ctx, wrap_vgcanvas_move_to, "vgcanvas_move_to", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_line_to",
                    JS_NewCFunction(ctx, wrap_vgcanvas_line_to, "vgcanvas_line_to", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_quad_to",
                    JS_NewCFunction(ctx, wrap_vgcanvas_quad_to, "vgcanvas_quad_to", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_bezier_to",
                    JS_NewCFunction(ctx, wrap_vgcanvas_bezier_to, "vgcanvas_bezier_to", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_arc_to",
                    JS_NewCFunction(ctx, wrap_vgcanvas_arc_to, "vgcanvas_arc_to", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_arc",
                    JS_NewCFunction(ctx, wrap_vgcanvas_arc, "vgcanvas_arc", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "vgcanvas_is_point_in_path",
      JS_NewCFunction(ctx, wrap_vgcanvas_is_point_in_path, "vgcanvas_is_point_in_path", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_rect",
                    JS_NewCFunction(ctx, wrap_vgcanvas_rect, "vgcanvas_rect", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_rounded_rect",
                    JS_NewCFunction(ctx, wrap_vgcanvas_rounded_rect, "vgcanvas_rounded_rect", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_ellipse",
                    JS_NewCFunction(ctx, wrap_vgcanvas_ellipse, "vgcanvas_ellipse", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_close_path",
                    JS_NewCFunction(ctx, wrap_vgcanvas_close_path, "vgcanvas_close_path", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_rotate",
                    JS_NewCFunction(ctx, wrap_vgcanvas_rotate, "vgcanvas_rotate", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_scale",
                    JS_NewCFunction(ctx, wrap_vgcanvas_scale, "vgcanvas_scale", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_translate",
                    JS_NewCFunction(ctx, wrap_vgcanvas_translate, "vgcanvas_translate", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_transform",
                    JS_NewCFunction(ctx, wrap_vgcanvas_transform, "vgcanvas_transform", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_transform",
                    JS_NewCFunction(ctx, wrap_vgcanvas_set_transform, "vgcanvas_set_transform", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_clip_rect",
                    JS_NewCFunction(ctx, wrap_vgcanvas_clip_rect, "vgcanvas_clip_rect", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_fill",
                    JS_NewCFunction(ctx, wrap_vgcanvas_fill, "vgcanvas_fill", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_stroke",
                    JS_NewCFunction(ctx, wrap_vgcanvas_stroke, "vgcanvas_stroke", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_paint",
                    JS_NewCFunction(ctx, wrap_vgcanvas_paint, "vgcanvas_paint", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_font",
                    JS_NewCFunction(ctx, wrap_vgcanvas_set_font, "vgcanvas_set_font", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_font_size",
                    JS_NewCFunction(ctx, wrap_vgcanvas_set_font_size, "vgcanvas_set_font_size", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "vgcanvas_set_text_align",
      JS_NewCFunction(ctx, wrap_vgcanvas_set_text_align, "vgcanvas_set_text_align", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "vgcanvas_set_text_baseline",
      JS_NewCFunction(ctx, wrap_vgcanvas_set_text_baseline, "vgcanvas_set_text_baseline", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_fill_text",
                    JS_NewCFunction(ctx, wrap_vgcanvas_fill_text, "vgcanvas_fill_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_measure_text",
                    JS_NewCFunction(ctx, wrap_vgcanvas_measure_text, "vgcanvas_measure_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_draw_image",
                    JS_NewCFunction(ctx, wrap_vgcanvas_draw_image, "vgcanvas_draw_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_draw_icon",
                    JS_NewCFunction(ctx, wrap_vgcanvas_draw_icon, "vgcanvas_draw_icon", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_antialias",
                    JS_NewCFunction(ctx, wrap_vgcanvas_set_antialias, "vgcanvas_set_antialias", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "vgcanvas_set_global_alpha",
      JS_NewCFunction(ctx, wrap_vgcanvas_set_global_alpha, "vgcanvas_set_global_alpha", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "vgcanvas_set_line_width",
      JS_NewCFunction(ctx, wrap_vgcanvas_set_line_width, "vgcanvas_set_line_width", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "vgcanvas_set_fill_color_str",
      JS_NewCFunction(ctx, wrap_vgcanvas_set_fill_color_str, "vgcanvas_set_fill_color_str", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "vgcanvas_set_stroke_color_str",
      JS_NewCFunction(ctx, wrap_vgcanvas_set_stroke_color_str, "vgcanvas_set_stroke_color_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_line_cap",
                    JS_NewCFunction(ctx, wrap_vgcanvas_set_line_cap, "vgcanvas_set_line_cap", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_line_join",
                    JS_NewCFunction(ctx, wrap_vgcanvas_set_line_join, "vgcanvas_set_line_join", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "vgcanvas_set_miter_limit",
      JS_NewCFunction(ctx, wrap_vgcanvas_set_miter_limit, "vgcanvas_set_miter_limit", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_save",
                    JS_NewCFunction(ctx, wrap_vgcanvas_save, "vgcanvas_save", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_restore",
                    JS_NewCFunction(ctx, wrap_vgcanvas_restore, "vgcanvas_restore", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_w",
                    JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_w, "vgcanvas_t_get_prop_w", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_h",
                    JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_h, "vgcanvas_t_get_prop_h", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "vgcanvas_t_get_prop_ratio",
      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_ratio, "vgcanvas_t_get_prop_ratio", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_anti_alias",
                    JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_anti_alias,
                                    "vgcanvas_t_get_prop_anti_alias", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_line_width",
                    JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_line_width,
                                    "vgcanvas_t_get_prop_line_width", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_global_alpha",
                    JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_global_alpha,
                                    "vgcanvas_t_get_prop_global_alpha", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_miter_limit",
                    JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_miter_limit,
                                    "vgcanvas_t_get_prop_miter_limit", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "vgcanvas_t_get_prop_line_cap",
      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_line_cap, "vgcanvas_t_get_prop_line_cap", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "vgcanvas_t_get_prop_line_join",
      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_line_join, "vgcanvas_t_get_prop_line_join", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "vgcanvas_t_get_prop_font",
      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_font, "vgcanvas_t_get_prop_font", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "vgcanvas_t_get_prop_font_size",
      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_font_size, "vgcanvas_t_get_prop_font_size", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_text_align",
                    JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_text_align,
                                    "vgcanvas_t_get_prop_text_align", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_text_baseline",
                    JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_text_baseline,
                                    "vgcanvas_t_get_prop_text_baseline", 1));

  return RET_OK;
}

JSValue get_BITMAP_FMT_NONE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FMT_NONE);
}

JSValue get_BITMAP_FMT_RGBA8888(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FMT_RGBA8888);
}

JSValue get_BITMAP_FMT_ABGR8888(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FMT_ABGR8888);
}

JSValue get_BITMAP_FMT_BGRA8888(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FMT_BGRA8888);
}

JSValue get_BITMAP_FMT_ARGB8888(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FMT_ARGB8888);
}

JSValue get_BITMAP_FMT_RGB565(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FMT_RGB565);
}

JSValue get_BITMAP_FMT_BGR565(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FMT_BGR565);
}

JSValue get_BITMAP_FMT_RGB888(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FMT_RGB888);
}

JSValue get_BITMAP_FMT_BGR888(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FMT_BGR888);
}

JSValue get_BITMAP_FMT_GRAY(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FMT_GRAY);
}

JSValue get_BITMAP_FMT_MONO(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, BITMAP_FMT_MONO);
}

ret_t bitmap_format_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FMT_NONE",
                    JS_NewCFunction(ctx, get_BITMAP_FMT_NONE, "BITMAP_FMT_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FMT_RGBA8888",
                    JS_NewCFunction(ctx, get_BITMAP_FMT_RGBA8888, "BITMAP_FMT_RGBA8888", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FMT_ABGR8888",
                    JS_NewCFunction(ctx, get_BITMAP_FMT_ABGR8888, "BITMAP_FMT_ABGR8888", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FMT_BGRA8888",
                    JS_NewCFunction(ctx, get_BITMAP_FMT_BGRA8888, "BITMAP_FMT_BGRA8888", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FMT_ARGB8888",
                    JS_NewCFunction(ctx, get_BITMAP_FMT_ARGB8888, "BITMAP_FMT_ARGB8888", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FMT_RGB565",
                    JS_NewCFunction(ctx, get_BITMAP_FMT_RGB565, "BITMAP_FMT_RGB565", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FMT_BGR565",
                    JS_NewCFunction(ctx, get_BITMAP_FMT_BGR565, "BITMAP_FMT_BGR565", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FMT_RGB888",
                    JS_NewCFunction(ctx, get_BITMAP_FMT_RGB888, "BITMAP_FMT_RGB888", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FMT_BGR888",
                    JS_NewCFunction(ctx, get_BITMAP_FMT_BGR888, "BITMAP_FMT_BGR888", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FMT_GRAY",
                    JS_NewCFunction(ctx, get_BITMAP_FMT_GRAY, "BITMAP_FMT_GRAY", 1));
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FMT_MONO",
                    JS_NewCFunction(ctx, get_BITMAP_FMT_MONO, "BITMAP_FMT_MONO", 1));

  return RET_OK;
}

JSValue get_WIDGET_PROP_X(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_X);
}

JSValue get_WIDGET_PROP_Y(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_Y);
}

JSValue get_WIDGET_PROP_W(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_W);
}

JSValue get_WIDGET_PROP_H(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_H);
}

JSValue get_WIDGET_PROP_CANVAS(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_CANVAS);
}

JSValue get_WIDGET_PROP_NATIVE_WINDOW(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_NATIVE_WINDOW);
}

JSValue get_WIDGET_PROP_HIGHLIGHT(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_HIGHLIGHT);
}

JSValue get_WIDGET_PROP_BAR_SIZE(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_BAR_SIZE);
}

JSValue get_WIDGET_PROP_OPACITY(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_OPACITY);
}

JSValue get_WIDGET_PROP_MIN_W(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_MIN_W);
}

JSValue get_WIDGET_PROP_MAX_W(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_MAX_W);
}

JSValue get_WIDGET_PROP_CHILDREN_LAYOUT(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_CHILDREN_LAYOUT);
}

JSValue get_WIDGET_PROP_LAYOUT(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_LAYOUT);
}

JSValue get_WIDGET_PROP_SELF_LAYOUT(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_SELF_LAYOUT);
}

JSValue get_WIDGET_PROP_LAYOUT_W(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_LAYOUT_W);
}

JSValue get_WIDGET_PROP_LAYOUT_H(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_LAYOUT_H);
}

JSValue get_WIDGET_PROP_VIRTUAL_W(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_VIRTUAL_W);
}

JSValue get_WIDGET_PROP_VIRTUAL_H(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_VIRTUAL_H);
}

JSValue get_WIDGET_PROP_NAME(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_NAME);
}

JSValue get_WIDGET_PROP_TYPE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_TYPE);
}

JSValue get_WIDGET_PROP_CLOSABLE(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_CLOSABLE);
}

JSValue get_WIDGET_PROP_CURSOR(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_CURSOR);
}

JSValue get_WIDGET_PROP_VALUE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_VALUE);
}

JSValue get_WIDGET_PROP_LENGTH(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_LENGTH);
}

JSValue get_WIDGET_PROP_TEXT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_TEXT);
}

JSValue get_WIDGET_PROP_TR_TEXT(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_TR_TEXT);
}

JSValue get_WIDGET_PROP_STYLE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_STYLE);
}

JSValue get_WIDGET_PROP_ENABLE(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ENABLE);
}

JSValue get_WIDGET_PROP_FLOATING(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_FLOATING);
}

JSValue get_WIDGET_PROP_MARGIN(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_MARGIN);
}

JSValue get_WIDGET_PROP_SPACING(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_SPACING);
}

JSValue get_WIDGET_PROP_LEFT_MARGIN(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_LEFT_MARGIN);
}

JSValue get_WIDGET_PROP_RIGHT_MARGIN(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_RIGHT_MARGIN);
}

JSValue get_WIDGET_PROP_TOP_MARGIN(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_TOP_MARGIN);
}

JSValue get_WIDGET_PROP_BOTTOM_MARGIN(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_BOTTOM_MARGIN);
}

JSValue get_WIDGET_PROP_STEP(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_STEP);
}

JSValue get_WIDGET_PROP_VISIBLE(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_VISIBLE);
}

JSValue get_WIDGET_PROP_SENSITIVE(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_SENSITIVE);
}

JSValue get_WIDGET_PROP_ANIMATION(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ANIMATION);
}

JSValue get_WIDGET_PROP_ANIM_HINT(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ANIM_HINT);
}

JSValue get_WIDGET_PROP_FULLSCREEN(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_FULLSCREEN);
}

JSValue get_WIDGET_PROP_OPEN_ANIM_HINT(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_OPEN_ANIM_HINT);
}

JSValue get_WIDGET_PROP_CLOSE_ANIM_HINT(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_CLOSE_ANIM_HINT);
}

JSValue get_WIDGET_PROP_MIN(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_MIN);
}

JSValue get_WIDGET_PROP_TIPS(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_TIPS);
}

JSValue get_WIDGET_PROP_INPUT_TYPE(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_INPUT_TYPE);
}

JSValue get_WIDGET_PROP_READONLY(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_READONLY);
}

JSValue get_WIDGET_PROP_PASSWORD_VISIBLE(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_PASSWORD_VISIBLE);
}

JSValue get_WIDGET_PROP_ACTIVE(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ACTIVE);
}

JSValue get_WIDGET_PROP_VERTICAL(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_VERTICAL);
}

JSValue get_WIDGET_PROP_SHOW_TEXT(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_SHOW_TEXT);
}

JSValue get_WIDGET_PROP_XOFFSET(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_XOFFSET);
}

JSValue get_WIDGET_PROP_YOFFSET(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_YOFFSET);
}

JSValue get_WIDGET_PROP_ALIGN_V(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ALIGN_V);
}

JSValue get_WIDGET_PROP_ALIGN_H(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ALIGN_H);
}

JSValue get_WIDGET_PROP_AUTO_PLAY(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_AUTO_PLAY);
}

JSValue get_WIDGET_PROP_LOOP(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_LOOP);
}

JSValue get_WIDGET_PROP_AUTO_FIX(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_AUTO_FIX);
}

JSValue get_WIDGET_PROP_X_MIN(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_X_MIN);
}

JSValue get_WIDGET_PROP_X_MAX(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_X_MAX);
}

JSValue get_WIDGET_PROP_Y_MIN(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_Y_MIN);
}

JSValue get_WIDGET_PROP_Y_MAX(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_Y_MAX);
}

JSValue get_WIDGET_PROP_MAX(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_MAX);
}

JSValue get_WIDGET_PROP_ROW(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ROW);
}

JSValue get_WIDGET_PROP_STATE_FOR_STYLE(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_STATE_FOR_STYLE);
}

JSValue get_WIDGET_PROP_THEME(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_THEME);
}

JSValue get_WIDGET_PROP_STAGE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_STAGE);
}

JSValue get_WIDGET_PROP_IMAGE_MANAGER(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_IMAGE_MANAGER);
}

JSValue get_WIDGET_PROP_ASSETS_MANAGER(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ASSETS_MANAGER);
}

JSValue get_WIDGET_PROP_LOCALE_INFO(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_LOCALE_INFO);
}

JSValue get_WIDGET_PROP_FONT_MANAGER(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_FONT_MANAGER);
}

JSValue get_WIDGET_PROP_THEME_OBJ(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_THEME_OBJ);
}

JSValue get_WIDGET_PROP_DEFAULT_THEME_OBJ(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_DEFAULT_THEME_OBJ);
}

JSValue get_WIDGET_PROP_ITEM_WIDTH(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ITEM_WIDTH);
}

JSValue get_WIDGET_PROP_ITEM_HEIGHT(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ITEM_HEIGHT);
}

JSValue get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_DEFAULT_ITEM_HEIGHT);
}

JSValue get_WIDGET_PROP_XSLIDABLE(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_XSLIDABLE);
}

JSValue get_WIDGET_PROP_YSLIDABLE(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_YSLIDABLE);
}

JSValue get_WIDGET_PROP_REPEAT(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_REPEAT);
}

JSValue get_WIDGET_PROP_ENABLE_LONG_PRESS(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ENABLE_LONG_PRESS);
}

JSValue get_WIDGET_PROP_ANIMATABLE(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ANIMATABLE);
}

JSValue get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_AUTO_HIDE_SCROLL_BAR);
}

JSValue get_WIDGET_PROP_IMAGE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_IMAGE);
}

JSValue get_WIDGET_PROP_FORMAT(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_FORMAT);
}

JSValue get_WIDGET_PROP_DRAW_TYPE(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_DRAW_TYPE);
}

JSValue get_WIDGET_PROP_SELECTABLE(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_SELECTABLE);
}

JSValue get_WIDGET_PROP_CLICKABLE(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_CLICKABLE);
}

JSValue get_WIDGET_PROP_SCALE_X(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_SCALE_X);
}

JSValue get_WIDGET_PROP_SCALE_Y(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_SCALE_Y);
}

JSValue get_WIDGET_PROP_ANCHOR_X(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ANCHOR_X);
}

JSValue get_WIDGET_PROP_ANCHOR_Y(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ANCHOR_Y);
}

JSValue get_WIDGET_PROP_ROTATION(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ROTATION);
}

JSValue get_WIDGET_PROP_COMPACT(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_COMPACT);
}

JSValue get_WIDGET_PROP_SCROLLABLE(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_SCROLLABLE);
}

JSValue get_WIDGET_PROP_ICON(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ICON);
}

JSValue get_WIDGET_PROP_OPTIONS(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_OPTIONS);
}

JSValue get_WIDGET_PROP_SELECTED(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_SELECTED);
}

JSValue get_WIDGET_PROP_CHECKED(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_CHECKED);
}

JSValue get_WIDGET_PROP_ACTIVE_ICON(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_ACTIVE_ICON);
}

JSValue get_WIDGET_PROP_OPEN_WINDOW(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_OPEN_WINDOW);
}

JSValue get_WIDGET_PROP_SELECTED_INDEX(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_SELECTED_INDEX);
}

JSValue get_WIDGET_PROP_CLOSE_WHEN_CLICK(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_CLOSE_WHEN_CLICK);
}

JSValue get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE(JSContext* ctx, JSValueConst this_val, int argc,
                                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE);
}

JSValue get_WIDGET_PROP_LINE_GAP(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_LINE_GAP);
}

JSValue get_WIDGET_PROP_BG_COLOR(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_BG_COLOR);
}

JSValue get_WIDGET_PROP_BORDER_COLOR(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_BORDER_COLOR);
}

JSValue get_WIDGET_PROP_DELAY(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_DELAY);
}

JSValue get_WIDGET_PROP_IS_KEYBOARD(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_IS_KEYBOARD);
}

JSValue get_WIDGET_PROP_FOCUSED(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_FOCUSED);
}

JSValue get_WIDGET_PROP_FOCUS(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_FOCUS);
}

JSValue get_WIDGET_PROP_FOCUSABLE(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_FOCUSABLE);
}

JSValue get_WIDGET_PROP_WITH_FOCUS_STATE(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_WITH_FOCUS_STATE);
}

JSValue get_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_NEXT_KEY);
}

JSValue get_WIDGET_PROP_MOVE_FOCUS_PREV_KEY(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_PREV_KEY);
}

ret_t widget_prop_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_X",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_X, "WIDGET_PROP_X", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_Y",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_Y, "WIDGET_PROP_Y", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_W",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_W, "WIDGET_PROP_W", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_H",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_H, "WIDGET_PROP_H", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_CANVAS",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_CANVAS, "WIDGET_PROP_CANVAS", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_NATIVE_WINDOW",
      JS_NewCFunction(ctx, get_WIDGET_PROP_NATIVE_WINDOW, "WIDGET_PROP_NATIVE_WINDOW", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_HIGHLIGHT",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_HIGHLIGHT, "WIDGET_PROP_HIGHLIGHT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_BAR_SIZE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_BAR_SIZE, "WIDGET_PROP_BAR_SIZE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_OPACITY",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_OPACITY, "WIDGET_PROP_OPACITY", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MIN_W",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_MIN_W, "WIDGET_PROP_MIN_W", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MAX_W",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_MAX_W, "WIDGET_PROP_MAX_W", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_CHILDREN_LAYOUT",
      JS_NewCFunction(ctx, get_WIDGET_PROP_CHILDREN_LAYOUT, "WIDGET_PROP_CHILDREN_LAYOUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_LAYOUT",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_LAYOUT, "WIDGET_PROP_LAYOUT", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_SELF_LAYOUT",
      JS_NewCFunction(ctx, get_WIDGET_PROP_SELF_LAYOUT, "WIDGET_PROP_SELF_LAYOUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_LAYOUT_W",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_LAYOUT_W, "WIDGET_PROP_LAYOUT_W", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_LAYOUT_H",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_LAYOUT_H, "WIDGET_PROP_LAYOUT_H", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_VIRTUAL_W",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_VIRTUAL_W, "WIDGET_PROP_VIRTUAL_W", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_VIRTUAL_H",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_VIRTUAL_H, "WIDGET_PROP_VIRTUAL_H", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_NAME",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_NAME, "WIDGET_PROP_NAME", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_TYPE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_TYPE, "WIDGET_PROP_TYPE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_CLOSABLE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_CLOSABLE, "WIDGET_PROP_CLOSABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_CURSOR",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_CURSOR, "WIDGET_PROP_CURSOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_VALUE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_VALUE, "WIDGET_PROP_VALUE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_LENGTH",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_LENGTH, "WIDGET_PROP_LENGTH", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_TEXT",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_TEXT, "WIDGET_PROP_TEXT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_TR_TEXT",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_TR_TEXT, "WIDGET_PROP_TR_TEXT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_STYLE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_STYLE, "WIDGET_PROP_STYLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ENABLE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_ENABLE, "WIDGET_PROP_ENABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_FLOATING",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_FLOATING, "WIDGET_PROP_FLOATING", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MARGIN",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_MARGIN, "WIDGET_PROP_MARGIN", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_SPACING",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_SPACING, "WIDGET_PROP_SPACING", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_LEFT_MARGIN",
      JS_NewCFunction(ctx, get_WIDGET_PROP_LEFT_MARGIN, "WIDGET_PROP_LEFT_MARGIN", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_RIGHT_MARGIN",
      JS_NewCFunction(ctx, get_WIDGET_PROP_RIGHT_MARGIN, "WIDGET_PROP_RIGHT_MARGIN", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_TOP_MARGIN",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_TOP_MARGIN, "WIDGET_PROP_TOP_MARGIN", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_BOTTOM_MARGIN",
      JS_NewCFunction(ctx, get_WIDGET_PROP_BOTTOM_MARGIN, "WIDGET_PROP_BOTTOM_MARGIN", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_STEP",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_STEP, "WIDGET_PROP_STEP", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_VISIBLE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_VISIBLE, "WIDGET_PROP_VISIBLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_SENSITIVE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_SENSITIVE, "WIDGET_PROP_SENSITIVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ANIMATION",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_ANIMATION, "WIDGET_PROP_ANIMATION", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ANIM_HINT",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_ANIM_HINT, "WIDGET_PROP_ANIM_HINT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_FULLSCREEN",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_FULLSCREEN, "WIDGET_PROP_FULLSCREEN", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_OPEN_ANIM_HINT",
      JS_NewCFunction(ctx, get_WIDGET_PROP_OPEN_ANIM_HINT, "WIDGET_PROP_OPEN_ANIM_HINT", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_CLOSE_ANIM_HINT",
      JS_NewCFunction(ctx, get_WIDGET_PROP_CLOSE_ANIM_HINT, "WIDGET_PROP_CLOSE_ANIM_HINT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MIN",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_MIN, "WIDGET_PROP_MIN", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_TIPS",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_TIPS, "WIDGET_PROP_TIPS", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_INPUT_TYPE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_INPUT_TYPE, "WIDGET_PROP_INPUT_TYPE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_READONLY",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_READONLY, "WIDGET_PROP_READONLY", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_PASSWORD_VISIBLE",
      JS_NewCFunction(ctx, get_WIDGET_PROP_PASSWORD_VISIBLE, "WIDGET_PROP_PASSWORD_VISIBLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ACTIVE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_ACTIVE, "WIDGET_PROP_ACTIVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_VERTICAL",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_VERTICAL, "WIDGET_PROP_VERTICAL", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_SHOW_TEXT",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_SHOW_TEXT, "WIDGET_PROP_SHOW_TEXT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_XOFFSET",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_XOFFSET, "WIDGET_PROP_XOFFSET", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_YOFFSET",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_YOFFSET, "WIDGET_PROP_YOFFSET", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ALIGN_V",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_ALIGN_V, "WIDGET_PROP_ALIGN_V", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ALIGN_H",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_ALIGN_H, "WIDGET_PROP_ALIGN_H", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_AUTO_PLAY",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_AUTO_PLAY, "WIDGET_PROP_AUTO_PLAY", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_LOOP",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_LOOP, "WIDGET_PROP_LOOP", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_AUTO_FIX",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_AUTO_FIX, "WIDGET_PROP_AUTO_FIX", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_X_MIN",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_X_MIN, "WIDGET_PROP_X_MIN", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_X_MAX",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_X_MAX, "WIDGET_PROP_X_MAX", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_Y_MIN",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_Y_MIN, "WIDGET_PROP_Y_MIN", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_Y_MAX",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_Y_MAX, "WIDGET_PROP_Y_MAX", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MAX",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_MAX, "WIDGET_PROP_MAX", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ROW",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_ROW, "WIDGET_PROP_ROW", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_STATE_FOR_STYLE",
      JS_NewCFunction(ctx, get_WIDGET_PROP_STATE_FOR_STYLE, "WIDGET_PROP_STATE_FOR_STYLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_THEME",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_THEME, "WIDGET_PROP_THEME", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_STAGE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_STAGE, "WIDGET_PROP_STAGE", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_IMAGE_MANAGER",
      JS_NewCFunction(ctx, get_WIDGET_PROP_IMAGE_MANAGER, "WIDGET_PROP_IMAGE_MANAGER", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_ASSETS_MANAGER",
      JS_NewCFunction(ctx, get_WIDGET_PROP_ASSETS_MANAGER, "WIDGET_PROP_ASSETS_MANAGER", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_LOCALE_INFO",
      JS_NewCFunction(ctx, get_WIDGET_PROP_LOCALE_INFO, "WIDGET_PROP_LOCALE_INFO", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_FONT_MANAGER",
      JS_NewCFunction(ctx, get_WIDGET_PROP_FONT_MANAGER, "WIDGET_PROP_FONT_MANAGER", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_THEME_OBJ",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_THEME_OBJ, "WIDGET_PROP_THEME_OBJ", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_DEFAULT_THEME_OBJ",
      JS_NewCFunction(ctx, get_WIDGET_PROP_DEFAULT_THEME_OBJ, "WIDGET_PROP_DEFAULT_THEME_OBJ", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ITEM_WIDTH",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_ITEM_WIDTH, "WIDGET_PROP_ITEM_WIDTH", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_ITEM_HEIGHT",
      JS_NewCFunction(ctx, get_WIDGET_PROP_ITEM_HEIGHT, "WIDGET_PROP_ITEM_HEIGHT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_DEFAULT_ITEM_HEIGHT",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT,
                                    "WIDGET_PROP_DEFAULT_ITEM_HEIGHT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_XSLIDABLE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_XSLIDABLE, "WIDGET_PROP_XSLIDABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_YSLIDABLE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_YSLIDABLE, "WIDGET_PROP_YSLIDABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_REPEAT",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_REPEAT, "WIDGET_PROP_REPEAT", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_ENABLE_LONG_PRESS",
      JS_NewCFunction(ctx, get_WIDGET_PROP_ENABLE_LONG_PRESS, "WIDGET_PROP_ENABLE_LONG_PRESS", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ANIMATABLE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_ANIMATABLE, "WIDGET_PROP_ANIMATABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_AUTO_HIDE_SCROLL_BAR",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR,
                                    "WIDGET_PROP_AUTO_HIDE_SCROLL_BAR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_IMAGE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_IMAGE, "WIDGET_PROP_IMAGE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_FORMAT",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_FORMAT, "WIDGET_PROP_FORMAT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_DRAW_TYPE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_DRAW_TYPE, "WIDGET_PROP_DRAW_TYPE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_SELECTABLE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_SELECTABLE, "WIDGET_PROP_SELECTABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_CLICKABLE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_CLICKABLE, "WIDGET_PROP_CLICKABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_SCALE_X",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_SCALE_X, "WIDGET_PROP_SCALE_X", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_SCALE_Y",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_SCALE_Y, "WIDGET_PROP_SCALE_Y", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ANCHOR_X",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_ANCHOR_X, "WIDGET_PROP_ANCHOR_X", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ANCHOR_Y",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_ANCHOR_Y, "WIDGET_PROP_ANCHOR_Y", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ROTATION",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_ROTATION, "WIDGET_PROP_ROTATION", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_COMPACT",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_COMPACT, "WIDGET_PROP_COMPACT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_SCROLLABLE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_SCROLLABLE, "WIDGET_PROP_SCROLLABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ICON",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_ICON, "WIDGET_PROP_ICON", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_OPTIONS",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_OPTIONS, "WIDGET_PROP_OPTIONS", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_SELECTED",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_SELECTED, "WIDGET_PROP_SELECTED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_CHECKED",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_CHECKED, "WIDGET_PROP_CHECKED", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_ACTIVE_ICON",
      JS_NewCFunction(ctx, get_WIDGET_PROP_ACTIVE_ICON, "WIDGET_PROP_ACTIVE_ICON", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_OPEN_WINDOW",
      JS_NewCFunction(ctx, get_WIDGET_PROP_OPEN_WINDOW, "WIDGET_PROP_OPEN_WINDOW", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_SELECTED_INDEX",
      JS_NewCFunction(ctx, get_WIDGET_PROP_SELECTED_INDEX, "WIDGET_PROP_SELECTED_INDEX", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_CLOSE_WHEN_CLICK",
      JS_NewCFunction(ctx, get_WIDGET_PROP_CLOSE_WHEN_CLICK, "WIDGET_PROP_CLOSE_WHEN_CLICK", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE,
                                    "WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_LINE_GAP",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_LINE_GAP, "WIDGET_PROP_LINE_GAP", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_BG_COLOR",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_BG_COLOR, "WIDGET_PROP_BG_COLOR", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_BORDER_COLOR",
      JS_NewCFunction(ctx, get_WIDGET_PROP_BORDER_COLOR, "WIDGET_PROP_BORDER_COLOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_DELAY",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_DELAY, "WIDGET_PROP_DELAY", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_IS_KEYBOARD",
      JS_NewCFunction(ctx, get_WIDGET_PROP_IS_KEYBOARD, "WIDGET_PROP_IS_KEYBOARD", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_FOCUSED",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_FOCUSED, "WIDGET_PROP_FOCUSED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_FOCUS",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_FOCUS, "WIDGET_PROP_FOCUS", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_FOCUSABLE",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_FOCUSABLE, "WIDGET_PROP_FOCUSABLE", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_PROP_WITH_FOCUS_STATE",
      JS_NewCFunction(ctx, get_WIDGET_PROP_WITH_FOCUS_STATE, "WIDGET_PROP_WITH_FOCUS_STATE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MOVE_FOCUS_NEXT_KEY",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY,
                                    "WIDGET_PROP_MOVE_FOCUS_NEXT_KEY", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MOVE_FOCUS_PREV_KEY",
                    JS_NewCFunction(ctx, get_WIDGET_PROP_MOVE_FOCUS_PREV_KEY,
                                    "WIDGET_PROP_MOVE_FOCUS_PREV_KEY", 1));

  return RET_OK;
}

JSValue get_WIDGET_TYPE_NONE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_NONE);
}

JSValue get_WIDGET_TYPE_WINDOW_MANAGER(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_WINDOW_MANAGER);
}

JSValue get_WIDGET_TYPE_NORMAL_WINDOW(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_NORMAL_WINDOW);
}

JSValue get_WIDGET_TYPE_OVERLAY(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_OVERLAY);
}

JSValue get_WIDGET_TYPE_TOOL_BAR(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_TOOL_BAR);
}

JSValue get_WIDGET_TYPE_DIALOG(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_DIALOG);
}

JSValue get_WIDGET_TYPE_POPUP(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_POPUP);
}

JSValue get_WIDGET_TYPE_SYSTEM_BAR(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_SYSTEM_BAR);
}

JSValue get_WIDGET_TYPE_SPRITE(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_SPRITE);
}

JSValue get_WIDGET_TYPE_KEYBOARD(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_KEYBOARD);
}

JSValue get_WIDGET_TYPE_DND(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_DND);
}

JSValue get_WIDGET_TYPE_LABEL(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_LABEL);
}

JSValue get_WIDGET_TYPE_BUTTON(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_BUTTON);
}

JSValue get_WIDGET_TYPE_IMAGE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_IMAGE);
}

JSValue get_WIDGET_TYPE_EDIT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_EDIT);
}

JSValue get_WIDGET_TYPE_PROGRESS_BAR(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_PROGRESS_BAR);
}

JSValue get_WIDGET_TYPE_GROUP_BOX(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_GROUP_BOX);
}

JSValue get_WIDGET_TYPE_CHECK_BUTTON(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_CHECK_BUTTON);
}

JSValue get_WIDGET_TYPE_RADIO_BUTTON(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_RADIO_BUTTON);
}

JSValue get_WIDGET_TYPE_DIALOG_TITLE(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_DIALOG_TITLE);
}

JSValue get_WIDGET_TYPE_DIALOG_CLIENT(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_DIALOG_CLIENT);
}

JSValue get_WIDGET_TYPE_SLIDER(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_SLIDER);
}

JSValue get_WIDGET_TYPE_VIEW(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_VIEW);
}

JSValue get_WIDGET_TYPE_COMBO_BOX(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_COMBO_BOX);
}

JSValue get_WIDGET_TYPE_COMBO_BOX_ITEM(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_COMBO_BOX_ITEM);
}

JSValue get_WIDGET_TYPE_SLIDE_VIEW(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_SLIDE_VIEW);
}

JSValue get_WIDGET_TYPE_SLIDE_INDICATOR(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_SLIDE_INDICATOR);
}

JSValue get_WIDGET_TYPE_SLIDE_INDICATOR_ARC(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_SLIDE_INDICATOR_ARC);
}

JSValue get_WIDGET_TYPE_PAGES(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_PAGES);
}

JSValue get_WIDGET_TYPE_TAB_BUTTON(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_TAB_BUTTON);
}

JSValue get_WIDGET_TYPE_TAB_CONTROL(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_TAB_CONTROL);
}

JSValue get_WIDGET_TYPE_TAB_BUTTON_GROUP(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_TAB_BUTTON_GROUP);
}

JSValue get_WIDGET_TYPE_BUTTON_GROUP(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_BUTTON_GROUP);
}

JSValue get_WIDGET_TYPE_CANDIDATES(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_CANDIDATES);
}

JSValue get_WIDGET_TYPE_SPIN_BOX(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_SPIN_BOX);
}

JSValue get_WIDGET_TYPE_DRAGGER(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_DRAGGER);
}

JSValue get_WIDGET_TYPE_SCROLL_BAR(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_SCROLL_BAR);
}

JSValue get_WIDGET_TYPE_SCROLL_BAR_DESKTOP(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_SCROLL_BAR_DESKTOP);
}

JSValue get_WIDGET_TYPE_SCROLL_BAR_MOBILE(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_SCROLL_BAR_MOBILE);
}

JSValue get_WIDGET_TYPE_SCROLL_VIEW(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_SCROLL_VIEW);
}

JSValue get_WIDGET_TYPE_LIST_VIEW(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_LIST_VIEW);
}

JSValue get_WIDGET_TYPE_LIST_VIEW_H(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_LIST_VIEW_H);
}

JSValue get_WIDGET_TYPE_LIST_ITEM(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_LIST_ITEM);
}

JSValue get_WIDGET_TYPE_COLOR_PICKER(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_COLOR_PICKER);
}

JSValue get_WIDGET_TYPE_COLOR_COMPONENT(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_COLOR_COMPONENT);
}

JSValue get_WIDGET_TYPE_COLOR_TILE(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_COLOR_TILE);
}

JSValue get_WIDGET_TYPE_RICH_TEXT(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_RICH_TEXT);
}

JSValue get_WIDGET_TYPE_APP_BAR(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_APP_BAR);
}

JSValue get_WIDGET_TYPE_GRID(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_GRID);
}

JSValue get_WIDGET_TYPE_GRID_ITEM(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_GRID_ITEM);
}

JSValue get_WIDGET_TYPE_ROW(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_ROW);
}

JSValue get_WIDGET_TYPE_COLUMN(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_COLUMN);
}

JSValue get_WIDGET_TYPE_CALIBRATION_WIN(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_TYPE_CALIBRATION_WIN);
}

ret_t widget_type_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_NONE",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_NONE, "WIDGET_TYPE_NONE", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_WINDOW_MANAGER",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_WINDOW_MANAGER, "WIDGET_TYPE_WINDOW_MANAGER", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_NORMAL_WINDOW",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_NORMAL_WINDOW, "WIDGET_TYPE_NORMAL_WINDOW", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_OVERLAY",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_OVERLAY, "WIDGET_TYPE_OVERLAY", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_TOOL_BAR",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_TOOL_BAR, "WIDGET_TYPE_TOOL_BAR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_DIALOG",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_DIALOG, "WIDGET_TYPE_DIALOG", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_POPUP",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_POPUP, "WIDGET_TYPE_POPUP", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SYSTEM_BAR",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_SYSTEM_BAR, "WIDGET_TYPE_SYSTEM_BAR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SPRITE",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_SPRITE, "WIDGET_TYPE_SPRITE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_KEYBOARD",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_KEYBOARD, "WIDGET_TYPE_KEYBOARD", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_DND",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_DND, "WIDGET_TYPE_DND", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_LABEL",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_LABEL, "WIDGET_TYPE_LABEL", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_BUTTON",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_BUTTON, "WIDGET_TYPE_BUTTON", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_IMAGE",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_IMAGE, "WIDGET_TYPE_IMAGE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_EDIT",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_EDIT, "WIDGET_TYPE_EDIT", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_PROGRESS_BAR",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_PROGRESS_BAR, "WIDGET_TYPE_PROGRESS_BAR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_GROUP_BOX",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_GROUP_BOX, "WIDGET_TYPE_GROUP_BOX", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_CHECK_BUTTON",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_CHECK_BUTTON, "WIDGET_TYPE_CHECK_BUTTON", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_RADIO_BUTTON",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_RADIO_BUTTON, "WIDGET_TYPE_RADIO_BUTTON", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_DIALOG_TITLE",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_DIALOG_TITLE, "WIDGET_TYPE_DIALOG_TITLE", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_DIALOG_CLIENT",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_DIALOG_CLIENT, "WIDGET_TYPE_DIALOG_CLIENT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SLIDER",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_SLIDER, "WIDGET_TYPE_SLIDER", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_VIEW",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_VIEW, "WIDGET_TYPE_VIEW", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_COMBO_BOX",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_COMBO_BOX, "WIDGET_TYPE_COMBO_BOX", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_COMBO_BOX_ITEM",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_COMBO_BOX_ITEM, "WIDGET_TYPE_COMBO_BOX_ITEM", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SLIDE_VIEW",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_SLIDE_VIEW, "WIDGET_TYPE_SLIDE_VIEW", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_SLIDE_INDICATOR",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_SLIDE_INDICATOR, "WIDGET_TYPE_SLIDE_INDICATOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SLIDE_INDICATOR_ARC",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_SLIDE_INDICATOR_ARC,
                                    "WIDGET_TYPE_SLIDE_INDICATOR_ARC", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_PAGES",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_PAGES, "WIDGET_TYPE_PAGES", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_TAB_BUTTON",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_TAB_BUTTON, "WIDGET_TYPE_TAB_BUTTON", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_TAB_CONTROL",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_TAB_CONTROL, "WIDGET_TYPE_TAB_CONTROL", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_TAB_BUTTON_GROUP",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_TAB_BUTTON_GROUP, "WIDGET_TYPE_TAB_BUTTON_GROUP", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_BUTTON_GROUP",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_BUTTON_GROUP, "WIDGET_TYPE_BUTTON_GROUP", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_CANDIDATES",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_CANDIDATES, "WIDGET_TYPE_CANDIDATES", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SPIN_BOX",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_SPIN_BOX, "WIDGET_TYPE_SPIN_BOX", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_DRAGGER",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_DRAGGER, "WIDGET_TYPE_DRAGGER", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SCROLL_BAR",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_SCROLL_BAR, "WIDGET_TYPE_SCROLL_BAR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SCROLL_BAR_DESKTOP",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_SCROLL_BAR_DESKTOP,
                                    "WIDGET_TYPE_SCROLL_BAR_DESKTOP", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_SCROLL_BAR_MOBILE",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_SCROLL_BAR_MOBILE, "WIDGET_TYPE_SCROLL_BAR_MOBILE", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_SCROLL_VIEW",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_SCROLL_VIEW, "WIDGET_TYPE_SCROLL_VIEW", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_LIST_VIEW",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_LIST_VIEW, "WIDGET_TYPE_LIST_VIEW", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_LIST_VIEW_H",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_LIST_VIEW_H, "WIDGET_TYPE_LIST_VIEW_H", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_LIST_ITEM",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_LIST_ITEM, "WIDGET_TYPE_LIST_ITEM", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_COLOR_PICKER",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_COLOR_PICKER, "WIDGET_TYPE_COLOR_PICKER", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_COLOR_COMPONENT",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_COLOR_COMPONENT, "WIDGET_TYPE_COLOR_COMPONENT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_COLOR_TILE",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_COLOR_TILE, "WIDGET_TYPE_COLOR_TILE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_RICH_TEXT",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_RICH_TEXT, "WIDGET_TYPE_RICH_TEXT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_APP_BAR",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_APP_BAR, "WIDGET_TYPE_APP_BAR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_GRID",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_GRID, "WIDGET_TYPE_GRID", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_GRID_ITEM",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_GRID_ITEM, "WIDGET_TYPE_GRID_ITEM", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_ROW",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_ROW, "WIDGET_TYPE_ROW", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_COLUMN",
                    JS_NewCFunction(ctx, get_WIDGET_TYPE_COLUMN, "WIDGET_TYPE_COLUMN", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_TYPE_CALIBRATION_WIN",
      JS_NewCFunction(ctx, get_WIDGET_TYPE_CALIBRATION_WIN, "WIDGET_TYPE_CALIBRATION_WIN", 1));

  return RET_OK;
}

JSValue get_WINDOW_STAGE_NONE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, WINDOW_STAGE_NONE);
}

JSValue get_WINDOW_STAGE_CREATED(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return JS_NewInt32(ctx, WINDOW_STAGE_CREATED);
}

JSValue get_WINDOW_STAGE_OPENED(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, WINDOW_STAGE_OPENED);
}

JSValue get_WINDOW_STAGE_CLOSED(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, WINDOW_STAGE_CLOSED);
}

ret_t window_stage_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "WINDOW_STAGE_NONE",
                    JS_NewCFunction(ctx, get_WINDOW_STAGE_NONE, "WINDOW_STAGE_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WINDOW_STAGE_CREATED",
                    JS_NewCFunction(ctx, get_WINDOW_STAGE_CREATED, "WINDOW_STAGE_CREATED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WINDOW_STAGE_OPENED",
                    JS_NewCFunction(ctx, get_WINDOW_STAGE_OPENED, "WINDOW_STAGE_OPENED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WINDOW_STAGE_CLOSED",
                    JS_NewCFunction(ctx, get_WINDOW_STAGE_CLOSED, "WINDOW_STAGE_CLOSED", 1));

  return RET_OK;
}

JSValue get_WINDOW_CLOSABLE_YES(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return JS_NewInt32(ctx, WINDOW_CLOSABLE_YES);
}

JSValue get_WINDOW_CLOSABLE_NO(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, WINDOW_CLOSABLE_NO);
}

JSValue get_WINDOW_CLOSABLE_CONFIRM(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  return JS_NewInt32(ctx, WINDOW_CLOSABLE_CONFIRM);
}

ret_t window_closable_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "WINDOW_CLOSABLE_YES",
                    JS_NewCFunction(ctx, get_WINDOW_CLOSABLE_YES, "WINDOW_CLOSABLE_YES", 1));
  JS_SetPropertyStr(ctx, global_obj, "WINDOW_CLOSABLE_NO",
                    JS_NewCFunction(ctx, get_WINDOW_CLOSABLE_NO, "WINDOW_CLOSABLE_NO", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WINDOW_CLOSABLE_CONFIRM",
      JS_NewCFunction(ctx, get_WINDOW_CLOSABLE_CONFIRM, "WINDOW_CLOSABLE_CONFIRM", 1));

  return RET_OK;
}

JSValue get_WIDGET_STATE_NONE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_NONE);
}

JSValue get_WIDGET_STATE_NORMAL(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_NORMAL);
}

JSValue get_WIDGET_STATE_PRESSED(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_PRESSED);
}

JSValue get_WIDGET_STATE_OVER(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_OVER);
}

JSValue get_WIDGET_STATE_DISABLE(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_DISABLE);
}

JSValue get_WIDGET_STATE_FOCUSED(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_FOCUSED);
}

JSValue get_WIDGET_STATE_CHECKED(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_CHECKED);
}

JSValue get_WIDGET_STATE_UNCHECKED(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_UNCHECKED);
}

JSValue get_WIDGET_STATE_EMPTY(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_EMPTY);
}

JSValue get_WIDGET_STATE_EMPTY_FOCUS(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_EMPTY_FOCUS);
}

JSValue get_WIDGET_STATE_ERROR(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_ERROR);
}

JSValue get_WIDGET_STATE_SELECTED(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_SELECTED);
}

JSValue get_WIDGET_STATE_NORMAL_OF_CHECKED(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_NORMAL_OF_CHECKED);
}

JSValue get_WIDGET_STATE_PRESSED_OF_CHECKED(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_PRESSED_OF_CHECKED);
}

JSValue get_WIDGET_STATE_OVER_OF_CHECKED(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_OVER_OF_CHECKED);
}

JSValue get_WIDGET_STATE_FOCUSED_OF_CHECKED(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_FOCUSED_OF_CHECKED);
}

JSValue get_WIDGET_STATE_NORMAL_OF_ACTIVE(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_NORMAL_OF_ACTIVE);
}

JSValue get_WIDGET_STATE_PRESSED_OF_ACTIVE(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_PRESSED_OF_ACTIVE);
}

JSValue get_WIDGET_STATE_OVER_OF_ACTIVE(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_OVER_OF_ACTIVE);
}

JSValue get_WIDGET_STATE_FOCUSED_OF_ACTIVE(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  return quickjs_create_string(ctx, WIDGET_STATE_FOCUSED_OF_ACTIVE);
}

ret_t widget_state_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_NONE",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_NONE, "WIDGET_STATE_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_NORMAL",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_NORMAL, "WIDGET_STATE_NORMAL", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_PRESSED",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_PRESSED, "WIDGET_STATE_PRESSED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_OVER",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_OVER, "WIDGET_STATE_OVER", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_DISABLE",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_DISABLE, "WIDGET_STATE_DISABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_FOCUSED",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_FOCUSED, "WIDGET_STATE_FOCUSED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_CHECKED",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_CHECKED, "WIDGET_STATE_CHECKED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_UNCHECKED",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_UNCHECKED, "WIDGET_STATE_UNCHECKED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_EMPTY",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_EMPTY, "WIDGET_STATE_EMPTY", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_STATE_EMPTY_FOCUS",
      JS_NewCFunction(ctx, get_WIDGET_STATE_EMPTY_FOCUS, "WIDGET_STATE_EMPTY_FOCUS", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_ERROR",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_ERROR, "WIDGET_STATE_ERROR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_SELECTED",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_SELECTED, "WIDGET_STATE_SELECTED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_NORMAL_OF_CHECKED",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_NORMAL_OF_CHECKED,
                                    "WIDGET_STATE_NORMAL_OF_CHECKED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_PRESSED_OF_CHECKED",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_PRESSED_OF_CHECKED,
                                    "WIDGET_STATE_PRESSED_OF_CHECKED", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_STATE_OVER_OF_CHECKED",
      JS_NewCFunction(ctx, get_WIDGET_STATE_OVER_OF_CHECKED, "WIDGET_STATE_OVER_OF_CHECKED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_FOCUSED_OF_CHECKED",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_FOCUSED_OF_CHECKED,
                                    "WIDGET_STATE_FOCUSED_OF_CHECKED", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_STATE_NORMAL_OF_ACTIVE",
      JS_NewCFunction(ctx, get_WIDGET_STATE_NORMAL_OF_ACTIVE, "WIDGET_STATE_NORMAL_OF_ACTIVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_PRESSED_OF_ACTIVE",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_PRESSED_OF_ACTIVE,
                                    "WIDGET_STATE_PRESSED_OF_ACTIVE", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "WIDGET_STATE_OVER_OF_ACTIVE",
      JS_NewCFunction(ctx, get_WIDGET_STATE_OVER_OF_ACTIVE, "WIDGET_STATE_OVER_OF_ACTIVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_FOCUSED_OF_ACTIVE",
                    JS_NewCFunction(ctx, get_WIDGET_STATE_FOCUSED_OF_ACTIVE,
                                    "WIDGET_STATE_FOCUSED_OF_ACTIVE", 1));

  return RET_OK;
}

JSValue wrap_widget_count_children(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)widget_count_children(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_get_child(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t index = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (widget_t*)widget_get_child(widget, index);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_widget_index_of(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)widget_index_of(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_move(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)widget_move(widget, x, y);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_resize(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[1]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)widget_resize(widget, w, h);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_move_resize(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (ret_t)widget_move_resize(widget, x, y, w, h);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_value(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)widget_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_animate_value_to(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    uint32_t duration = (uint32_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)widget_animate_value_to(widget, value, duration);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_add_value(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t delta = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)widget_add_value(widget, delta);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_use_style(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* style = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_use_style(widget, style);
    JS_FreeCString(ctx, style);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_text_utf8(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* text = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_text_utf8(widget, text);
    JS_FreeCString(ctx, text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_tr_text(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* text = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_tr_text(widget, text);
    JS_FreeCString(ctx, text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_get_value(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)widget_get_value(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_get_text(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    wchar_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (wchar_t*)widget_get_text(widget);

    jret = quickjs_create_string_from_wstring(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_name(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_name(widget, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_cursor(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* cursor = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_cursor(widget, cursor);
    JS_FreeCString(ctx, cursor);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_animation(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* animation = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_animation(widget, animation);
    JS_FreeCString(ctx, animation);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_create_animator(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* animation = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_create_animator(widget, animation);
    JS_FreeCString(ctx, animation);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_start_animator(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_start_animator(widget, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_animator_time_scale(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    float_t time_scale = (float_t)quickjs_get_number_value(ctx, argv[2]);
    ret = (ret_t)widget_set_animator_time_scale(widget, name, time_scale);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_pause_animator(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_pause_animator(widget, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_find_animator(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    widget_animator_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (widget_animator_t*)widget_find_animator(widget, name);
    JS_FreeCString(ctx, name);

    jret = quickjs_create_pointer(ctx, ret, "widget_animator_t*");
  }
  return jret;
}

JSValue wrap_widget_stop_animator(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_stop_animator(widget, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_destroy_animator(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_destroy_animator(widget, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_enable(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t enable = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_enable(widget, enable);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_floating(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t floating = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_floating(widget, floating);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_focused(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t focused = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_focused(widget, focused);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_child(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (widget_t*)widget_child(widget, name);
    JS_FreeCString(ctx, name);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_widget_lookup(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    bool_t recursive = (bool_t)quickjs_get_boolean_value(ctx, argv[2]);
    ret = (widget_t*)widget_lookup(widget, name, recursive);
    JS_FreeCString(ctx, name);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_widget_lookup_by_type(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* type = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    bool_t recursive = (bool_t)quickjs_get_boolean_value(ctx, argv[2]);
    ret = (widget_t*)widget_lookup_by_type(widget, type, recursive);
    JS_FreeCString(ctx, type);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_widget_set_visible(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t visible = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    bool_t recursive = (bool_t)quickjs_get_boolean_value(ctx, argv[2]);
    ret = (ret_t)widget_set_visible(widget, visible, recursive);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_visible_only(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t visible = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_visible_only(widget, visible);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_sensitive(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t sensitive = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)widget_set_sensitive(widget, sensitive);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_off(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t id = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)widget_off(widget, id);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_invalidate_force(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    rect_t* r = (rect_t*)quickjs_get_pointer(ctx, argv[1], "rect_t*");
    ret = (ret_t)widget_invalidate_force(widget, r);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_prop_str(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    const char* v = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)widget_set_prop_str(widget, name, v);
    JS_FreeCString(ctx, name);
    JS_FreeCString(ctx, v);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_get_prop_str(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    const char* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    const char* defval = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (const char*)widget_get_prop_str(widget, name, defval);
    JS_FreeCString(ctx, name);
    JS_FreeCString(ctx, defval);

    jret = quickjs_create_string(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_prop_int(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    int32_t v = (int32_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)widget_set_prop_int(widget, name, v);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_get_prop_int(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    int32_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    int32_t defval = (int32_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (int32_t)widget_get_prop_int(widget, name, defval);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_prop_bool(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    bool_t v = (bool_t)quickjs_get_boolean_value(ctx, argv[2]);
    ret = (ret_t)widget_set_prop_bool(widget, name, v);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_get_prop_bool(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    bool_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    bool_t defval = (bool_t)quickjs_get_boolean_value(ctx, argv[2]);
    ret = (bool_t)widget_get_prop_bool(widget, name, defval);
    JS_FreeCString(ctx, name);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_is_window_opened(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_window_opened(widget);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_is_window(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_window(widget);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_is_designing_window(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_designing_window(widget);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_is_window_manager(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)widget_is_window_manager(widget);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_get_window(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)widget_get_window(widget);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_widget_get_window_manager(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)widget_get_window_manager(widget);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_widget_get_type(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    char* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (char*)widget_get_type(widget);

    jret = quickjs_create_string(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_clone(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[1], "widget_t*");
    ret = (widget_t*)widget_clone(widget, parent);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_widget_equal(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    bool_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    widget_t* other = (widget_t*)quickjs_get_pointer(ctx, argv[1], "widget_t*");
    ret = (bool_t)widget_equal(widget, other);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)widget_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_widget_destroy(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_destroy(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_layout(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)widget_layout(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_self_layout(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* params = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_self_layout(widget, params);
    JS_FreeCString(ctx, params);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_children_layout(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* params = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)widget_set_children_layout(widget, params);
    JS_FreeCString(ctx, params);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_self_layout_params(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* x = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    const char* y = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    const char* w = (const char*)quickjs_get_utf8_string(ctx, argv[3]);
    const char* h = (const char*)quickjs_get_utf8_string(ctx, argv[4]);
    ret = (ret_t)widget_set_self_layout_params(widget, x, y, w, h);
    JS_FreeCString(ctx, x);
    JS_FreeCString(ctx, y);
    JS_FreeCString(ctx, w);
    JS_FreeCString(ctx, h);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_style_int(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* state_and_name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)widget_set_style_int(widget, state_and_name, value);
    JS_FreeCString(ctx, state_and_name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_style_str(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* state_and_name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    const char* value = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)widget_set_style_str(widget, state_and_name, value);
    JS_FreeCString(ctx, state_and_name);
    JS_FreeCString(ctx, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_set_style_color(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* state_and_name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    uint32_t value = (uint32_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)widget_set_style_color(widget, state_and_name, value);
    JS_FreeCString(ctx, state_and_name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_widget_t_get_prop_x(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = JS_NewInt32(ctx, obj->x);
  return jret;
}

JSValue wrap_widget_t_get_prop_y(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = JS_NewInt32(ctx, obj->y);
  return jret;
}

JSValue wrap_widget_t_get_prop_w(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = JS_NewInt32(ctx, obj->w);
  return jret;
}

JSValue wrap_widget_t_get_prop_h(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = JS_NewInt32(ctx, obj->h);
  return jret;
}

JSValue wrap_widget_t_get_prop_name(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = quickjs_create_string(ctx, obj->name);
  return jret;
}

JSValue wrap_widget_t_get_prop_tr_text(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = quickjs_create_string(ctx, obj->tr_text);
  return jret;
}

JSValue wrap_widget_t_get_prop_style(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = quickjs_create_string(ctx, obj->style);
  return jret;
}

JSValue wrap_widget_t_get_prop_animation(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = quickjs_create_string(ctx, obj->animation);
  return jret;
}

JSValue wrap_widget_t_get_prop_enable(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = JS_NewBool(ctx, obj->enable);
  return jret;
}

JSValue wrap_widget_t_set_prop_visible(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
  bool_t visible = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
  obj->visible = visible;
  return JS_NewInt32(ctx, RET_OK);
};

JSValue wrap_widget_t_get_prop_visible(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = JS_NewBool(ctx, obj->visible);
  return jret;
}

JSValue wrap_widget_t_set_prop_sensitive(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
  bool_t sensitive = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
  obj->sensitive = sensitive;
  return JS_NewInt32(ctx, RET_OK);
};

JSValue wrap_widget_t_get_prop_sensitive(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = JS_NewBool(ctx, obj->sensitive);
  return jret;
}

JSValue wrap_widget_t_set_prop_focusable(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focusable = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
  obj->focusable = focusable;
  return JS_NewInt32(ctx, RET_OK);
};

JSValue wrap_widget_t_get_prop_focusable(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = JS_NewBool(ctx, obj->focusable);
  return jret;
}

JSValue wrap_widget_t_set_prop_with_focus_state(JSContext* ctx, JSValueConst this_val, int argc,
                                                JSValueConst* argv) {
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
  bool_t with_focus_state = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
  obj->with_focus_state = with_focus_state;
  return JS_NewInt32(ctx, RET_OK);
};

JSValue wrap_widget_t_get_prop_with_focus_state(JSContext* ctx, JSValueConst this_val, int argc,
                                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = JS_NewBool(ctx, obj->with_focus_state);
  return jret;
}

JSValue wrap_widget_t_get_prop_floating(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  widget_t* obj = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");

  jret = JS_NewBool(ctx, obj->floating);
  return jret;
}

ret_t widget_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "widget_count_children",
                    JS_NewCFunction(ctx, wrap_widget_count_children, "widget_count_children", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_get_child",
                    JS_NewCFunction(ctx, wrap_widget_get_child, "widget_get_child", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_index_of",
                    JS_NewCFunction(ctx, wrap_widget_index_of, "widget_index_of", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_move",
                    JS_NewCFunction(ctx, wrap_widget_move, "widget_move", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_resize",
                    JS_NewCFunction(ctx, wrap_widget_resize, "widget_resize", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_move_resize",
                    JS_NewCFunction(ctx, wrap_widget_move_resize, "widget_move_resize", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_value",
                    JS_NewCFunction(ctx, wrap_widget_set_value, "widget_set_value", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_animate_value_to",
      JS_NewCFunction(ctx, wrap_widget_animate_value_to, "widget_animate_value_to", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_add_value",
                    JS_NewCFunction(ctx, wrap_widget_add_value, "widget_add_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_use_style",
                    JS_NewCFunction(ctx, wrap_widget_use_style, "widget_use_style", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_text_utf8",
                    JS_NewCFunction(ctx, wrap_widget_set_text_utf8, "widget_set_text_utf8", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_tr_text",
                    JS_NewCFunction(ctx, wrap_widget_set_tr_text, "widget_set_tr_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_get_value",
                    JS_NewCFunction(ctx, wrap_widget_get_value, "widget_get_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_get_text",
                    JS_NewCFunction(ctx, wrap_widget_get_text, "widget_get_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_name",
                    JS_NewCFunction(ctx, wrap_widget_set_name, "widget_set_name", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_cursor",
                    JS_NewCFunction(ctx, wrap_widget_set_cursor, "widget_set_cursor", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_animation",
                    JS_NewCFunction(ctx, wrap_widget_set_animation, "widget_set_animation", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_create_animator",
                    JS_NewCFunction(ctx, wrap_widget_create_animator, "widget_create_animator", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_start_animator",
                    JS_NewCFunction(ctx, wrap_widget_start_animator, "widget_start_animator", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_animator_time_scale",
                    JS_NewCFunction(ctx, wrap_widget_set_animator_time_scale,
                                    "widget_set_animator_time_scale", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_pause_animator",
                    JS_NewCFunction(ctx, wrap_widget_pause_animator, "widget_pause_animator", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_find_animator",
                    JS_NewCFunction(ctx, wrap_widget_find_animator, "widget_find_animator", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_stop_animator",
                    JS_NewCFunction(ctx, wrap_widget_stop_animator, "widget_stop_animator", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_destroy_animator",
      JS_NewCFunction(ctx, wrap_widget_destroy_animator, "widget_destroy_animator", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_enable",
                    JS_NewCFunction(ctx, wrap_widget_set_enable, "widget_set_enable", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_floating",
                    JS_NewCFunction(ctx, wrap_widget_set_floating, "widget_set_floating", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_focused",
                    JS_NewCFunction(ctx, wrap_widget_set_focused, "widget_set_focused", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_child",
                    JS_NewCFunction(ctx, wrap_widget_child, "widget_child", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_lookup",
                    JS_NewCFunction(ctx, wrap_widget_lookup, "widget_lookup", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_lookup_by_type",
                    JS_NewCFunction(ctx, wrap_widget_lookup_by_type, "widget_lookup_by_type", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_visible",
                    JS_NewCFunction(ctx, wrap_widget_set_visible, "widget_set_visible", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_set_visible_only",
      JS_NewCFunction(ctx, wrap_widget_set_visible_only, "widget_set_visible_only", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_sensitive",
                    JS_NewCFunction(ctx, wrap_widget_set_sensitive, "widget_set_sensitive", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_on",
                    JS_NewCFunction(ctx, wrap_widget_on, "widget_on", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_off",
                    JS_NewCFunction(ctx, wrap_widget_off, "widget_off", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_invalidate_force",
      JS_NewCFunction(ctx, wrap_widget_invalidate_force, "widget_invalidate_force", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_prop_str",
                    JS_NewCFunction(ctx, wrap_widget_set_prop_str, "widget_set_prop_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_get_prop_str",
                    JS_NewCFunction(ctx, wrap_widget_get_prop_str, "widget_get_prop_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_prop_int",
                    JS_NewCFunction(ctx, wrap_widget_set_prop_int, "widget_set_prop_int", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_get_prop_int",
                    JS_NewCFunction(ctx, wrap_widget_get_prop_int, "widget_get_prop_int", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_prop_bool",
                    JS_NewCFunction(ctx, wrap_widget_set_prop_bool, "widget_set_prop_bool", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_get_prop_bool",
                    JS_NewCFunction(ctx, wrap_widget_get_prop_bool, "widget_get_prop_bool", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_is_window_opened",
      JS_NewCFunction(ctx, wrap_widget_is_window_opened, "widget_is_window_opened", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_is_window",
                    JS_NewCFunction(ctx, wrap_widget_is_window, "widget_is_window", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_is_designing_window",
      JS_NewCFunction(ctx, wrap_widget_is_designing_window, "widget_is_designing_window", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_is_window_manager",
      JS_NewCFunction(ctx, wrap_widget_is_window_manager, "widget_is_window_manager", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_foreach",
                    JS_NewCFunction(ctx, wrap_widget_foreach, "widget_foreach", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_get_window",
                    JS_NewCFunction(ctx, wrap_widget_get_window, "widget_get_window", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_get_window_manager",
      JS_NewCFunction(ctx, wrap_widget_get_window_manager, "widget_get_window_manager", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_get_type",
                    JS_NewCFunction(ctx, wrap_widget_get_type, "widget_get_type", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_clone",
                    JS_NewCFunction(ctx, wrap_widget_clone, "widget_clone", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_equal",
                    JS_NewCFunction(ctx, wrap_widget_equal, "widget_equal", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_cast",
                    JS_NewCFunction(ctx, wrap_widget_cast, "widget_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_destroy",
                    JS_NewCFunction(ctx, wrap_widget_destroy, "widget_destroy", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_layout",
                    JS_NewCFunction(ctx, wrap_widget_layout, "widget_layout", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_self_layout",
                    JS_NewCFunction(ctx, wrap_widget_set_self_layout, "widget_set_self_layout", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_set_children_layout",
      JS_NewCFunction(ctx, wrap_widget_set_children_layout, "widget_set_children_layout", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_set_self_layout_params",
      JS_NewCFunction(ctx, wrap_widget_set_self_layout_params, "widget_set_self_layout_params", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_style_int",
                    JS_NewCFunction(ctx, wrap_widget_set_style_int, "widget_set_style_int", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_style_str",
                    JS_NewCFunction(ctx, wrap_widget_set_style_str, "widget_set_style_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_style_color",
                    JS_NewCFunction(ctx, wrap_widget_set_style_color, "widget_set_style_color", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_x",
                    JS_NewCFunction(ctx, wrap_widget_t_get_prop_x, "widget_t_get_prop_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_y",
                    JS_NewCFunction(ctx, wrap_widget_t_get_prop_y, "widget_t_get_prop_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_w",
                    JS_NewCFunction(ctx, wrap_widget_t_get_prop_w, "widget_t_get_prop_w", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_h",
                    JS_NewCFunction(ctx, wrap_widget_t_get_prop_h, "widget_t_get_prop_h", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_name",
                    JS_NewCFunction(ctx, wrap_widget_t_get_prop_name, "widget_t_get_prop_name", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_t_get_prop_tr_text",
      JS_NewCFunction(ctx, wrap_widget_t_get_prop_tr_text, "widget_t_get_prop_tr_text", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_t_get_prop_style",
      JS_NewCFunction(ctx, wrap_widget_t_get_prop_style, "widget_t_get_prop_style", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_t_get_prop_animation",
      JS_NewCFunction(ctx, wrap_widget_t_get_prop_animation, "widget_t_get_prop_animation", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_t_get_prop_enable",
      JS_NewCFunction(ctx, wrap_widget_t_get_prop_enable, "widget_t_get_prop_enable", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_t_set_prop_visible",
      JS_NewCFunction(ctx, wrap_widget_t_set_prop_visible, "widget_t_set_prop_visible", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_t_get_prop_visible",
      JS_NewCFunction(ctx, wrap_widget_t_get_prop_visible, "widget_t_get_prop_visible", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_t_set_prop_sensitive",
      JS_NewCFunction(ctx, wrap_widget_t_set_prop_sensitive, "widget_t_set_prop_sensitive", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_t_get_prop_sensitive",
      JS_NewCFunction(ctx, wrap_widget_t_get_prop_sensitive, "widget_t_get_prop_sensitive", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_t_set_prop_focusable",
      JS_NewCFunction(ctx, wrap_widget_t_set_prop_focusable, "widget_t_set_prop_focusable", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_t_get_prop_focusable",
      JS_NewCFunction(ctx, wrap_widget_t_get_prop_focusable, "widget_t_get_prop_focusable", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_set_prop_with_focus_state",
                    JS_NewCFunction(ctx, wrap_widget_t_set_prop_with_focus_state,
                                    "widget_t_set_prop_with_focus_state", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_with_focus_state",
                    JS_NewCFunction(ctx, wrap_widget_t_get_prop_with_focus_state,
                                    "widget_t_get_prop_with_focus_state", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "widget_t_get_prop_floating",
      JS_NewCFunction(ctx, wrap_widget_t_get_prop_floating, "widget_t_get_prop_floating", 1));

  return RET_OK;
}

JSValue wrap_tk_ext_widgets_init(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    ret_t ret = 0;
    ret = (ret_t)tk_ext_widgets_init();

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_assets_manager(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    assets_manager_t* ret = NULL;
    ret = (assets_manager_t*)assets_manager();

    jret = quickjs_create_pointer(ctx, ret, "assets_manager_t*");
  }
  return jret;
}

JSValue wrap_assets_manager_ref(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    asset_info_t* ret = NULL;
    assets_manager_t* am =
        (assets_manager_t*)quickjs_get_pointer(ctx, argv[0], "assets_manager_t*");
    asset_type_t type = (asset_type_t)quickjs_get_number_value(ctx, argv[1]);
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (asset_info_t*)assets_manager_ref(am, type, name);
    JS_FreeCString(ctx, name);

    jret = quickjs_create_pointer(ctx, ret, "asset_info_t*");
  }
  return jret;
}

JSValue wrap_assets_manager_unref(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    assets_manager_t* am =
        (assets_manager_t*)quickjs_get_pointer(ctx, argv[0], "assets_manager_t*");
    asset_info_t* info = (asset_info_t*)quickjs_get_pointer(ctx, argv[1], "asset_info_t*");
    ret = (ret_t)assets_manager_unref(am, info);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

ret_t assets_manager_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "assets_manager",
                    JS_NewCFunction(ctx, wrap_assets_manager, "assets_manager", 1));
  JS_SetPropertyStr(ctx, global_obj, "assets_manager_ref",
                    JS_NewCFunction(ctx, wrap_assets_manager_ref, "assets_manager_ref", 1));
  JS_SetPropertyStr(ctx, global_obj, "assets_manager_unref",
                    JS_NewCFunction(ctx, wrap_assets_manager_unref, "assets_manager_unref", 1));

  return RET_OK;
}

JSValue get_ASSET_TYPE_NONE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ASSET_TYPE_NONE);
}

JSValue get_ASSET_TYPE_FONT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ASSET_TYPE_FONT);
}

JSValue get_ASSET_TYPE_IMAGE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ASSET_TYPE_IMAGE);
}

JSValue get_ASSET_TYPE_STYLE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ASSET_TYPE_STYLE);
}

JSValue get_ASSET_TYPE_UI(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ASSET_TYPE_UI);
}

JSValue get_ASSET_TYPE_XML(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ASSET_TYPE_XML);
}

JSValue get_ASSET_TYPE_STRINGS(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, ASSET_TYPE_STRINGS);
}

JSValue get_ASSET_TYPE_SCRIPT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ASSET_TYPE_SCRIPT);
}

JSValue get_ASSET_TYPE_DATA(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, ASSET_TYPE_DATA);
}

ret_t asset_type_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "ASSET_TYPE_NONE",
                    JS_NewCFunction(ctx, get_ASSET_TYPE_NONE, "ASSET_TYPE_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "ASSET_TYPE_FONT",
                    JS_NewCFunction(ctx, get_ASSET_TYPE_FONT, "ASSET_TYPE_FONT", 1));
  JS_SetPropertyStr(ctx, global_obj, "ASSET_TYPE_IMAGE",
                    JS_NewCFunction(ctx, get_ASSET_TYPE_IMAGE, "ASSET_TYPE_IMAGE", 1));
  JS_SetPropertyStr(ctx, global_obj, "ASSET_TYPE_STYLE",
                    JS_NewCFunction(ctx, get_ASSET_TYPE_STYLE, "ASSET_TYPE_STYLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "ASSET_TYPE_UI",
                    JS_NewCFunction(ctx, get_ASSET_TYPE_UI, "ASSET_TYPE_UI", 1));
  JS_SetPropertyStr(ctx, global_obj, "ASSET_TYPE_XML",
                    JS_NewCFunction(ctx, get_ASSET_TYPE_XML, "ASSET_TYPE_XML", 1));
  JS_SetPropertyStr(ctx, global_obj, "ASSET_TYPE_STRINGS",
                    JS_NewCFunction(ctx, get_ASSET_TYPE_STRINGS, "ASSET_TYPE_STRINGS", 1));
  JS_SetPropertyStr(ctx, global_obj, "ASSET_TYPE_SCRIPT",
                    JS_NewCFunction(ctx, get_ASSET_TYPE_SCRIPT, "ASSET_TYPE_SCRIPT", 1));
  JS_SetPropertyStr(ctx, global_obj, "ASSET_TYPE_DATA",
                    JS_NewCFunction(ctx, get_ASSET_TYPE_DATA, "ASSET_TYPE_DATA", 1));

  return RET_OK;
}

JSValue wrap_asset_info_t_get_prop_type(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)quickjs_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = JS_NewInt32(ctx, obj->type);
  return jret;
}

JSValue wrap_asset_info_t_get_prop_subtype(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)quickjs_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = JS_NewInt32(ctx, obj->subtype);
  return jret;
}

JSValue wrap_asset_info_t_get_prop_is_in_rom(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)quickjs_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = JS_NewInt32(ctx, obj->is_in_rom);
  return jret;
}

JSValue wrap_asset_info_t_get_prop_size(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)quickjs_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = JS_NewInt32(ctx, obj->size);
  return jret;
}

JSValue wrap_asset_info_t_get_prop_refcount(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)quickjs_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = JS_NewInt32(ctx, obj->refcount);
  return jret;
}

JSValue wrap_asset_info_t_get_prop_name(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)quickjs_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = quickjs_create_string(ctx, obj->name);
  return jret;
}

ret_t asset_info_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(
      ctx, global_obj, "asset_info_t_get_prop_type",
      JS_NewCFunction(ctx, wrap_asset_info_t_get_prop_type, "asset_info_t_get_prop_type", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "asset_info_t_get_prop_subtype",
      JS_NewCFunction(ctx, wrap_asset_info_t_get_prop_subtype, "asset_info_t_get_prop_subtype", 1));
  JS_SetPropertyStr(ctx, global_obj, "asset_info_t_get_prop_is_in_rom",
                    JS_NewCFunction(ctx, wrap_asset_info_t_get_prop_is_in_rom,
                                    "asset_info_t_get_prop_is_in_rom", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "asset_info_t_get_prop_size",
      JS_NewCFunction(ctx, wrap_asset_info_t_get_prop_size, "asset_info_t_get_prop_size", 1));
  JS_SetPropertyStr(ctx, global_obj, "asset_info_t_get_prop_refcount",
                    JS_NewCFunction(ctx, wrap_asset_info_t_get_prop_refcount,
                                    "asset_info_t_get_prop_refcount", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "asset_info_t_get_prop_name",
      JS_NewCFunction(ctx, wrap_asset_info_t_get_prop_name, "asset_info_t_get_prop_name", 1));

  return RET_OK;
}

JSValue wrap_color_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    color_t* ret = NULL;
    uint8_t r = (uint8_t)quickjs_get_int_value(ctx, argv[0]);
    uint8_t b = (uint8_t)quickjs_get_int_value(ctx, argv[1]);
    uint8_t g = (uint8_t)quickjs_get_int_value(ctx, argv[2]);
    uint8_t a = (uint8_t)quickjs_get_int_value(ctx, argv[3]);
    ret = (color_t*)color_create(r, b, g, a);

    jret = quickjs_create_object(ctx, ret, "color_t*", (tk_destroy_t)color_destroy);
  }
  return jret;
}

JSValue wrap_color_from_str(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    color_t* ret = NULL;
    color_t* c = (color_t*)quickjs_get_pointer(ctx, argv[0], "color_t*");
    const char* str = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (color_t*)color_from_str(c, str);
    JS_FreeCString(ctx, str);

    jret = quickjs_create_pointer(ctx, ret, "color_t*");
  }
  return jret;
}

JSValue wrap_color_r(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    uint8_t ret = 0;
    color_t* c = (color_t*)quickjs_get_pointer(ctx, argv[0], "color_t*");
    ret = (uint8_t)color_r(c);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_color_g(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    uint8_t ret = 0;
    color_t* c = (color_t*)quickjs_get_pointer(ctx, argv[0], "color_t*");
    ret = (uint8_t)color_g(c);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_color_b(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    uint8_t ret = 0;
    color_t* c = (color_t*)quickjs_get_pointer(ctx, argv[0], "color_t*");
    ret = (uint8_t)color_b(c);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_color_a(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    uint8_t ret = 0;
    color_t* c = (color_t*)quickjs_get_pointer(ctx, argv[0], "color_t*");
    ret = (uint8_t)color_a(c);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_color_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    color_t* ret = NULL;
    color_t* color = (color_t*)quickjs_get_pointer(ctx, argv[0], "color_t*");
    ret = (color_t*)color_cast(color);

    jret = quickjs_create_pointer(ctx, ret, "color_t*");
  }
  return jret;
}

JSValue wrap_color_t_set_prop_color(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  color_t* obj = (color_t*)quickjs_get_pointer(ctx, argv[0], "color_t*");
  uint32_t color = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
  obj->color = color;
  return JS_NewInt32(ctx, RET_OK);
};

JSValue wrap_color_t_get_prop_color(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  color_t* obj = (color_t*)quickjs_get_pointer(ctx, argv[0], "color_t*");

  jret = JS_NewInt32(ctx, obj->color);
  return jret;
}

ret_t color_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "color_create",
                    JS_NewCFunction(ctx, wrap_color_create, "color_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_from_str",
                    JS_NewCFunction(ctx, wrap_color_from_str, "color_from_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_r", JS_NewCFunction(ctx, wrap_color_r, "color_r", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_g", JS_NewCFunction(ctx, wrap_color_g, "color_g", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_b", JS_NewCFunction(ctx, wrap_color_b, "color_b", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_a", JS_NewCFunction(ctx, wrap_color_a, "color_a", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_cast",
                    JS_NewCFunction(ctx, wrap_color_cast, "color_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_t_set_prop_color",
                    JS_NewCFunction(ctx, wrap_color_t_set_prop_color, "color_t_set_prop_color", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_t_get_prop_color",
                    JS_NewCFunction(ctx, wrap_color_t_get_prop_color, "color_t_get_prop_color", 1));

  return RET_OK;
}

JSValue wrap_date_time_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    date_time_t* ret = NULL;
    ret = (date_time_t*)date_time_create();

    jret = quickjs_create_object(ctx, ret, "date_time_t*", (tk_destroy_t)date_time_destroy);
  }
  return jret;
}

JSValue wrap_date_time_t_get_prop_second(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  date_time_t* obj = (date_time_t*)quickjs_get_pointer(ctx, argv[0], "date_time_t*");

  jret = JS_NewInt32(ctx, obj->second);
  return jret;
}

JSValue wrap_date_time_t_get_prop_minute(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  date_time_t* obj = (date_time_t*)quickjs_get_pointer(ctx, argv[0], "date_time_t*");

  jret = JS_NewInt32(ctx, obj->minute);
  return jret;
}

JSValue wrap_date_time_t_get_prop_hour(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  date_time_t* obj = (date_time_t*)quickjs_get_pointer(ctx, argv[0], "date_time_t*");

  jret = JS_NewInt32(ctx, obj->hour);
  return jret;
}

JSValue wrap_date_time_t_get_prop_day(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  date_time_t* obj = (date_time_t*)quickjs_get_pointer(ctx, argv[0], "date_time_t*");

  jret = JS_NewInt32(ctx, obj->day);
  return jret;
}

JSValue wrap_date_time_t_get_prop_wday(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  date_time_t* obj = (date_time_t*)quickjs_get_pointer(ctx, argv[0], "date_time_t*");

  jret = JS_NewInt32(ctx, obj->wday);
  return jret;
}

JSValue wrap_date_time_t_get_prop_month(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  date_time_t* obj = (date_time_t*)quickjs_get_pointer(ctx, argv[0], "date_time_t*");

  jret = JS_NewInt32(ctx, obj->month);
  return jret;
}

JSValue wrap_date_time_t_get_prop_year(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  date_time_t* obj = (date_time_t*)quickjs_get_pointer(ctx, argv[0], "date_time_t*");

  jret = JS_NewInt32(ctx, obj->year);
  return jret;
}

ret_t date_time_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "date_time_create",
                    JS_NewCFunction(ctx, wrap_date_time_create, "date_time_create", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "date_time_t_get_prop_second",
      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_second, "date_time_t_get_prop_second", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "date_time_t_get_prop_minute",
      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_minute, "date_time_t_get_prop_minute", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "date_time_t_get_prop_hour",
      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_hour, "date_time_t_get_prop_hour", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "date_time_t_get_prop_day",
      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_day, "date_time_t_get_prop_day", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "date_time_t_get_prop_wday",
      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_wday, "date_time_t_get_prop_wday", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "date_time_t_get_prop_month",
      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_month, "date_time_t_get_prop_month", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "date_time_t_get_prop_year",
      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_year, "date_time_t_get_prop_year", 1));

  return RET_OK;
}

JSValue wrap_emitter_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    emitter_t* ret = NULL;
    ret = (emitter_t*)emitter_create();

    jret = quickjs_create_object(ctx, ret, "emitter_t*", (tk_destroy_t)emitter_destroy);
  }
  return jret;
}

JSValue wrap_emitter_dispatch(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    emitter_t* emitter = (emitter_t*)quickjs_get_pointer(ctx, argv[0], "emitter_t*");
    event_t* e = (event_t*)quickjs_get_pointer(ctx, argv[1], "event_t*");
    ret = (ret_t)emitter_dispatch(emitter, e);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_emitter_dispatch_simple_event(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    emitter_t* emitter = (emitter_t*)quickjs_get_pointer(ctx, argv[0], "emitter_t*");
    uint32_t type = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)emitter_dispatch_simple_event(emitter, type);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_emitter_off(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    emitter_t* emitter = (emitter_t*)quickjs_get_pointer(ctx, argv[0], "emitter_t*");
    uint32_t id = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)emitter_off(emitter, id);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_emitter_enable(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    emitter_t* emitter = (emitter_t*)quickjs_get_pointer(ctx, argv[0], "emitter_t*");
    ret = (ret_t)emitter_enable(emitter);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_emitter_disable(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    emitter_t* emitter = (emitter_t*)quickjs_get_pointer(ctx, argv[0], "emitter_t*");
    ret = (ret_t)emitter_disable(emitter);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_emitter_size(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    uint32_t ret = 0;
    emitter_t* emitter = (emitter_t*)quickjs_get_pointer(ctx, argv[0], "emitter_t*");
    ret = (uint32_t)emitter_size(emitter);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_emitter_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    emitter_t* ret = NULL;
    emitter_t* emitter = (emitter_t*)quickjs_get_pointer(ctx, argv[0], "emitter_t*");
    ret = (emitter_t*)emitter_cast(emitter);

    jret = quickjs_create_pointer(ctx, ret, "emitter_t*");
  }
  return jret;
}

ret_t emitter_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "emitter_create",
                    JS_NewCFunction(ctx, wrap_emitter_create, "emitter_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "emitter_dispatch",
                    JS_NewCFunction(ctx, wrap_emitter_dispatch, "emitter_dispatch", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "emitter_dispatch_simple_event",
      JS_NewCFunction(ctx, wrap_emitter_dispatch_simple_event, "emitter_dispatch_simple_event", 1));
  JS_SetPropertyStr(ctx, global_obj, "emitter_on",
                    JS_NewCFunction(ctx, wrap_emitter_on, "emitter_on", 1));
  JS_SetPropertyStr(ctx, global_obj, "emitter_off",
                    JS_NewCFunction(ctx, wrap_emitter_off, "emitter_off", 1));
  JS_SetPropertyStr(ctx, global_obj, "emitter_enable",
                    JS_NewCFunction(ctx, wrap_emitter_enable, "emitter_enable", 1));
  JS_SetPropertyStr(ctx, global_obj, "emitter_disable",
                    JS_NewCFunction(ctx, wrap_emitter_disable, "emitter_disable", 1));
  JS_SetPropertyStr(ctx, global_obj, "emitter_size",
                    JS_NewCFunction(ctx, wrap_emitter_size, "emitter_size", 1));
  JS_SetPropertyStr(ctx, global_obj, "emitter_cast",
                    JS_NewCFunction(ctx, wrap_emitter_cast, "emitter_cast", 1));

  return RET_OK;
}

JSValue get_EVT_NONE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_NONE);
}

JSValue get_EVT_PROP_WILL_CHANGE(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_PROP_WILL_CHANGE);
}

JSValue get_EVT_PROP_CHANGED(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_PROP_CHANGED);
}

JSValue get_EVT_ITEMS_WILL_CHANGE(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_ITEMS_WILL_CHANGE);
}

JSValue get_EVT_ITEMS_CHANGED(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_ITEMS_CHANGED);
}

JSValue get_EVT_PROPS_CHANGED(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_PROPS_CHANGED);
}

JSValue get_EVT_DESTROY(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, EVT_DESTROY);
}

ret_t event_base_type_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "EVT_NONE", JS_NewCFunction(ctx, get_EVT_NONE, "EVT_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_PROP_WILL_CHANGE",
                    JS_NewCFunction(ctx, get_EVT_PROP_WILL_CHANGE, "EVT_PROP_WILL_CHANGE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_PROP_CHANGED",
                    JS_NewCFunction(ctx, get_EVT_PROP_CHANGED, "EVT_PROP_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_ITEMS_WILL_CHANGE",
                    JS_NewCFunction(ctx, get_EVT_ITEMS_WILL_CHANGE, "EVT_ITEMS_WILL_CHANGE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_ITEMS_CHANGED",
                    JS_NewCFunction(ctx, get_EVT_ITEMS_CHANGED, "EVT_ITEMS_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_PROPS_CHANGED",
                    JS_NewCFunction(ctx, get_EVT_PROPS_CHANGED, "EVT_PROPS_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_DESTROY",
                    JS_NewCFunction(ctx, get_EVT_DESTROY, "EVT_DESTROY", 1));

  return RET_OK;
}

JSValue wrap_event_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    event_t* ret = NULL;
    event_t* event = (event_t*)quickjs_get_pointer(ctx, argv[0], "event_t*");
    ret = (event_t*)event_cast(event);

    jret = quickjs_create_pointer(ctx, ret, "event_t*");
  }
  return jret;
}

JSValue wrap_event_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    event_t* ret = NULL;
    uint32_t type = (uint32_t)quickjs_get_int_value(ctx, argv[0]);
    void* target = (void*)quickjs_get_pointer(ctx, argv[1], "void*");
    ret = (event_t*)event_create(type, target);

    jret = quickjs_create_object(ctx, ret, "event_t*", (tk_destroy_t)event_destroy);
  }
  return jret;
}

JSValue wrap_event_t_get_prop_type(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  event_t* obj = (event_t*)quickjs_get_pointer(ctx, argv[0], "event_t*");

  jret = JS_NewInt32(ctx, obj->type);
  return jret;
}

JSValue wrap_event_t_get_prop_time(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  event_t* obj = (event_t*)quickjs_get_pointer(ctx, argv[0], "event_t*");

  jret = JS_NewInt32(ctx, obj->time);
  return jret;
}

JSValue wrap_event_t_get_prop_target(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  event_t* obj = (event_t*)quickjs_get_pointer(ctx, argv[0], "event_t*");

  jret = quickjs_create_pointer(ctx, obj->target, "void*");
  return jret;
}

ret_t event_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "event_cast",
                    JS_NewCFunction(ctx, wrap_event_cast, "event_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "event_create",
                    JS_NewCFunction(ctx, wrap_event_create, "event_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "event_t_get_prop_type",
                    JS_NewCFunction(ctx, wrap_event_t_get_prop_type, "event_t_get_prop_type", 1));
  JS_SetPropertyStr(ctx, global_obj, "event_t_get_prop_time",
                    JS_NewCFunction(ctx, wrap_event_t_get_prop_time, "event_t_get_prop_time", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "event_t_get_prop_target",
      JS_NewCFunction(ctx, wrap_event_t_get_prop_target, "event_t_get_prop_target", 1));

  return RET_OK;
}

JSValue wrap_named_value_create(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    named_value_t* ret = NULL;
    ret = (named_value_t*)named_value_create();

    jret = quickjs_create_object(ctx, ret, "named_value_t*", (tk_destroy_t)named_value_destroy);
  }
  return jret;
}

JSValue wrap_named_value_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    named_value_t* ret = NULL;
    named_value_t* nv = (named_value_t*)quickjs_get_pointer(ctx, argv[0], "named_value_t*");
    ret = (named_value_t*)named_value_cast(nv);

    jret = quickjs_create_pointer(ctx, ret, "named_value_t*");
  }
  return jret;
}

JSValue wrap_named_value_set_name(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    named_value_t* nv = (named_value_t*)quickjs_get_pointer(ctx, argv[0], "named_value_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)named_value_set_name(nv, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_named_value_set_value(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    named_value_t* nv = (named_value_t*)quickjs_get_pointer(ctx, argv[0], "named_value_t*");
    const value_t* value = (const value_t*)quickjs_get_pointer(ctx, argv[1], "const value_t*");
    ret = (ret_t)named_value_set_value(nv, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_named_value_get_value(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    value_t* ret = NULL;
    named_value_t* nv = (named_value_t*)quickjs_get_pointer(ctx, argv[0], "named_value_t*");
    ret = (value_t*)named_value_get_value(nv);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_named_value_t_get_prop_name(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  named_value_t* obj = (named_value_t*)quickjs_get_pointer(ctx, argv[0], "named_value_t*");

  jret = quickjs_create_string(ctx, obj->name);
  return jret;
}

ret_t named_value_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "named_value_create",
                    JS_NewCFunction(ctx, wrap_named_value_create, "named_value_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "named_value_cast",
                    JS_NewCFunction(ctx, wrap_named_value_cast, "named_value_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "named_value_set_name",
                    JS_NewCFunction(ctx, wrap_named_value_set_name, "named_value_set_name", 1));
  JS_SetPropertyStr(ctx, global_obj, "named_value_set_value",
                    JS_NewCFunction(ctx, wrap_named_value_set_value, "named_value_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "named_value_get_value",
                    JS_NewCFunction(ctx, wrap_named_value_get_value, "named_value_get_value", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "named_value_t_get_prop_name",
      JS_NewCFunction(ctx, wrap_named_value_t_get_prop_name, "named_value_t_get_prop_name", 1));

  return RET_OK;
}

ret_t point_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);

  return RET_OK;
}

JSValue wrap_rect_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    rect_t* ret = NULL;
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[0]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    ret = (rect_t*)rect_create(x, y, w, h);

    jret = quickjs_create_object(ctx, ret, "rect_t*", (tk_destroy_t)rect_destroy);
  }
  return jret;
}

JSValue wrap_rect_set(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    rect_t* ret = NULL;
    rect_t* rect = (rect_t*)quickjs_get_pointer(ctx, argv[0], "rect_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (rect_t*)rect_set(rect, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "rect_t*");
  }
  return jret;
}

JSValue wrap_rect_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    rect_t* ret = NULL;
    rect_t* rect = (rect_t*)quickjs_get_pointer(ctx, argv[0], "rect_t*");
    ret = (rect_t*)rect_cast(rect);

    jret = quickjs_create_pointer(ctx, ret, "rect_t*");
  }
  return jret;
}

JSValue wrap_rect_t_get_prop_x(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  rect_t* obj = (rect_t*)quickjs_get_pointer(ctx, argv[0], "rect_t*");

  jret = JS_NewInt32(ctx, obj->x);
  return jret;
}

JSValue wrap_rect_t_get_prop_y(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  rect_t* obj = (rect_t*)quickjs_get_pointer(ctx, argv[0], "rect_t*");

  jret = JS_NewInt32(ctx, obj->y);
  return jret;
}

JSValue wrap_rect_t_get_prop_w(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  rect_t* obj = (rect_t*)quickjs_get_pointer(ctx, argv[0], "rect_t*");

  jret = JS_NewInt32(ctx, obj->w);
  return jret;
}

JSValue wrap_rect_t_get_prop_h(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  rect_t* obj = (rect_t*)quickjs_get_pointer(ctx, argv[0], "rect_t*");

  jret = JS_NewInt32(ctx, obj->h);
  return jret;
}

ret_t rect_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "rect_create",
                    JS_NewCFunction(ctx, wrap_rect_create, "rect_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "rect_set",
                    JS_NewCFunction(ctx, wrap_rect_set, "rect_set", 1));
  JS_SetPropertyStr(ctx, global_obj, "rect_cast",
                    JS_NewCFunction(ctx, wrap_rect_cast, "rect_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "rect_t_get_prop_x",
                    JS_NewCFunction(ctx, wrap_rect_t_get_prop_x, "rect_t_get_prop_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "rect_t_get_prop_y",
                    JS_NewCFunction(ctx, wrap_rect_t_get_prop_y, "rect_t_get_prop_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "rect_t_get_prop_w",
                    JS_NewCFunction(ctx, wrap_rect_t_get_prop_w, "rect_t_get_prop_w", 1));
  JS_SetPropertyStr(ctx, global_obj, "rect_t_get_prop_h",
                    JS_NewCFunction(ctx, wrap_rect_t_get_prop_h, "rect_t_get_prop_h", 1));

  return RET_OK;
}

JSValue wrap_time_now_s(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    uint64_t ret = 0;
    ret = (uint64_t)time_now_s();

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_time_now_ms(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    uint64_t ret = 0;
    ret = (uint64_t)time_now_ms();

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

ret_t time_now_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "time_now_s",
                    JS_NewCFunction(ctx, wrap_time_now_s, "time_now_s", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_now_ms",
                    JS_NewCFunction(ctx, wrap_time_now_ms, "time_now_ms", 1));

  return RET_OK;
}

JSValue get_RET_OK(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_OK);
}

JSValue get_RET_OOM(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_OOM);
}

JSValue get_RET_FAIL(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_FAIL);
}

JSValue get_RET_NOT_IMPL(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_NOT_IMPL);
}

JSValue get_RET_QUIT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_QUIT);
}

JSValue get_RET_FOUND(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_FOUND);
}

JSValue get_RET_BUSY(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_BUSY);
}

JSValue get_RET_REMOVE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_REMOVE);
}

JSValue get_RET_REPEAT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_REPEAT);
}

JSValue get_RET_NOT_FOUND(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_NOT_FOUND);
}

JSValue get_RET_DONE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_DONE);
}

JSValue get_RET_STOP(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_STOP);
}

JSValue get_RET_SKIP(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_SKIP);
}

JSValue get_RET_CONTINUE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_CONTINUE);
}

JSValue get_RET_OBJECT_CHANGED(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_OBJECT_CHANGED);
}

JSValue get_RET_ITEMS_CHANGED(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_ITEMS_CHANGED);
}

JSValue get_RET_BAD_PARAMS(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, RET_BAD_PARAMS);
}

ret_t ret_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "RET_OK", JS_NewCFunction(ctx, get_RET_OK, "RET_OK", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_OOM", JS_NewCFunction(ctx, get_RET_OOM, "RET_OOM", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_FAIL", JS_NewCFunction(ctx, get_RET_FAIL, "RET_FAIL", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_NOT_IMPL",
                    JS_NewCFunction(ctx, get_RET_NOT_IMPL, "RET_NOT_IMPL", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_QUIT", JS_NewCFunction(ctx, get_RET_QUIT, "RET_QUIT", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_FOUND",
                    JS_NewCFunction(ctx, get_RET_FOUND, "RET_FOUND", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_BUSY", JS_NewCFunction(ctx, get_RET_BUSY, "RET_BUSY", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_REMOVE",
                    JS_NewCFunction(ctx, get_RET_REMOVE, "RET_REMOVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_REPEAT",
                    JS_NewCFunction(ctx, get_RET_REPEAT, "RET_REPEAT", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_NOT_FOUND",
                    JS_NewCFunction(ctx, get_RET_NOT_FOUND, "RET_NOT_FOUND", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_DONE", JS_NewCFunction(ctx, get_RET_DONE, "RET_DONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_STOP", JS_NewCFunction(ctx, get_RET_STOP, "RET_STOP", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_SKIP", JS_NewCFunction(ctx, get_RET_SKIP, "RET_SKIP", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_CONTINUE",
                    JS_NewCFunction(ctx, get_RET_CONTINUE, "RET_CONTINUE", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_OBJECT_CHANGED",
                    JS_NewCFunction(ctx, get_RET_OBJECT_CHANGED, "RET_OBJECT_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_ITEMS_CHANGED",
                    JS_NewCFunction(ctx, get_RET_ITEMS_CHANGED, "RET_ITEMS_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_BAD_PARAMS",
                    JS_NewCFunction(ctx, get_RET_BAD_PARAMS, "RET_BAD_PARAMS", 1));

  return RET_OK;
}

JSValue get_VALUE_TYPE_INVALID(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_INVALID);
}

JSValue get_VALUE_TYPE_BOOL(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_BOOL);
}

JSValue get_VALUE_TYPE_INT8(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_INT8);
}

JSValue get_VALUE_TYPE_UINT8(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_UINT8);
}

JSValue get_VALUE_TYPE_INT16(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_INT16);
}

JSValue get_VALUE_TYPE_UINT16(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_UINT16);
}

JSValue get_VALUE_TYPE_INT32(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_INT32);
}

JSValue get_VALUE_TYPE_UINT32(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_UINT32);
}

JSValue get_VALUE_TYPE_INT64(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_INT64);
}

JSValue get_VALUE_TYPE_UINT64(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_UINT64);
}

JSValue get_VALUE_TYPE_POINTER(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_POINTER);
}

JSValue get_VALUE_TYPE_FLOAT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_FLOAT);
}

JSValue get_VALUE_TYPE_FLOAT32(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_FLOAT32);
}

JSValue get_VALUE_TYPE_DOUBLE(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_DOUBLE);
}

JSValue get_VALUE_TYPE_STRING(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_STRING);
}

JSValue get_VALUE_TYPE_WSTRING(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_WSTRING);
}

JSValue get_VALUE_TYPE_OBJECT(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  return JS_NewInt32(ctx, VALUE_TYPE_OBJECT);
}

ret_t value_type_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_INVALID",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_INVALID, "VALUE_TYPE_INVALID", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_BOOL",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_BOOL, "VALUE_TYPE_BOOL", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_INT8",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_INT8, "VALUE_TYPE_INT8", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_UINT8",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_UINT8, "VALUE_TYPE_UINT8", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_INT16",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_INT16, "VALUE_TYPE_INT16", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_UINT16",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_UINT16, "VALUE_TYPE_UINT16", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_INT32",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_INT32, "VALUE_TYPE_INT32", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_UINT32",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_UINT32, "VALUE_TYPE_UINT32", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_INT64",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_INT64, "VALUE_TYPE_INT64", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_UINT64",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_UINT64, "VALUE_TYPE_UINT64", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_POINTER",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_POINTER, "VALUE_TYPE_POINTER", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_FLOAT",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_FLOAT, "VALUE_TYPE_FLOAT", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_FLOAT32",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_FLOAT32, "VALUE_TYPE_FLOAT32", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_DOUBLE",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_DOUBLE, "VALUE_TYPE_DOUBLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_STRING",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_STRING, "VALUE_TYPE_STRING", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_WSTRING",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_WSTRING, "VALUE_TYPE_WSTRING", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_OBJECT",
                    JS_NewCFunction(ctx, get_VALUE_TYPE_OBJECT, "VALUE_TYPE_OBJECT", 1));

  return RET_OK;
}

JSValue wrap_value_set_bool(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    bool_t value = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (value_t*)value_set_bool(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_bool(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = 0;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (bool_t)value_bool(v);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_set_int8(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    int8_t value = (int8_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_int8(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_int8(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int8_t ret = 0;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (int8_t)value_int8(v);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_set_uint8(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    uint8_t value = (uint8_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_uint8(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_uint8(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int8_t ret = 0;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (int8_t)value_uint8(v);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_set_int16(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    int16_t value = (int16_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_int16(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_int16(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int16_t ret = 0;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (int16_t)value_int16(v);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_set_uint16(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    uint16_t value = (uint16_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_uint16(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_uint16(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    uint16_t ret = 0;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (uint16_t)value_uint16(v);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_set_int32(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_int32(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_int32(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = 0;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (int32_t)value_int32(v);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_set_uint32(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    uint32_t value = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_uint32(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_set_int64(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    int64_t value = (int64_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_int64(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_int64(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int64_t ret = 0;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (int64_t)value_int64(v);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_set_uint64(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    uint64_t value = (uint64_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_uint64(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_uint64(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    uint64_t ret = 0;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (uint64_t)value_uint64(v);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_set_float(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    float_t value = (float_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (value_t*)value_set_float(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_float(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    float_t ret = 0;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (float_t)value_float(v);

    jret = JS_NewFloat64(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_set_float32(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    float value = (float)quickjs_get_number_value(ctx, argv[1]);
    ret = (value_t*)value_set_float32(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_float32(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    float ret = 0;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (float)value_float32(v);

    jret = JS_NewFloat64(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_set_double(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    double value = (double)quickjs_get_number_value(ctx, argv[1]);
    ret = (value_t*)value_set_double(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_double(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    double ret = 0;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (double)value_double(v);

    jret = JS_NewFloat64(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_dup_str(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    const char* value = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (value_t*)value_dup_str(v, value);
    JS_FreeCString(ctx, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_str(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (const char*)value_str(v);

    jret = quickjs_create_string(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_wstr(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    const wchar_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (const wchar_t*)value_wstr(v);

    jret = quickjs_create_string_from_wstring(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_is_null(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = 0;
    value_t* value = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (bool_t)value_is_null(value);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_int(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int ret = 0;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (int)value_int(v);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_set_int(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (value_t*)value_set_int(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_set_object(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    value_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    object_t* value = (object_t*)quickjs_get_pointer(ctx, argv[1], "object_t*");
    ret = (value_t*)value_set_object(v, value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

JSValue wrap_value_object(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    object_t* ret = NULL;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (object_t*)value_object(v);

    jret = quickjs_create_pointer(ctx, ret, "object_t*");
  }
  return jret;
}

JSValue wrap_value_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    value_t* ret = NULL;
    ret = (value_t*)value_create();

    jret = quickjs_create_object(ctx, ret, "value_t*", (tk_destroy_t)value_destroy);
  }
  return jret;
}

JSValue wrap_value_reset(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (ret_t)value_reset(v);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_value_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    value_t* ret = NULL;
    value_t* value = (value_t*)quickjs_get_pointer(ctx, argv[0], "value_t*");
    ret = (value_t*)value_cast(value);

    jret = quickjs_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

ret_t value_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "value_set_bool",
                    JS_NewCFunction(ctx, wrap_value_set_bool, "value_set_bool", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_bool",
                    JS_NewCFunction(ctx, wrap_value_bool, "value_bool", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_int8",
                    JS_NewCFunction(ctx, wrap_value_set_int8, "value_set_int8", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_int8",
                    JS_NewCFunction(ctx, wrap_value_int8, "value_int8", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_uint8",
                    JS_NewCFunction(ctx, wrap_value_set_uint8, "value_set_uint8", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_uint8",
                    JS_NewCFunction(ctx, wrap_value_uint8, "value_uint8", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_int16",
                    JS_NewCFunction(ctx, wrap_value_set_int16, "value_set_int16", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_int16",
                    JS_NewCFunction(ctx, wrap_value_int16, "value_int16", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_uint16",
                    JS_NewCFunction(ctx, wrap_value_set_uint16, "value_set_uint16", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_uint16",
                    JS_NewCFunction(ctx, wrap_value_uint16, "value_uint16", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_int32",
                    JS_NewCFunction(ctx, wrap_value_set_int32, "value_set_int32", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_int32",
                    JS_NewCFunction(ctx, wrap_value_int32, "value_int32", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_uint32",
                    JS_NewCFunction(ctx, wrap_value_set_uint32, "value_set_uint32", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_int64",
                    JS_NewCFunction(ctx, wrap_value_set_int64, "value_set_int64", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_int64",
                    JS_NewCFunction(ctx, wrap_value_int64, "value_int64", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_uint64",
                    JS_NewCFunction(ctx, wrap_value_set_uint64, "value_set_uint64", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_uint64",
                    JS_NewCFunction(ctx, wrap_value_uint64, "value_uint64", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_float",
                    JS_NewCFunction(ctx, wrap_value_set_float, "value_set_float", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_float",
                    JS_NewCFunction(ctx, wrap_value_float, "value_float", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_float32",
                    JS_NewCFunction(ctx, wrap_value_set_float32, "value_set_float32", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_float32",
                    JS_NewCFunction(ctx, wrap_value_float32, "value_float32", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_double",
                    JS_NewCFunction(ctx, wrap_value_set_double, "value_set_double", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_double",
                    JS_NewCFunction(ctx, wrap_value_double, "value_double", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_dup_str",
                    JS_NewCFunction(ctx, wrap_value_dup_str, "value_dup_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_str",
                    JS_NewCFunction(ctx, wrap_value_str, "value_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_wstr",
                    JS_NewCFunction(ctx, wrap_value_wstr, "value_wstr", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_is_null",
                    JS_NewCFunction(ctx, wrap_value_is_null, "value_is_null", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_int",
                    JS_NewCFunction(ctx, wrap_value_int, "value_int", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_int",
                    JS_NewCFunction(ctx, wrap_value_set_int, "value_set_int", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_object",
                    JS_NewCFunction(ctx, wrap_value_set_object, "value_set_object", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_object",
                    JS_NewCFunction(ctx, wrap_value_object, "value_object", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_create",
                    JS_NewCFunction(ctx, wrap_value_create, "value_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_reset",
                    JS_NewCFunction(ctx, wrap_value_reset, "value_reset", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_cast",
                    JS_NewCFunction(ctx, wrap_value_cast, "value_cast", 1));

  return RET_OK;
}

JSValue wrap_slide_indicator_create(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)slide_indicator_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

JSValue wrap_slide_indicator_create_linear(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)slide_indicator_create_linear(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

JSValue wrap_slide_indicator_create_arc(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)slide_indicator_create_arc(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

JSValue wrap_slide_indicator_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)slide_indicator_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

JSValue wrap_slide_indicator_set_value(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t value = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_indicator_set_max(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t max = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_max(widget, max);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_indicator_set_default_paint(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    indicator_default_paint_t default_paint =
        (indicator_default_paint_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_default_paint(widget, default_paint);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_indicator_set_auto_hide(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint16_t auto_hide = (uint16_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_auto_hide(widget, auto_hide);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_indicator_set_margin(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t margin = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_margin(widget, margin);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_indicator_set_spacing(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    float_t spacing = (float_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_spacing(widget, spacing);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_indicator_set_size(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t size = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_size(widget, size);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_indicator_set_anchor(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* anchor_x = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    const char* anchor_y = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)slide_indicator_set_anchor(widget, anchor_x, anchor_y);
    JS_FreeCString(ctx, anchor_x);
    JS_FreeCString(ctx, anchor_y);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_indicator_set_indicated_target(JSContext* ctx, JSValueConst this_val, int argc,
                                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* indicated_target = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)slide_indicator_set_indicated_target(widget, indicated_target);
    JS_FreeCString(ctx, indicated_target);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_indicator_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)quickjs_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = JS_NewInt32(ctx, obj->value);
  return jret;
}

JSValue wrap_slide_indicator_t_get_prop_max(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)quickjs_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = JS_NewInt32(ctx, obj->max);
  return jret;
}

JSValue wrap_slide_indicator_t_get_prop_default_paint(JSContext* ctx, JSValueConst this_val,
                                                      int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)quickjs_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = JS_NewInt32(ctx, obj->default_paint);
  return jret;
}

JSValue wrap_slide_indicator_t_get_prop_auto_hide(JSContext* ctx, JSValueConst this_val, int argc,
                                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)quickjs_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = JS_NewInt32(ctx, obj->auto_hide);
  return jret;
}

JSValue wrap_slide_indicator_t_get_prop_margin(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)quickjs_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = JS_NewInt32(ctx, obj->margin);
  return jret;
}

JSValue wrap_slide_indicator_t_get_prop_spacing(JSContext* ctx, JSValueConst this_val, int argc,
                                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)quickjs_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = JS_NewFloat64(ctx, obj->spacing);
  return jret;
}

JSValue wrap_slide_indicator_t_get_prop_size(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)quickjs_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = JS_NewInt32(ctx, obj->size);
  return jret;
}

JSValue wrap_slide_indicator_t_get_prop_anchor_x(JSContext* ctx, JSValueConst this_val, int argc,
                                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)quickjs_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = JS_NewFloat64(ctx, obj->anchor_x);
  return jret;
}

JSValue wrap_slide_indicator_t_get_prop_anchor_y(JSContext* ctx, JSValueConst this_val, int argc,
                                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)quickjs_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = JS_NewFloat64(ctx, obj->anchor_y);
  return jret;
}

JSValue wrap_slide_indicator_t_get_prop_indicated_target(JSContext* ctx, JSValueConst this_val,
                                                         int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_indicator_t* obj =
      (slide_indicator_t*)quickjs_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = quickjs_create_string(ctx, obj->indicated_target);
  return jret;
}

ret_t slide_indicator_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_create",
                    JS_NewCFunction(ctx, wrap_slide_indicator_create, "slide_indicator_create", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_indicator_create_linear",
      JS_NewCFunction(ctx, wrap_slide_indicator_create_linear, "slide_indicator_create_linear", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_indicator_create_arc",
      JS_NewCFunction(ctx, wrap_slide_indicator_create_arc, "slide_indicator_create_arc", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_cast",
                    JS_NewCFunction(ctx, wrap_slide_indicator_cast, "slide_indicator_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_indicator_set_value",
      JS_NewCFunction(ctx, wrap_slide_indicator_set_value, "slide_indicator_set_value", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_indicator_set_max",
      JS_NewCFunction(ctx, wrap_slide_indicator_set_max, "slide_indicator_set_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_set_default_paint",
                    JS_NewCFunction(ctx, wrap_slide_indicator_set_default_paint,
                                    "slide_indicator_set_default_paint", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_indicator_set_auto_hide",
      JS_NewCFunction(ctx, wrap_slide_indicator_set_auto_hide, "slide_indicator_set_auto_hide", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_indicator_set_margin",
      JS_NewCFunction(ctx, wrap_slide_indicator_set_margin, "slide_indicator_set_margin", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_indicator_set_spacing",
      JS_NewCFunction(ctx, wrap_slide_indicator_set_spacing, "slide_indicator_set_spacing", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_indicator_set_size",
      JS_NewCFunction(ctx, wrap_slide_indicator_set_size, "slide_indicator_set_size", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_indicator_set_anchor",
      JS_NewCFunction(ctx, wrap_slide_indicator_set_anchor, "slide_indicator_set_anchor", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_set_indicated_target",
                    JS_NewCFunction(ctx, wrap_slide_indicator_set_indicated_target,
                                    "slide_indicator_set_indicated_target", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_value",
                    JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_value,
                                    "slide_indicator_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_max",
                    JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_max,
                                    "slide_indicator_t_get_prop_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_default_paint",
                    JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_default_paint,
                                    "slide_indicator_t_get_prop_default_paint", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_auto_hide",
                    JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_auto_hide,
                                    "slide_indicator_t_get_prop_auto_hide", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_margin",
                    JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_margin,
                                    "slide_indicator_t_get_prop_margin", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_spacing",
                    JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_spacing,
                                    "slide_indicator_t_get_prop_spacing", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_size",
                    JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_size,
                                    "slide_indicator_t_get_prop_size", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_anchor_x",
                    JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_anchor_x,
                                    "slide_indicator_t_get_prop_anchor_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_anchor_y",
                    JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_anchor_y,
                                    "slide_indicator_t_get_prop_anchor_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_indicated_target",
                    JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_indicated_target,
                                    "slide_indicator_t_get_prop_indicated_target", 1));

  return RET_OK;
}

JSValue wrap_slide_view_create(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)slide_view_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "slide_view_t*");
  }
  return jret;
}

JSValue wrap_slide_view_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)slide_view_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "slide_view_t*");
  }
  return jret;
}

JSValue wrap_slide_view_set_auto_play(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint16_t auto_play = (uint16_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_view_set_auto_play(widget, auto_play);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_view_set_active(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t index = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_view_set_active(widget, index);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_view_set_vertical(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t vertical = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)slide_view_set_vertical(widget, vertical);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_view_set_anim_hint(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* anim_hint = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)slide_view_set_anim_hint(widget, anim_hint);
    JS_FreeCString(ctx, anim_hint);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_view_set_loop(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t loop = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)slide_view_set_loop(widget, loop);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_view_t_get_prop_vertical(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)quickjs_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = JS_NewBool(ctx, obj->vertical);
  return jret;
}

JSValue wrap_slide_view_t_get_prop_auto_play(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)quickjs_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = JS_NewInt32(ctx, obj->auto_play);
  return jret;
}

JSValue wrap_slide_view_t_get_prop_loop(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)quickjs_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = JS_NewBool(ctx, obj->loop);
  return jret;
}

JSValue wrap_slide_view_t_get_prop_anim_hint(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)quickjs_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = quickjs_create_string(ctx, obj->anim_hint);
  return jret;
}

ret_t slide_view_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "slide_view_create",
                    JS_NewCFunction(ctx, wrap_slide_view_create, "slide_view_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_cast",
                    JS_NewCFunction(ctx, wrap_slide_view_cast, "slide_view_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_view_set_auto_play",
      JS_NewCFunction(ctx, wrap_slide_view_set_auto_play, "slide_view_set_auto_play", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_set_active",
                    JS_NewCFunction(ctx, wrap_slide_view_set_active, "slide_view_set_active", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_view_set_vertical",
      JS_NewCFunction(ctx, wrap_slide_view_set_vertical, "slide_view_set_vertical", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_view_set_anim_hint",
      JS_NewCFunction(ctx, wrap_slide_view_set_anim_hint, "slide_view_set_anim_hint", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_set_loop",
                    JS_NewCFunction(ctx, wrap_slide_view_set_loop, "slide_view_set_loop", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_t_get_prop_vertical",
                    JS_NewCFunction(ctx, wrap_slide_view_t_get_prop_vertical,
                                    "slide_view_t_get_prop_vertical", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_t_get_prop_auto_play",
                    JS_NewCFunction(ctx, wrap_slide_view_t_get_prop_auto_play,
                                    "slide_view_t_get_prop_auto_play", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_view_t_get_prop_loop",
      JS_NewCFunction(ctx, wrap_slide_view_t_get_prop_loop, "slide_view_t_get_prop_loop", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_t_get_prop_anim_hint",
                    JS_NewCFunction(ctx, wrap_slide_view_t_get_prop_anim_hint,
                                    "slide_view_t_get_prop_anim_hint", 1));

  return RET_OK;
}

JSValue wrap_slider_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)slider_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "slider_t*");
  }
  return jret;
}

JSValue wrap_slider_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)slider_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "slider_t*");
  }
  return jret;
}

JSValue wrap_slider_set_value(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint16_t value = (uint16_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slider_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slider_set_min(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint16_t min = (uint16_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slider_set_min(widget, min);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slider_set_max(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint16_t max = (uint16_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slider_set_max(widget, max);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slider_set_step(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint16_t step = (uint16_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slider_set_step(widget, step);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slider_set_bar_size(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t bar_size = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slider_set_bar_size(widget, bar_size);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slider_set_vertical(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t vertical = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)slider_set_vertical(widget, vertical);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slider_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slider_t* obj = (slider_t*)quickjs_get_pointer(ctx, argv[0], "slider_t*");

  jret = JS_NewInt32(ctx, obj->value);
  return jret;
}

JSValue wrap_slider_t_get_prop_min(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slider_t* obj = (slider_t*)quickjs_get_pointer(ctx, argv[0], "slider_t*");

  jret = JS_NewInt32(ctx, obj->min);
  return jret;
}

JSValue wrap_slider_t_get_prop_max(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slider_t* obj = (slider_t*)quickjs_get_pointer(ctx, argv[0], "slider_t*");

  jret = JS_NewInt32(ctx, obj->max);
  return jret;
}

JSValue wrap_slider_t_get_prop_step(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slider_t* obj = (slider_t*)quickjs_get_pointer(ctx, argv[0], "slider_t*");

  jret = JS_NewInt32(ctx, obj->step);
  return jret;
}

JSValue wrap_slider_t_get_prop_vertical(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slider_t* obj = (slider_t*)quickjs_get_pointer(ctx, argv[0], "slider_t*");

  jret = JS_NewBool(ctx, obj->vertical);
  return jret;
}

JSValue wrap_slider_t_get_prop_bar_size(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slider_t* obj = (slider_t*)quickjs_get_pointer(ctx, argv[0], "slider_t*");

  jret = JS_NewInt32(ctx, obj->bar_size);
  return jret;
}

ret_t slider_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "slider_create",
                    JS_NewCFunction(ctx, wrap_slider_create, "slider_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_cast",
                    JS_NewCFunction(ctx, wrap_slider_cast, "slider_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_set_value",
                    JS_NewCFunction(ctx, wrap_slider_set_value, "slider_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_set_min",
                    JS_NewCFunction(ctx, wrap_slider_set_min, "slider_set_min", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_set_max",
                    JS_NewCFunction(ctx, wrap_slider_set_max, "slider_set_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_set_step",
                    JS_NewCFunction(ctx, wrap_slider_set_step, "slider_set_step", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_set_bar_size",
                    JS_NewCFunction(ctx, wrap_slider_set_bar_size, "slider_set_bar_size", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_set_vertical",
                    JS_NewCFunction(ctx, wrap_slider_set_vertical, "slider_set_vertical", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slider_t_get_prop_value",
      JS_NewCFunction(ctx, wrap_slider_t_get_prop_value, "slider_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_t_get_prop_min",
                    JS_NewCFunction(ctx, wrap_slider_t_get_prop_min, "slider_t_get_prop_min", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_t_get_prop_max",
                    JS_NewCFunction(ctx, wrap_slider_t_get_prop_max, "slider_t_get_prop_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_t_get_prop_step",
                    JS_NewCFunction(ctx, wrap_slider_t_get_prop_step, "slider_t_get_prop_step", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slider_t_get_prop_vertical",
      JS_NewCFunction(ctx, wrap_slider_t_get_prop_vertical, "slider_t_get_prop_vertical", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slider_t_get_prop_bar_size",
      JS_NewCFunction(ctx, wrap_slider_t_get_prop_bar_size, "slider_t_get_prop_bar_size", 1));

  return RET_OK;
}

JSValue wrap_switch_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)switch_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "switch_t*");
  }
  return jret;
}

JSValue wrap_switch_set_value(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t value = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)switch_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_switch_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)switch_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "switch_t*");
  }
  return jret;
}

JSValue wrap_switch_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  switch_t* obj = (switch_t*)quickjs_get_pointer(ctx, argv[0], "switch_t*");

  jret = JS_NewBool(ctx, obj->value);
  return jret;
}

JSValue wrap_switch_t_get_prop_max_xoffset_ratio(JSContext* ctx, JSValueConst this_val, int argc,
                                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  switch_t* obj = (switch_t*)quickjs_get_pointer(ctx, argv[0], "switch_t*");

  jret = JS_NewFloat64(ctx, obj->max_xoffset_ratio);
  return jret;
}

ret_t switch_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "switch_create",
                    JS_NewCFunction(ctx, wrap_switch_create, "switch_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "switch_set_value",
                    JS_NewCFunction(ctx, wrap_switch_set_value, "switch_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "switch_cast",
                    JS_NewCFunction(ctx, wrap_switch_cast, "switch_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "switch_t_get_prop_value",
      JS_NewCFunction(ctx, wrap_switch_t_get_prop_value, "switch_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "switch_t_get_prop_max_xoffset_ratio",
                    JS_NewCFunction(ctx, wrap_switch_t_get_prop_max_xoffset_ratio,
                                    "switch_t_get_prop_max_xoffset_ratio", 1));

  return RET_OK;
}

JSValue wrap_text_selector_create(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)text_selector_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "text_selector_t*");
  }
  return jret;
}

JSValue wrap_text_selector_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)text_selector_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "text_selector_t*");
  }
  return jret;
}

JSValue wrap_text_selector_reset_options(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)text_selector_reset_options(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_text_selector_count_options(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)text_selector_count_options(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_text_selector_append_option(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    char* text = (char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)text_selector_append_option(widget, value, text);
    JS_FreeCString(ctx, text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_text_selector_set_options(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* options = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)text_selector_set_options(widget, options);
    JS_FreeCString(ctx, options);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_text_selector_set_range_options(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t start = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    uint32_t nr = (uint32_t)quickjs_get_int_value(ctx, argv[2]);
    int32_t step = (int32_t)quickjs_get_int_value(ctx, argv[3]);
    ret = (ret_t)text_selector_set_range_options(widget, start, nr, step);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_text_selector_get_value(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)text_selector_get_value(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_text_selector_set_value(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)text_selector_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_text_selector_get_text(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    char* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (char*)text_selector_get_text(widget);

    jret = quickjs_create_string(ctx, ret);
  }
  return jret;
}

JSValue wrap_text_selector_set_text(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* text = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)text_selector_set_text(widget, text);
    JS_FreeCString(ctx, text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_text_selector_set_selected_index(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t index = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)text_selector_set_selected_index(widget, index);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_text_selector_set_visible_nr(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t visible_nr = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)text_selector_set_visible_nr(widget, visible_nr);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_text_selector_t_get_prop_visible_nr(JSContext* ctx, JSValueConst this_val, int argc,
                                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)quickjs_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = JS_NewInt32(ctx, obj->visible_nr);
  return jret;
}

JSValue wrap_text_selector_t_get_prop_selected_index(JSContext* ctx, JSValueConst this_val,
                                                     int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)quickjs_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = JS_NewInt32(ctx, obj->selected_index);
  return jret;
}

JSValue wrap_text_selector_t_get_prop_options(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)quickjs_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = quickjs_create_string(ctx, obj->options);
  return jret;
}

ret_t text_selector_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "text_selector_create",
                    JS_NewCFunction(ctx, wrap_text_selector_create, "text_selector_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_cast",
                    JS_NewCFunction(ctx, wrap_text_selector_cast, "text_selector_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "text_selector_reset_options",
      JS_NewCFunction(ctx, wrap_text_selector_reset_options, "text_selector_reset_options", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "text_selector_count_options",
      JS_NewCFunction(ctx, wrap_text_selector_count_options, "text_selector_count_options", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "text_selector_append_option",
      JS_NewCFunction(ctx, wrap_text_selector_append_option, "text_selector_append_option", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "text_selector_set_options",
      JS_NewCFunction(ctx, wrap_text_selector_set_options, "text_selector_set_options", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_set_range_options",
                    JS_NewCFunction(ctx, wrap_text_selector_set_range_options,
                                    "text_selector_set_range_options", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "text_selector_get_value",
      JS_NewCFunction(ctx, wrap_text_selector_get_value, "text_selector_get_value", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "text_selector_set_value",
      JS_NewCFunction(ctx, wrap_text_selector_set_value, "text_selector_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_get_text",
                    JS_NewCFunction(ctx, wrap_text_selector_get_text, "text_selector_get_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_set_text",
                    JS_NewCFunction(ctx, wrap_text_selector_set_text, "text_selector_set_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_set_selected_index",
                    JS_NewCFunction(ctx, wrap_text_selector_set_selected_index,
                                    "text_selector_set_selected_index", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "text_selector_set_visible_nr",
      JS_NewCFunction(ctx, wrap_text_selector_set_visible_nr, "text_selector_set_visible_nr", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_t_get_prop_visible_nr",
                    JS_NewCFunction(ctx, wrap_text_selector_t_get_prop_visible_nr,
                                    "text_selector_t_get_prop_visible_nr", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_t_get_prop_selected_index",
                    JS_NewCFunction(ctx, wrap_text_selector_t_get_prop_selected_index,
                                    "text_selector_t_get_prop_selected_index", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_t_get_prop_options",
                    JS_NewCFunction(ctx, wrap_text_selector_t_get_prop_options,
                                    "text_selector_t_get_prop_options", 1));

  return RET_OK;
}

JSValue wrap_digit_clock_create(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)digit_clock_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "digit_clock_t*");
  }
  return jret;
}

JSValue wrap_digit_clock_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)digit_clock_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "digit_clock_t*");
  }
  return jret;
}

JSValue wrap_digit_clock_set_format(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* format = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)digit_clock_set_format(widget, format);
    JS_FreeCString(ctx, format);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_digit_clock_t_get_prop_format(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  digit_clock_t* obj = (digit_clock_t*)quickjs_get_pointer(ctx, argv[0], "digit_clock_t*");

  jret = quickjs_create_string(ctx, obj->format);
  return jret;
}

ret_t digit_clock_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "digit_clock_create",
                    JS_NewCFunction(ctx, wrap_digit_clock_create, "digit_clock_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "digit_clock_cast",
                    JS_NewCFunction(ctx, wrap_digit_clock_cast, "digit_clock_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "digit_clock_set_format",
                    JS_NewCFunction(ctx, wrap_digit_clock_set_format, "digit_clock_set_format", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "digit_clock_t_get_prop_format",
      JS_NewCFunction(ctx, wrap_digit_clock_t_get_prop_format, "digit_clock_t_get_prop_format", 1));

  return RET_OK;
}

JSValue wrap_time_clock_create(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)time_clock_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "time_clock_t*");
  }
  return jret;
}

JSValue wrap_time_clock_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)time_clock_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "time_clock_t*");
  }
  return jret;
}

JSValue wrap_time_clock_set_hour(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t hour = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)time_clock_set_hour(widget, hour);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_time_clock_set_minute(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t minute = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)time_clock_set_minute(widget, minute);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_time_clock_set_second(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t second = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)time_clock_set_second(widget, second);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_time_clock_set_hour_image(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* hour = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)time_clock_set_hour_image(widget, hour);
    JS_FreeCString(ctx, hour);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_time_clock_set_minute_image(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* minute_image = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)time_clock_set_minute_image(widget, minute_image);
    JS_FreeCString(ctx, minute_image);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_time_clock_set_second_image(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* second_image = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)time_clock_set_second_image(widget, second_image);
    JS_FreeCString(ctx, second_image);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_time_clock_set_bg_image(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* bg_image = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)time_clock_set_bg_image(widget, bg_image);
    JS_FreeCString(ctx, bg_image);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_time_clock_set_image(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* image = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)time_clock_set_image(widget, image);
    JS_FreeCString(ctx, image);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_time_clock_t_get_prop_hour(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)quickjs_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = JS_NewInt32(ctx, obj->hour);
  return jret;
}

JSValue wrap_time_clock_t_get_prop_minute(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)quickjs_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = JS_NewInt32(ctx, obj->minute);
  return jret;
}

JSValue wrap_time_clock_t_get_prop_second(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)quickjs_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = JS_NewInt32(ctx, obj->second);
  return jret;
}

JSValue wrap_time_clock_t_get_prop_image(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)quickjs_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = quickjs_create_string(ctx, obj->image);
  return jret;
}

JSValue wrap_time_clock_t_get_prop_bg_image(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)quickjs_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = quickjs_create_string(ctx, obj->bg_image);
  return jret;
}

JSValue wrap_time_clock_t_get_prop_hour_image(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)quickjs_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = quickjs_create_string(ctx, obj->hour_image);
  return jret;
}

JSValue wrap_time_clock_t_get_prop_minute_image(JSContext* ctx, JSValueConst this_val, int argc,
                                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)quickjs_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = quickjs_create_string(ctx, obj->minute_image);
  return jret;
}

JSValue wrap_time_clock_t_get_prop_second_image(JSContext* ctx, JSValueConst this_val, int argc,
                                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)quickjs_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = quickjs_create_string(ctx, obj->second_image);
  return jret;
}

ret_t time_clock_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "time_clock_create",
                    JS_NewCFunction(ctx, wrap_time_clock_create, "time_clock_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_cast",
                    JS_NewCFunction(ctx, wrap_time_clock_cast, "time_clock_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_set_hour",
                    JS_NewCFunction(ctx, wrap_time_clock_set_hour, "time_clock_set_hour", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_set_minute",
                    JS_NewCFunction(ctx, wrap_time_clock_set_minute, "time_clock_set_minute", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_set_second",
                    JS_NewCFunction(ctx, wrap_time_clock_set_second, "time_clock_set_second", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "time_clock_set_hour_image",
      JS_NewCFunction(ctx, wrap_time_clock_set_hour_image, "time_clock_set_hour_image", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "time_clock_set_minute_image",
      JS_NewCFunction(ctx, wrap_time_clock_set_minute_image, "time_clock_set_minute_image", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "time_clock_set_second_image",
      JS_NewCFunction(ctx, wrap_time_clock_set_second_image, "time_clock_set_second_image", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "time_clock_set_bg_image",
      JS_NewCFunction(ctx, wrap_time_clock_set_bg_image, "time_clock_set_bg_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_set_image",
                    JS_NewCFunction(ctx, wrap_time_clock_set_image, "time_clock_set_image", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "time_clock_t_get_prop_hour",
      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_hour, "time_clock_t_get_prop_hour", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "time_clock_t_get_prop_minute",
      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_minute, "time_clock_t_get_prop_minute", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "time_clock_t_get_prop_second",
      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_second, "time_clock_t_get_prop_second", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "time_clock_t_get_prop_image",
      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_image, "time_clock_t_get_prop_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_bg_image",
                    JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_bg_image,
                                    "time_clock_t_get_prop_bg_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_hour_image",
                    JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_hour_image,
                                    "time_clock_t_get_prop_hour_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_minute_image",
                    JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_minute_image,
                                    "time_clock_t_get_prop_minute_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_second_image",
                    JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_second_image,
                                    "time_clock_t_get_prop_second_image", 1));

  return RET_OK;
}

JSValue wrap_key_event_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    key_event_t* ret = NULL;
    event_t* event = (event_t*)quickjs_get_pointer(ctx, argv[0], "event_t*");
    ret = (key_event_t*)key_event_cast(event);

    jret = quickjs_create_pointer(ctx, ret, "key_event_t*");
  }
  return jret;
}

JSValue wrap_key_event_t_get_prop_key(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  key_event_t* obj = (key_event_t*)quickjs_get_pointer(ctx, argv[0], "key_event_t*");

  jret = JS_NewInt32(ctx, obj->key);
  return jret;
}

JSValue wrap_key_event_t_get_prop_alt(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  key_event_t* obj = (key_event_t*)quickjs_get_pointer(ctx, argv[0], "key_event_t*");

  jret = JS_NewBool(ctx, obj->alt);
  return jret;
}

JSValue wrap_key_event_t_get_prop_lalt(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  key_event_t* obj = (key_event_t*)quickjs_get_pointer(ctx, argv[0], "key_event_t*");

  jret = JS_NewBool(ctx, obj->lalt);
  return jret;
}

JSValue wrap_key_event_t_get_prop_ralt(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  key_event_t* obj = (key_event_t*)quickjs_get_pointer(ctx, argv[0], "key_event_t*");

  jret = JS_NewBool(ctx, obj->ralt);
  return jret;
}

JSValue wrap_key_event_t_get_prop_ctrl(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  key_event_t* obj = (key_event_t*)quickjs_get_pointer(ctx, argv[0], "key_event_t*");

  jret = JS_NewBool(ctx, obj->ctrl);
  return jret;
}

JSValue wrap_key_event_t_get_prop_lctrl(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  key_event_t* obj = (key_event_t*)quickjs_get_pointer(ctx, argv[0], "key_event_t*");

  jret = JS_NewBool(ctx, obj->lctrl);
  return jret;
}

JSValue wrap_key_event_t_get_prop_rctrl(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  key_event_t* obj = (key_event_t*)quickjs_get_pointer(ctx, argv[0], "key_event_t*");

  jret = JS_NewBool(ctx, obj->rctrl);
  return jret;
}

JSValue wrap_key_event_t_get_prop_shift(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  key_event_t* obj = (key_event_t*)quickjs_get_pointer(ctx, argv[0], "key_event_t*");

  jret = JS_NewBool(ctx, obj->shift);
  return jret;
}

JSValue wrap_key_event_t_get_prop_lshift(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  key_event_t* obj = (key_event_t*)quickjs_get_pointer(ctx, argv[0], "key_event_t*");

  jret = JS_NewBool(ctx, obj->lshift);
  return jret;
}

JSValue wrap_key_event_t_get_prop_rshift(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  key_event_t* obj = (key_event_t*)quickjs_get_pointer(ctx, argv[0], "key_event_t*");

  jret = JS_NewBool(ctx, obj->rshift);
  return jret;
}

JSValue wrap_key_event_t_get_prop_cmd(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  key_event_t* obj = (key_event_t*)quickjs_get_pointer(ctx, argv[0], "key_event_t*");

  jret = JS_NewBool(ctx, obj->cmd);
  return jret;
}

JSValue wrap_key_event_t_get_prop_menu(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  key_event_t* obj = (key_event_t*)quickjs_get_pointer(ctx, argv[0], "key_event_t*");

  jret = JS_NewBool(ctx, obj->menu);
  return jret;
}

JSValue wrap_key_event_t_get_prop_capslock(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  key_event_t* obj = (key_event_t*)quickjs_get_pointer(ctx, argv[0], "key_event_t*");

  jret = JS_NewBool(ctx, obj->capslock);
  return jret;
}

ret_t key_event_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "key_event_cast",
                    JS_NewCFunction(ctx, wrap_key_event_cast, "key_event_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "key_event_t_get_prop_key",
      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_key, "key_event_t_get_prop_key", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "key_event_t_get_prop_alt",
      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_alt, "key_event_t_get_prop_alt", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "key_event_t_get_prop_lalt",
      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_lalt, "key_event_t_get_prop_lalt", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "key_event_t_get_prop_ralt",
      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_ralt, "key_event_t_get_prop_ralt", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "key_event_t_get_prop_ctrl",
      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_ctrl, "key_event_t_get_prop_ctrl", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "key_event_t_get_prop_lctrl",
      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_lctrl, "key_event_t_get_prop_lctrl", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "key_event_t_get_prop_rctrl",
      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_rctrl, "key_event_t_get_prop_rctrl", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "key_event_t_get_prop_shift",
      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_shift, "key_event_t_get_prop_shift", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "key_event_t_get_prop_lshift",
      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_lshift, "key_event_t_get_prop_lshift", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "key_event_t_get_prop_rshift",
      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_rshift, "key_event_t_get_prop_rshift", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "key_event_t_get_prop_cmd",
      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_cmd, "key_event_t_get_prop_cmd", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "key_event_t_get_prop_menu",
      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_menu, "key_event_t_get_prop_menu", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "key_event_t_get_prop_capslock",
      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_capslock, "key_event_t_get_prop_capslock", 1));

  return RET_OK;
}

JSValue wrap_row_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)row_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "row_t*");
  }
  return jret;
}

JSValue wrap_row_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)row_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "row_t*");
  }
  return jret;
}

ret_t row_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "row_create",
                    JS_NewCFunction(ctx, wrap_row_create, "row_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "row_cast",
                    JS_NewCFunction(ctx, wrap_row_cast, "row_cast", 1));

  return RET_OK;
}

JSValue wrap_progress_bar_create(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)progress_bar_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "progress_bar_t*");
  }
  return jret;
}

JSValue wrap_progress_bar_cast(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)progress_bar_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "progress_bar_t*");
  }
  return jret;
}

JSValue wrap_progress_bar_set_value(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint8_t value = (uint8_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)progress_bar_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_progress_bar_set_vertical(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t vertical = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)progress_bar_set_vertical(widget, vertical);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_progress_bar_set_show_text(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t show_text = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)progress_bar_set_show_text(widget, show_text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_progress_bar_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)quickjs_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = JS_NewInt32(ctx, obj->value);
  return jret;
}

JSValue wrap_progress_bar_t_get_prop_vertical(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)quickjs_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = JS_NewBool(ctx, obj->vertical);
  return jret;
}

JSValue wrap_progress_bar_t_get_prop_show_text(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)quickjs_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = JS_NewBool(ctx, obj->show_text);
  return jret;
}

ret_t progress_bar_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_create",
                    JS_NewCFunction(ctx, wrap_progress_bar_create, "progress_bar_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_cast",
                    JS_NewCFunction(ctx, wrap_progress_bar_cast, "progress_bar_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_set_value",
                    JS_NewCFunction(ctx, wrap_progress_bar_set_value, "progress_bar_set_value", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "progress_bar_set_vertical",
      JS_NewCFunction(ctx, wrap_progress_bar_set_vertical, "progress_bar_set_vertical", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "progress_bar_set_show_text",
      JS_NewCFunction(ctx, wrap_progress_bar_set_show_text, "progress_bar_set_show_text", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "progress_bar_t_get_prop_value",
      JS_NewCFunction(ctx, wrap_progress_bar_t_get_prop_value, "progress_bar_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_t_get_prop_vertical",
                    JS_NewCFunction(ctx, wrap_progress_bar_t_get_prop_vertical,
                                    "progress_bar_t_get_prop_vertical", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_t_get_prop_show_text",
                    JS_NewCFunction(ctx, wrap_progress_bar_t_get_prop_show_text,
                                    "progress_bar_t_get_prop_show_text", 1));

  return RET_OK;
}

JSValue wrap_popup_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)popup_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "popup_t*");
  }
  return jret;
}

JSValue wrap_popup_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)popup_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "popup_t*");
  }
  return jret;
}

JSValue wrap_popup_set_close_when_click(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t close_when_click = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)popup_set_close_when_click(widget, close_when_click);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_popup_set_close_when_click_outside(JSContext* ctx, JSValueConst this_val, int argc,
                                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t close_when_click_outside = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)popup_set_close_when_click_outside(widget, close_when_click_outside);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_popup_t_get_prop_close_when_click(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  popup_t* obj = (popup_t*)quickjs_get_pointer(ctx, argv[0], "popup_t*");

  jret = JS_NewBool(ctx, obj->close_when_click);
  return jret;
}

JSValue wrap_popup_t_get_prop_close_when_click_outside(JSContext* ctx, JSValueConst this_val,
                                                       int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  popup_t* obj = (popup_t*)quickjs_get_pointer(ctx, argv[0], "popup_t*");

  jret = JS_NewBool(ctx, obj->close_when_click_outside);
  return jret;
}

ret_t popup_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "popup_create",
                    JS_NewCFunction(ctx, wrap_popup_create, "popup_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "popup_cast",
                    JS_NewCFunction(ctx, wrap_popup_cast, "popup_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "popup_set_close_when_click",
      JS_NewCFunction(ctx, wrap_popup_set_close_when_click, "popup_set_close_when_click", 1));
  JS_SetPropertyStr(ctx, global_obj, "popup_set_close_when_click_outside",
                    JS_NewCFunction(ctx, wrap_popup_set_close_when_click_outside,
                                    "popup_set_close_when_click_outside", 1));
  JS_SetPropertyStr(ctx, global_obj, "popup_t_get_prop_close_when_click",
                    JS_NewCFunction(ctx, wrap_popup_t_get_prop_close_when_click,
                                    "popup_t_get_prop_close_when_click", 1));
  JS_SetPropertyStr(ctx, global_obj, "popup_t_get_prop_close_when_click_outside",
                    JS_NewCFunction(ctx, wrap_popup_t_get_prop_close_when_click_outside,
                                    "popup_t_get_prop_close_when_click_outside", 1));

  return RET_OK;
}

JSValue wrap_pages_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)pages_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "pages_t*");
  }
  return jret;
}

JSValue wrap_pages_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)pages_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "pages_t*");
  }
  return jret;
}

JSValue wrap_pages_set_active(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t index = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)pages_set_active(widget, index);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_pages_set_active_by_name(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)pages_set_active_by_name(widget, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_pages_t_get_prop_active(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  pages_t* obj = (pages_t*)quickjs_get_pointer(ctx, argv[0], "pages_t*");

  jret = JS_NewInt32(ctx, obj->active);
  return jret;
}

ret_t pages_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "pages_create",
                    JS_NewCFunction(ctx, wrap_pages_create, "pages_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "pages_cast",
                    JS_NewCFunction(ctx, wrap_pages_cast, "pages_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "pages_set_active",
                    JS_NewCFunction(ctx, wrap_pages_set_active, "pages_set_active", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "pages_set_active_by_name",
      JS_NewCFunction(ctx, wrap_pages_set_active_by_name, "pages_set_active_by_name", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "pages_t_get_prop_active",
      JS_NewCFunction(ctx, wrap_pages_t_get_prop_active, "pages_t_get_prop_active", 1));

  return RET_OK;
}

JSValue wrap_overlay_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)overlay_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "overlay_t*");
  }
  return jret;
}

JSValue wrap_overlay_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)overlay_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "overlay_t*");
  }
  return jret;
}

ret_t overlay_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "overlay_create",
                    JS_NewCFunction(ctx, wrap_overlay_create, "overlay_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "overlay_cast",
                    JS_NewCFunction(ctx, wrap_overlay_cast, "overlay_cast", 1));

  return RET_OK;
}

JSValue wrap_label_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)label_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "label_t*");
  }
  return jret;
}

JSValue wrap_label_set_length(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t length = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)label_set_length(widget, length);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_label_resize_to_content(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t min_w = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    uint32_t max_w = (uint32_t)quickjs_get_int_value(ctx, argv[2]);
    uint32_t min_h = (uint32_t)quickjs_get_int_value(ctx, argv[3]);
    uint32_t max_h = (uint32_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (ret_t)label_resize_to_content(widget, min_w, max_w, min_h, max_h);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_label_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)label_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "label_t*");
  }
  return jret;
}

JSValue wrap_label_t_get_prop_length(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  label_t* obj = (label_t*)quickjs_get_pointer(ctx, argv[0], "label_t*");

  jret = JS_NewInt32(ctx, obj->length);
  return jret;
}

ret_t label_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "label_create",
                    JS_NewCFunction(ctx, wrap_label_create, "label_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "label_set_length",
                    JS_NewCFunction(ctx, wrap_label_set_length, "label_set_length", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "label_resize_to_content",
      JS_NewCFunction(ctx, wrap_label_resize_to_content, "label_resize_to_content", 1));
  JS_SetPropertyStr(ctx, global_obj, "label_cast",
                    JS_NewCFunction(ctx, wrap_label_cast, "label_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "label_t_get_prop_length",
      JS_NewCFunction(ctx, wrap_label_t_get_prop_length, "label_t_get_prop_length", 1));

  return RET_OK;
}

JSValue wrap_group_box_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)group_box_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "group_box_t*");
  }
  return jret;
}

JSValue wrap_group_box_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)group_box_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "group_box_t*");
  }
  return jret;
}

ret_t group_box_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "group_box_create",
                    JS_NewCFunction(ctx, wrap_group_box_create, "group_box_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "group_box_cast",
                    JS_NewCFunction(ctx, wrap_group_box_cast, "group_box_cast", 1));

  return RET_OK;
}

JSValue wrap_paint_event_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    paint_event_t* ret = NULL;
    event_t* event = (event_t*)quickjs_get_pointer(ctx, argv[0], "event_t*");
    ret = (paint_event_t*)paint_event_cast(event);

    jret = quickjs_create_pointer(ctx, ret, "paint_event_t*");
  }
  return jret;
}

JSValue wrap_paint_event_t_get_prop_c(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  paint_event_t* obj = (paint_event_t*)quickjs_get_pointer(ctx, argv[0], "paint_event_t*");

  jret = quickjs_create_pointer(ctx, obj->c, "canvas_t*");
  return jret;
}

ret_t paint_event_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "paint_event_cast",
                    JS_NewCFunction(ctx, wrap_paint_event_cast, "paint_event_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "paint_event_t_get_prop_c",
      JS_NewCFunction(ctx, wrap_paint_event_t_get_prop_c, "paint_event_t_get_prop_c", 1));

  return RET_OK;
}

JSValue wrap_view_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)view_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "view_t*");
  }
  return jret;
}

JSValue wrap_view_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)view_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "view_t*");
  }
  return jret;
}

ret_t view_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "view_create",
                    JS_NewCFunction(ctx, wrap_view_create, "view_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "view_cast",
                    JS_NewCFunction(ctx, wrap_view_cast, "view_cast", 1));

  return RET_OK;
}

JSValue wrap_window_event_cast(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    window_event_t* ret = NULL;
    event_t* event = (event_t*)quickjs_get_pointer(ctx, argv[0], "event_t*");
    ret = (window_event_t*)window_event_cast(event);

    jret = quickjs_create_pointer(ctx, ret, "window_event_t*");
  }
  return jret;
}

JSValue wrap_window_event_t_get_prop_window(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  window_event_t* obj = (window_event_t*)quickjs_get_pointer(ctx, argv[0], "window_event_t*");

  jret = quickjs_create_pointer(ctx, obj->window, "widget_t*");
  return jret;
}

ret_t window_event_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "window_event_cast",
                    JS_NewCFunction(ctx, wrap_window_event_cast, "window_event_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_event_t_get_prop_window",
                    JS_NewCFunction(ctx, wrap_window_event_t_get_prop_window,
                                    "window_event_t_get_prop_window", 1));

  return RET_OK;
}

JSValue wrap_image_base_set_image(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)image_base_set_image(widget, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_base_set_rotation(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    float_t rotation = (float_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)image_base_set_rotation(widget, rotation);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_base_set_scale(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    float_t scale_x = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t scale_y = (float_t)quickjs_get_number_value(ctx, argv[2]);
    ret = (ret_t)image_base_set_scale(widget, scale_x, scale_y);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_base_set_anchor(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    float_t anchor_x = (float_t)quickjs_get_number_value(ctx, argv[1]);
    float_t anchor_y = (float_t)quickjs_get_number_value(ctx, argv[2]);
    ret = (ret_t)image_base_set_anchor(widget, anchor_x, anchor_y);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_base_set_selected(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t selected = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_base_set_selected(widget, selected);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_base_set_selectable(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t selectable = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_base_set_selectable(widget, selectable);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_base_set_clickable(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t clickable = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_base_set_clickable(widget, clickable);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_base_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)image_base_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "image_base_t*");
  }
  return jret;
}

JSValue wrap_image_base_t_get_prop_image(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_base_t* obj = (image_base_t*)quickjs_get_pointer(ctx, argv[0], "image_base_t*");

  jret = quickjs_create_string(ctx, obj->image);
  return jret;
}

JSValue wrap_image_base_t_get_prop_anchor_x(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_base_t* obj = (image_base_t*)quickjs_get_pointer(ctx, argv[0], "image_base_t*");

  jret = JS_NewFloat64(ctx, obj->anchor_x);
  return jret;
}

JSValue wrap_image_base_t_get_prop_anchor_y(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_base_t* obj = (image_base_t*)quickjs_get_pointer(ctx, argv[0], "image_base_t*");

  jret = JS_NewFloat64(ctx, obj->anchor_y);
  return jret;
}

JSValue wrap_image_base_t_get_prop_scale_x(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_base_t* obj = (image_base_t*)quickjs_get_pointer(ctx, argv[0], "image_base_t*");

  jret = JS_NewFloat64(ctx, obj->scale_x);
  return jret;
}

JSValue wrap_image_base_t_get_prop_scale_y(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_base_t* obj = (image_base_t*)quickjs_get_pointer(ctx, argv[0], "image_base_t*");

  jret = JS_NewFloat64(ctx, obj->scale_y);
  return jret;
}

JSValue wrap_image_base_t_get_prop_rotation(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_base_t* obj = (image_base_t*)quickjs_get_pointer(ctx, argv[0], "image_base_t*");

  jret = JS_NewFloat64(ctx, obj->rotation);
  return jret;
}

JSValue wrap_image_base_t_get_prop_clickable(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_base_t* obj = (image_base_t*)quickjs_get_pointer(ctx, argv[0], "image_base_t*");

  jret = JS_NewBool(ctx, obj->clickable);
  return jret;
}

JSValue wrap_image_base_t_get_prop_selectable(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_base_t* obj = (image_base_t*)quickjs_get_pointer(ctx, argv[0], "image_base_t*");

  jret = JS_NewBool(ctx, obj->selectable);
  return jret;
}

JSValue wrap_image_base_t_get_prop_selected(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_base_t* obj = (image_base_t*)quickjs_get_pointer(ctx, argv[0], "image_base_t*");

  jret = JS_NewBool(ctx, obj->selected);
  return jret;
}

ret_t image_base_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "image_base_set_image",
                    JS_NewCFunction(ctx, wrap_image_base_set_image, "image_base_set_image", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_base_set_rotation",
      JS_NewCFunction(ctx, wrap_image_base_set_rotation, "image_base_set_rotation", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_set_scale",
                    JS_NewCFunction(ctx, wrap_image_base_set_scale, "image_base_set_scale", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_set_anchor",
                    JS_NewCFunction(ctx, wrap_image_base_set_anchor, "image_base_set_anchor", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_base_set_selected",
      JS_NewCFunction(ctx, wrap_image_base_set_selected, "image_base_set_selected", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_base_set_selectable",
      JS_NewCFunction(ctx, wrap_image_base_set_selectable, "image_base_set_selectable", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_base_set_clickable",
      JS_NewCFunction(ctx, wrap_image_base_set_clickable, "image_base_set_clickable", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_cast",
                    JS_NewCFunction(ctx, wrap_image_base_cast, "image_base_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_base_t_get_prop_image",
      JS_NewCFunction(ctx, wrap_image_base_t_get_prop_image, "image_base_t_get_prop_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_anchor_x",
                    JS_NewCFunction(ctx, wrap_image_base_t_get_prop_anchor_x,
                                    "image_base_t_get_prop_anchor_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_anchor_y",
                    JS_NewCFunction(ctx, wrap_image_base_t_get_prop_anchor_y,
                                    "image_base_t_get_prop_anchor_y", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_base_t_get_prop_scale_x",
      JS_NewCFunction(ctx, wrap_image_base_t_get_prop_scale_x, "image_base_t_get_prop_scale_x", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_base_t_get_prop_scale_y",
      JS_NewCFunction(ctx, wrap_image_base_t_get_prop_scale_y, "image_base_t_get_prop_scale_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_rotation",
                    JS_NewCFunction(ctx, wrap_image_base_t_get_prop_rotation,
                                    "image_base_t_get_prop_rotation", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_clickable",
                    JS_NewCFunction(ctx, wrap_image_base_t_get_prop_clickable,
                                    "image_base_t_get_prop_clickable", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_selectable",
                    JS_NewCFunction(ctx, wrap_image_base_t_get_prop_selectable,
                                    "image_base_t_get_prop_selectable", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_selected",
                    JS_NewCFunction(ctx, wrap_image_base_t_get_prop_selected,
                                    "image_base_t_get_prop_selected", 1));

  return RET_OK;
}

JSValue wrap_dialog_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)dialog_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

JSValue wrap_dialog_create_simple(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)dialog_create_simple(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

JSValue wrap_dialog_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)dialog_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

JSValue wrap_dialog_get_title(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)dialog_get_title(widget);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_dialog_get_client(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)dialog_get_client(widget);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_dialog_open(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[0]);
    ret = (widget_t*)dialog_open(name);
    JS_FreeCString(ctx, name);

    jret = quickjs_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

JSValue wrap_dialog_set_title(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* title = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)dialog_set_title(widget, title);
    JS_FreeCString(ctx, title);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_dialog_modal(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)dialog_modal(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_dialog_quit(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t code = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)dialog_quit(widget, code);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_dialog_is_quited(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)dialog_is_quited(widget);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_dialog_is_modal(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)dialog_is_modal(widget);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_dialog_toast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    const char* text = (const char*)quickjs_get_utf8_string(ctx, argv[0]);
    uint32_t duration = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)dialog_toast(text, duration);
    JS_FreeCString(ctx, text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_dialog_info(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    const char* title = (const char*)quickjs_get_utf8_string(ctx, argv[0]);
    const char* text = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)dialog_info(title, text);
    JS_FreeCString(ctx, title);
    JS_FreeCString(ctx, text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_dialog_warn(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    const char* title = (const char*)quickjs_get_utf8_string(ctx, argv[0]);
    const char* text = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)dialog_warn(title, text);
    JS_FreeCString(ctx, title);
    JS_FreeCString(ctx, text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_dialog_confirm(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    const char* title = (const char*)quickjs_get_utf8_string(ctx, argv[0]);
    const char* text = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)dialog_confirm(title, text);
    JS_FreeCString(ctx, title);
    JS_FreeCString(ctx, text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_dialog_t_get_prop_highlight(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  dialog_t* obj = (dialog_t*)quickjs_get_pointer(ctx, argv[0], "dialog_t*");

  jret = quickjs_create_string(ctx, obj->highlight);
  return jret;
}

ret_t dialog_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "dialog_create",
                    JS_NewCFunction(ctx, wrap_dialog_create, "dialog_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_create_simple",
                    JS_NewCFunction(ctx, wrap_dialog_create_simple, "dialog_create_simple", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_cast",
                    JS_NewCFunction(ctx, wrap_dialog_cast, "dialog_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_get_title",
                    JS_NewCFunction(ctx, wrap_dialog_get_title, "dialog_get_title", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_get_client",
                    JS_NewCFunction(ctx, wrap_dialog_get_client, "dialog_get_client", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_open",
                    JS_NewCFunction(ctx, wrap_dialog_open, "dialog_open", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_set_title",
                    JS_NewCFunction(ctx, wrap_dialog_set_title, "dialog_set_title", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_modal",
                    JS_NewCFunction(ctx, wrap_dialog_modal, "dialog_modal", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_quit",
                    JS_NewCFunction(ctx, wrap_dialog_quit, "dialog_quit", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_is_quited",
                    JS_NewCFunction(ctx, wrap_dialog_is_quited, "dialog_is_quited", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_is_modal",
                    JS_NewCFunction(ctx, wrap_dialog_is_modal, "dialog_is_modal", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_toast",
                    JS_NewCFunction(ctx, wrap_dialog_toast, "dialog_toast", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_info",
                    JS_NewCFunction(ctx, wrap_dialog_info, "dialog_info", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_warn",
                    JS_NewCFunction(ctx, wrap_dialog_warn, "dialog_warn", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_confirm",
                    JS_NewCFunction(ctx, wrap_dialog_confirm, "dialog_confirm", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "dialog_t_get_prop_highlight",
      JS_NewCFunction(ctx, wrap_dialog_t_get_prop_highlight, "dialog_t_get_prop_highlight", 1));

  return RET_OK;
}

JSValue wrap_wheel_event_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    wheel_event_t* ret = NULL;
    event_t* event = (event_t*)quickjs_get_pointer(ctx, argv[0], "event_t*");
    ret = (wheel_event_t*)wheel_event_cast(event);

    jret = quickjs_create_pointer(ctx, ret, "wheel_event_t*");
  }
  return jret;
}

JSValue wrap_wheel_event_t_get_prop_dy(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)quickjs_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = JS_NewInt32(ctx, obj->dy);
  return jret;
}

JSValue wrap_wheel_event_t_get_prop_alt(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)quickjs_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = JS_NewBool(ctx, obj->alt);
  return jret;
}

JSValue wrap_wheel_event_t_get_prop_ctrl(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)quickjs_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = JS_NewBool(ctx, obj->ctrl);
  return jret;
}

JSValue wrap_wheel_event_t_get_prop_shift(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)quickjs_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = JS_NewBool(ctx, obj->shift);
  return jret;
}

ret_t wheel_event_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "wheel_event_cast",
                    JS_NewCFunction(ctx, wrap_wheel_event_cast, "wheel_event_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "wheel_event_t_get_prop_dy",
      JS_NewCFunction(ctx, wrap_wheel_event_t_get_prop_dy, "wheel_event_t_get_prop_dy", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "wheel_event_t_get_prop_alt",
      JS_NewCFunction(ctx, wrap_wheel_event_t_get_prop_alt, "wheel_event_t_get_prop_alt", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "wheel_event_t_get_prop_ctrl",
      JS_NewCFunction(ctx, wrap_wheel_event_t_get_prop_ctrl, "wheel_event_t_get_prop_ctrl", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "wheel_event_t_get_prop_shift",
      JS_NewCFunction(ctx, wrap_wheel_event_t_get_prop_shift, "wheel_event_t_get_prop_shift", 1));

  return RET_OK;
}

JSValue wrap_orientation_event_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    orientation_event_t* ret = NULL;
    event_t* event = (event_t*)quickjs_get_pointer(ctx, argv[0], "event_t*");
    ret = (orientation_event_t*)orientation_event_cast(event);

    jret = quickjs_create_pointer(ctx, ret, "orientation_event_t*");
  }
  return jret;
}

JSValue wrap_orientation_event_t_get_prop_orientation(JSContext* ctx, JSValueConst this_val,
                                                      int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  orientation_event_t* obj =
      (orientation_event_t*)quickjs_get_pointer(ctx, argv[0], "orientation_event_t*");

  jret = JS_NewInt32(ctx, obj->orientation);
  return jret;
}

ret_t orientation_event_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "orientation_event_cast",
                    JS_NewCFunction(ctx, wrap_orientation_event_cast, "orientation_event_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "orientation_event_t_get_prop_orientation",
                    JS_NewCFunction(ctx, wrap_orientation_event_t_get_prop_orientation,
                                    "orientation_event_t_get_prop_orientation", 1));

  return RET_OK;
}

JSValue wrap_pointer_event_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    pointer_event_t* ret = NULL;
    event_t* event = (event_t*)quickjs_get_pointer(ctx, argv[0], "event_t*");
    ret = (pointer_event_t*)pointer_event_cast(event);

    jret = quickjs_create_pointer(ctx, ret, "pointer_event_t*");
  }
  return jret;
}

JSValue wrap_pointer_event_t_get_prop_x(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)quickjs_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = JS_NewInt32(ctx, obj->x);
  return jret;
}

JSValue wrap_pointer_event_t_get_prop_y(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)quickjs_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = JS_NewInt32(ctx, obj->y);
  return jret;
}

JSValue wrap_pointer_event_t_get_prop_button(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)quickjs_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = JS_NewInt32(ctx, obj->button);
  return jret;
}

JSValue wrap_pointer_event_t_get_prop_pressed(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)quickjs_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = JS_NewBool(ctx, obj->pressed);
  return jret;
}

JSValue wrap_pointer_event_t_get_prop_alt(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)quickjs_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = JS_NewBool(ctx, obj->alt);
  return jret;
}

JSValue wrap_pointer_event_t_get_prop_ctrl(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)quickjs_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = JS_NewBool(ctx, obj->ctrl);
  return jret;
}

JSValue wrap_pointer_event_t_get_prop_cmd(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)quickjs_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = JS_NewBool(ctx, obj->cmd);
  return jret;
}

JSValue wrap_pointer_event_t_get_prop_menu(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)quickjs_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = JS_NewBool(ctx, obj->menu);
  return jret;
}

JSValue wrap_pointer_event_t_get_prop_shift(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)quickjs_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = JS_NewBool(ctx, obj->shift);
  return jret;
}

ret_t pointer_event_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_cast",
                    JS_NewCFunction(ctx, wrap_pointer_event_cast, "pointer_event_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "pointer_event_t_get_prop_x",
      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_x, "pointer_event_t_get_prop_x", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "pointer_event_t_get_prop_y",
      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_y, "pointer_event_t_get_prop_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_t_get_prop_button",
                    JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_button,
                                    "pointer_event_t_get_prop_button", 1));
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_t_get_prop_pressed",
                    JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_pressed,
                                    "pointer_event_t_get_prop_pressed", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "pointer_event_t_get_prop_alt",
      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_alt, "pointer_event_t_get_prop_alt", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "pointer_event_t_get_prop_ctrl",
      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_ctrl, "pointer_event_t_get_prop_ctrl", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "pointer_event_t_get_prop_cmd",
      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_cmd, "pointer_event_t_get_prop_cmd", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "pointer_event_t_get_prop_menu",
      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_menu, "pointer_event_t_get_prop_menu", 1));
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_t_get_prop_shift",
                    JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_shift,
                                    "pointer_event_t_get_prop_shift", 1));

  return RET_OK;
}

JSValue wrap_window_base_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)window_base_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "window_base_t*");
  }
  return jret;
}

JSValue wrap_window_base_t_get_prop_theme(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  window_base_t* obj = (window_base_t*)quickjs_get_pointer(ctx, argv[0], "window_base_t*");

  jret = quickjs_create_string(ctx, obj->theme);
  return jret;
}

JSValue wrap_window_base_t_get_prop_closable(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  window_base_t* obj = (window_base_t*)quickjs_get_pointer(ctx, argv[0], "window_base_t*");

  jret = JS_NewFloat64(ctx, obj->closable);
  return jret;
}

ret_t window_base_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "window_base_cast",
                    JS_NewCFunction(ctx, wrap_window_base_cast, "window_base_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "window_base_t_get_prop_theme",
      JS_NewCFunction(ctx, wrap_window_base_t_get_prop_theme, "window_base_t_get_prop_theme", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_base_t_get_prop_closable",
                    JS_NewCFunction(ctx, wrap_window_base_t_get_prop_closable,
                                    "window_base_t_get_prop_closable", 1));

  return RET_OK;
}

JSValue wrap_window_manager(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    widget_t* ret = NULL;
    ret = (widget_t*)window_manager();

    jret = quickjs_create_pointer(ctx, ret, "window_manager_t*");
  }
  return jret;
}

JSValue wrap_window_manager_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)window_manager_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "window_manager_t*");
  }
  return jret;
}

JSValue wrap_window_manager_get_top_main_window(JSContext* ctx, JSValueConst this_val, int argc,
                                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)window_manager_get_top_main_window(widget);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_window_manager_get_top_window(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)window_manager_get_top_window(widget);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_window_manager_get_prev_window(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)window_manager_get_prev_window(widget);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_window_manager_get_pointer_x(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    xy_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (xy_t)window_manager_get_pointer_x(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_window_manager_get_pointer_y(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    xy_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (xy_t)window_manager_get_pointer_y(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_window_manager_get_pointer_pressed(JSContext* ctx, JSValueConst this_val, int argc,
                                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)window_manager_get_pointer_pressed(widget);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_window_manager_set_show_fps(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t show_fps = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)window_manager_set_show_fps(widget, show_fps);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_window_manager_set_screen_saver_time(JSContext* ctx, JSValueConst this_val, int argc,
                                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t screen_saver_time = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)window_manager_set_screen_saver_time(widget, screen_saver_time);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_window_manager_set_cursor(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* cursor = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)window_manager_set_cursor(widget, cursor);
    JS_FreeCString(ctx, cursor);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_window_manager_back(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)window_manager_back(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_window_manager_back_to_home(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)window_manager_back_to_home(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

ret_t window_manager_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "window_manager",
                    JS_NewCFunction(ctx, wrap_window_manager, "window_manager", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_cast",
                    JS_NewCFunction(ctx, wrap_window_manager_cast, "window_manager_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_get_top_main_window",
                    JS_NewCFunction(ctx, wrap_window_manager_get_top_main_window,
                                    "window_manager_get_top_main_window", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "window_manager_get_top_window",
      JS_NewCFunction(ctx, wrap_window_manager_get_top_window, "window_manager_get_top_window", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_get_prev_window",
                    JS_NewCFunction(ctx, wrap_window_manager_get_prev_window,
                                    "window_manager_get_prev_window", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "window_manager_get_pointer_x",
      JS_NewCFunction(ctx, wrap_window_manager_get_pointer_x, "window_manager_get_pointer_x", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "window_manager_get_pointer_y",
      JS_NewCFunction(ctx, wrap_window_manager_get_pointer_y, "window_manager_get_pointer_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_get_pointer_pressed",
                    JS_NewCFunction(ctx, wrap_window_manager_get_pointer_pressed,
                                    "window_manager_get_pointer_pressed", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "window_manager_set_show_fps",
      JS_NewCFunction(ctx, wrap_window_manager_set_show_fps, "window_manager_set_show_fps", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_set_screen_saver_time",
                    JS_NewCFunction(ctx, wrap_window_manager_set_screen_saver_time,
                                    "window_manager_set_screen_saver_time", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "window_manager_set_cursor",
      JS_NewCFunction(ctx, wrap_window_manager_set_cursor, "window_manager_set_cursor", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_back",
                    JS_NewCFunction(ctx, wrap_window_manager_back, "window_manager_back", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "window_manager_back_to_home",
      JS_NewCFunction(ctx, wrap_window_manager_back_to_home, "window_manager_back_to_home", 1));

  return RET_OK;
}

JSValue wrap_window_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)window_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

JSValue wrap_window_set_fullscreen(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t fullscreen = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)window_set_fullscreen(widget, fullscreen);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_window_open(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[0]);
    ret = (widget_t*)window_open(name);
    JS_FreeCString(ctx, name);

    jret = quickjs_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

JSValue wrap_window_open_and_close(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    widget_t* ret = NULL;
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[0]);
    widget_t* to_close = (widget_t*)quickjs_get_pointer(ctx, argv[1], "widget_t*");
    ret = (widget_t*)window_open_and_close(name, to_close);
    JS_FreeCString(ctx, name);

    jret = quickjs_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

JSValue wrap_window_close(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)window_close(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_window_close_force(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)window_close_force(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_window_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)window_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

JSValue wrap_window_t_get_prop_fullscreen(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  window_t* obj = (window_t*)quickjs_get_pointer(ctx, argv[0], "window_t*");

  jret = JS_NewBool(ctx, obj->fullscreen);
  return jret;
}

ret_t window_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "window_create",
                    JS_NewCFunction(ctx, wrap_window_create, "window_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_set_fullscreen",
                    JS_NewCFunction(ctx, wrap_window_set_fullscreen, "window_set_fullscreen", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_open",
                    JS_NewCFunction(ctx, wrap_window_open, "window_open", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_open_and_close",
                    JS_NewCFunction(ctx, wrap_window_open_and_close, "window_open_and_close", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_close",
                    JS_NewCFunction(ctx, wrap_window_close, "window_close", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_close_force",
                    JS_NewCFunction(ctx, wrap_window_close_force, "window_close_force", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_cast",
                    JS_NewCFunction(ctx, wrap_window_cast, "window_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "window_t_get_prop_fullscreen",
      JS_NewCFunction(ctx, wrap_window_t_get_prop_fullscreen, "window_t_get_prop_fullscreen", 1));

  return RET_OK;
}

JSValue wrap_canvas_widget_create(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)canvas_widget_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "canvas_widget_t*");
  }
  return jret;
}

JSValue wrap_canvas_widget_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)canvas_widget_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "canvas_widget_t*");
  }
  return jret;
}

ret_t canvas_widget_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "canvas_widget_create",
                    JS_NewCFunction(ctx, wrap_canvas_widget_create, "canvas_widget_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_widget_cast",
                    JS_NewCFunction(ctx, wrap_canvas_widget_cast, "canvas_widget_cast", 1));

  return RET_OK;
}

JSValue wrap_prop_change_event_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    prop_change_event_t* ret = NULL;
    event_t* event = (event_t*)quickjs_get_pointer(ctx, argv[0], "event_t*");
    ret = (prop_change_event_t*)prop_change_event_cast(event);

    jret = quickjs_create_pointer(ctx, ret, "prop_change_event_t*");
  }
  return jret;
}

JSValue wrap_prop_change_event_t_get_prop_name(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  prop_change_event_t* obj =
      (prop_change_event_t*)quickjs_get_pointer(ctx, argv[0], "prop_change_event_t*");

  jret = quickjs_create_string(ctx, obj->name);
  return jret;
}

JSValue wrap_prop_change_event_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  prop_change_event_t* obj =
      (prop_change_event_t*)quickjs_get_pointer(ctx, argv[0], "prop_change_event_t*");

  jret = quickjs_create_pointer(ctx, obj->value, "const value_t*");
  return jret;
}

ret_t prop_change_event_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "prop_change_event_cast",
                    JS_NewCFunction(ctx, wrap_prop_change_event_cast, "prop_change_event_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "prop_change_event_t_get_prop_name",
                    JS_NewCFunction(ctx, wrap_prop_change_event_t_get_prop_name,
                                    "prop_change_event_t_get_prop_name", 1));
  JS_SetPropertyStr(ctx, global_obj, "prop_change_event_t_get_prop_value",
                    JS_NewCFunction(ctx, wrap_prop_change_event_t_get_prop_value,
                                    "prop_change_event_t_get_prop_value", 1));

  return RET_OK;
}

JSValue wrap_color_picker_create(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)color_picker_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "color_picker_t*");
  }
  return jret;
}

JSValue wrap_color_picker_set_color(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* color = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)color_picker_set_color(widget, color);
    JS_FreeCString(ctx, color);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_color_picker_cast(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)color_picker_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "color_picker_t*");
  }
  return jret;
}

JSValue wrap_color_picker_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  color_picker_t* obj = (color_picker_t*)quickjs_get_pointer(ctx, argv[0], "color_picker_t*");

  jret = quickjs_create_string(ctx, obj->value);
  return jret;
}

ret_t color_picker_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "color_picker_create",
                    JS_NewCFunction(ctx, wrap_color_picker_create, "color_picker_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_picker_set_color",
                    JS_NewCFunction(ctx, wrap_color_picker_set_color, "color_picker_set_color", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_picker_cast",
                    JS_NewCFunction(ctx, wrap_color_picker_cast, "color_picker_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "color_picker_t_get_prop_value",
      JS_NewCFunction(ctx, wrap_color_picker_t_get_prop_value, "color_picker_t_get_prop_value", 1));

  return RET_OK;
}

JSValue wrap_grid_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)grid_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "grid_t*");
  }
  return jret;
}

JSValue wrap_grid_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)grid_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "grid_t*");
  }
  return jret;
}

ret_t grid_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "grid_create",
                    JS_NewCFunction(ctx, wrap_grid_create, "grid_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "grid_cast",
                    JS_NewCFunction(ctx, wrap_grid_cast, "grid_cast", 1));

  return RET_OK;
}

JSValue wrap_grid_item_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)grid_item_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "grid_item_t*");
  }
  return jret;
}

JSValue wrap_grid_item_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)grid_item_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "grid_item_t*");
  }
  return jret;
}

ret_t grid_item_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "grid_item_create",
                    JS_NewCFunction(ctx, wrap_grid_item_create, "grid_item_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "grid_item_cast",
                    JS_NewCFunction(ctx, wrap_grid_item_cast, "grid_item_cast", 1));

  return RET_OK;
}

JSValue wrap_edit_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)edit_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "edit_t*");
  }
  return jret;
}

JSValue wrap_edit_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)edit_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "edit_t*");
  }
  return jret;
}

JSValue wrap_edit_get_int(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)edit_get_int(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_edit_get_double(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    double ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (double)edit_get_double(widget);

    jret = JS_NewFloat64(ctx, ret);
  }
  return jret;
}

JSValue wrap_edit_set_int(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)edit_set_int(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_edit_set_double(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    double value = (double)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)edit_set_double(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_edit_set_text_limit(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t min = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    uint32_t max = (uint32_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)edit_set_text_limit(widget, min, max);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_edit_set_int_limit(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t min = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    int32_t max = (int32_t)quickjs_get_int_value(ctx, argv[2]);
    int32_t step = (int32_t)quickjs_get_int_value(ctx, argv[3]);
    ret = (ret_t)edit_set_int_limit(widget, min, max, step);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_edit_set_float_limit(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    double min = (double)quickjs_get_number_value(ctx, argv[1]);
    double max = (double)quickjs_get_number_value(ctx, argv[2]);
    double step = (double)quickjs_get_number_value(ctx, argv[3]);
    ret = (ret_t)edit_set_float_limit(widget, min, max, step);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_edit_set_readonly(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t readonly = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)edit_set_readonly(widget, readonly);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_edit_set_auto_fix(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t auto_fix = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)edit_set_auto_fix(widget, auto_fix);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_edit_set_input_type(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    input_type_t type = (input_type_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)edit_set_input_type(widget, type);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_edit_set_input_tips(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* tips = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)edit_set_input_tips(widget, tips);
    JS_FreeCString(ctx, tips);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_edit_set_password_visible(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t password_visible = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)edit_set_password_visible(widget, password_visible);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_edit_set_focus(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t focus = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)edit_set_focus(widget, focus);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_edit_t_get_prop_readonly(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  edit_t* obj = (edit_t*)quickjs_get_pointer(ctx, argv[0], "edit_t*");

  jret = JS_NewBool(ctx, obj->readonly);
  return jret;
}

JSValue wrap_edit_t_get_prop_password_visible(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  edit_t* obj = (edit_t*)quickjs_get_pointer(ctx, argv[0], "edit_t*");

  jret = JS_NewBool(ctx, obj->password_visible);
  return jret;
}

JSValue wrap_edit_t_get_prop_auto_fix(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  edit_t* obj = (edit_t*)quickjs_get_pointer(ctx, argv[0], "edit_t*");

  jret = JS_NewBool(ctx, obj->auto_fix);
  return jret;
}

JSValue wrap_edit_t_get_prop_top_margin(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  edit_t* obj = (edit_t*)quickjs_get_pointer(ctx, argv[0], "edit_t*");

  jret = JS_NewInt32(ctx, obj->top_margin);
  return jret;
}

JSValue wrap_edit_t_get_prop_bottom_margin(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  edit_t* obj = (edit_t*)quickjs_get_pointer(ctx, argv[0], "edit_t*");

  jret = JS_NewInt32(ctx, obj->bottom_margin);
  return jret;
}

JSValue wrap_edit_t_get_prop_left_margin(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  edit_t* obj = (edit_t*)quickjs_get_pointer(ctx, argv[0], "edit_t*");

  jret = JS_NewInt32(ctx, obj->left_margin);
  return jret;
}

JSValue wrap_edit_t_get_prop_right_margin(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  edit_t* obj = (edit_t*)quickjs_get_pointer(ctx, argv[0], "edit_t*");

  jret = JS_NewInt32(ctx, obj->right_margin);
  return jret;
}

JSValue wrap_edit_t_get_prop_tips(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  edit_t* obj = (edit_t*)quickjs_get_pointer(ctx, argv[0], "edit_t*");

  jret = quickjs_create_string(ctx, obj->tips);
  return jret;
}

ret_t edit_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "edit_create",
                    JS_NewCFunction(ctx, wrap_edit_create, "edit_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_cast",
                    JS_NewCFunction(ctx, wrap_edit_cast, "edit_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_get_int",
                    JS_NewCFunction(ctx, wrap_edit_get_int, "edit_get_int", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_get_double",
                    JS_NewCFunction(ctx, wrap_edit_get_double, "edit_get_double", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_int",
                    JS_NewCFunction(ctx, wrap_edit_set_int, "edit_set_int", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_double",
                    JS_NewCFunction(ctx, wrap_edit_set_double, "edit_set_double", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_text_limit",
                    JS_NewCFunction(ctx, wrap_edit_set_text_limit, "edit_set_text_limit", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_int_limit",
                    JS_NewCFunction(ctx, wrap_edit_set_int_limit, "edit_set_int_limit", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_float_limit",
                    JS_NewCFunction(ctx, wrap_edit_set_float_limit, "edit_set_float_limit", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_readonly",
                    JS_NewCFunction(ctx, wrap_edit_set_readonly, "edit_set_readonly", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_auto_fix",
                    JS_NewCFunction(ctx, wrap_edit_set_auto_fix, "edit_set_auto_fix", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_input_type",
                    JS_NewCFunction(ctx, wrap_edit_set_input_type, "edit_set_input_type", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_input_tips",
                    JS_NewCFunction(ctx, wrap_edit_set_input_tips, "edit_set_input_tips", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "edit_set_password_visible",
      JS_NewCFunction(ctx, wrap_edit_set_password_visible, "edit_set_password_visible", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_focus",
                    JS_NewCFunction(ctx, wrap_edit_set_focus, "edit_set_focus", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "edit_t_get_prop_readonly",
      JS_NewCFunction(ctx, wrap_edit_t_get_prop_readonly, "edit_t_get_prop_readonly", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_t_get_prop_password_visible",
                    JS_NewCFunction(ctx, wrap_edit_t_get_prop_password_visible,
                                    "edit_t_get_prop_password_visible", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "edit_t_get_prop_auto_fix",
      JS_NewCFunction(ctx, wrap_edit_t_get_prop_auto_fix, "edit_t_get_prop_auto_fix", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "edit_t_get_prop_top_margin",
      JS_NewCFunction(ctx, wrap_edit_t_get_prop_top_margin, "edit_t_get_prop_top_margin", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "edit_t_get_prop_bottom_margin",
      JS_NewCFunction(ctx, wrap_edit_t_get_prop_bottom_margin, "edit_t_get_prop_bottom_margin", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "edit_t_get_prop_left_margin",
      JS_NewCFunction(ctx, wrap_edit_t_get_prop_left_margin, "edit_t_get_prop_left_margin", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "edit_t_get_prop_right_margin",
      JS_NewCFunction(ctx, wrap_edit_t_get_prop_right_margin, "edit_t_get_prop_right_margin", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_t_get_prop_tips",
                    JS_NewCFunction(ctx, wrap_edit_t_get_prop_tips, "edit_t_get_prop_tips", 1));

  return RET_OK;
}

JSValue wrap_tab_control_create(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)tab_control_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "tab_control_t*");
  }
  return jret;
}

JSValue wrap_tab_control_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)tab_control_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "tab_control_t*");
  }
  return jret;
}

ret_t tab_control_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "tab_control_create",
                    JS_NewCFunction(ctx, wrap_tab_control_create, "tab_control_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_control_cast",
                    JS_NewCFunction(ctx, wrap_tab_control_cast, "tab_control_cast", 1));

  return RET_OK;
}

JSValue wrap_style_mutable_get_name(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    style_t* s = (style_t*)quickjs_get_pointer(ctx, argv[0], "style_t*");
    ret = (const char*)style_mutable_get_name(s);

    jret = quickjs_create_string(ctx, ret);
  }
  return jret;
}

JSValue wrap_style_mutable_set_name(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    style_t* s = (style_t*)quickjs_get_pointer(ctx, argv[0], "style_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)style_mutable_set_name(s, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_style_mutable_set_int(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = 0;
    style_t* s = (style_t*)quickjs_get_pointer(ctx, argv[0], "style_t*");
    const char* state = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    int32_t val = (int32_t)quickjs_get_int_value(ctx, argv[3]);
    ret = (ret_t)style_mutable_set_int(s, state, name, val);
    JS_FreeCString(ctx, state);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_style_mutable_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    style_t* ret = NULL;
    style_t* s = (style_t*)quickjs_get_pointer(ctx, argv[0], "style_t*");
    ret = (style_t*)style_mutable_cast(s);

    jret = quickjs_create_pointer(ctx, ret, "style_mutable_t*");
  }
  return jret;
}

JSValue wrap_style_mutable_create(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    style_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    style_t* default_style = (style_t*)quickjs_get_pointer(ctx, argv[1], "style_t*");
    ret = (style_t*)style_mutable_create(widget, default_style);

    jret = quickjs_create_pointer(ctx, ret, "style_mutable_t*");
  }
  return jret;
}

JSValue wrap_style_mutable_t_get_prop_name(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  style_mutable_t* obj = (style_mutable_t*)quickjs_get_pointer(ctx, argv[0], "style_mutable_t*");

  jret = quickjs_create_string(ctx, obj->name);
  return jret;
}

ret_t style_mutable_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "style_mutable_get_name",
                    JS_NewCFunction(ctx, wrap_style_mutable_get_name, "style_mutable_get_name", 1));
  JS_SetPropertyStr(ctx, global_obj, "style_mutable_set_name",
                    JS_NewCFunction(ctx, wrap_style_mutable_set_name, "style_mutable_set_name", 1));
  JS_SetPropertyStr(ctx, global_obj, "style_mutable_set_int",
                    JS_NewCFunction(ctx, wrap_style_mutable_set_int, "style_mutable_set_int", 1));
  JS_SetPropertyStr(ctx, global_obj, "style_mutable_cast",
                    JS_NewCFunction(ctx, wrap_style_mutable_cast, "style_mutable_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "style_mutable_create",
                    JS_NewCFunction(ctx, wrap_style_mutable_create, "style_mutable_create", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "style_mutable_t_get_prop_name",
      JS_NewCFunction(ctx, wrap_style_mutable_t_get_prop_name, "style_mutable_t_get_prop_name", 1));

  return RET_OK;
}

JSValue wrap_tab_button_create(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)tab_button_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "tab_button_t*");
  }
  return jret;
}

JSValue wrap_tab_button_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)tab_button_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "tab_button_t*");
  }
  return jret;
}

JSValue wrap_tab_button_set_value(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t value = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)tab_button_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_tab_button_set_icon(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)tab_button_set_icon(widget, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_tab_button_set_active_icon(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)tab_button_set_active_icon(widget, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_tab_button_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)quickjs_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = JS_NewBool(ctx, obj->value);
  return jret;
}

JSValue wrap_tab_button_t_get_prop_active_icon(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)quickjs_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = quickjs_create_string(ctx, obj->active_icon);
  return jret;
}

JSValue wrap_tab_button_t_get_prop_icon(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)quickjs_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = quickjs_create_string(ctx, obj->icon);
  return jret;
}

ret_t tab_button_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "tab_button_create",
                    JS_NewCFunction(ctx, wrap_tab_button_create, "tab_button_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_cast",
                    JS_NewCFunction(ctx, wrap_tab_button_cast, "tab_button_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_set_value",
                    JS_NewCFunction(ctx, wrap_tab_button_set_value, "tab_button_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_set_icon",
                    JS_NewCFunction(ctx, wrap_tab_button_set_icon, "tab_button_set_icon", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "tab_button_set_active_icon",
      JS_NewCFunction(ctx, wrap_tab_button_set_active_icon, "tab_button_set_active_icon", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "tab_button_t_get_prop_value",
      JS_NewCFunction(ctx, wrap_tab_button_t_get_prop_value, "tab_button_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_t_get_prop_active_icon",
                    JS_NewCFunction(ctx, wrap_tab_button_t_get_prop_active_icon,
                                    "tab_button_t_get_prop_active_icon", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "tab_button_t_get_prop_icon",
      JS_NewCFunction(ctx, wrap_tab_button_t_get_prop_icon, "tab_button_t_get_prop_icon", 1));

  return RET_OK;
}

JSValue wrap_dragger_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)dragger_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "dragger_t*");
  }
  return jret;
}

JSValue wrap_dragger_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)dragger_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "dragger_t*");
  }
  return jret;
}

JSValue wrap_dragger_set_range(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x_min = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y_min = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    xy_t x_max = (xy_t)quickjs_get_int_value(ctx, argv[3]);
    xy_t y_max = (xy_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)dragger_set_range(widget, x_min, y_min, x_max, y_max);

    jret = quickjs_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

JSValue wrap_dragger_t_get_prop_x_min(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  dragger_t* obj = (dragger_t*)quickjs_get_pointer(ctx, argv[0], "dragger_t*");

  jret = JS_NewInt32(ctx, obj->x_min);
  return jret;
}

JSValue wrap_dragger_t_get_prop_y_min(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  dragger_t* obj = (dragger_t*)quickjs_get_pointer(ctx, argv[0], "dragger_t*");

  jret = JS_NewInt32(ctx, obj->y_min);
  return jret;
}

JSValue wrap_dragger_t_get_prop_x_max(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  dragger_t* obj = (dragger_t*)quickjs_get_pointer(ctx, argv[0], "dragger_t*");

  jret = JS_NewInt32(ctx, obj->x_max);
  return jret;
}

JSValue wrap_dragger_t_get_prop_y_max(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  dragger_t* obj = (dragger_t*)quickjs_get_pointer(ctx, argv[0], "dragger_t*");

  jret = JS_NewInt32(ctx, obj->y_max);
  return jret;
}

ret_t dragger_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "dragger_create",
                    JS_NewCFunction(ctx, wrap_dragger_create, "dragger_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "dragger_cast",
                    JS_NewCFunction(ctx, wrap_dragger_cast, "dragger_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "dragger_set_range",
                    JS_NewCFunction(ctx, wrap_dragger_set_range, "dragger_set_range", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "dragger_t_get_prop_x_min",
      JS_NewCFunction(ctx, wrap_dragger_t_get_prop_x_min, "dragger_t_get_prop_x_min", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "dragger_t_get_prop_y_min",
      JS_NewCFunction(ctx, wrap_dragger_t_get_prop_y_min, "dragger_t_get_prop_y_min", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "dragger_t_get_prop_x_max",
      JS_NewCFunction(ctx, wrap_dragger_t_get_prop_x_max, "dragger_t_get_prop_x_max", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "dragger_t_get_prop_y_max",
      JS_NewCFunction(ctx, wrap_dragger_t_get_prop_y_max, "dragger_t_get_prop_y_max", 1));

  return RET_OK;
}

JSValue wrap_object_ref(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    object_t* ret = NULL;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    ret = (object_t*)object_ref(obj);

    jret = quickjs_create_object(ctx, ret, "object_t*", (tk_destroy_t)object_unref);
  }
  return jret;
}

JSValue wrap_object_get_type(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    ret = (const char*)object_get_type(obj);

    jret = quickjs_create_string(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_get_desc(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    ret = (const char*)object_get_desc(obj);

    jret = quickjs_create_string(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_get_size(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    uint32_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    ret = (uint32_t)object_get_size(obj);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_is_collection(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    ret = (bool_t)object_is_collection(obj);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_set_name(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)object_set_name(obj, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_compare(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    int ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    object_t* other = (object_t*)quickjs_get_pointer(ctx, argv[1], "object_t*");
    ret = (int)object_compare(obj, other);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_get_prop(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[2], "value_t*");
    ret = (ret_t)object_get_prop(obj, name, v);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_get_prop_str(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    const char* ret = NULL;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (const char*)object_get_prop_str(obj, name);
    JS_FreeCString(ctx, name);

    jret = quickjs_create_string(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_get_prop_pointer(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    void* ret = NULL;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (void*)object_get_prop_pointer(obj, name);
    JS_FreeCString(ctx, name);

    jret = quickjs_create_pointer(ctx, ret, "void*");
  }
  return jret;
}

JSValue wrap_object_get_prop_object(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    object_t* ret = NULL;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (object_t*)object_get_prop_object(obj, name);
    JS_FreeCString(ctx, name);

    jret = quickjs_create_pointer(ctx, ret, "object_t*");
  }
  return jret;
}

JSValue wrap_object_get_prop_int(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    int32_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    int32_t defval = (int32_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (int32_t)object_get_prop_int(obj, name, defval);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_get_prop_bool(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    bool_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    bool_t defval = (bool_t)quickjs_get_boolean_value(ctx, argv[2]);
    ret = (bool_t)object_get_prop_bool(obj, name, defval);
    JS_FreeCString(ctx, name);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_get_prop_float(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    float_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    float_t defval = (float_t)quickjs_get_number_value(ctx, argv[2]);
    ret = (float_t)object_get_prop_float(obj, name, defval);
    JS_FreeCString(ctx, name);

    jret = JS_NewFloat64(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_remove_prop(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)object_remove_prop(obj, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_set_prop(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    value_t* value = (value_t*)quickjs_get_pointer(ctx, argv[2], "value_t*");
    ret = (ret_t)object_set_prop(obj, name, value);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_set_prop_str(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    const char* value = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)object_set_prop_str(obj, name, value);
    JS_FreeCString(ctx, name);
    JS_FreeCString(ctx, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_set_prop_pointer(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    void* value = (void*)quickjs_get_pointer(ctx, argv[2], "void*");
    ret = (ret_t)object_set_prop_pointer(obj, name, value);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_set_prop_object(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    object_t* value = (object_t*)quickjs_get_pointer(ctx, argv[2], "object_t*");
    ret = (ret_t)object_set_prop_object(obj, name, value);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_set_prop_int(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_int(obj, name, value);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_set_prop_bool(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    bool_t value = (bool_t)quickjs_get_boolean_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_bool(obj, name, value);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_set_prop_float(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    float_t value = (float_t)quickjs_get_number_value(ctx, argv[2]);
    ret = (ret_t)object_set_prop_float(obj, name, value);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_copy_prop(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    object_t* src = (object_t*)quickjs_get_pointer(ctx, argv[1], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)object_copy_prop(obj, src, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_has_prop(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    bool_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (bool_t)object_has_prop(obj, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_eval(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* expr = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    value_t* v = (value_t*)quickjs_get_pointer(ctx, argv[2], "value_t*");
    ret = (ret_t)object_eval(obj, expr, v);
    JS_FreeCString(ctx, expr);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_can_exec(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    bool_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    const char* args = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (bool_t)object_can_exec(obj, name, args);
    JS_FreeCString(ctx, name);
    JS_FreeCString(ctx, args);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_exec(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    const char* name = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    const char* args = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)object_exec(obj, name, args);
    JS_FreeCString(ctx, name);
    JS_FreeCString(ctx, args);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_notify_changed(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    ret = (ret_t)object_notify_changed(obj);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_t_get_prop_ref_count(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");

  jret = JS_NewInt32(ctx, obj->ref_count);
  return jret;
}

JSValue wrap_object_t_get_prop_name(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");

  jret = quickjs_create_string(ctx, obj->name);
  return jret;
}

ret_t object_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "object_ref",
                    JS_NewCFunction(ctx, wrap_object_ref, "object_ref", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_type",
                    JS_NewCFunction(ctx, wrap_object_get_type, "object_get_type", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_desc",
                    JS_NewCFunction(ctx, wrap_object_get_desc, "object_get_desc", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_size",
                    JS_NewCFunction(ctx, wrap_object_get_size, "object_get_size", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_is_collection",
                    JS_NewCFunction(ctx, wrap_object_is_collection, "object_is_collection", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_set_name",
                    JS_NewCFunction(ctx, wrap_object_set_name, "object_set_name", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_compare",
                    JS_NewCFunction(ctx, wrap_object_compare, "object_compare", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_prop",
                    JS_NewCFunction(ctx, wrap_object_get_prop, "object_get_prop", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_prop_str",
                    JS_NewCFunction(ctx, wrap_object_get_prop_str, "object_get_prop_str", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "object_get_prop_pointer",
      JS_NewCFunction(ctx, wrap_object_get_prop_pointer, "object_get_prop_pointer", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_prop_object",
                    JS_NewCFunction(ctx, wrap_object_get_prop_object, "object_get_prop_object", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_prop_int",
                    JS_NewCFunction(ctx, wrap_object_get_prop_int, "object_get_prop_int", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_prop_bool",
                    JS_NewCFunction(ctx, wrap_object_get_prop_bool, "object_get_prop_bool", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_prop_float",
                    JS_NewCFunction(ctx, wrap_object_get_prop_float, "object_get_prop_float", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_remove_prop",
                    JS_NewCFunction(ctx, wrap_object_remove_prop, "object_remove_prop", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_set_prop",
                    JS_NewCFunction(ctx, wrap_object_set_prop, "object_set_prop", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_set_prop_str",
                    JS_NewCFunction(ctx, wrap_object_set_prop_str, "object_set_prop_str", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "object_set_prop_pointer",
      JS_NewCFunction(ctx, wrap_object_set_prop_pointer, "object_set_prop_pointer", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_set_prop_object",
                    JS_NewCFunction(ctx, wrap_object_set_prop_object, "object_set_prop_object", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_set_prop_int",
                    JS_NewCFunction(ctx, wrap_object_set_prop_int, "object_set_prop_int", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_set_prop_bool",
                    JS_NewCFunction(ctx, wrap_object_set_prop_bool, "object_set_prop_bool", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_set_prop_float",
                    JS_NewCFunction(ctx, wrap_object_set_prop_float, "object_set_prop_float", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_copy_prop",
                    JS_NewCFunction(ctx, wrap_object_copy_prop, "object_copy_prop", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_foreach_prop",
                    JS_NewCFunction(ctx, wrap_object_foreach_prop, "object_foreach_prop", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_has_prop",
                    JS_NewCFunction(ctx, wrap_object_has_prop, "object_has_prop", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_eval",
                    JS_NewCFunction(ctx, wrap_object_eval, "object_eval", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_can_exec",
                    JS_NewCFunction(ctx, wrap_object_can_exec, "object_can_exec", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_exec",
                    JS_NewCFunction(ctx, wrap_object_exec, "object_exec", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_notify_changed",
                    JS_NewCFunction(ctx, wrap_object_notify_changed, "object_notify_changed", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "object_t_get_prop_ref_count",
      JS_NewCFunction(ctx, wrap_object_t_get_prop_ref_count, "object_t_get_prop_ref_count", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_t_get_prop_name",
                    JS_NewCFunction(ctx, wrap_object_t_get_prop_name, "object_t_get_prop_name", 1));

  return RET_OK;
}

JSValue wrap_dialog_title_create(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)dialog_title_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "dialog_title_t*");
  }
  return jret;
}

JSValue wrap_dialog_title_cast(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)dialog_title_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "dialog_title_t*");
  }
  return jret;
}

ret_t dialog_title_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "dialog_title_create",
                    JS_NewCFunction(ctx, wrap_dialog_title_create, "dialog_title_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_title_cast",
                    JS_NewCFunction(ctx, wrap_dialog_title_cast, "dialog_title_cast", 1));

  return RET_OK;
}

JSValue wrap_guage_pointer_create(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)guage_pointer_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "guage_pointer_t*");
  }
  return jret;
}

JSValue wrap_guage_pointer_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)guage_pointer_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "guage_pointer_t*");
  }
  return jret;
}

JSValue wrap_guage_pointer_set_angle(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t angle = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)guage_pointer_set_angle(widget, angle);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_guage_pointer_set_image(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* image = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)guage_pointer_set_image(widget, image);
    JS_FreeCString(ctx, image);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_guage_pointer_set_anchor(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* anchor_x = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    const char* anchor_y = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)guage_pointer_set_anchor(widget, anchor_x, anchor_y);
    JS_FreeCString(ctx, anchor_x);
    JS_FreeCString(ctx, anchor_y);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_guage_pointer_t_get_prop_angle(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)quickjs_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = JS_NewInt32(ctx, obj->angle);
  return jret;
}

JSValue wrap_guage_pointer_t_get_prop_image(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)quickjs_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = quickjs_create_string(ctx, obj->image);
  return jret;
}

JSValue wrap_guage_pointer_t_get_prop_anchor_x(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)quickjs_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = JS_NewFloat64(ctx, obj->anchor_x);
  return jret;
}

JSValue wrap_guage_pointer_t_get_prop_anchor_y(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)quickjs_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = JS_NewFloat64(ctx, obj->anchor_y);
  return jret;
}

ret_t guage_pointer_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_create",
                    JS_NewCFunction(ctx, wrap_guage_pointer_create, "guage_pointer_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_cast",
                    JS_NewCFunction(ctx, wrap_guage_pointer_cast, "guage_pointer_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "guage_pointer_set_angle",
      JS_NewCFunction(ctx, wrap_guage_pointer_set_angle, "guage_pointer_set_angle", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "guage_pointer_set_image",
      JS_NewCFunction(ctx, wrap_guage_pointer_set_image, "guage_pointer_set_image", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "guage_pointer_set_anchor",
      JS_NewCFunction(ctx, wrap_guage_pointer_set_anchor, "guage_pointer_set_anchor", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_t_get_prop_angle",
                    JS_NewCFunction(ctx, wrap_guage_pointer_t_get_prop_angle,
                                    "guage_pointer_t_get_prop_angle", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_t_get_prop_image",
                    JS_NewCFunction(ctx, wrap_guage_pointer_t_get_prop_image,
                                    "guage_pointer_t_get_prop_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_t_get_prop_anchor_x",
                    JS_NewCFunction(ctx, wrap_guage_pointer_t_get_prop_anchor_x,
                                    "guage_pointer_t_get_prop_anchor_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_t_get_prop_anchor_y",
                    JS_NewCFunction(ctx, wrap_guage_pointer_t_get_prop_anchor_y,
                                    "guage_pointer_t_get_prop_anchor_y", 1));

  return RET_OK;
}

JSValue wrap_guage_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)guage_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "guage_t*");
  }
  return jret;
}

JSValue wrap_guage_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)guage_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "guage_t*");
  }
  return jret;
}

JSValue wrap_guage_set_image(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* name = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)guage_set_image(widget, name);
    JS_FreeCString(ctx, name);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_guage_set_draw_type(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    image_draw_type_t draw_type = (image_draw_type_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)guage_set_draw_type(widget, draw_type);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_guage_t_get_prop_image(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  guage_t* obj = (guage_t*)quickjs_get_pointer(ctx, argv[0], "guage_t*");

  jret = quickjs_create_string(ctx, obj->image);
  return jret;
}

JSValue wrap_guage_t_get_prop_draw_type(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  guage_t* obj = (guage_t*)quickjs_get_pointer(ctx, argv[0], "guage_t*");

  jret = JS_NewFloat64(ctx, obj->draw_type);
  return jret;
}

ret_t guage_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "guage_create",
                    JS_NewCFunction(ctx, wrap_guage_create, "guage_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_cast",
                    JS_NewCFunction(ctx, wrap_guage_cast, "guage_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_set_image",
                    JS_NewCFunction(ctx, wrap_guage_set_image, "guage_set_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_set_draw_type",
                    JS_NewCFunction(ctx, wrap_guage_set_draw_type, "guage_set_draw_type", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_t_get_prop_image",
                    JS_NewCFunction(ctx, wrap_guage_t_get_prop_image, "guage_t_get_prop_image", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "guage_t_get_prop_draw_type",
      JS_NewCFunction(ctx, wrap_guage_t_get_prop_draw_type, "guage_t_get_prop_draw_type", 1));

  return RET_OK;
}

JSValue wrap_image_animation_create(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)image_animation_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "image_animation_t*");
  }
  return jret;
}

JSValue wrap_image_animation_set_loop(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t loop = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_animation_set_loop(widget, loop);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_animation_set_image(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* image = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)image_animation_set_image(widget, image);
    JS_FreeCString(ctx, image);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_animation_set_interval(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t interval = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)image_animation_set_interval(widget, interval);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_animation_set_delay(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t delay = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)image_animation_set_delay(widget, delay);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_animation_set_auto_play(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t auto_play = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_animation_set_auto_play(widget, auto_play);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_animation_set_sequence(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* sequence = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)image_animation_set_sequence(widget, sequence);
    JS_FreeCString(ctx, sequence);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_animation_set_range_sequence(JSContext* ctx, JSValueConst this_val, int argc,
                                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t start_index = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    uint32_t end_index = (uint32_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)image_animation_set_range_sequence(widget, start_index, end_index);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_animation_play(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)image_animation_play(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_animation_stop(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)image_animation_stop(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_animation_pause(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)image_animation_pause(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_animation_set_format(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* format = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)image_animation_set_format(widget, format);
    JS_FreeCString(ctx, format);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_animation_set_unload_after_paint(JSContext* ctx, JSValueConst this_val, int argc,
                                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t unload_after_paint = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)image_animation_set_unload_after_paint(widget, unload_after_paint);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_animation_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)image_animation_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "image_animation_t*");
  }
  return jret;
}

JSValue wrap_image_animation_t_get_prop_image(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)quickjs_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = quickjs_create_string(ctx, obj->image);
  return jret;
}

JSValue wrap_image_animation_t_get_prop_sequence(JSContext* ctx, JSValueConst this_val, int argc,
                                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)quickjs_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = quickjs_create_string(ctx, obj->sequence);
  return jret;
}

JSValue wrap_image_animation_t_get_prop_start_index(JSContext* ctx, JSValueConst this_val, int argc,
                                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)quickjs_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = JS_NewInt32(ctx, obj->start_index);
  return jret;
}

JSValue wrap_image_animation_t_get_prop_end_index(JSContext* ctx, JSValueConst this_val, int argc,
                                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)quickjs_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = JS_NewInt32(ctx, obj->end_index);
  return jret;
}

JSValue wrap_image_animation_t_get_prop_loop(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)quickjs_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = JS_NewBool(ctx, obj->loop);
  return jret;
}

JSValue wrap_image_animation_t_get_prop_auto_play(JSContext* ctx, JSValueConst this_val, int argc,
                                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)quickjs_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = JS_NewBool(ctx, obj->auto_play);
  return jret;
}

JSValue wrap_image_animation_t_get_prop_unload_after_paint(JSContext* ctx, JSValueConst this_val,
                                                           int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)quickjs_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = JS_NewBool(ctx, obj->unload_after_paint);
  return jret;
}

JSValue wrap_image_animation_t_get_prop_format(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)quickjs_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = quickjs_create_string(ctx, obj->format);
  return jret;
}

JSValue wrap_image_animation_t_get_prop_interval(JSContext* ctx, JSValueConst this_val, int argc,
                                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)quickjs_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = JS_NewInt32(ctx, obj->interval);
  return jret;
}

JSValue wrap_image_animation_t_get_prop_delay(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_animation_t* obj =
      (image_animation_t*)quickjs_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = JS_NewInt32(ctx, obj->delay);
  return jret;
}

ret_t image_animation_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "image_animation_create",
                    JS_NewCFunction(ctx, wrap_image_animation_create, "image_animation_create", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_animation_set_loop",
      JS_NewCFunction(ctx, wrap_image_animation_set_loop, "image_animation_set_loop", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_animation_set_image",
      JS_NewCFunction(ctx, wrap_image_animation_set_image, "image_animation_set_image", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_animation_set_interval",
      JS_NewCFunction(ctx, wrap_image_animation_set_interval, "image_animation_set_interval", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_animation_set_delay",
      JS_NewCFunction(ctx, wrap_image_animation_set_delay, "image_animation_set_delay", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_animation_set_auto_play",
      JS_NewCFunction(ctx, wrap_image_animation_set_auto_play, "image_animation_set_auto_play", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_animation_set_sequence",
      JS_NewCFunction(ctx, wrap_image_animation_set_sequence, "image_animation_set_sequence", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_set_range_sequence",
                    JS_NewCFunction(ctx, wrap_image_animation_set_range_sequence,
                                    "image_animation_set_range_sequence", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_play",
                    JS_NewCFunction(ctx, wrap_image_animation_play, "image_animation_play", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_stop",
                    JS_NewCFunction(ctx, wrap_image_animation_stop, "image_animation_stop", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_pause",
                    JS_NewCFunction(ctx, wrap_image_animation_pause, "image_animation_pause", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_animation_set_format",
      JS_NewCFunction(ctx, wrap_image_animation_set_format, "image_animation_set_format", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_set_unload_after_paint",
                    JS_NewCFunction(ctx, wrap_image_animation_set_unload_after_paint,
                                    "image_animation_set_unload_after_paint", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_cast",
                    JS_NewCFunction(ctx, wrap_image_animation_cast, "image_animation_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_image",
                    JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_image,
                                    "image_animation_t_get_prop_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_sequence",
                    JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_sequence,
                                    "image_animation_t_get_prop_sequence", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_start_index",
                    JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_start_index,
                                    "image_animation_t_get_prop_start_index", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_end_index",
                    JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_end_index,
                                    "image_animation_t_get_prop_end_index", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_loop",
                    JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_loop,
                                    "image_animation_t_get_prop_loop", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_auto_play",
                    JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_auto_play,
                                    "image_animation_t_get_prop_auto_play", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_unload_after_paint",
                    JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_unload_after_paint,
                                    "image_animation_t_get_prop_unload_after_paint", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_format",
                    JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_format,
                                    "image_animation_t_get_prop_format", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_interval",
                    JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_interval,
                                    "image_animation_t_get_prop_interval", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_delay",
                    JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_delay,
                                    "image_animation_t_get_prop_delay", 1));

  return RET_OK;
}

JSValue wrap_image_value_create(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)image_value_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "image_value_t*");
  }
  return jret;
}

JSValue wrap_image_value_set_image(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* image = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)image_value_set_image(widget, image);
    JS_FreeCString(ctx, image);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_value_set_format(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* format = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)image_value_set_format(widget, format);
    JS_FreeCString(ctx, format);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_value_set_value(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    float_t value = (float_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)image_value_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_value_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)image_value_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "image_value_t*");
  }
  return jret;
}

JSValue wrap_image_value_t_get_prop_image(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_value_t* obj = (image_value_t*)quickjs_get_pointer(ctx, argv[0], "image_value_t*");

  jret = quickjs_create_string(ctx, obj->image);
  return jret;
}

JSValue wrap_image_value_t_get_prop_format(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_value_t* obj = (image_value_t*)quickjs_get_pointer(ctx, argv[0], "image_value_t*");

  jret = quickjs_create_string(ctx, obj->format);
  return jret;
}

JSValue wrap_image_value_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_value_t* obj = (image_value_t*)quickjs_get_pointer(ctx, argv[0], "image_value_t*");

  jret = JS_NewFloat64(ctx, obj->value);
  return jret;
}

ret_t image_value_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "image_value_create",
                    JS_NewCFunction(ctx, wrap_image_value_create, "image_value_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_value_set_image",
                    JS_NewCFunction(ctx, wrap_image_value_set_image, "image_value_set_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_value_set_format",
                    JS_NewCFunction(ctx, wrap_image_value_set_format, "image_value_set_format", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_value_set_value",
                    JS_NewCFunction(ctx, wrap_image_value_set_value, "image_value_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_value_cast",
                    JS_NewCFunction(ctx, wrap_image_value_cast, "image_value_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_value_t_get_prop_image",
      JS_NewCFunction(ctx, wrap_image_value_t_get_prop_image, "image_value_t_get_prop_image", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_value_t_get_prop_format",
      JS_NewCFunction(ctx, wrap_image_value_t_get_prop_format, "image_value_t_get_prop_format", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_value_t_get_prop_value",
      JS_NewCFunction(ctx, wrap_image_value_t_get_prop_value, "image_value_t_get_prop_value", 1));

  return RET_OK;
}

JSValue wrap_dialog_client_create(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)dialog_client_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "dialog_client_t*");
  }
  return jret;
}

JSValue wrap_dialog_client_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)dialog_client_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "dialog_client_t*");
  }
  return jret;
}

ret_t dialog_client_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "dialog_client_create",
                    JS_NewCFunction(ctx, wrap_dialog_client_create, "dialog_client_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_client_cast",
                    JS_NewCFunction(ctx, wrap_dialog_client_cast, "dialog_client_cast", 1));

  return RET_OK;
}

JSValue wrap_line_number_create(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)line_number_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "line_number_t*");
  }
  return jret;
}

JSValue wrap_line_number_set_top_margin(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t top_margin = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)line_number_set_top_margin(widget, top_margin);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_line_number_set_bottom_margin(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t bottom_margin = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)line_number_set_bottom_margin(widget, bottom_margin);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_line_number_set_line_height(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t line_height = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)line_number_set_line_height(widget, line_height);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_line_number_set_yoffset(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t yoffset = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)line_number_set_yoffset(widget, yoffset);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_line_number_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)line_number_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "line_number_t*");
  }
  return jret;
}

ret_t line_number_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "line_number_create",
                    JS_NewCFunction(ctx, wrap_line_number_create, "line_number_create", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "line_number_set_top_margin",
      JS_NewCFunction(ctx, wrap_line_number_set_top_margin, "line_number_set_top_margin", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "line_number_set_bottom_margin",
      JS_NewCFunction(ctx, wrap_line_number_set_bottom_margin, "line_number_set_bottom_margin", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "line_number_set_line_height",
      JS_NewCFunction(ctx, wrap_line_number_set_line_height, "line_number_set_line_height", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "line_number_set_yoffset",
      JS_NewCFunction(ctx, wrap_line_number_set_yoffset, "line_number_set_yoffset", 1));
  JS_SetPropertyStr(ctx, global_obj, "line_number_cast",
                    JS_NewCFunction(ctx, wrap_line_number_cast, "line_number_cast", 1));

  return RET_OK;
}

JSValue wrap_mledit_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)mledit_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "mledit_t*");
  }
  return jret;
}

JSValue wrap_mledit_set_readonly(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t readonly = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_readonly(widget, readonly);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_mledit_set_focus(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t focus = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_focus(widget, focus);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_mledit_set_wrap_word(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t wrap_word = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_wrap_word(widget, wrap_word);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_mledit_set_max_lines(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t max_lines = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)mledit_set_max_lines(widget, max_lines);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_mledit_set_input_tips(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* tips = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)mledit_set_input_tips(widget, tips);
    JS_FreeCString(ctx, tips);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_mledit_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)mledit_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "mledit_t*");
  }
  return jret;
}

JSValue wrap_mledit_t_get_prop_readonly(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  mledit_t* obj = (mledit_t*)quickjs_get_pointer(ctx, argv[0], "mledit_t*");

  jret = JS_NewBool(ctx, obj->readonly);
  return jret;
}

JSValue wrap_mledit_t_get_prop_top_margin(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  mledit_t* obj = (mledit_t*)quickjs_get_pointer(ctx, argv[0], "mledit_t*");

  jret = JS_NewInt32(ctx, obj->top_margin);
  return jret;
}

JSValue wrap_mledit_t_get_prop_bottom_margin(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  mledit_t* obj = (mledit_t*)quickjs_get_pointer(ctx, argv[0], "mledit_t*");

  jret = JS_NewInt32(ctx, obj->bottom_margin);
  return jret;
}

JSValue wrap_mledit_t_get_prop_left_margin(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  mledit_t* obj = (mledit_t*)quickjs_get_pointer(ctx, argv[0], "mledit_t*");

  jret = JS_NewInt32(ctx, obj->left_margin);
  return jret;
}

JSValue wrap_mledit_t_get_prop_right_margin(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  mledit_t* obj = (mledit_t*)quickjs_get_pointer(ctx, argv[0], "mledit_t*");

  jret = JS_NewInt32(ctx, obj->right_margin);
  return jret;
}

JSValue wrap_mledit_t_get_prop_tips(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  mledit_t* obj = (mledit_t*)quickjs_get_pointer(ctx, argv[0], "mledit_t*");

  jret = quickjs_create_string(ctx, obj->tips);
  return jret;
}

JSValue wrap_mledit_t_get_prop_wrap_word(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  mledit_t* obj = (mledit_t*)quickjs_get_pointer(ctx, argv[0], "mledit_t*");

  jret = JS_NewBool(ctx, obj->wrap_word);
  return jret;
}

JSValue wrap_mledit_t_get_prop_max_lines(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  mledit_t* obj = (mledit_t*)quickjs_get_pointer(ctx, argv[0], "mledit_t*");

  jret = JS_NewInt32(ctx, obj->max_lines);
  return jret;
}

ret_t mledit_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "mledit_create",
                    JS_NewCFunction(ctx, wrap_mledit_create, "mledit_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_set_readonly",
                    JS_NewCFunction(ctx, wrap_mledit_set_readonly, "mledit_set_readonly", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_set_focus",
                    JS_NewCFunction(ctx, wrap_mledit_set_focus, "mledit_set_focus", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_set_wrap_word",
                    JS_NewCFunction(ctx, wrap_mledit_set_wrap_word, "mledit_set_wrap_word", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_set_max_lines",
                    JS_NewCFunction(ctx, wrap_mledit_set_max_lines, "mledit_set_max_lines", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_set_input_tips",
                    JS_NewCFunction(ctx, wrap_mledit_set_input_tips, "mledit_set_input_tips", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_cast",
                    JS_NewCFunction(ctx, wrap_mledit_cast, "mledit_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "mledit_t_get_prop_readonly",
      JS_NewCFunction(ctx, wrap_mledit_t_get_prop_readonly, "mledit_t_get_prop_readonly", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "mledit_t_get_prop_top_margin",
      JS_NewCFunction(ctx, wrap_mledit_t_get_prop_top_margin, "mledit_t_get_prop_top_margin", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_t_get_prop_bottom_margin",
                    JS_NewCFunction(ctx, wrap_mledit_t_get_prop_bottom_margin,
                                    "mledit_t_get_prop_bottom_margin", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "mledit_t_get_prop_left_margin",
      JS_NewCFunction(ctx, wrap_mledit_t_get_prop_left_margin, "mledit_t_get_prop_left_margin", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_t_get_prop_right_margin",
                    JS_NewCFunction(ctx, wrap_mledit_t_get_prop_right_margin,
                                    "mledit_t_get_prop_right_margin", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_t_get_prop_tips",
                    JS_NewCFunction(ctx, wrap_mledit_t_get_prop_tips, "mledit_t_get_prop_tips", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "mledit_t_get_prop_wrap_word",
      JS_NewCFunction(ctx, wrap_mledit_t_get_prop_wrap_word, "mledit_t_get_prop_wrap_word", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "mledit_t_get_prop_max_lines",
      JS_NewCFunction(ctx, wrap_mledit_t_get_prop_max_lines, "mledit_t_get_prop_max_lines", 1));

  return RET_OK;
}

JSValue wrap_tab_button_group_create(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)tab_button_group_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "tab_button_group_t*");
  }
  return jret;
}

JSValue wrap_tab_button_group_set_compact(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t compact = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)tab_button_group_set_compact(widget, compact);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_tab_button_group_set_scrollable(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t scrollable = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)tab_button_group_set_scrollable(widget, scrollable);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_tab_button_group_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)tab_button_group_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "tab_button_group_t*");
  }
  return jret;
}

JSValue wrap_tab_button_group_t_get_prop_compact(JSContext* ctx, JSValueConst this_val, int argc,
                                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  tab_button_group_t* obj =
      (tab_button_group_t*)quickjs_get_pointer(ctx, argv[0], "tab_button_group_t*");

  jret = JS_NewBool(ctx, obj->compact);
  return jret;
}

JSValue wrap_tab_button_group_t_get_prop_scrollable(JSContext* ctx, JSValueConst this_val, int argc,
                                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  tab_button_group_t* obj =
      (tab_button_group_t*)quickjs_get_pointer(ctx, argv[0], "tab_button_group_t*");

  jret = JS_NewBool(ctx, obj->scrollable);
  return jret;
}

ret_t tab_button_group_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(
      ctx, global_obj, "tab_button_group_create",
      JS_NewCFunction(ctx, wrap_tab_button_group_create, "tab_button_group_create", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "tab_button_group_set_compact",
      JS_NewCFunction(ctx, wrap_tab_button_group_set_compact, "tab_button_group_set_compact", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_group_set_scrollable",
                    JS_NewCFunction(ctx, wrap_tab_button_group_set_scrollable,
                                    "tab_button_group_set_scrollable", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_group_cast",
                    JS_NewCFunction(ctx, wrap_tab_button_group_cast, "tab_button_group_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_group_t_get_prop_compact",
                    JS_NewCFunction(ctx, wrap_tab_button_group_t_get_prop_compact,
                                    "tab_button_group_t_get_prop_compact", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_group_t_get_prop_scrollable",
                    JS_NewCFunction(ctx, wrap_tab_button_group_t_get_prop_scrollable,
                                    "tab_button_group_t_get_prop_scrollable", 1));

  return RET_OK;
}

JSValue wrap_progress_circle_create(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)progress_circle_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "progress_circle_t*");
  }
  return jret;
}

JSValue wrap_progress_circle_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)progress_circle_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "progress_circle_t*");
  }
  return jret;
}

JSValue wrap_progress_circle_set_value(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    float_t value = (float_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_progress_circle_set_max(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t max = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_max(widget, max);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_progress_circle_set_line_width(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t line_width = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_line_width(widget, line_width);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_progress_circle_set_start_angle(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t start_angle = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_start_angle(widget, start_angle);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_progress_circle_set_unit(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* unit = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_unit(widget, unit);
    JS_FreeCString(ctx, unit);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_progress_circle_set_show_text(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t show_text = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_show_text(widget, show_text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_progress_circle_set_counter_clock_wise(JSContext* ctx, JSValueConst this_val, int argc,
                                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t counter_clock_wise = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)progress_circle_set_counter_clock_wise(widget, counter_clock_wise);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_progress_circle_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)quickjs_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = JS_NewFloat64(ctx, obj->value);
  return jret;
}

JSValue wrap_progress_circle_t_get_prop_max(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)quickjs_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = JS_NewInt32(ctx, obj->max);
  return jret;
}

JSValue wrap_progress_circle_t_get_prop_start_angle(JSContext* ctx, JSValueConst this_val, int argc,
                                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)quickjs_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = JS_NewInt32(ctx, obj->start_angle);
  return jret;
}

JSValue wrap_progress_circle_t_get_prop_line_width(JSContext* ctx, JSValueConst this_val, int argc,
                                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)quickjs_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = JS_NewInt32(ctx, obj->line_width);
  return jret;
}

JSValue wrap_progress_circle_t_get_prop_unit(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)quickjs_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = quickjs_create_string(ctx, obj->unit);
  return jret;
}

JSValue wrap_progress_circle_t_get_prop_counter_clock_wise(JSContext* ctx, JSValueConst this_val,
                                                           int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)quickjs_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = JS_NewBool(ctx, obj->counter_clock_wise);
  return jret;
}

JSValue wrap_progress_circle_t_get_prop_show_text(JSContext* ctx, JSValueConst this_val, int argc,
                                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  progress_circle_t* obj =
      (progress_circle_t*)quickjs_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = JS_NewBool(ctx, obj->show_text);
  return jret;
}

ret_t progress_circle_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_create",
                    JS_NewCFunction(ctx, wrap_progress_circle_create, "progress_circle_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_cast",
                    JS_NewCFunction(ctx, wrap_progress_circle_cast, "progress_circle_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "progress_circle_set_value",
      JS_NewCFunction(ctx, wrap_progress_circle_set_value, "progress_circle_set_value", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "progress_circle_set_max",
      JS_NewCFunction(ctx, wrap_progress_circle_set_max, "progress_circle_set_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_set_line_width",
                    JS_NewCFunction(ctx, wrap_progress_circle_set_line_width,
                                    "progress_circle_set_line_width", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_set_start_angle",
                    JS_NewCFunction(ctx, wrap_progress_circle_set_start_angle,
                                    "progress_circle_set_start_angle", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "progress_circle_set_unit",
      JS_NewCFunction(ctx, wrap_progress_circle_set_unit, "progress_circle_set_unit", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "progress_circle_set_show_text",
      JS_NewCFunction(ctx, wrap_progress_circle_set_show_text, "progress_circle_set_show_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_set_counter_clock_wise",
                    JS_NewCFunction(ctx, wrap_progress_circle_set_counter_clock_wise,
                                    "progress_circle_set_counter_clock_wise", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_value",
                    JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_value,
                                    "progress_circle_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_max",
                    JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_max,
                                    "progress_circle_t_get_prop_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_start_angle",
                    JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_start_angle,
                                    "progress_circle_t_get_prop_start_angle", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_line_width",
                    JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_line_width,
                                    "progress_circle_t_get_prop_line_width", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_unit",
                    JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_unit,
                                    "progress_circle_t_get_prop_unit", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_counter_clock_wise",
                    JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_counter_clock_wise,
                                    "progress_circle_t_get_prop_counter_clock_wise", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_show_text",
                    JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_show_text,
                                    "progress_circle_t_get_prop_show_text", 1));

  return RET_OK;
}

JSValue wrap_rich_text_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)rich_text_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "rich_text_t*");
  }
  return jret;
}

JSValue wrap_rich_text_set_text(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    char* text = (char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)rich_text_set_text(widget, text);
    JS_FreeCString(ctx, text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_rich_text_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)rich_text_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "rich_text_t*");
  }
  return jret;
}

JSValue wrap_rich_text_t_get_prop_line_gap(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  rich_text_t* obj = (rich_text_t*)quickjs_get_pointer(ctx, argv[0], "rich_text_t*");

  jret = JS_NewInt32(ctx, obj->line_gap);
  return jret;
}

ret_t rich_text_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "rich_text_create",
                    JS_NewCFunction(ctx, wrap_rich_text_create, "rich_text_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "rich_text_set_text",
                    JS_NewCFunction(ctx, wrap_rich_text_set_text, "rich_text_set_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "rich_text_cast",
                    JS_NewCFunction(ctx, wrap_rich_text_cast, "rich_text_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "rich_text_t_get_prop_line_gap",
      JS_NewCFunction(ctx, wrap_rich_text_t_get_prop_line_gap, "rich_text_t_get_prop_line_gap", 1));

  return RET_OK;
}

JSValue wrap_hscroll_label_create(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)hscroll_label_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "hscroll_label_t*");
  }
  return jret;
}

JSValue wrap_hscroll_label_set_lull(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t lull = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_lull(widget, lull);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_hscroll_label_set_duration(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t duration = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_duration(widget, duration);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_hscroll_label_set_only_focus(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t only_focus = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_only_focus(widget, only_focus);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_hscroll_label_set_loop(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t loop = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_loop(widget, loop);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_hscroll_label_set_yoyo(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t yoyo = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_yoyo(widget, yoyo);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_hscroll_label_set_ellipses(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t ellipses = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_ellipses(widget, ellipses);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_hscroll_label_set_xoffset(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t xoffset = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)hscroll_label_set_xoffset(widget, xoffset);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_hscroll_label_start(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)hscroll_label_start(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_hscroll_label_stop(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)hscroll_label_stop(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_hscroll_label_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)hscroll_label_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "hscroll_label_t*");
  }
  return jret;
}

JSValue wrap_hscroll_label_t_get_prop_only_focus(JSContext* ctx, JSValueConst this_val, int argc,
                                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)quickjs_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = JS_NewBool(ctx, obj->only_focus);
  return jret;
}

JSValue wrap_hscroll_label_t_get_prop_loop(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)quickjs_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = JS_NewBool(ctx, obj->loop);
  return jret;
}

JSValue wrap_hscroll_label_t_get_prop_yoyo(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)quickjs_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = JS_NewBool(ctx, obj->yoyo);
  return jret;
}

JSValue wrap_hscroll_label_t_get_prop_ellipses(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)quickjs_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = JS_NewBool(ctx, obj->ellipses);
  return jret;
}

JSValue wrap_hscroll_label_t_get_prop_lull(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)quickjs_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = JS_NewInt32(ctx, obj->lull);
  return jret;
}

JSValue wrap_hscroll_label_t_get_prop_duration(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)quickjs_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = JS_NewInt32(ctx, obj->duration);
  return jret;
}

JSValue wrap_hscroll_label_t_get_prop_xoffset(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)quickjs_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = JS_NewInt32(ctx, obj->xoffset);
  return jret;
}

JSValue wrap_hscroll_label_t_get_prop_text_w(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)quickjs_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = JS_NewInt32(ctx, obj->text_w);
  return jret;
}

ret_t hscroll_label_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_create",
                    JS_NewCFunction(ctx, wrap_hscroll_label_create, "hscroll_label_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_set_lull",
                    JS_NewCFunction(ctx, wrap_hscroll_label_set_lull, "hscroll_label_set_lull", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "hscroll_label_set_duration",
      JS_NewCFunction(ctx, wrap_hscroll_label_set_duration, "hscroll_label_set_duration", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "hscroll_label_set_only_focus",
      JS_NewCFunction(ctx, wrap_hscroll_label_set_only_focus, "hscroll_label_set_only_focus", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_set_loop",
                    JS_NewCFunction(ctx, wrap_hscroll_label_set_loop, "hscroll_label_set_loop", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_set_yoyo",
                    JS_NewCFunction(ctx, wrap_hscroll_label_set_yoyo, "hscroll_label_set_yoyo", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "hscroll_label_set_ellipses",
      JS_NewCFunction(ctx, wrap_hscroll_label_set_ellipses, "hscroll_label_set_ellipses", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "hscroll_label_set_xoffset",
      JS_NewCFunction(ctx, wrap_hscroll_label_set_xoffset, "hscroll_label_set_xoffset", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_start",
                    JS_NewCFunction(ctx, wrap_hscroll_label_start, "hscroll_label_start", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_stop",
                    JS_NewCFunction(ctx, wrap_hscroll_label_stop, "hscroll_label_stop", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_cast",
                    JS_NewCFunction(ctx, wrap_hscroll_label_cast, "hscroll_label_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_only_focus",
                    JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_only_focus,
                                    "hscroll_label_t_get_prop_only_focus", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "hscroll_label_t_get_prop_loop",
      JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_loop, "hscroll_label_t_get_prop_loop", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "hscroll_label_t_get_prop_yoyo",
      JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_yoyo, "hscroll_label_t_get_prop_yoyo", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_ellipses",
                    JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_ellipses,
                                    "hscroll_label_t_get_prop_ellipses", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "hscroll_label_t_get_prop_lull",
      JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_lull, "hscroll_label_t_get_prop_lull", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_duration",
                    JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_duration,
                                    "hscroll_label_t_get_prop_duration", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_xoffset",
                    JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_xoffset,
                                    "hscroll_label_t_get_prop_xoffset", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_text_w",
                    JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_text_w,
                                    "hscroll_label_t_get_prop_text_w", 1));

  return RET_OK;
}

JSValue wrap_list_item_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)list_item_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "list_item_t*");
  }
  return jret;
}

JSValue wrap_list_item_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)list_item_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "list_item_t*");
  }
  return jret;
}

ret_t list_item_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "list_item_create",
                    JS_NewCFunction(ctx, wrap_list_item_create, "list_item_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_item_cast",
                    JS_NewCFunction(ctx, wrap_list_item_cast, "list_item_cast", 1));

  return RET_OK;
}

JSValue wrap_list_view_h_create(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)list_view_h_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "list_view_h_t*");
  }
  return jret;
}

JSValue wrap_list_view_h_set_item_width(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t item_width = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)list_view_h_set_item_width(widget, item_width);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_list_view_h_set_spacing(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t spacing = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)list_view_h_set_spacing(widget, spacing);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_list_view_h_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)list_view_h_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "list_view_h_t*");
  }
  return jret;
}

JSValue wrap_list_view_h_t_get_prop_item_width(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  list_view_h_t* obj = (list_view_h_t*)quickjs_get_pointer(ctx, argv[0], "list_view_h_t*");

  jret = JS_NewInt32(ctx, obj->item_width);
  return jret;
}

JSValue wrap_list_view_h_t_get_prop_spacing(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  list_view_h_t* obj = (list_view_h_t*)quickjs_get_pointer(ctx, argv[0], "list_view_h_t*");

  jret = JS_NewInt32(ctx, obj->spacing);
  return jret;
}

ret_t list_view_h_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "list_view_h_create",
                    JS_NewCFunction(ctx, wrap_list_view_h_create, "list_view_h_create", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "list_view_h_set_item_width",
      JS_NewCFunction(ctx, wrap_list_view_h_set_item_width, "list_view_h_set_item_width", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "list_view_h_set_spacing",
      JS_NewCFunction(ctx, wrap_list_view_h_set_spacing, "list_view_h_set_spacing", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_h_cast",
                    JS_NewCFunction(ctx, wrap_list_view_h_cast, "list_view_h_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_h_t_get_prop_item_width",
                    JS_NewCFunction(ctx, wrap_list_view_h_t_get_prop_item_width,
                                    "list_view_h_t_get_prop_item_width", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_h_t_get_prop_spacing",
                    JS_NewCFunction(ctx, wrap_list_view_h_t_get_prop_spacing,
                                    "list_view_h_t_get_prop_spacing", 1));

  return RET_OK;
}

JSValue wrap_list_view_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)list_view_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "list_view_t*");
  }
  return jret;
}

JSValue wrap_list_view_set_item_height(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t item_height = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)list_view_set_item_height(widget, item_height);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_list_view_set_default_item_height(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t default_item_height = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)list_view_set_default_item_height(widget, default_item_height);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_list_view_set_auto_hide_scroll_bar(JSContext* ctx, JSValueConst this_val, int argc,
                                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t auto_hide_scroll_bar = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)list_view_set_auto_hide_scroll_bar(widget, auto_hide_scroll_bar);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_list_view_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)list_view_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "list_view_t*");
  }
  return jret;
}

JSValue wrap_list_view_t_get_prop_item_height(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  list_view_t* obj = (list_view_t*)quickjs_get_pointer(ctx, argv[0], "list_view_t*");

  jret = JS_NewInt32(ctx, obj->item_height);
  return jret;
}

JSValue wrap_list_view_t_get_prop_default_item_height(JSContext* ctx, JSValueConst this_val,
                                                      int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  list_view_t* obj = (list_view_t*)quickjs_get_pointer(ctx, argv[0], "list_view_t*");

  jret = JS_NewInt32(ctx, obj->default_item_height);
  return jret;
}

JSValue wrap_list_view_t_get_prop_auto_hide_scroll_bar(JSContext* ctx, JSValueConst this_val,
                                                       int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  list_view_t* obj = (list_view_t*)quickjs_get_pointer(ctx, argv[0], "list_view_t*");

  jret = JS_NewBool(ctx, obj->auto_hide_scroll_bar);
  return jret;
}

ret_t list_view_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "list_view_create",
                    JS_NewCFunction(ctx, wrap_list_view_create, "list_view_create", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "list_view_set_item_height",
      JS_NewCFunction(ctx, wrap_list_view_set_item_height, "list_view_set_item_height", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_set_default_item_height",
                    JS_NewCFunction(ctx, wrap_list_view_set_default_item_height,
                                    "list_view_set_default_item_height", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_set_auto_hide_scroll_bar",
                    JS_NewCFunction(ctx, wrap_list_view_set_auto_hide_scroll_bar,
                                    "list_view_set_auto_hide_scroll_bar", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_cast",
                    JS_NewCFunction(ctx, wrap_list_view_cast, "list_view_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_t_get_prop_item_height",
                    JS_NewCFunction(ctx, wrap_list_view_t_get_prop_item_height,
                                    "list_view_t_get_prop_item_height", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_t_get_prop_default_item_height",
                    JS_NewCFunction(ctx, wrap_list_view_t_get_prop_default_item_height,
                                    "list_view_t_get_prop_default_item_height", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_t_get_prop_auto_hide_scroll_bar",
                    JS_NewCFunction(ctx, wrap_list_view_t_get_prop_auto_hide_scroll_bar,
                                    "list_view_t_get_prop_auto_hide_scroll_bar", 1));

  return RET_OK;
}

JSValue wrap_scroll_bar_create(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)scroll_bar_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

JSValue wrap_scroll_bar_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)scroll_bar_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

JSValue wrap_scroll_bar_create_mobile(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)scroll_bar_create_mobile(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

JSValue wrap_scroll_bar_create_desktop(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)scroll_bar_create_desktop(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

JSValue wrap_scroll_bar_set_params(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t virtual_size = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    int32_t row = (int32_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)scroll_bar_set_params(widget, virtual_size, row);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_scroll_bar_scroll_to(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    int32_t duration = (int32_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)scroll_bar_scroll_to(widget, value, duration);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_scroll_bar_set_value(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)scroll_bar_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_scroll_bar_add_delta(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t delta = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)scroll_bar_add_delta(widget, delta);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_scroll_bar_scroll_delta(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t delta = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)scroll_bar_scroll_delta(widget, delta);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_scroll_bar_set_value_only(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)scroll_bar_set_value_only(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_scroll_bar_is_mobile(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    bool_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (bool_t)scroll_bar_is_mobile(widget);

    jret = JS_NewBool(ctx, ret);
  }
  return jret;
}

JSValue wrap_scroll_bar_t_get_prop_virtual_size(JSContext* ctx, JSValueConst this_val, int argc,
                                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)quickjs_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = JS_NewInt32(ctx, obj->virtual_size);
  return jret;
}

JSValue wrap_scroll_bar_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)quickjs_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = JS_NewInt32(ctx, obj->value);
  return jret;
}

JSValue wrap_scroll_bar_t_get_prop_row(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)quickjs_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = JS_NewInt32(ctx, obj->row);
  return jret;
}

JSValue wrap_scroll_bar_t_get_prop_animatable(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)quickjs_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = JS_NewBool(ctx, obj->animatable);
  return jret;
}

ret_t scroll_bar_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_create",
                    JS_NewCFunction(ctx, wrap_scroll_bar_create, "scroll_bar_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_cast",
                    JS_NewCFunction(ctx, wrap_scroll_bar_cast, "scroll_bar_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "scroll_bar_create_mobile",
      JS_NewCFunction(ctx, wrap_scroll_bar_create_mobile, "scroll_bar_create_mobile", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "scroll_bar_create_desktop",
      JS_NewCFunction(ctx, wrap_scroll_bar_create_desktop, "scroll_bar_create_desktop", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_set_params",
                    JS_NewCFunction(ctx, wrap_scroll_bar_set_params, "scroll_bar_set_params", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_scroll_to",
                    JS_NewCFunction(ctx, wrap_scroll_bar_scroll_to, "scroll_bar_scroll_to", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_set_value",
                    JS_NewCFunction(ctx, wrap_scroll_bar_set_value, "scroll_bar_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_add_delta",
                    JS_NewCFunction(ctx, wrap_scroll_bar_add_delta, "scroll_bar_add_delta", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "scroll_bar_scroll_delta",
      JS_NewCFunction(ctx, wrap_scroll_bar_scroll_delta, "scroll_bar_scroll_delta", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "scroll_bar_set_value_only",
      JS_NewCFunction(ctx, wrap_scroll_bar_set_value_only, "scroll_bar_set_value_only", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_is_mobile",
                    JS_NewCFunction(ctx, wrap_scroll_bar_is_mobile, "scroll_bar_is_mobile", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_t_get_prop_virtual_size",
                    JS_NewCFunction(ctx, wrap_scroll_bar_t_get_prop_virtual_size,
                                    "scroll_bar_t_get_prop_virtual_size", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "scroll_bar_t_get_prop_value",
      JS_NewCFunction(ctx, wrap_scroll_bar_t_get_prop_value, "scroll_bar_t_get_prop_value", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "scroll_bar_t_get_prop_row",
      JS_NewCFunction(ctx, wrap_scroll_bar_t_get_prop_row, "scroll_bar_t_get_prop_row", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_t_get_prop_animatable",
                    JS_NewCFunction(ctx, wrap_scroll_bar_t_get_prop_animatable,
                                    "scroll_bar_t_get_prop_animatable", 1));

  return RET_OK;
}

JSValue wrap_scroll_view_create(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)scroll_view_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "scroll_view_t*");
  }
  return jret;
}

JSValue wrap_scroll_view_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)scroll_view_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "scroll_view_t*");
  }
  return jret;
}

JSValue wrap_scroll_view_set_virtual_w(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)scroll_view_set_virtual_w(widget, w);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_scroll_view_set_virtual_h(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)scroll_view_set_virtual_h(widget, h);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_scroll_view_set_xslidable(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t xslidable = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)scroll_view_set_xslidable(widget, xslidable);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_scroll_view_set_yslidable(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t yslidable = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)scroll_view_set_yslidable(widget, yslidable);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_scroll_view_set_offset(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t xoffset = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    int32_t yoffset = (int32_t)quickjs_get_int_value(ctx, argv[2]);
    ret = (ret_t)scroll_view_set_offset(widget, xoffset, yoffset);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_scroll_view_scroll_to(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 4) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t xoffset_end = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    int32_t yoffset_end = (int32_t)quickjs_get_int_value(ctx, argv[2]);
    int32_t duration = (int32_t)quickjs_get_int_value(ctx, argv[3]);
    ret = (ret_t)scroll_view_scroll_to(widget, xoffset_end, yoffset_end, duration);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_scroll_view_t_get_prop_virtual_w(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)quickjs_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = JS_NewInt32(ctx, obj->virtual_w);
  return jret;
}

JSValue wrap_scroll_view_t_get_prop_virtual_h(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)quickjs_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = JS_NewInt32(ctx, obj->virtual_h);
  return jret;
}

JSValue wrap_scroll_view_t_get_prop_xoffset(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)quickjs_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = JS_NewInt32(ctx, obj->xoffset);
  return jret;
}

JSValue wrap_scroll_view_t_get_prop_yoffset(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)quickjs_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = JS_NewInt32(ctx, obj->yoffset);
  return jret;
}

JSValue wrap_scroll_view_t_get_prop_xslidable(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)quickjs_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = JS_NewBool(ctx, obj->xslidable);
  return jret;
}

JSValue wrap_scroll_view_t_get_prop_yslidable(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)quickjs_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = JS_NewBool(ctx, obj->yslidable);
  return jret;
}

ret_t scroll_view_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_create",
                    JS_NewCFunction(ctx, wrap_scroll_view_create, "scroll_view_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_cast",
                    JS_NewCFunction(ctx, wrap_scroll_view_cast, "scroll_view_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "scroll_view_set_virtual_w",
      JS_NewCFunction(ctx, wrap_scroll_view_set_virtual_w, "scroll_view_set_virtual_w", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "scroll_view_set_virtual_h",
      JS_NewCFunction(ctx, wrap_scroll_view_set_virtual_h, "scroll_view_set_virtual_h", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "scroll_view_set_xslidable",
      JS_NewCFunction(ctx, wrap_scroll_view_set_xslidable, "scroll_view_set_xslidable", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "scroll_view_set_yslidable",
      JS_NewCFunction(ctx, wrap_scroll_view_set_yslidable, "scroll_view_set_yslidable", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_set_offset",
                    JS_NewCFunction(ctx, wrap_scroll_view_set_offset, "scroll_view_set_offset", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_scroll_to",
                    JS_NewCFunction(ctx, wrap_scroll_view_scroll_to, "scroll_view_scroll_to", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_virtual_w",
                    JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_virtual_w,
                                    "scroll_view_t_get_prop_virtual_w", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_virtual_h",
                    JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_virtual_h,
                                    "scroll_view_t_get_prop_virtual_h", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_xoffset",
                    JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_xoffset,
                                    "scroll_view_t_get_prop_xoffset", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_yoffset",
                    JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_yoffset,
                                    "scroll_view_t_get_prop_yoffset", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_xslidable",
                    JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_xslidable,
                                    "scroll_view_t_get_prop_xslidable", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_yslidable",
                    JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_yslidable,
                                    "scroll_view_t_get_prop_yslidable", 1));

  return RET_OK;
}

JSValue wrap_slide_menu_create(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)slide_menu_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "slide_menu_t*");
  }
  return jret;
}

JSValue wrap_slide_menu_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)slide_menu_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "slide_menu_t*");
  }
  return jret;
}

JSValue wrap_slide_menu_set_value(JSContext* ctx, JSValueConst this_val, int argc,
                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t value = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)slide_menu_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_menu_set_align_v(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    align_v_t align_v = (align_v_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)slide_menu_set_align_v(widget, align_v);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_menu_set_min_scale(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    float_t min_scale = (float_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)slide_menu_set_min_scale(widget, min_scale);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_slide_menu_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                         JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)quickjs_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = JS_NewInt32(ctx, obj->value);
  return jret;
}

JSValue wrap_slide_menu_t_get_prop_align_v(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)quickjs_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = JS_NewFloat64(ctx, obj->align_v);
  return jret;
}

JSValue wrap_slide_menu_t_get_prop_min_scale(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)quickjs_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = JS_NewFloat64(ctx, obj->min_scale);
  return jret;
}

ret_t slide_menu_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "slide_menu_create",
                    JS_NewCFunction(ctx, wrap_slide_menu_create, "slide_menu_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_menu_cast",
                    JS_NewCFunction(ctx, wrap_slide_menu_cast, "slide_menu_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_menu_set_value",
                    JS_NewCFunction(ctx, wrap_slide_menu_set_value, "slide_menu_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_menu_set_align_v",
                    JS_NewCFunction(ctx, wrap_slide_menu_set_align_v, "slide_menu_set_align_v", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_menu_set_min_scale",
      JS_NewCFunction(ctx, wrap_slide_menu_set_min_scale, "slide_menu_set_min_scale", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_menu_t_get_prop_value",
      JS_NewCFunction(ctx, wrap_slide_menu_t_get_prop_value, "slide_menu_t_get_prop_value", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "slide_menu_t_get_prop_align_v",
      JS_NewCFunction(ctx, wrap_slide_menu_t_get_prop_align_v, "slide_menu_t_get_prop_align_v", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_menu_t_get_prop_min_scale",
                    JS_NewCFunction(ctx, wrap_slide_menu_t_get_prop_min_scale,
                                    "slide_menu_t_get_prop_min_scale", 1));

  return RET_OK;
}

JSValue wrap_app_bar_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)app_bar_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "app_bar_t*");
  }
  return jret;
}

JSValue wrap_app_bar_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)app_bar_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "app_bar_t*");
  }
  return jret;
}

ret_t app_bar_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "app_bar_create",
                    JS_NewCFunction(ctx, wrap_app_bar_create, "app_bar_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "app_bar_cast",
                    JS_NewCFunction(ctx, wrap_app_bar_cast, "app_bar_cast", 1));

  return RET_OK;
}

JSValue wrap_button_group_create(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)button_group_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "button_group_t*");
  }
  return jret;
}

JSValue wrap_button_group_cast(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)button_group_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "button_group_t*");
  }
  return jret;
}

ret_t button_group_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "button_group_create",
                    JS_NewCFunction(ctx, wrap_button_group_create, "button_group_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "button_group_cast",
                    JS_NewCFunction(ctx, wrap_button_group_cast, "button_group_cast", 1));

  return RET_OK;
}

JSValue wrap_button_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)button_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "button_t*");
  }
  return jret;
}

JSValue wrap_button_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)button_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "button_t*");
  }
  return jret;
}

JSValue wrap_button_set_repeat(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t repeat = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)button_set_repeat(widget, repeat);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_button_set_enable_long_press(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t enable_long_press = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)button_set_enable_long_press(widget, enable_long_press);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_button_t_get_prop_repeat(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  button_t* obj = (button_t*)quickjs_get_pointer(ctx, argv[0], "button_t*");

  jret = JS_NewInt32(ctx, obj->repeat);
  return jret;
}

JSValue wrap_button_t_get_prop_enable_long_press(JSContext* ctx, JSValueConst this_val, int argc,
                                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  button_t* obj = (button_t*)quickjs_get_pointer(ctx, argv[0], "button_t*");

  jret = JS_NewBool(ctx, obj->enable_long_press);
  return jret;
}

ret_t button_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "button_create",
                    JS_NewCFunction(ctx, wrap_button_create, "button_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "button_cast",
                    JS_NewCFunction(ctx, wrap_button_cast, "button_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "button_set_repeat",
                    JS_NewCFunction(ctx, wrap_button_set_repeat, "button_set_repeat", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "button_set_enable_long_press",
      JS_NewCFunction(ctx, wrap_button_set_enable_long_press, "button_set_enable_long_press", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "button_t_get_prop_repeat",
      JS_NewCFunction(ctx, wrap_button_t_get_prop_repeat, "button_t_get_prop_repeat", 1));
  JS_SetPropertyStr(ctx, global_obj, "button_t_get_prop_enable_long_press",
                    JS_NewCFunction(ctx, wrap_button_t_get_prop_enable_long_press,
                                    "button_t_get_prop_enable_long_press", 1));

  return RET_OK;
}

JSValue wrap_check_button_create(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)check_button_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "check_button_t*");
  }
  return jret;
}

JSValue wrap_check_button_create_radio(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)check_button_create_radio(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "check_button_t*");
  }
  return jret;
}

JSValue wrap_check_button_set_value(JSContext* ctx, JSValueConst this_val, int argc,
                                    JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t value = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)check_button_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_check_button_cast(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)check_button_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "check_button_t*");
  }
  return jret;
}

JSValue wrap_check_button_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                           JSValueConst* argv) {
  JSValue jret = JS_NULL;
  check_button_t* obj = (check_button_t*)quickjs_get_pointer(ctx, argv[0], "check_button_t*");

  jret = JS_NewBool(ctx, obj->value);
  return jret;
}

ret_t check_button_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "check_button_create",
                    JS_NewCFunction(ctx, wrap_check_button_create, "check_button_create", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "check_button_create_radio",
      JS_NewCFunction(ctx, wrap_check_button_create_radio, "check_button_create_radio", 1));
  JS_SetPropertyStr(ctx, global_obj, "check_button_set_value",
                    JS_NewCFunction(ctx, wrap_check_button_set_value, "check_button_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "check_button_cast",
                    JS_NewCFunction(ctx, wrap_check_button_cast, "check_button_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "check_button_t_get_prop_value",
      JS_NewCFunction(ctx, wrap_check_button_t_get_prop_value, "check_button_t_get_prop_value", 1));

  return RET_OK;
}

JSValue wrap_color_tile_create(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)color_tile_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "color_tile_t*");
  }
  return jret;
}

JSValue wrap_color_tile_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)color_tile_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "color_tile_t*");
  }
  return jret;
}

JSValue wrap_color_tile_set_bg_color(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* color = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)color_tile_set_bg_color(widget, color);
    JS_FreeCString(ctx, color);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_color_tile_t_get_prop_bg_color(JSContext* ctx, JSValueConst this_val, int argc,
                                            JSValueConst* argv) {
  JSValue jret = JS_NULL;
  color_tile_t* obj = (color_tile_t*)quickjs_get_pointer(ctx, argv[0], "color_tile_t*");

  jret = quickjs_create_string(ctx, obj->bg_color);
  return jret;
}

JSValue wrap_color_tile_t_get_prop_border_color(JSContext* ctx, JSValueConst this_val, int argc,
                                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  color_tile_t* obj = (color_tile_t*)quickjs_get_pointer(ctx, argv[0], "color_tile_t*");

  jret = quickjs_create_string(ctx, obj->border_color);
  return jret;
}

ret_t color_tile_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "color_tile_create",
                    JS_NewCFunction(ctx, wrap_color_tile_create, "color_tile_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_tile_cast",
                    JS_NewCFunction(ctx, wrap_color_tile_cast, "color_tile_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "color_tile_set_bg_color",
      JS_NewCFunction(ctx, wrap_color_tile_set_bg_color, "color_tile_set_bg_color", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_tile_t_get_prop_bg_color",
                    JS_NewCFunction(ctx, wrap_color_tile_t_get_prop_bg_color,
                                    "color_tile_t_get_prop_bg_color", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_tile_t_get_prop_border_color",
                    JS_NewCFunction(ctx, wrap_color_tile_t_get_prop_border_color,
                                    "color_tile_t_get_prop_border_color", 1));

  return RET_OK;
}

JSValue wrap_column_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)column_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "column_t*");
  }
  return jret;
}

JSValue wrap_column_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)column_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "column_t*");
  }
  return jret;
}

ret_t column_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "column_create",
                    JS_NewCFunction(ctx, wrap_column_create, "column_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "column_cast",
                    JS_NewCFunction(ctx, wrap_column_cast, "column_cast", 1));

  return RET_OK;
}

JSValue wrap_combo_box_item_create(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)combo_box_item_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "combo_box_item_t*");
  }
  return jret;
}

JSValue wrap_combo_box_item_cast(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)combo_box_item_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "combo_box_item_t*");
  }
  return jret;
}

JSValue wrap_combo_box_item_set_checked(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    bool_t checked = (bool_t)quickjs_get_boolean_value(ctx, argv[1]);
    ret = (ret_t)combo_box_item_set_checked(widget, checked);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_combo_box_item_set_value(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)combo_box_item_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_combo_box_item_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                             JSValueConst* argv) {
  JSValue jret = JS_NULL;
  combo_box_item_t* obj = (combo_box_item_t*)quickjs_get_pointer(ctx, argv[0], "combo_box_item_t*");

  jret = JS_NewInt32(ctx, obj->value);
  return jret;
}

JSValue wrap_combo_box_item_t_get_prop_checked(JSContext* ctx, JSValueConst this_val, int argc,
                                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  combo_box_item_t* obj = (combo_box_item_t*)quickjs_get_pointer(ctx, argv[0], "combo_box_item_t*");

  jret = JS_NewBool(ctx, obj->checked);
  return jret;
}

ret_t combo_box_item_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "combo_box_item_create",
                    JS_NewCFunction(ctx, wrap_combo_box_item_create, "combo_box_item_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_item_cast",
                    JS_NewCFunction(ctx, wrap_combo_box_item_cast, "combo_box_item_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "combo_box_item_set_checked",
      JS_NewCFunction(ctx, wrap_combo_box_item_set_checked, "combo_box_item_set_checked", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "combo_box_item_set_value",
      JS_NewCFunction(ctx, wrap_combo_box_item_set_value, "combo_box_item_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_item_t_get_prop_value",
                    JS_NewCFunction(ctx, wrap_combo_box_item_t_get_prop_value,
                                    "combo_box_item_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_item_t_get_prop_checked",
                    JS_NewCFunction(ctx, wrap_combo_box_item_t_get_prop_checked,
                                    "combo_box_item_t_get_prop_checked", 1));

  return RET_OK;
}

JSValue wrap_combo_box_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)combo_box_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "combo_box_t*");
  }
  return jret;
}

JSValue wrap_combo_box_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)combo_box_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "combo_box_t*");
  }
  return jret;
}

JSValue wrap_combo_box_set_open_window(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* open_window = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)combo_box_set_open_window(widget, open_window);
    JS_FreeCString(ctx, open_window);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_combo_box_reset_options(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (ret_t)combo_box_reset_options(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_combo_box_count_options(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)combo_box_count_options(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_combo_box_set_selected_index(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    uint32_t index = (uint32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)combo_box_set_selected_index(widget, index);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_combo_box_set_value(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    ret = (ret_t)combo_box_set_value(widget, value);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_combo_box_append_option(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 3) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    int32_t value = (int32_t)quickjs_get_int_value(ctx, argv[1]);
    const char* text = (const char*)quickjs_get_utf8_string(ctx, argv[2]);
    ret = (ret_t)combo_box_append_option(widget, value, text);
    JS_FreeCString(ctx, text);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_combo_box_set_options(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    const char* options = (const char*)quickjs_get_utf8_string(ctx, argv[1]);
    ret = (ret_t)combo_box_set_options(widget, options);
    JS_FreeCString(ctx, options);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_combo_box_get_value(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    int32_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (int32_t)combo_box_get_value(widget);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_combo_box_get_text(JSContext* ctx, JSValueConst this_val, int argc,
                                JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    const char* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (const char*)combo_box_get_text(widget);

    jret = quickjs_create_string(ctx, ret);
  }
  return jret;
}

JSValue wrap_combo_box_t_get_prop_open_window(JSContext* ctx, JSValueConst this_val, int argc,
                                              JSValueConst* argv) {
  JSValue jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)quickjs_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = quickjs_create_string(ctx, obj->open_window);
  return jret;
}

JSValue wrap_combo_box_t_get_prop_selected_index(JSContext* ctx, JSValueConst this_val, int argc,
                                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)quickjs_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = JS_NewInt32(ctx, obj->selected_index);
  return jret;
}

JSValue wrap_combo_box_t_get_prop_value(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)quickjs_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = JS_NewInt32(ctx, obj->value);
  return jret;
}

JSValue wrap_combo_box_t_get_prop_options(JSContext* ctx, JSValueConst this_val, int argc,
                                          JSValueConst* argv) {
  JSValue jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)quickjs_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = quickjs_create_string(ctx, obj->options);
  return jret;
}

ret_t combo_box_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "combo_box_create",
                    JS_NewCFunction(ctx, wrap_combo_box_create, "combo_box_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_cast",
                    JS_NewCFunction(ctx, wrap_combo_box_cast, "combo_box_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "combo_box_set_open_window",
      JS_NewCFunction(ctx, wrap_combo_box_set_open_window, "combo_box_set_open_window", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "combo_box_reset_options",
      JS_NewCFunction(ctx, wrap_combo_box_reset_options, "combo_box_reset_options", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "combo_box_count_options",
      JS_NewCFunction(ctx, wrap_combo_box_count_options, "combo_box_count_options", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "combo_box_set_selected_index",
      JS_NewCFunction(ctx, wrap_combo_box_set_selected_index, "combo_box_set_selected_index", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_set_value",
                    JS_NewCFunction(ctx, wrap_combo_box_set_value, "combo_box_set_value", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "combo_box_append_option",
      JS_NewCFunction(ctx, wrap_combo_box_append_option, "combo_box_append_option", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_set_options",
                    JS_NewCFunction(ctx, wrap_combo_box_set_options, "combo_box_set_options", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_get_value",
                    JS_NewCFunction(ctx, wrap_combo_box_get_value, "combo_box_get_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_get_text",
                    JS_NewCFunction(ctx, wrap_combo_box_get_text, "combo_box_get_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_t_get_prop_open_window",
                    JS_NewCFunction(ctx, wrap_combo_box_t_get_prop_open_window,
                                    "combo_box_t_get_prop_open_window", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_t_get_prop_selected_index",
                    JS_NewCFunction(ctx, wrap_combo_box_t_get_prop_selected_index,
                                    "combo_box_t_get_prop_selected_index", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "combo_box_t_get_prop_value",
      JS_NewCFunction(ctx, wrap_combo_box_t_get_prop_value, "combo_box_t_get_prop_value", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "combo_box_t_get_prop_options",
      JS_NewCFunction(ctx, wrap_combo_box_t_get_prop_options, "combo_box_t_get_prop_options", 1));

  return RET_OK;
}

JSValue wrap_timer_info_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    timer_info_t* ret = NULL;
    timer_info_t* timer = (timer_info_t*)quickjs_get_pointer(ctx, argv[0], "timer_info_t*");
    ret = (timer_info_t*)timer_info_cast(timer);

    jret = quickjs_create_pointer(ctx, ret, "timer_info_t*");
  }
  return jret;
}

JSValue wrap_timer_info_t_get_prop_ctx(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)quickjs_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = quickjs_create_pointer(ctx, obj->ctx, "void*");
  return jret;
}

JSValue wrap_timer_info_t_get_prop_id(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)quickjs_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = JS_NewInt32(ctx, obj->id);
  return jret;
}

JSValue wrap_timer_info_t_get_prop_now(JSContext* ctx, JSValueConst this_val, int argc,
                                       JSValueConst* argv) {
  JSValue jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)quickjs_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = JS_NewInt32(ctx, obj->now);
  return jret;
}

JSValue wrap_timer_info_t_get_prop_user_changed_time(JSContext* ctx, JSValueConst this_val,
                                                     int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)quickjs_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = JS_NewBool(ctx, obj->user_changed_time);
  return jret;
}

ret_t timer_info_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "timer_info_cast",
                    JS_NewCFunction(ctx, wrap_timer_info_cast, "timer_info_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "timer_info_t_get_prop_ctx",
      JS_NewCFunction(ctx, wrap_timer_info_t_get_prop_ctx, "timer_info_t_get_prop_ctx", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "timer_info_t_get_prop_id",
      JS_NewCFunction(ctx, wrap_timer_info_t_get_prop_id, "timer_info_t_get_prop_id", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "timer_info_t_get_prop_now",
      JS_NewCFunction(ctx, wrap_timer_info_t_get_prop_now, "timer_info_t_get_prop_now", 1));
  JS_SetPropertyStr(ctx, global_obj, "timer_info_t_get_prop_user_changed_time",
                    JS_NewCFunction(ctx, wrap_timer_info_t_get_prop_user_changed_time,
                                    "timer_info_t_get_prop_user_changed_time", 1));

  return RET_OK;
}

ret_t window_manager_simple_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);

  return RET_OK;
}

JSValue wrap_object_default_create(JSContext* ctx, JSValueConst this_val, int argc,
                                   JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 0) {
    object_t* ret = NULL;
    ret = (object_t*)object_default_create();

    jret = quickjs_create_object(ctx, ret, "object_default_t*", (tk_destroy_t)object_default_unref);
  }
  return jret;
}

JSValue wrap_object_default_clear_props(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    ret_t ret = 0;
    object_t* obj = (object_t*)quickjs_get_pointer(ctx, argv[0], "object_t*");
    ret = (ret_t)object_default_clear_props(obj);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_object_default_t_get_prop_props_size(JSContext* ctx, JSValueConst this_val, int argc,
                                                  JSValueConst* argv) {
  JSValue jret = JS_NULL;
  object_default_t* obj = (object_default_t*)quickjs_get_pointer(ctx, argv[0], "object_default_t*");

  jret = JS_NewInt32(ctx, obj->props_size);
  return jret;
}

ret_t object_default_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "object_default_create",
                    JS_NewCFunction(ctx, wrap_object_default_create, "object_default_create", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "object_default_clear_props",
      JS_NewCFunction(ctx, wrap_object_default_clear_props, "object_default_clear_props", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_default_t_get_prop_props_size",
                    JS_NewCFunction(ctx, wrap_object_default_t_get_prop_props_size,
                                    "object_default_t_get_prop_props_size", 1));

  return RET_OK;
}

JSValue wrap_idle_info_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    idle_info_t* ret = NULL;
    idle_info_t* idle = (idle_info_t*)quickjs_get_pointer(ctx, argv[0], "idle_info_t*");
    ret = (idle_info_t*)idle_info_cast(idle);

    jret = quickjs_create_pointer(ctx, ret, "idle_info_t*");
  }
  return jret;
}

JSValue wrap_idle_info_t_get_prop_ctx(JSContext* ctx, JSValueConst this_val, int argc,
                                      JSValueConst* argv) {
  JSValue jret = JS_NULL;
  idle_info_t* obj = (idle_info_t*)quickjs_get_pointer(ctx, argv[0], "idle_info_t*");

  jret = quickjs_create_pointer(ctx, obj->ctx, "void*");
  return jret;
}

JSValue wrap_idle_info_t_get_prop_id(JSContext* ctx, JSValueConst this_val, int argc,
                                     JSValueConst* argv) {
  JSValue jret = JS_NULL;
  idle_info_t* obj = (idle_info_t*)quickjs_get_pointer(ctx, argv[0], "idle_info_t*");

  jret = JS_NewInt32(ctx, obj->id);
  return jret;
}

ret_t idle_info_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "idle_info_cast",
                    JS_NewCFunction(ctx, wrap_idle_info_cast, "idle_info_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "idle_info_t_get_prop_ctx",
      JS_NewCFunction(ctx, wrap_idle_info_t_get_prop_ctx, "idle_info_t_get_prop_ctx", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "idle_info_t_get_prop_id",
      JS_NewCFunction(ctx, wrap_idle_info_t_get_prop_id, "idle_info_t_get_prop_id", 1));

  return RET_OK;
}

ret_t window_manager_default_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);

  return RET_OK;
}

JSValue wrap_image_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)image_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "image_t*");
  }
  return jret;
}

JSValue wrap_image_set_draw_type(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 2) {
    ret_t ret = 0;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    image_draw_type_t draw_type = (image_draw_type_t)quickjs_get_number_value(ctx, argv[1]);
    ret = (ret_t)image_set_draw_type(widget, draw_type);

    jret = JS_NewInt32(ctx, ret);
  }
  return jret;
}

JSValue wrap_image_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)image_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "image_t*");
  }
  return jret;
}

JSValue wrap_image_t_get_prop_draw_type(JSContext* ctx, JSValueConst this_val, int argc,
                                        JSValueConst* argv) {
  JSValue jret = JS_NULL;
  image_t* obj = (image_t*)quickjs_get_pointer(ctx, argv[0], "image_t*");

  jret = JS_NewFloat64(ctx, obj->draw_type);
  return jret;
}

ret_t image_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "image_create",
                    JS_NewCFunction(ctx, wrap_image_create, "image_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_set_draw_type",
                    JS_NewCFunction(ctx, wrap_image_set_draw_type, "image_set_draw_type", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_cast",
                    JS_NewCFunction(ctx, wrap_image_cast, "image_cast", 1));
  JS_SetPropertyStr(
      ctx, global_obj, "image_t_get_prop_draw_type",
      JS_NewCFunction(ctx, wrap_image_t_get_prop_draw_type, "image_t_get_prop_draw_type", 1));

  return RET_OK;
}

JSValue wrap_combo_box_ex_create(JSContext* ctx, JSValueConst this_val, int argc,
                                 JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)combo_box_ex_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "combo_box_ex_t*");
  }
  return jret;
}

ret_t combo_box_ex_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "combo_box_ex_create",
                    JS_NewCFunction(ctx, wrap_combo_box_ex_create, "combo_box_ex_create", 1));

  return RET_OK;
}

JSValue wrap_gif_image_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)gif_image_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "gif_image_t*");
  }
  return jret;
}

JSValue wrap_gif_image_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)gif_image_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "gif_image_t*");
  }
  return jret;
}

ret_t gif_image_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "gif_image_create",
                    JS_NewCFunction(ctx, wrap_gif_image_create, "gif_image_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "gif_image_cast",
                    JS_NewCFunction(ctx, wrap_gif_image_cast, "gif_image_cast", 1));

  return RET_OK;
}

JSValue wrap_svg_image_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)svg_image_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "svg_image_t*");
  }
  return jret;
}

JSValue wrap_svg_image_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)svg_image_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "svg_image_t*");
  }
  return jret;
}

ret_t svg_image_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "svg_image_create",
                    JS_NewCFunction(ctx, wrap_svg_image_create, "svg_image_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "svg_image_cast",
                    JS_NewCFunction(ctx, wrap_svg_image_cast, "svg_image_cast", 1));

  return RET_OK;
}

JSValue wrap_spin_box_create(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)spin_box_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "spin_box_t*");
  }
  return jret;
}

JSValue wrap_spin_box_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)spin_box_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "spin_box_t*");
  }
  return jret;
}

ret_t spin_box_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "spin_box_create",
                    JS_NewCFunction(ctx, wrap_spin_box_create, "spin_box_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "spin_box_cast",
                    JS_NewCFunction(ctx, wrap_spin_box_cast, "spin_box_cast", 1));

  return RET_OK;
}

JSValue wrap_system_bar_create(JSContext* ctx, JSValueConst this_val, int argc,
                               JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 5) {
    widget_t* ret = NULL;
    widget_t* parent = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    xy_t x = (xy_t)quickjs_get_int_value(ctx, argv[1]);
    xy_t y = (xy_t)quickjs_get_int_value(ctx, argv[2]);
    wh_t w = (wh_t)quickjs_get_int_value(ctx, argv[3]);
    wh_t h = (wh_t)quickjs_get_int_value(ctx, argv[4]);
    ret = (widget_t*)system_bar_create(parent, x, y, w, h);

    jret = quickjs_create_pointer(ctx, ret, "system_bar_t*");
  }
  return jret;
}

JSValue wrap_system_bar_cast(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue jret = JS_NULL;
  if (argc >= 1) {
    widget_t* ret = NULL;
    widget_t* widget = (widget_t*)quickjs_get_pointer(ctx, argv[0], "widget_t*");
    ret = (widget_t*)system_bar_cast(widget);

    jret = quickjs_create_pointer(ctx, ret, "system_bar_t*");
  }
  return jret;
}

ret_t system_bar_t_init(JSContext* ctx) {
  JSValue global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "system_bar_create",
                    JS_NewCFunction(ctx, wrap_system_bar_create, "system_bar_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "system_bar_cast",
                    JS_NewCFunction(ctx, wrap_system_bar_cast, "system_bar_cast", 1));

  return RET_OK;
}

ret_t awtk_js_init(JSContext* ctx) {
  global_t_init(ctx);
  bitmap_flag_t_init(ctx);
  bitmap_t_init(ctx);
  image_draw_type_t_init(ctx);
  canvas_t_init(ctx);
  clip_board_data_type_t_init(ctx);
  clip_board_t_init(ctx);
  event_type_t_init(ctx);
  font_manager_t_init(ctx);
  glyph_format_t_init(ctx);
  idle_t_init(ctx);
  image_manager_t_init(ctx);
  input_type_t_init(ctx);
  input_method_t_init(ctx);
  key_code_t_init(ctx);
  locale_info_t_init(ctx);
  style_id_t_init(ctx);
  style_t_init(ctx);
  theme_t_init(ctx);
  timer_t_init(ctx);
  align_v_t_init(ctx);
  align_h_t_init(ctx);
  vgcanvas_t_init(ctx);
  bitmap_format_t_init(ctx);
  widget_prop_t_init(ctx);
  widget_type_t_init(ctx);
  window_stage_t_init(ctx);
  window_closable_t_init(ctx);
  widget_state_t_init(ctx);
  widget_t_init(ctx);
  assets_manager_t_init(ctx);
  asset_type_t_init(ctx);
  asset_info_t_init(ctx);
  color_t_init(ctx);
  date_time_t_init(ctx);
  emitter_t_init(ctx);
  event_base_type_t_init(ctx);
  event_t_init(ctx);
  named_value_t_init(ctx);
  point_t_init(ctx);
  rect_t_init(ctx);
  time_now_t_init(ctx);
  ret_t_init(ctx);
  value_type_t_init(ctx);
  value_t_init(ctx);
  slide_indicator_t_init(ctx);
  slide_view_t_init(ctx);
  slider_t_init(ctx);
  switch_t_init(ctx);
  text_selector_t_init(ctx);
  digit_clock_t_init(ctx);
  time_clock_t_init(ctx);
  key_event_t_init(ctx);
  row_t_init(ctx);
  progress_bar_t_init(ctx);
  popup_t_init(ctx);
  pages_t_init(ctx);
  overlay_t_init(ctx);
  label_t_init(ctx);
  group_box_t_init(ctx);
  paint_event_t_init(ctx);
  view_t_init(ctx);
  window_event_t_init(ctx);
  image_base_t_init(ctx);
  dialog_t_init(ctx);
  wheel_event_t_init(ctx);
  orientation_event_t_init(ctx);
  pointer_event_t_init(ctx);
  window_base_t_init(ctx);
  window_manager_t_init(ctx);
  window_t_init(ctx);
  canvas_widget_t_init(ctx);
  prop_change_event_t_init(ctx);
  color_picker_t_init(ctx);
  grid_t_init(ctx);
  grid_item_t_init(ctx);
  edit_t_init(ctx);
  tab_control_t_init(ctx);
  style_mutable_t_init(ctx);
  tab_button_t_init(ctx);
  dragger_t_init(ctx);
  object_t_init(ctx);
  dialog_title_t_init(ctx);
  guage_pointer_t_init(ctx);
  guage_t_init(ctx);
  image_animation_t_init(ctx);
  image_value_t_init(ctx);
  dialog_client_t_init(ctx);
  line_number_t_init(ctx);
  mledit_t_init(ctx);
  tab_button_group_t_init(ctx);
  progress_circle_t_init(ctx);
  rich_text_t_init(ctx);
  hscroll_label_t_init(ctx);
  list_item_t_init(ctx);
  list_view_h_t_init(ctx);
  list_view_t_init(ctx);
  scroll_bar_t_init(ctx);
  scroll_view_t_init(ctx);
  slide_menu_t_init(ctx);
  app_bar_t_init(ctx);
  button_group_t_init(ctx);
  button_t_init(ctx);
  check_button_t_init(ctx);
  color_tile_t_init(ctx);
  column_t_init(ctx);
  combo_box_item_t_init(ctx);
  combo_box_t_init(ctx);
  timer_info_t_init(ctx);
  window_manager_simple_t_init(ctx);
  object_default_t_init(ctx);
  idle_info_t_init(ctx);
  window_manager_default_t_init(ctx);
  image_t_init(ctx);
  combo_box_ex_t_init(ctx);
  gif_image_t_init(ctx);
  svg_image_t_init(ctx);
  spin_box_t_init(ctx);
  system_bar_t_init(ctx);

  return RET_OK;
}
