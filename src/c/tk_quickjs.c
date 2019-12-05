/*XXX: GENERATED CODE, DONT EDIT IT.*/
#include "tkc/utf8.h"
#include "tkc/mem.h"
#include "quickjs.h"
#include "src/awtk_global.h"
#include "base/bitmap.h"
#include "base/canvas.h"
#include "base/clip_board.h"
#include "base/dialog.h"
#include "base/events.h"
#include "base/font_manager.h"
#include "base/font.h"
#include "base/idle.h"
#include "tkc/value.h"
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
#include "tkc/types_def.h"
#include "tkc/timer_manager.h"
#include "tkc/time_now.h"
#include "tkc/rect.h"
#include "tkc/path.h"
#include "tkc/named_value.h"
#include "tkc/mime_types.h"
#include "tkc/idle_manager.h"
#include "slide_view/slide_indicator.h"
#include "tkc/fs.h"
#include "tkc/event.h"
#include "tkc/emitter.h"
#include "tkc/easing.h"
#include "tkc/date_time.h"
#include "tkc/color.h"
#include "tkc/asset_info.h"
#include "base/assets_manager.h"
#include "color_picker/color_component.h"
#include "time_clock/time_clock.h"
#include "text_selector/text_selector.h"
#include "switch/switch.h"
#include "widgets/view.h"
#include "slide_view/slide_view.h"
#include "slide_menu/slide_menu.h"
#include "scroll_view/scroll_view.h"
#include "scroll_view/scroll_bar.h"
#include "widgets/tab_control.h"
#include "scroll_view/list_view.h"
#include "scroll_view/list_view_h.h"
#include "widgets/tab_button.h"
#include "widgets/tab_button_group.h"
#include "scroll_view/list_item.h"
#include "scroll_label/hscroll_label.h"
#include "rich_text/rich_text.h"
#include "progress_circle/progress_circle.h"
#include "widgets/slider.h"
#include "mledit/mledit.h"
#include "widgets/row.h"
#include "widgets/progress_bar.h"
#include "tkc/object.h"
#include "widgets/pages.h"
#include "mledit/line_number.h"
#include "widgets/overlay.h"
#include "image_value/image_value.h"
#include "image_animation/image_animation.h"
#include "guage/guage.h"
#include "guage/guage_pointer.h"
#include "widgets/label.h"
#include "features/draggable.h"
#include "widgets/group_box.h"
#include "color_picker/color_picker.h"
#include "canvas_widget/canvas_widget.h"
#include "widgets/grid.h"
#include "widgets/grid_item.h"
#include "base/window_manager.h"
#include "base/window_base.h"
#include "widgets/edit.h"
#include "base/style_mutable.h"
#include "widgets/dragger.h"
#include "base/image_base.h"
#include "widgets/app_bar.h"
#include "widgets/button_group.h"
#include "widgets/button.h"
#include "widgets/digit_clock.h"
#include "widgets/check_button.h"
#include "widgets/color_tile.h"
#include "widgets/column.h"
#include "widgets/combo_box_item.h"
#include "widgets/combo_box.h"
#include "widgets/dialog_client.h"
#include "widgets/dialog_title.h"
#include "tkc/object_default.h"
#include "base/window.h"
#include "tkc/timer_info.h"
#include "combo_box_ex/combo_box_ex.h"
#include "widgets/image.h"
#include "gif_image/gif_image.h"
#include "keyboard/keyboard.h"
#include "widgets/popup.h"
#include "tkc/object_array.h"
#include "mutable_image/mutable_image.h"
#include "widgets/spin_box.h"
#include "widgets/system_bar.h"
#include "tkc/idle_info.h"
#include "svg_image/svg_image.h"
#include "window_manager/window_manager_default.h"
#include "window_manager/window_manager_simple.h"
#include "custom.c"

jsvalue_t wrap_tk_quit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  ret_t ret = 0;
  ret = (ret_t)tk_quit();

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tk_get_pointer_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  int32_t ret = 0;
  ret = (int32_t)tk_get_pointer_x();

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tk_get_pointer_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  int32_t ret = 0;
  ret = (int32_t)tk_get_pointer_y();

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tk_is_pointer_pressed(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  bool_t ret = 0;
  ret = (bool_t)tk_is_pointer_pressed();

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

ret_t global_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "tk_quit",
                      JS_NewCFunction(ctx, wrap_tk_quit, "tk_quit", 1));
  JS_SetPropertyStr(ctx, global_obj, "tk_get_pointer_x",
                      JS_NewCFunction(ctx, wrap_tk_get_pointer_x, "tk_get_pointer_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "tk_get_pointer_y",
                      JS_NewCFunction(ctx, wrap_tk_get_pointer_y, "tk_get_pointer_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "tk_is_pointer_pressed",
                      JS_NewCFunction(ctx, wrap_tk_is_pointer_pressed, "tk_is_pointer_pressed", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_bitmap_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  bitmap_t* ret = NULL;
  ret = (bitmap_t*)bitmap_create();

  jret = jsvalue_create_object(ctx, ret, "bitmap_t*", (tk_destroy_t)bitmap_destroy);
  }
  return jret;
}

jsvalue_t wrap_bitmap_create_ex(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  bitmap_t* ret = NULL;
  uint32_t w = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  uint32_t h = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t line_length = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  bitmap_format_t format = (bitmap_format_t)jsvalue_get_number_value(ctx, argv[3]);
  ret = (bitmap_t*)bitmap_create_ex(w, h, line_length, format);

  jret = jsvalue_create_object(ctx, ret, "bitmap_t*", (tk_destroy_t)bitmap_destroy);
  }
  return jret;
}

jsvalue_t wrap_bitmap_get_bpp(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint32_t ret = 0;
  bitmap_t* bitmap = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");
  ret = (uint32_t)bitmap_get_bpp(bitmap);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_line_length(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->line_length);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_flags(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->flags);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_int(ctx, obj->format);
  return jret;
}

jsvalue_t wrap_bitmap_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  bitmap_t* obj = (bitmap_t*)jsvalue_get_pointer(ctx, argv[0], "bitmap_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

ret_t bitmap_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "bitmap_t_get_prop_line_length",
                      JS_NewCFunction(ctx, wrap_bitmap_t_get_prop_line_length, "bitmap_t_get_prop_line_length", 1));
  JS_SetPropertyStr(ctx, global_obj, "bitmap_t_get_prop_flags",
                      JS_NewCFunction(ctx, wrap_bitmap_t_get_prop_flags, "bitmap_t_get_prop_flags", 1));
  JS_SetPropertyStr(ctx, global_obj, "bitmap_t_get_prop_format",
                      JS_NewCFunction(ctx, wrap_bitmap_t_get_prop_format, "bitmap_t_get_prop_format", 1));
  JS_SetPropertyStr(ctx, global_obj, "bitmap_t_get_prop_name",
                      JS_NewCFunction(ctx, wrap_bitmap_t_get_prop_name, "bitmap_t_get_prop_name", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_IMAGE_DRAW_DEFAULT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_DEFAULT);
}

jsvalue_t get_IMAGE_DRAW_CENTER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_CENTER);
}

jsvalue_t get_IMAGE_DRAW_ICON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_ICON);
}

jsvalue_t get_IMAGE_DRAW_SCALE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE);
}

jsvalue_t get_IMAGE_DRAW_SCALE_AUTO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_AUTO);
}

jsvalue_t get_IMAGE_DRAW_SCALE_DOWN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_DOWN);
}

jsvalue_t get_IMAGE_DRAW_SCALE_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_W);
}

jsvalue_t get_IMAGE_DRAW_SCALE_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_SCALE_H);
}

jsvalue_t get_IMAGE_DRAW_REPEAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT);
}

jsvalue_t get_IMAGE_DRAW_REPEAT_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT_X);
}

jsvalue_t get_IMAGE_DRAW_REPEAT_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT_Y);
}

jsvalue_t get_IMAGE_DRAW_REPEAT_Y_INVERSE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_REPEAT_Y_INVERSE);
}

jsvalue_t get_IMAGE_DRAW_PATCH9(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH9);
}

jsvalue_t get_IMAGE_DRAW_PATCH3_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_X);
}

jsvalue_t get_IMAGE_DRAW_PATCH3_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_Y);
}

jsvalue_t get_IMAGE_DRAW_PATCH3_X_SCALE_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_X_SCALE_Y);
}

jsvalue_t get_IMAGE_DRAW_PATCH3_Y_SCALE_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, IMAGE_DRAW_PATCH3_Y_SCALE_X);
}

ret_t image_draw_type_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_REPEAT_Y_INVERSE",
                      JS_NewCFunction(ctx, get_IMAGE_DRAW_REPEAT_Y_INVERSE, "IMAGE_DRAW_REPEAT_Y_INVERSE", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_PATCH9",
                      JS_NewCFunction(ctx, get_IMAGE_DRAW_PATCH9, "IMAGE_DRAW_PATCH9", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_PATCH3_X",
                      JS_NewCFunction(ctx, get_IMAGE_DRAW_PATCH3_X, "IMAGE_DRAW_PATCH3_X", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_PATCH3_Y",
                      JS_NewCFunction(ctx, get_IMAGE_DRAW_PATCH3_Y, "IMAGE_DRAW_PATCH3_Y", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_PATCH3_X_SCALE_Y",
                      JS_NewCFunction(ctx, get_IMAGE_DRAW_PATCH3_X_SCALE_Y, "IMAGE_DRAW_PATCH3_X_SCALE_Y", 1));
  JS_SetPropertyStr(ctx, global_obj, "IMAGE_DRAW_PATCH3_Y_SCALE_X",
                      JS_NewCFunction(ctx, get_IMAGE_DRAW_PATCH3_Y_SCALE_X, "IMAGE_DRAW_PATCH3_Y_SCALE_X", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_canvas_get_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  wh_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (wh_t)canvas_get_width(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_get_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  wh_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (wh_t)canvas_get_height(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_get_clip_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  rect_t* r = (rect_t*)jsvalue_get_pointer(ctx, argv[1], "rect_t*");
  ret = (ret_t)canvas_get_clip_rect(c, r);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_clip_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[1], "const rect_t*");
  ret = (ret_t)canvas_set_clip_rect(c, r);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_clip_rect_ex(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[1], "const rect_t*");
  bool_t translate = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (ret_t)canvas_set_clip_rect_ex(c, r, translate);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_fill_color_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)canvas_set_fill_color_str(c, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_text_color_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)canvas_set_text_color_str(c, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_stroke_color_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)canvas_set_stroke_color_str(c, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_global_alpha(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  uint8_t alpha = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)canvas_set_global_alpha(c, alpha);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_translate(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t dx = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t dy = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)canvas_translate(c, dx, dy);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_untranslate(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t dx = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t dy = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)canvas_untranslate(c, dx, dy);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_vline(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)canvas_draw_vline(c, x, y, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_hline(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)canvas_draw_hline(c, x, y, w);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_fill_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)canvas_fill_rect(c, x, y, w, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_stroke_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)canvas_stroke_rect(c, x, y, w, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_set_font(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  font_size_t size = (font_size_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)canvas_set_font(c, name, size);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_measure_utf8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  float_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (float_t)canvas_measure_utf8(c, str);
  jsvalue_free_str(ctx, str);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_utf8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)canvas_draw_utf8(c, str, x, y);
  jsvalue_free_str(ctx, str);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_utf8_in_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const rect_t* r = (const rect_t*)jsvalue_get_pointer(ctx, argv[2], "const rect_t*");
  ret = (ret_t)canvas_draw_utf8_in_rect(c, str, r);
  jsvalue_free_str(ctx, str);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_icon(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  xy_t cx = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  xy_t cy = (xy_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)canvas_draw_icon(c, img, cx, cy);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  rect_t* src = (rect_t*)jsvalue_get_pointer(ctx, argv[2], "rect_t*");
  rect_t* dst = (rect_t*)jsvalue_get_pointer(ctx, argv[3], "rect_t*");
  ret = (ret_t)canvas_draw_image(c, img, src, dst);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_draw_image_ex(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_number_value(ctx, argv[2]);
  rect_t* dst = (rect_t*)jsvalue_get_pointer(ctx, argv[3], "rect_t*");
  ret = (ret_t)canvas_draw_image_ex(c, img, draw_type, dst);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_get_vgcanvas(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  vgcanvas_t* ret = NULL;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (vgcanvas_t*)canvas_get_vgcanvas(c);

  jret = jsvalue_create_pointer(ctx, ret, "vgcanvas_t*");
  }
  return jret;
}

jsvalue_t wrap_canvas_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  canvas_t* ret = NULL;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (canvas_t*)canvas_cast(c);

  jret = jsvalue_create_pointer(ctx, ret, "canvas_t*");
  }
  return jret;
}

jsvalue_t wrap_canvas_reset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");
  ret = (ret_t)canvas_reset(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_ox(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->ox);
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_oy(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->oy);
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_font_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_string(ctx, obj->font_name);
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_font_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->font_size);
  return jret;
}

jsvalue_t wrap_canvas_t_get_prop_global_alpha(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  canvas_t* obj = (canvas_t*)jsvalue_get_pointer(ctx, argv[0], "canvas_t*");

  jret = jsvalue_create_int(ctx, obj->global_alpha);
  return jret;
}

ret_t canvas_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "canvas_get_width",
                      JS_NewCFunction(ctx, wrap_canvas_get_width, "canvas_get_width", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_get_height",
                      JS_NewCFunction(ctx, wrap_canvas_get_height, "canvas_get_height", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_get_clip_rect",
                      JS_NewCFunction(ctx, wrap_canvas_get_clip_rect, "canvas_get_clip_rect", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_set_clip_rect",
                      JS_NewCFunction(ctx, wrap_canvas_set_clip_rect, "canvas_set_clip_rect", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_set_clip_rect_ex",
                      JS_NewCFunction(ctx, wrap_canvas_set_clip_rect_ex, "canvas_set_clip_rect_ex", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_set_fill_color_str",
                      JS_NewCFunction(ctx, wrap_canvas_set_fill_color_str, "canvas_set_fill_color_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_set_text_color_str",
                      JS_NewCFunction(ctx, wrap_canvas_set_text_color_str, "canvas_set_text_color_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_set_stroke_color_str",
                      JS_NewCFunction(ctx, wrap_canvas_set_stroke_color_str, "canvas_set_stroke_color_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_set_global_alpha",
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
  JS_SetPropertyStr(ctx, global_obj, "canvas_draw_utf8_in_rect",
                      JS_NewCFunction(ctx, wrap_canvas_draw_utf8_in_rect, "canvas_draw_utf8_in_rect", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_draw_icon",
                      JS_NewCFunction(ctx, wrap_canvas_draw_icon, "canvas_draw_icon", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_draw_image",
                      JS_NewCFunction(ctx, wrap_canvas_draw_image, "canvas_draw_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_draw_image_ex",
                      JS_NewCFunction(ctx, wrap_canvas_draw_image_ex, "canvas_draw_image_ex", 1));
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
  JS_SetPropertyStr(ctx, global_obj, "canvas_t_get_prop_font_name",
                      JS_NewCFunction(ctx, wrap_canvas_t_get_prop_font_name, "canvas_t_get_prop_font_name", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_t_get_prop_font_size",
                      JS_NewCFunction(ctx, wrap_canvas_t_get_prop_font_size, "canvas_t_get_prop_font_size", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_t_get_prop_global_alpha",
                      JS_NewCFunction(ctx, wrap_canvas_t_get_prop_global_alpha, "canvas_t_get_prop_global_alpha", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_CLIP_BOARD_DATA_TYPE_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, CLIP_BOARD_DATA_TYPE_NONE);
}

jsvalue_t get_CLIP_BOARD_DATA_TYPE_TEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, CLIP_BOARD_DATA_TYPE_TEXT);
}

ret_t clip_board_data_type_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "CLIP_BOARD_DATA_TYPE_NONE",
                      JS_NewCFunction(ctx, get_CLIP_BOARD_DATA_TYPE_NONE, "CLIP_BOARD_DATA_TYPE_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "CLIP_BOARD_DATA_TYPE_TEXT",
                      JS_NewCFunction(ctx, get_CLIP_BOARD_DATA_TYPE_TEXT, "CLIP_BOARD_DATA_TYPE_TEXT", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_clip_board_set_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  ret = (ret_t)clip_board_set_text(text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_clip_board_get_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  const char* ret = NULL;
  ret = (const char*)clip_board_get_text();

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

ret_t clip_board_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "clip_board_set_text",
                      JS_NewCFunction(ctx, wrap_clip_board_set_text, "clip_board_set_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "clip_board_get_text",
                      JS_NewCFunction(ctx, wrap_clip_board_get_text, "clip_board_get_text", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_DIALOG_QUIT_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, DIALOG_QUIT_NONE);
}

jsvalue_t get_DIALOG_QUIT_OK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, DIALOG_QUIT_OK);
}

jsvalue_t get_DIALOG_QUIT_YES(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, DIALOG_QUIT_YES);
}

jsvalue_t get_DIALOG_QUIT_CANCEL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, DIALOG_QUIT_CANCEL);
}

jsvalue_t get_DIALOG_QUIT_NO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, DIALOG_QUIT_NO);
}

jsvalue_t get_DIALOG_QUIT_OTHER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, DIALOG_QUIT_OTHER);
}

ret_t dialog_quit_code_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "DIALOG_QUIT_NONE",
                      JS_NewCFunction(ctx, get_DIALOG_QUIT_NONE, "DIALOG_QUIT_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "DIALOG_QUIT_OK",
                      JS_NewCFunction(ctx, get_DIALOG_QUIT_OK, "DIALOG_QUIT_OK", 1));
  JS_SetPropertyStr(ctx, global_obj, "DIALOG_QUIT_YES",
                      JS_NewCFunction(ctx, get_DIALOG_QUIT_YES, "DIALOG_QUIT_YES", 1));
  JS_SetPropertyStr(ctx, global_obj, "DIALOG_QUIT_CANCEL",
                      JS_NewCFunction(ctx, get_DIALOG_QUIT_CANCEL, "DIALOG_QUIT_CANCEL", 1));
  JS_SetPropertyStr(ctx, global_obj, "DIALOG_QUIT_NO",
                      JS_NewCFunction(ctx, get_DIALOG_QUIT_NO, "DIALOG_QUIT_NO", 1));
  JS_SetPropertyStr(ctx, global_obj, "DIALOG_QUIT_OTHER",
                      JS_NewCFunction(ctx, get_DIALOG_QUIT_OTHER, "DIALOG_QUIT_OTHER", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_EVT_POINTER_DOWN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_DOWN);
}

jsvalue_t get_EVT_POINTER_DOWN_BEFORE_CHILDREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_DOWN_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_POINTER_MOVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_MOVE);
}

jsvalue_t get_EVT_POINTER_MOVE_BEFORE_CHILDREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_MOVE_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_POINTER_UP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_UP);
}

jsvalue_t get_EVT_POINTER_UP_BEFORE_CHILDREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_UP_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_WHEEL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WHEEL);
}

jsvalue_t get_EVT_WHEEL_BEFORE_CHILDREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WHEEL_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_POINTER_DOWN_ABORT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_DOWN_ABORT);
}

jsvalue_t get_EVT_CONTEXT_MENU(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_CONTEXT_MENU);
}

jsvalue_t get_EVT_POINTER_ENTER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_ENTER);
}

jsvalue_t get_EVT_POINTER_LEAVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_POINTER_LEAVE);
}

jsvalue_t get_EVT_LONG_PRESS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_LONG_PRESS);
}

jsvalue_t get_EVT_CLICK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_CLICK);
}

jsvalue_t get_EVT_FOCUS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_FOCUS);
}

jsvalue_t get_EVT_BLUR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_BLUR);
}

jsvalue_t get_EVT_KEY_DOWN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_KEY_DOWN);
}

jsvalue_t get_EVT_KEY_DOWN_BEFORE_CHILDREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_KEY_DOWN_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_KEY_REPEAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_KEY_REPEAT);
}

jsvalue_t get_EVT_KEY_UP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_KEY_UP);
}

jsvalue_t get_EVT_KEY_UP_BEFORE_CHILDREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_KEY_UP_BEFORE_CHILDREN);
}

jsvalue_t get_EVT_WILL_MOVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WILL_MOVE);
}

jsvalue_t get_EVT_MOVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_MOVE);
}

jsvalue_t get_EVT_WILL_RESIZE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WILL_RESIZE);
}

jsvalue_t get_EVT_RESIZE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_RESIZE);
}

jsvalue_t get_EVT_WILL_MOVE_RESIZE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WILL_MOVE_RESIZE);
}

jsvalue_t get_EVT_MOVE_RESIZE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_MOVE_RESIZE);
}

jsvalue_t get_EVT_VALUE_WILL_CHANGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_VALUE_WILL_CHANGE);
}

jsvalue_t get_EVT_VALUE_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_VALUE_CHANGED);
}

jsvalue_t get_EVT_VALUE_CHANGING(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_VALUE_CHANGING);
}

jsvalue_t get_EVT_PAINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_PAINT);
}

jsvalue_t get_EVT_BEFORE_PAINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_BEFORE_PAINT);
}

jsvalue_t get_EVT_AFTER_PAINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_AFTER_PAINT);
}

jsvalue_t get_EVT_PAINT_DONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_PAINT_DONE);
}

jsvalue_t get_EVT_LOCALE_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_LOCALE_CHANGED);
}

jsvalue_t get_EVT_ANIM_START(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ANIM_START);
}

jsvalue_t get_EVT_ANIM_STOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ANIM_STOP);
}

jsvalue_t get_EVT_ANIM_PAUSE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ANIM_PAUSE);
}

jsvalue_t get_EVT_ANIM_ONCE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ANIM_ONCE);
}

jsvalue_t get_EVT_ANIM_END(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ANIM_END);
}

jsvalue_t get_EVT_WINDOW_LOAD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WINDOW_LOAD);
}

jsvalue_t get_EVT_WINDOW_WILL_OPEN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WINDOW_WILL_OPEN);
}

jsvalue_t get_EVT_WINDOW_OPEN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WINDOW_OPEN);
}

jsvalue_t get_EVT_WINDOW_TO_BACKGROUND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WINDOW_TO_BACKGROUND);
}

jsvalue_t get_EVT_WINDOW_TO_FOREGROUND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WINDOW_TO_FOREGROUND);
}

jsvalue_t get_EVT_WINDOW_CLOSE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WINDOW_CLOSE);
}

jsvalue_t get_EVT_REQUEST_CLOSE_WINDOW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_REQUEST_CLOSE_WINDOW);
}

jsvalue_t get_EVT_TOP_WINDOW_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_TOP_WINDOW_CHANGED);
}

jsvalue_t get_EVT_IM_COMMIT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_IM_COMMIT);
}

jsvalue_t get_EVT_IM_SHOW_CANDIDATES(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_IM_SHOW_CANDIDATES);
}

jsvalue_t get_EVT_IM_ACTION(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_IM_ACTION);
}

jsvalue_t get_EVT_IM_ACTION_INFO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_IM_ACTION_INFO);
}

jsvalue_t get_EVT_DRAG_START(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_DRAG_START);
}

jsvalue_t get_EVT_DRAG(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_DRAG);
}

jsvalue_t get_EVT_DRAG_END(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_DRAG_END);
}

jsvalue_t get_EVT_SCREEN_SAVER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_SCREEN_SAVER);
}

jsvalue_t get_EVT_LOW_MEMORY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_LOW_MEMORY);
}

jsvalue_t get_EVT_OUT_OF_MEMORY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_OUT_OF_MEMORY);
}

jsvalue_t get_EVT_ORIENTATION_WILL_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ORIENTATION_WILL_CHANGED);
}

jsvalue_t get_EVT_ORIENTATION_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ORIENTATION_CHANGED);
}

jsvalue_t get_EVT_WIDGET_CREATED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_WIDGET_CREATED);
}

jsvalue_t get_EVT_REQUEST_QUIT_APP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_REQUEST_QUIT_APP);
}

jsvalue_t get_EVT_THEME_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_THEME_CHANGED);
}

jsvalue_t get_EVT_REQ_START(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_REQ_START);
}

jsvalue_t get_EVT_USER_START(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_USER_START);
}

ret_t event_type_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_DOWN",
                      JS_NewCFunction(ctx, get_EVT_POINTER_DOWN, "EVT_POINTER_DOWN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_DOWN_BEFORE_CHILDREN",
                      JS_NewCFunction(ctx, get_EVT_POINTER_DOWN_BEFORE_CHILDREN, "EVT_POINTER_DOWN_BEFORE_CHILDREN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_MOVE",
                      JS_NewCFunction(ctx, get_EVT_POINTER_MOVE, "EVT_POINTER_MOVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_MOVE_BEFORE_CHILDREN",
                      JS_NewCFunction(ctx, get_EVT_POINTER_MOVE_BEFORE_CHILDREN, "EVT_POINTER_MOVE_BEFORE_CHILDREN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_UP",
                      JS_NewCFunction(ctx, get_EVT_POINTER_UP, "EVT_POINTER_UP", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_POINTER_UP_BEFORE_CHILDREN",
                      JS_NewCFunction(ctx, get_EVT_POINTER_UP_BEFORE_CHILDREN, "EVT_POINTER_UP_BEFORE_CHILDREN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WHEEL",
                      JS_NewCFunction(ctx, get_EVT_WHEEL, "EVT_WHEEL", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WHEEL_BEFORE_CHILDREN",
                      JS_NewCFunction(ctx, get_EVT_WHEEL_BEFORE_CHILDREN, "EVT_WHEEL_BEFORE_CHILDREN", 1));
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
  JS_SetPropertyStr(ctx, global_obj, "EVT_BLUR",
                      JS_NewCFunction(ctx, get_EVT_BLUR, "EVT_BLUR", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_KEY_DOWN",
                      JS_NewCFunction(ctx, get_EVT_KEY_DOWN, "EVT_KEY_DOWN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_KEY_DOWN_BEFORE_CHILDREN",
                      JS_NewCFunction(ctx, get_EVT_KEY_DOWN_BEFORE_CHILDREN, "EVT_KEY_DOWN_BEFORE_CHILDREN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_KEY_REPEAT",
                      JS_NewCFunction(ctx, get_EVT_KEY_REPEAT, "EVT_KEY_REPEAT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_KEY_UP",
                      JS_NewCFunction(ctx, get_EVT_KEY_UP, "EVT_KEY_UP", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_KEY_UP_BEFORE_CHILDREN",
                      JS_NewCFunction(ctx, get_EVT_KEY_UP_BEFORE_CHILDREN, "EVT_KEY_UP_BEFORE_CHILDREN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WILL_MOVE",
                      JS_NewCFunction(ctx, get_EVT_WILL_MOVE, "EVT_WILL_MOVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_MOVE",
                      JS_NewCFunction(ctx, get_EVT_MOVE, "EVT_MOVE", 1));
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
  JS_SetPropertyStr(ctx, global_obj, "EVT_WINDOW_TO_BACKGROUND",
                      JS_NewCFunction(ctx, get_EVT_WINDOW_TO_BACKGROUND, "EVT_WINDOW_TO_BACKGROUND", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WINDOW_TO_FOREGROUND",
                      JS_NewCFunction(ctx, get_EVT_WINDOW_TO_FOREGROUND, "EVT_WINDOW_TO_FOREGROUND", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WINDOW_CLOSE",
                      JS_NewCFunction(ctx, get_EVT_WINDOW_CLOSE, "EVT_WINDOW_CLOSE", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_REQUEST_CLOSE_WINDOW",
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
  JS_SetPropertyStr(ctx, global_obj, "EVT_DRAG",
                      JS_NewCFunction(ctx, get_EVT_DRAG, "EVT_DRAG", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_DRAG_END",
                      JS_NewCFunction(ctx, get_EVT_DRAG_END, "EVT_DRAG_END", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_SCREEN_SAVER",
                      JS_NewCFunction(ctx, get_EVT_SCREEN_SAVER, "EVT_SCREEN_SAVER", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_LOW_MEMORY",
                      JS_NewCFunction(ctx, get_EVT_LOW_MEMORY, "EVT_LOW_MEMORY", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_OUT_OF_MEMORY",
                      JS_NewCFunction(ctx, get_EVT_OUT_OF_MEMORY, "EVT_OUT_OF_MEMORY", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_ORIENTATION_WILL_CHANGED",
                      JS_NewCFunction(ctx, get_EVT_ORIENTATION_WILL_CHANGED, "EVT_ORIENTATION_WILL_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_ORIENTATION_CHANGED",
                      JS_NewCFunction(ctx, get_EVT_ORIENTATION_CHANGED, "EVT_ORIENTATION_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_WIDGET_CREATED",
                      JS_NewCFunction(ctx, get_EVT_WIDGET_CREATED, "EVT_WIDGET_CREATED", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_REQUEST_QUIT_APP",
                      JS_NewCFunction(ctx, get_EVT_REQUEST_QUIT_APP, "EVT_REQUEST_QUIT_APP", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_THEME_CHANGED",
                      JS_NewCFunction(ctx, get_EVT_THEME_CHANGED, "EVT_THEME_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_REQ_START",
                      JS_NewCFunction(ctx, get_EVT_REQ_START, "EVT_REQ_START", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_USER_START",
                      JS_NewCFunction(ctx, get_EVT_USER_START, "EVT_USER_START", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_font_manager_unload_font(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  font_manager_t* fm = (font_manager_t*)jsvalue_get_pointer(ctx, argv[0], "font_manager_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  font_size_t size = (font_size_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)font_manager_unload_font(fm, name, size);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_font_manager_unload_all(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  font_manager_t* fm = (font_manager_t*)jsvalue_get_pointer(ctx, argv[0], "font_manager_t*");
  ret = (ret_t)font_manager_unload_all(fm);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t font_manager_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "font_manager_unload_font",
                      JS_NewCFunction(ctx, wrap_font_manager_unload_font, "font_manager_unload_font", 1));
  JS_SetPropertyStr(ctx, global_obj, "font_manager_unload_all",
                      JS_NewCFunction(ctx, wrap_font_manager_unload_all, "font_manager_unload_all", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_GLYPH_FMT_ALPHA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, GLYPH_FMT_ALPHA);
}

jsvalue_t get_GLYPH_FMT_MONO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, GLYPH_FMT_MONO);
}

jsvalue_t get_GLYPH_FMT_RGBA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, GLYPH_FMT_RGBA);
}

ret_t glyph_format_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "GLYPH_FMT_ALPHA",
                      JS_NewCFunction(ctx, get_GLYPH_FMT_ALPHA, "GLYPH_FMT_ALPHA", 1));
  JS_SetPropertyStr(ctx, global_obj, "GLYPH_FMT_MONO",
                      JS_NewCFunction(ctx, get_GLYPH_FMT_MONO, "GLYPH_FMT_MONO", 1));
  JS_SetPropertyStr(ctx, global_obj, "GLYPH_FMT_RGBA",
                      JS_NewCFunction(ctx, get_GLYPH_FMT_RGBA, "GLYPH_FMT_RGBA", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_idle_remove(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  uint32_t idle_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  ret = (ret_t)idle_remove(idle_id);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t idle_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "idle_add",
                      JS_NewCFunction(ctx, wrap_idle_add, "idle_add", 1));
  JS_SetPropertyStr(ctx, global_obj, "idle_remove",
                      JS_NewCFunction(ctx, wrap_idle_remove, "idle_remove", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_value_set_bool(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (value_t*)value_set_bool(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_bool(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (bool_t)value_bool(v);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_int8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int8_t value = (int8_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int8(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_int8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int8_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int8_t)value_int8(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_uint8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint8_t value = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_uint8(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_uint8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int8_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int8_t)value_uint8(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_int16(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int16_t value = (int16_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int16(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_int16(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int16_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int16_t)value_int16(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_uint16(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint16_t value = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_uint16(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_uint16(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint16_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (uint16_t)value_uint16(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_int32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int32(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_int32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int32_t)value_int32(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_uint32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_uint32(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_set_int64(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int64_t value = (int64_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int64(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_int64(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int64_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (int64_t)value_int64(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_uint64(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint64_t value = (uint64_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_uint64(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_uint64(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint64_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (uint64_t)value_uint64(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_float(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (value_t*)value_set_float(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_float32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  float ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (float)value_float32(v);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_double(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  double value = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (value_t*)value_set_double(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_double(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  double ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (double)value_double(v);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_dup_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  const char* value = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (value_t*)value_dup_str(v, value);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  const char* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (const char*)value_str(v);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_is_null(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  value_t* value = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (bool_t)value_is_null(value);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_set_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_int(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_set_object(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  object_t* value = (object_t*)jsvalue_get_pointer(ctx, argv[1], "object_t*");
  ret = (value_t*)value_set_object(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_object(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  object_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (object_t*)value_object(v);

  jret = jsvalue_create_pointer(ctx, ret, "object_t*");
  }
  return jret;
}

jsvalue_t wrap_value_set_token(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  value_t* ret = NULL;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (value_t*)value_set_token(v, value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_value_token(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint32_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (uint32_t)value_token(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  value_t* ret = NULL;
  ret = (value_t*)value_create();

  jret = jsvalue_create_object(ctx, ret, "value_t*", (tk_destroy_t)value_destroy);
  }
  return jret;
}

jsvalue_t wrap_value_reset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (ret_t)value_reset(v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_value_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  value_t* ret = NULL;
  value_t* value = (value_t*)jsvalue_get_pointer(ctx, argv[0], "value_t*");
  ret = (value_t*)value_cast(value);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

ret_t value_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "value_is_null",
                      JS_NewCFunction(ctx, wrap_value_is_null, "value_is_null", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_int",
                      JS_NewCFunction(ctx, wrap_value_set_int, "value_set_int", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_object",
                      JS_NewCFunction(ctx, wrap_value_set_object, "value_set_object", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_object",
                      JS_NewCFunction(ctx, wrap_value_object, "value_object", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_set_token",
                      JS_NewCFunction(ctx, wrap_value_set_token, "value_set_token", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_token",
                      JS_NewCFunction(ctx, wrap_value_token, "value_token", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_create",
                      JS_NewCFunction(ctx, wrap_value_create, "value_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_reset",
                      JS_NewCFunction(ctx, wrap_value_reset, "value_reset", 1));
  JS_SetPropertyStr(ctx, global_obj, "value_cast",
                      JS_NewCFunction(ctx, wrap_value_cast, "value_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_image_manager(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  image_manager_t* ret = NULL;
  ret = (image_manager_t*)image_manager();

  jret = jsvalue_create_pointer(ctx, ret, "image_manager_t*");
  }
  return jret;
}

jsvalue_t wrap_image_manager_get_bitmap(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  image_manager_t* imm = (image_manager_t*)jsvalue_get_pointer(ctx, argv[0], "image_manager_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bitmap_t* image = (bitmap_t*)jsvalue_get_pointer(ctx, argv[2], "bitmap_t*");
  ret = (ret_t)image_manager_get_bitmap(imm, name, image);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t image_manager_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "image_manager",
                      JS_NewCFunction(ctx, wrap_image_manager, "image_manager", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_manager_get_bitmap",
                      JS_NewCFunction(ctx, wrap_image_manager_get_bitmap, "image_manager_get_bitmap", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_INPUT_TEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_TEXT);
}

jsvalue_t get_INPUT_INT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_INT);
}

jsvalue_t get_INPUT_UINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_UINT);
}

jsvalue_t get_INPUT_HEX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_HEX);
}

jsvalue_t get_INPUT_FLOAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_FLOAT);
}

jsvalue_t get_INPUT_UFLOAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_UFLOAT);
}

jsvalue_t get_INPUT_EMAIL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_EMAIL);
}

jsvalue_t get_INPUT_PASSWORD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_PASSWORD);
}

jsvalue_t get_INPUT_PHONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_PHONE);
}

jsvalue_t get_INPUT_CUSTOM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INPUT_CUSTOM);
}

ret_t input_type_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_VALUE_TYPE_INVALID(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_INVALID);
}

jsvalue_t get_VALUE_TYPE_BOOL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_BOOL);
}

jsvalue_t get_VALUE_TYPE_INT8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_INT8);
}

jsvalue_t get_VALUE_TYPE_UINT8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT8);
}

jsvalue_t get_VALUE_TYPE_INT16(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_INT16);
}

jsvalue_t get_VALUE_TYPE_UINT16(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT16);
}

jsvalue_t get_VALUE_TYPE_INT32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_INT32);
}

jsvalue_t get_VALUE_TYPE_UINT32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT32);
}

jsvalue_t get_VALUE_TYPE_INT64(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_INT64);
}

jsvalue_t get_VALUE_TYPE_UINT64(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_UINT64);
}

jsvalue_t get_VALUE_TYPE_POINTER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_POINTER);
}

jsvalue_t get_VALUE_TYPE_FLOAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_FLOAT);
}

jsvalue_t get_VALUE_TYPE_FLOAT32(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_FLOAT32);
}

jsvalue_t get_VALUE_TYPE_DOUBLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_DOUBLE);
}

jsvalue_t get_VALUE_TYPE_STRING(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_STRING);
}

jsvalue_t get_VALUE_TYPE_WSTRING(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_WSTRING);
}

jsvalue_t get_VALUE_TYPE_OBJECT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_OBJECT);
}

jsvalue_t get_VALUE_TYPE_SIZED_STRING(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_SIZED_STRING);
}

jsvalue_t get_VALUE_TYPE_BINARY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_BINARY);
}

jsvalue_t get_VALUE_TYPE_UBJSON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_UBJSON);
}

jsvalue_t get_VALUE_TYPE_TOKEN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, VALUE_TYPE_TOKEN);
}

ret_t value_type_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_SIZED_STRING",
                      JS_NewCFunction(ctx, get_VALUE_TYPE_SIZED_STRING, "VALUE_TYPE_SIZED_STRING", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_BINARY",
                      JS_NewCFunction(ctx, get_VALUE_TYPE_BINARY, "VALUE_TYPE_BINARY", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_UBJSON",
                      JS_NewCFunction(ctx, get_VALUE_TYPE_UBJSON, "VALUE_TYPE_UBJSON", 1));
  JS_SetPropertyStr(ctx, global_obj, "VALUE_TYPE_TOKEN",
                      JS_NewCFunction(ctx, get_VALUE_TYPE_TOKEN, "VALUE_TYPE_TOKEN", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_input_method_commit_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)input_method_commit_text(im, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_input_method_dispatch_key(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  input_method_t* im = (input_method_t*)jsvalue_get_pointer(ctx, argv[0], "input_method_t*");
  uint32_t key = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)input_method_dispatch_key(im, key);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_input_method(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  input_method_t* ret = NULL;
  ret = (input_method_t*)input_method();

  jret = jsvalue_create_pointer(ctx, ret, "input_method_t*");
  }
  return jret;
}

ret_t input_method_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "input_method_commit_text",
                      JS_NewCFunction(ctx, wrap_input_method_commit_text, "input_method_commit_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "input_method_dispatch_key",
                      JS_NewCFunction(ctx, wrap_input_method_dispatch_key, "input_method_dispatch_key", 1));
  JS_SetPropertyStr(ctx, global_obj, "input_method",
                      JS_NewCFunction(ctx, wrap_input_method, "input_method", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_TK_KEY_RETURN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RETURN);
}

jsvalue_t get_TK_KEY_ESCAPE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_ESCAPE);
}

jsvalue_t get_TK_KEY_BACKSPACE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_BACKSPACE);
}

jsvalue_t get_TK_KEY_TAB(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_TAB);
}

jsvalue_t get_TK_KEY_SPACE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_SPACE);
}

jsvalue_t get_TK_KEY_EXCLAIM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_EXCLAIM);
}

jsvalue_t get_TK_KEY_QUOTEDBL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_QUOTEDBL);
}

jsvalue_t get_TK_KEY_HASH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_HASH);
}

jsvalue_t get_TK_KEY_PERCENT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_PERCENT);
}

jsvalue_t get_TK_KEY_DOLLAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_DOLLAR);
}

jsvalue_t get_TK_KEY_AMPERSAND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_AMPERSAND);
}

jsvalue_t get_TK_KEY_QUOTE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_QUOTE);
}

jsvalue_t get_TK_KEY_LEFTPAREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LEFTPAREN);
}

jsvalue_t get_TK_KEY_RIGHTPAREN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RIGHTPAREN);
}

jsvalue_t get_TK_KEY_ASTERISK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_ASTERISK);
}

jsvalue_t get_TK_KEY_PLUS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_PLUS);
}

jsvalue_t get_TK_KEY_COMMA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_COMMA);
}

jsvalue_t get_TK_KEY_MINUS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_MINUS);
}

jsvalue_t get_TK_KEY_PERIOD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_PERIOD);
}

jsvalue_t get_TK_KEY_SLASH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_SLASH);
}

jsvalue_t get_TK_KEY_0(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_0);
}

jsvalue_t get_TK_KEY_1(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_1);
}

jsvalue_t get_TK_KEY_2(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_2);
}

jsvalue_t get_TK_KEY_3(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_3);
}

jsvalue_t get_TK_KEY_4(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_4);
}

jsvalue_t get_TK_KEY_5(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_5);
}

jsvalue_t get_TK_KEY_6(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_6);
}

jsvalue_t get_TK_KEY_7(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_7);
}

jsvalue_t get_TK_KEY_8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_8);
}

jsvalue_t get_TK_KEY_9(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_9);
}

jsvalue_t get_TK_KEY_COLON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_COLON);
}

jsvalue_t get_TK_KEY_SEMICOLON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_SEMICOLON);
}

jsvalue_t get_TK_KEY_LESS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LESS);
}

jsvalue_t get_TK_KEY_EQUAL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_EQUAL);
}

jsvalue_t get_TK_KEY_GREATER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_GREATER);
}

jsvalue_t get_TK_KEY_QUESTION(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_QUESTION);
}

jsvalue_t get_TK_KEY_AT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_AT);
}

jsvalue_t get_TK_KEY_LEFTBRACKET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LEFTBRACKET);
}

jsvalue_t get_TK_KEY_BACKSLASH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_BACKSLASH);
}

jsvalue_t get_TK_KEY_RIGHTBRACKET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RIGHTBRACKET);
}

jsvalue_t get_TK_KEY_CARET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_CARET);
}

jsvalue_t get_TK_KEY_UNDERSCORE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_UNDERSCORE);
}

jsvalue_t get_TK_KEY_BACKQUOTE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_BACKQUOTE);
}

jsvalue_t get_TK_KEY_a(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_a);
}

jsvalue_t get_TK_KEY_b(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_b);
}

jsvalue_t get_TK_KEY_c(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_c);
}

jsvalue_t get_TK_KEY_d(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_d);
}

jsvalue_t get_TK_KEY_e(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_e);
}

jsvalue_t get_TK_KEY_f(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_f);
}

jsvalue_t get_TK_KEY_g(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_g);
}

jsvalue_t get_TK_KEY_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_h);
}

jsvalue_t get_TK_KEY_i(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_i);
}

jsvalue_t get_TK_KEY_j(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_j);
}

jsvalue_t get_TK_KEY_k(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_k);
}

jsvalue_t get_TK_KEY_l(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_l);
}

jsvalue_t get_TK_KEY_m(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_m);
}

jsvalue_t get_TK_KEY_n(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_n);
}

jsvalue_t get_TK_KEY_o(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_o);
}

jsvalue_t get_TK_KEY_p(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_p);
}

jsvalue_t get_TK_KEY_q(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_q);
}

jsvalue_t get_TK_KEY_r(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_r);
}

jsvalue_t get_TK_KEY_s(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_s);
}

jsvalue_t get_TK_KEY_t(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_t);
}

jsvalue_t get_TK_KEY_u(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_u);
}

jsvalue_t get_TK_KEY_v(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_v);
}

jsvalue_t get_TK_KEY_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_w);
}

jsvalue_t get_TK_KEY_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_x);
}

jsvalue_t get_TK_KEY_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_y);
}

jsvalue_t get_TK_KEY_z(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_z);
}

jsvalue_t get_TK_KEY_A(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_A);
}

jsvalue_t get_TK_KEY_B(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_B);
}

jsvalue_t get_TK_KEY_C(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_C);
}

jsvalue_t get_TK_KEY_D(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_D);
}

jsvalue_t get_TK_KEY_E(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_E);
}

jsvalue_t get_TK_KEY_F(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F);
}

jsvalue_t get_TK_KEY_G(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_G);
}

jsvalue_t get_TK_KEY_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_H);
}

jsvalue_t get_TK_KEY_I(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_I);
}

jsvalue_t get_TK_KEY_J(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_J);
}

jsvalue_t get_TK_KEY_K(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_K);
}

jsvalue_t get_TK_KEY_L(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_L);
}

jsvalue_t get_TK_KEY_M(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_M);
}

jsvalue_t get_TK_KEY_N(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_N);
}

jsvalue_t get_TK_KEY_O(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_O);
}

jsvalue_t get_TK_KEY_P(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_P);
}

jsvalue_t get_TK_KEY_Q(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_Q);
}

jsvalue_t get_TK_KEY_R(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_R);
}

jsvalue_t get_TK_KEY_S(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_S);
}

jsvalue_t get_TK_KEY_T(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_T);
}

jsvalue_t get_TK_KEY_U(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_U);
}

jsvalue_t get_TK_KEY_V(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_V);
}

jsvalue_t get_TK_KEY_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_W);
}

jsvalue_t get_TK_KEY_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_X);
}

jsvalue_t get_TK_KEY_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_Y);
}

jsvalue_t get_TK_KEY_Z(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_Z);
}

jsvalue_t get_TK_KEY_DOT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_DOT);
}

jsvalue_t get_TK_KEY_DELETE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_DELETE);
}

jsvalue_t get_TK_KEY_LEFTBRACE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LEFTBRACE);
}

jsvalue_t get_TK_KEY_RIGHTBRACE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RIGHTBRACE);
}

jsvalue_t get_TK_KEY_LSHIFT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LSHIFT);
}

jsvalue_t get_TK_KEY_RSHIFT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RSHIFT);
}

jsvalue_t get_TK_KEY_LCTRL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LCTRL);
}

jsvalue_t get_TK_KEY_RCTRL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RCTRL);
}

jsvalue_t get_TK_KEY_LALT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LALT);
}

jsvalue_t get_TK_KEY_RALT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RALT);
}

jsvalue_t get_TK_KEY_CAPSLOCK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_CAPSLOCK);
}

jsvalue_t get_TK_KEY_HOME(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_HOME);
}

jsvalue_t get_TK_KEY_END(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_END);
}

jsvalue_t get_TK_KEY_INSERT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_INSERT);
}

jsvalue_t get_TK_KEY_UP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_UP);
}

jsvalue_t get_TK_KEY_DOWN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_DOWN);
}

jsvalue_t get_TK_KEY_LEFT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_LEFT);
}

jsvalue_t get_TK_KEY_RIGHT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_RIGHT);
}

jsvalue_t get_TK_KEY_PAGEUP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_PAGEUP);
}

jsvalue_t get_TK_KEY_PAGEDOWN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_PAGEDOWN);
}

jsvalue_t get_TK_KEY_F1(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F1);
}

jsvalue_t get_TK_KEY_F2(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F2);
}

jsvalue_t get_TK_KEY_F3(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F3);
}

jsvalue_t get_TK_KEY_F4(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F4);
}

jsvalue_t get_TK_KEY_F5(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F5);
}

jsvalue_t get_TK_KEY_F6(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F6);
}

jsvalue_t get_TK_KEY_F7(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F7);
}

jsvalue_t get_TK_KEY_F8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F8);
}

jsvalue_t get_TK_KEY_F9(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F9);
}

jsvalue_t get_TK_KEY_F10(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F10);
}

jsvalue_t get_TK_KEY_F11(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F11);
}

jsvalue_t get_TK_KEY_F12(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_F12);
}

jsvalue_t get_TK_KEY_MENU(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_MENU);
}

jsvalue_t get_TK_KEY_COMMAND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_COMMAND);
}

jsvalue_t get_TK_KEY_BACK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_BACK);
}

jsvalue_t get_TK_KEY_CANCEL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, TK_KEY_CANCEL);
}

ret_t key_code_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_0",
                      JS_NewCFunction(ctx, get_TK_KEY_0, "TK_KEY_0", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_1",
                      JS_NewCFunction(ctx, get_TK_KEY_1, "TK_KEY_1", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_2",
                      JS_NewCFunction(ctx, get_TK_KEY_2, "TK_KEY_2", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_3",
                      JS_NewCFunction(ctx, get_TK_KEY_3, "TK_KEY_3", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_4",
                      JS_NewCFunction(ctx, get_TK_KEY_4, "TK_KEY_4", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_5",
                      JS_NewCFunction(ctx, get_TK_KEY_5, "TK_KEY_5", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_6",
                      JS_NewCFunction(ctx, get_TK_KEY_6, "TK_KEY_6", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_7",
                      JS_NewCFunction(ctx, get_TK_KEY_7, "TK_KEY_7", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_8",
                      JS_NewCFunction(ctx, get_TK_KEY_8, "TK_KEY_8", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_9",
                      JS_NewCFunction(ctx, get_TK_KEY_9, "TK_KEY_9", 1));
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
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_a",
                      JS_NewCFunction(ctx, get_TK_KEY_a, "TK_KEY_a", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_b",
                      JS_NewCFunction(ctx, get_TK_KEY_b, "TK_KEY_b", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_c",
                      JS_NewCFunction(ctx, get_TK_KEY_c, "TK_KEY_c", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_d",
                      JS_NewCFunction(ctx, get_TK_KEY_d, "TK_KEY_d", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_e",
                      JS_NewCFunction(ctx, get_TK_KEY_e, "TK_KEY_e", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_f",
                      JS_NewCFunction(ctx, get_TK_KEY_f, "TK_KEY_f", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_g",
                      JS_NewCFunction(ctx, get_TK_KEY_g, "TK_KEY_g", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_h",
                      JS_NewCFunction(ctx, get_TK_KEY_h, "TK_KEY_h", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_i",
                      JS_NewCFunction(ctx, get_TK_KEY_i, "TK_KEY_i", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_j",
                      JS_NewCFunction(ctx, get_TK_KEY_j, "TK_KEY_j", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_k",
                      JS_NewCFunction(ctx, get_TK_KEY_k, "TK_KEY_k", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_l",
                      JS_NewCFunction(ctx, get_TK_KEY_l, "TK_KEY_l", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_m",
                      JS_NewCFunction(ctx, get_TK_KEY_m, "TK_KEY_m", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_n",
                      JS_NewCFunction(ctx, get_TK_KEY_n, "TK_KEY_n", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_o",
                      JS_NewCFunction(ctx, get_TK_KEY_o, "TK_KEY_o", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_p",
                      JS_NewCFunction(ctx, get_TK_KEY_p, "TK_KEY_p", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_q",
                      JS_NewCFunction(ctx, get_TK_KEY_q, "TK_KEY_q", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_r",
                      JS_NewCFunction(ctx, get_TK_KEY_r, "TK_KEY_r", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_s",
                      JS_NewCFunction(ctx, get_TK_KEY_s, "TK_KEY_s", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_t",
                      JS_NewCFunction(ctx, get_TK_KEY_t, "TK_KEY_t", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_u",
                      JS_NewCFunction(ctx, get_TK_KEY_u, "TK_KEY_u", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_v",
                      JS_NewCFunction(ctx, get_TK_KEY_v, "TK_KEY_v", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_w",
                      JS_NewCFunction(ctx, get_TK_KEY_w, "TK_KEY_w", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_x",
                      JS_NewCFunction(ctx, get_TK_KEY_x, "TK_KEY_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_y",
                      JS_NewCFunction(ctx, get_TK_KEY_y, "TK_KEY_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_z",
                      JS_NewCFunction(ctx, get_TK_KEY_z, "TK_KEY_z", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_A",
                      JS_NewCFunction(ctx, get_TK_KEY_A, "TK_KEY_A", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_B",
                      JS_NewCFunction(ctx, get_TK_KEY_B, "TK_KEY_B", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_C",
                      JS_NewCFunction(ctx, get_TK_KEY_C, "TK_KEY_C", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_D",
                      JS_NewCFunction(ctx, get_TK_KEY_D, "TK_KEY_D", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_E",
                      JS_NewCFunction(ctx, get_TK_KEY_E, "TK_KEY_E", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F",
                      JS_NewCFunction(ctx, get_TK_KEY_F, "TK_KEY_F", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_G",
                      JS_NewCFunction(ctx, get_TK_KEY_G, "TK_KEY_G", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_H",
                      JS_NewCFunction(ctx, get_TK_KEY_H, "TK_KEY_H", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_I",
                      JS_NewCFunction(ctx, get_TK_KEY_I, "TK_KEY_I", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_J",
                      JS_NewCFunction(ctx, get_TK_KEY_J, "TK_KEY_J", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_K",
                      JS_NewCFunction(ctx, get_TK_KEY_K, "TK_KEY_K", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_L",
                      JS_NewCFunction(ctx, get_TK_KEY_L, "TK_KEY_L", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_M",
                      JS_NewCFunction(ctx, get_TK_KEY_M, "TK_KEY_M", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_N",
                      JS_NewCFunction(ctx, get_TK_KEY_N, "TK_KEY_N", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_O",
                      JS_NewCFunction(ctx, get_TK_KEY_O, "TK_KEY_O", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_P",
                      JS_NewCFunction(ctx, get_TK_KEY_P, "TK_KEY_P", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_Q",
                      JS_NewCFunction(ctx, get_TK_KEY_Q, "TK_KEY_Q", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_R",
                      JS_NewCFunction(ctx, get_TK_KEY_R, "TK_KEY_R", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_S",
                      JS_NewCFunction(ctx, get_TK_KEY_S, "TK_KEY_S", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_T",
                      JS_NewCFunction(ctx, get_TK_KEY_T, "TK_KEY_T", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_U",
                      JS_NewCFunction(ctx, get_TK_KEY_U, "TK_KEY_U", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_V",
                      JS_NewCFunction(ctx, get_TK_KEY_V, "TK_KEY_V", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_W",
                      JS_NewCFunction(ctx, get_TK_KEY_W, "TK_KEY_W", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_X",
                      JS_NewCFunction(ctx, get_TK_KEY_X, "TK_KEY_X", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_Y",
                      JS_NewCFunction(ctx, get_TK_KEY_Y, "TK_KEY_Y", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_Z",
                      JS_NewCFunction(ctx, get_TK_KEY_Z, "TK_KEY_Z", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_DOT",
                      JS_NewCFunction(ctx, get_TK_KEY_DOT, "TK_KEY_DOT", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_DELETE",
                      JS_NewCFunction(ctx, get_TK_KEY_DELETE, "TK_KEY_DELETE", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_LEFTBRACE",
                      JS_NewCFunction(ctx, get_TK_KEY_LEFTBRACE, "TK_KEY_LEFTBRACE", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_RIGHTBRACE",
                      JS_NewCFunction(ctx, get_TK_KEY_RIGHTBRACE, "TK_KEY_RIGHTBRACE", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_LSHIFT",
                      JS_NewCFunction(ctx, get_TK_KEY_LSHIFT, "TK_KEY_LSHIFT", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_RSHIFT",
                      JS_NewCFunction(ctx, get_TK_KEY_RSHIFT, "TK_KEY_RSHIFT", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_LCTRL",
                      JS_NewCFunction(ctx, get_TK_KEY_LCTRL, "TK_KEY_LCTRL", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_RCTRL",
                      JS_NewCFunction(ctx, get_TK_KEY_RCTRL, "TK_KEY_RCTRL", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_LALT",
                      JS_NewCFunction(ctx, get_TK_KEY_LALT, "TK_KEY_LALT", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_RALT",
                      JS_NewCFunction(ctx, get_TK_KEY_RALT, "TK_KEY_RALT", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_CAPSLOCK",
                      JS_NewCFunction(ctx, get_TK_KEY_CAPSLOCK, "TK_KEY_CAPSLOCK", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_HOME",
                      JS_NewCFunction(ctx, get_TK_KEY_HOME, "TK_KEY_HOME", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_END",
                      JS_NewCFunction(ctx, get_TK_KEY_END, "TK_KEY_END", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_INSERT",
                      JS_NewCFunction(ctx, get_TK_KEY_INSERT, "TK_KEY_INSERT", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_UP",
                      JS_NewCFunction(ctx, get_TK_KEY_UP, "TK_KEY_UP", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_DOWN",
                      JS_NewCFunction(ctx, get_TK_KEY_DOWN, "TK_KEY_DOWN", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_LEFT",
                      JS_NewCFunction(ctx, get_TK_KEY_LEFT, "TK_KEY_LEFT", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_RIGHT",
                      JS_NewCFunction(ctx, get_TK_KEY_RIGHT, "TK_KEY_RIGHT", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_PAGEUP",
                      JS_NewCFunction(ctx, get_TK_KEY_PAGEUP, "TK_KEY_PAGEUP", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_PAGEDOWN",
                      JS_NewCFunction(ctx, get_TK_KEY_PAGEDOWN, "TK_KEY_PAGEDOWN", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F1",
                      JS_NewCFunction(ctx, get_TK_KEY_F1, "TK_KEY_F1", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F2",
                      JS_NewCFunction(ctx, get_TK_KEY_F2, "TK_KEY_F2", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F3",
                      JS_NewCFunction(ctx, get_TK_KEY_F3, "TK_KEY_F3", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F4",
                      JS_NewCFunction(ctx, get_TK_KEY_F4, "TK_KEY_F4", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F5",
                      JS_NewCFunction(ctx, get_TK_KEY_F5, "TK_KEY_F5", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F6",
                      JS_NewCFunction(ctx, get_TK_KEY_F6, "TK_KEY_F6", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F7",
                      JS_NewCFunction(ctx, get_TK_KEY_F7, "TK_KEY_F7", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F8",
                      JS_NewCFunction(ctx, get_TK_KEY_F8, "TK_KEY_F8", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F9",
                      JS_NewCFunction(ctx, get_TK_KEY_F9, "TK_KEY_F9", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F10",
                      JS_NewCFunction(ctx, get_TK_KEY_F10, "TK_KEY_F10", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F11",
                      JS_NewCFunction(ctx, get_TK_KEY_F11, "TK_KEY_F11", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_F12",
                      JS_NewCFunction(ctx, get_TK_KEY_F12, "TK_KEY_F12", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_MENU",
                      JS_NewCFunction(ctx, get_TK_KEY_MENU, "TK_KEY_MENU", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_COMMAND",
                      JS_NewCFunction(ctx, get_TK_KEY_COMMAND, "TK_KEY_COMMAND", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_BACK",
                      JS_NewCFunction(ctx, get_TK_KEY_BACK, "TK_KEY_BACK", 1));
  JS_SetPropertyStr(ctx, global_obj, "TK_KEY_CANCEL",
                      JS_NewCFunction(ctx, get_TK_KEY_CANCEL, "TK_KEY_CANCEL", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_locale_info(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  locale_info_t* ret = NULL;
  ret = (locale_info_t*)locale_info();

  jret = jsvalue_create_pointer(ctx, ret, "locale_info_t*");
  }
  return jret;
}

jsvalue_t wrap_locale_info_tr(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  char* ret = NULL;
  locale_info_t* locale_info = (locale_info_t*)jsvalue_get_pointer(ctx, argv[0], "locale_info_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (char*)locale_info_tr(locale_info, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_locale_info_change(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  locale_info_t* locale_info = (locale_info_t*)jsvalue_get_pointer(ctx, argv[0], "locale_info_t*");
  char* language = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  char* country = (char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)locale_info_change(locale_info, language, country);
  jsvalue_free_str(ctx, language);
  jsvalue_free_str(ctx, country);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_locale_info_off(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  locale_info_t* locale_info = (locale_info_t*)jsvalue_get_pointer(ctx, argv[0], "locale_info_t*");
  uint32_t id = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)locale_info_off(locale_info, id);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t locale_info_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "locale_info",
                      JS_NewCFunction(ctx, wrap_locale_info, "locale_info", 1));
  JS_SetPropertyStr(ctx, global_obj, "locale_info_tr",
                      JS_NewCFunction(ctx, wrap_locale_info_tr, "locale_info_tr", 1));
  JS_SetPropertyStr(ctx, global_obj, "locale_info_change",
                      JS_NewCFunction(ctx, wrap_locale_info_change, "locale_info_change", 1));
  JS_SetPropertyStr(ctx, global_obj, "locale_info_off",
                      JS_NewCFunction(ctx, wrap_locale_info_off, "locale_info_off", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_STYLE_ID_BG_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_BG_COLOR);
}

jsvalue_t get_STYLE_ID_FG_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_FG_COLOR);
}

jsvalue_t get_STYLE_ID_MASK_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_MASK_COLOR);
}

jsvalue_t get_STYLE_ID_FONT_NAME(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_FONT_NAME);
}

jsvalue_t get_STYLE_ID_FONT_SIZE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_FONT_SIZE);
}

jsvalue_t get_STYLE_ID_FONT_STYLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_FONT_STYLE);
}

jsvalue_t get_STYLE_ID_TEXT_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_TEXT_COLOR);
}

jsvalue_t get_STYLE_ID_TIPS_TEXT_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_TIPS_TEXT_COLOR);
}

jsvalue_t get_STYLE_ID_TEXT_ALIGN_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_TEXT_ALIGN_H);
}

jsvalue_t get_STYLE_ID_TEXT_ALIGN_V(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_TEXT_ALIGN_V);
}

jsvalue_t get_STYLE_ID_BORDER_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_BORDER_COLOR);
}

jsvalue_t get_STYLE_ID_BORDER_WIDTH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_BORDER_WIDTH);
}

jsvalue_t get_STYLE_ID_BORDER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_BORDER);
}

jsvalue_t get_STYLE_ID_BG_IMAGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_BG_IMAGE);
}

jsvalue_t get_STYLE_ID_BG_IMAGE_DRAW_TYPE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_BG_IMAGE_DRAW_TYPE);
}

jsvalue_t get_STYLE_ID_ICON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_ICON);
}

jsvalue_t get_STYLE_ID_FG_IMAGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_FG_IMAGE);
}

jsvalue_t get_STYLE_ID_FG_IMAGE_DRAW_TYPE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_FG_IMAGE_DRAW_TYPE);
}

jsvalue_t get_STYLE_ID_SPACER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_SPACER);
}

jsvalue_t get_STYLE_ID_MARGIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN);
}

jsvalue_t get_STYLE_ID_MARGIN_LEFT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_LEFT);
}

jsvalue_t get_STYLE_ID_MARGIN_RIGHT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_RIGHT);
}

jsvalue_t get_STYLE_ID_MARGIN_TOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_TOP);
}

jsvalue_t get_STYLE_ID_MARGIN_BOTTOM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_MARGIN_BOTTOM);
}

jsvalue_t get_STYLE_ID_ICON_AT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_ICON_AT);
}

jsvalue_t get_STYLE_ID_ACTIVE_ICON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_ACTIVE_ICON);
}

jsvalue_t get_STYLE_ID_X_OFFSET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_X_OFFSET);
}

jsvalue_t get_STYLE_ID_Y_OFFSET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_Y_OFFSET);
}

jsvalue_t get_STYLE_ID_SELECTED_BG_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_SELECTED_BG_COLOR);
}

jsvalue_t get_STYLE_ID_SELECTED_FG_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_SELECTED_FG_COLOR);
}

jsvalue_t get_STYLE_ID_SELECTED_TEXT_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_SELECTED_TEXT_COLOR);
}

jsvalue_t get_STYLE_ID_ROUND_RADIUS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, STYLE_ID_ROUND_RADIUS);
}

ret_t style_id_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_TIPS_TEXT_COLOR",
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
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_BG_IMAGE_DRAW_TYPE",
                      JS_NewCFunction(ctx, get_STYLE_ID_BG_IMAGE_DRAW_TYPE, "STYLE_ID_BG_IMAGE_DRAW_TYPE", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_ICON",
                      JS_NewCFunction(ctx, get_STYLE_ID_ICON, "STYLE_ID_ICON", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_FG_IMAGE",
                      JS_NewCFunction(ctx, get_STYLE_ID_FG_IMAGE, "STYLE_ID_FG_IMAGE", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_FG_IMAGE_DRAW_TYPE",
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
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_SELECTED_BG_COLOR",
                      JS_NewCFunction(ctx, get_STYLE_ID_SELECTED_BG_COLOR, "STYLE_ID_SELECTED_BG_COLOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_SELECTED_FG_COLOR",
                      JS_NewCFunction(ctx, get_STYLE_ID_SELECTED_FG_COLOR, "STYLE_ID_SELECTED_FG_COLOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_SELECTED_TEXT_COLOR",
                      JS_NewCFunction(ctx, get_STYLE_ID_SELECTED_TEXT_COLOR, "STYLE_ID_SELECTED_TEXT_COLOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "STYLE_ID_ROUND_RADIUS",
                      JS_NewCFunction(ctx, get_STYLE_ID_ROUND_RADIUS, "STYLE_ID_ROUND_RADIUS", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_style_notify_widget_state_changed(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (ret_t)style_notify_widget_state_changed(s, widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_is_valid(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  ret = (bool_t)style_is_valid(s);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_get_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  int32_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (int32_t)style_get_int(s, name, defval);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_get_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  const char* ret = NULL;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* defval = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (const char*)style_get_str(s, name, defval);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, defval);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_set(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* state = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  const value_t* value = (const value_t*)jsvalue_get_pointer(ctx, argv[3], "const value_t*");
  ret = (ret_t)style_set(s, state, name, value);
  jsvalue_free_str(ctx, state);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_is_mutable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  ret = (bool_t)style_is_mutable(s);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

ret_t style_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "style_notify_widget_state_changed",
                      JS_NewCFunction(ctx, wrap_style_notify_widget_state_changed, "style_notify_widget_state_changed", 1));
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

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_theme(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  theme_t* ret = NULL;
  ret = (theme_t*)theme();

  jret = jsvalue_create_pointer(ctx, ret, "theme_t*");
  }
  return jret;
}

ret_t theme_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "theme",
                      JS_NewCFunction(ctx, wrap_theme, "theme", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_timer_remove(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  ret = (ret_t)timer_remove(timer_id);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_timer_reset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  ret = (ret_t)timer_reset(timer_id);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_timer_modify(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)timer_modify(timer_id, duration);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t timer_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "timer_add",
                      JS_NewCFunction(ctx, wrap_timer_add, "timer_add", 1));
  JS_SetPropertyStr(ctx, global_obj, "timer_remove",
                      JS_NewCFunction(ctx, wrap_timer_remove, "timer_remove", 1));
  JS_SetPropertyStr(ctx, global_obj, "timer_reset",
                      JS_NewCFunction(ctx, wrap_timer_reset, "timer_reset", 1));
  JS_SetPropertyStr(ctx, global_obj, "timer_modify",
                      JS_NewCFunction(ctx, wrap_timer_modify, "timer_modify", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_ALIGN_V_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_V_NONE);
}

jsvalue_t get_ALIGN_V_MIDDLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_V_MIDDLE);
}

jsvalue_t get_ALIGN_V_TOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_V_TOP);
}

jsvalue_t get_ALIGN_V_BOTTOM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_V_BOTTOM);
}

ret_t align_v_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_V_NONE",
                      JS_NewCFunction(ctx, get_ALIGN_V_NONE, "ALIGN_V_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_V_MIDDLE",
                      JS_NewCFunction(ctx, get_ALIGN_V_MIDDLE, "ALIGN_V_MIDDLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_V_TOP",
                      JS_NewCFunction(ctx, get_ALIGN_V_TOP, "ALIGN_V_TOP", 1));
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_V_BOTTOM",
                      JS_NewCFunction(ctx, get_ALIGN_V_BOTTOM, "ALIGN_V_BOTTOM", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_ALIGN_H_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_H_NONE);
}

jsvalue_t get_ALIGN_H_CENTER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_H_CENTER);
}

jsvalue_t get_ALIGN_H_LEFT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_H_LEFT);
}

jsvalue_t get_ALIGN_H_RIGHT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ALIGN_H_RIGHT);
}

ret_t align_h_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_H_NONE",
                      JS_NewCFunction(ctx, get_ALIGN_H_NONE, "ALIGN_H_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_H_CENTER",
                      JS_NewCFunction(ctx, get_ALIGN_H_CENTER, "ALIGN_H_CENTER", 1));
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_H_LEFT",
                      JS_NewCFunction(ctx, get_ALIGN_H_LEFT, "ALIGN_H_LEFT", 1));
  JS_SetPropertyStr(ctx, global_obj, "ALIGN_H_RIGHT",
                      JS_NewCFunction(ctx, get_ALIGN_H_RIGHT, "ALIGN_H_RIGHT", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_APP_MOBILE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, APP_MOBILE);
}

jsvalue_t get_APP_SIMULATOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, APP_SIMULATOR);
}

jsvalue_t get_APP_DESKTOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, APP_DESKTOP);
}

ret_t app_type_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "APP_MOBILE",
                      JS_NewCFunction(ctx, get_APP_MOBILE, "APP_MOBILE", 1));
  JS_SetPropertyStr(ctx, global_obj, "APP_SIMULATOR",
                      JS_NewCFunction(ctx, get_APP_SIMULATOR, "APP_SIMULATOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "APP_DESKTOP",
                      JS_NewCFunction(ctx, get_APP_DESKTOP, "APP_DESKTOP", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_BITMAP_FMT_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_NONE);
}

jsvalue_t get_BITMAP_FMT_RGBA8888(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_RGBA8888);
}

jsvalue_t get_BITMAP_FMT_ABGR8888(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_ABGR8888);
}

jsvalue_t get_BITMAP_FMT_BGRA8888(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_BGRA8888);
}

jsvalue_t get_BITMAP_FMT_ARGB8888(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_ARGB8888);
}

jsvalue_t get_BITMAP_FMT_RGB565(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_RGB565);
}

jsvalue_t get_BITMAP_FMT_BGR565(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_BGR565);
}

jsvalue_t get_BITMAP_FMT_RGB888(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_RGB888);
}

jsvalue_t get_BITMAP_FMT_BGR888(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_BGR888);
}

jsvalue_t get_BITMAP_FMT_GRAY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_GRAY);
}

jsvalue_t get_BITMAP_FMT_MONO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FMT_MONO);
}

ret_t bitmap_format_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_BITMAP_FLAG_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FLAG_NONE);
}

jsvalue_t get_BITMAP_FLAG_OPAQUE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FLAG_OPAQUE);
}

jsvalue_t get_BITMAP_FLAG_IMMUTABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FLAG_IMMUTABLE);
}

jsvalue_t get_BITMAP_FLAG_TEXTURE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FLAG_TEXTURE);
}

jsvalue_t get_BITMAP_FLAG_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FLAG_CHANGED);
}

jsvalue_t get_BITMAP_FLAG_PREMULTI_ALPHA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, BITMAP_FLAG_PREMULTI_ALPHA);
}

ret_t bitmap_flag_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "BITMAP_FLAG_PREMULTI_ALPHA",
                      JS_NewCFunction(ctx, get_BITMAP_FLAG_PREMULTI_ALPHA, "BITMAP_FLAG_PREMULTI_ALPHA", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_vgcanvas_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  vgcanvas_t* ret = NULL;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (vgcanvas_t*)vgcanvas_cast(vg);

  jret = jsvalue_create_pointer(ctx, ret, "vgcanvas_t*");
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_flush(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_flush(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_begin_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_begin_path(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_move_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)vgcanvas_move_to(vg, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_line_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)vgcanvas_line_to(vg, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_quad_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t cpx = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t cpy = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_quad_to(vg, cpx, cpy, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_bezier_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 7) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t cp1x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t cp1y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t cp2x = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t cp2y = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  ret = (ret_t)vgcanvas_bezier_to(vg, cp1x, cp1y, cp2x, cp2y, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_arc_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 6) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x1 = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y1 = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t x2 = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t y2 = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t r = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  ret = (ret_t)vgcanvas_arc_to(vg, x1, y1, x2, y2, r);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_arc(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 7) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t r = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t start_angle = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t end_angle = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  bool_t ccw = (bool_t)jsvalue_get_boolean_value(ctx, argv[6]);
  ret = (ret_t)vgcanvas_arc(vg, x, y, r, start_angle, end_angle, ccw);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_is_point_in_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  bool_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (bool_t)vgcanvas_is_point_in_path(vg, x, y);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t w = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t h = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_rect(vg, x, y, w, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_rounded_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 6) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t w = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t h = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t r = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  ret = (ret_t)vgcanvas_rounded_rect(vg, x, y, w, h, r);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_ellipse(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t rx = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t ry = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_ellipse(vg, x, y, rx, ry);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_close_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_close_path(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_rotate(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t rad = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_rotate(vg, rad);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)vgcanvas_scale(vg, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_translate(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)vgcanvas_translate(vg, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_transform(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 7) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t a = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t b = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t c = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t d = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t e = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t f = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  ret = (ret_t)vgcanvas_transform(vg, a, b, c, d, e, f);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_transform(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 7) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t a = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t b = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t c = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t d = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t e = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t f = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  ret = (ret_t)vgcanvas_set_transform(vg, a, b, c, d, e, f);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_clip_rect(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t w = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t h = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_clip_rect(vg, x, y, w, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_fill(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_fill(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_stroke(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_stroke(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_paint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  bool_t stroke = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[2], "bitmap_t*");
  ret = (ret_t)vgcanvas_paint(vg, stroke, img);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_font(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* font = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_font(vg, font);
  jsvalue_free_str(ctx, font);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_font_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t font = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_font_size(vg, font);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_text_align(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_text_align(vg, value);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_text_baseline(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_text_baseline(vg, value);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_fill_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t x = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t y = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t max_width = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  ret = (ret_t)vgcanvas_fill_text(vg, text, x, y, max_width);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_measure_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  float_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (float_t)vgcanvas_measure_text(vg, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_draw_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 10) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  float_t sx = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t sy = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t sw = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t sh = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t dx = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  float_t dy = (float_t)jsvalue_get_number_value(ctx, argv[7]);
  float_t dw = (float_t)jsvalue_get_number_value(ctx, argv[8]);
  float_t dh = (float_t)jsvalue_get_number_value(ctx, argv[9]);
  ret = (ret_t)vgcanvas_draw_image(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_draw_icon(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 10) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  bitmap_t* img = (bitmap_t*)jsvalue_get_pointer(ctx, argv[1], "bitmap_t*");
  float_t sx = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  float_t sy = (float_t)jsvalue_get_number_value(ctx, argv[3]);
  float_t sw = (float_t)jsvalue_get_number_value(ctx, argv[4]);
  float_t sh = (float_t)jsvalue_get_number_value(ctx, argv[5]);
  float_t dx = (float_t)jsvalue_get_number_value(ctx, argv[6]);
  float_t dy = (float_t)jsvalue_get_number_value(ctx, argv[7]);
  float_t dw = (float_t)jsvalue_get_number_value(ctx, argv[8]);
  float_t dh = (float_t)jsvalue_get_number_value(ctx, argv[9]);
  ret = (ret_t)vgcanvas_draw_icon(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_antialias(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_antialias(vg, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_global_alpha(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t alpha = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_global_alpha(vg, alpha);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_line_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_line_width(vg, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_fill_color_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_fill_color_str(vg, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_stroke_color_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_stroke_color_str(vg, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_line_cap(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_line_cap(vg, value);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_line_join(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  char* value = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_line_join(vg, value);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_set_miter_limit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)vgcanvas_set_miter_limit(vg, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_save(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_save(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_restore(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");
  ret = (ret_t)vgcanvas_restore(vg);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_ratio(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->ratio);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_anti_alias(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_bool(ctx, obj->anti_alias);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_line_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->line_width);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_global_alpha(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->global_alpha);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_miter_limit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->miter_limit);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_line_cap(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->line_cap);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_line_join(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->line_join);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_font(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->font);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_font_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_number(ctx, obj->font_size);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_text_align(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->text_align);
  return jret;
}

jsvalue_t wrap_vgcanvas_t_get_prop_text_baseline(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  vgcanvas_t* obj = (vgcanvas_t*)jsvalue_get_pointer(ctx, argv[0], "vgcanvas_t*");

  jret = jsvalue_create_string(ctx, obj->text_baseline);
  return jret;
}

ret_t vgcanvas_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_is_point_in_path",
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
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_text_align",
                      JS_NewCFunction(ctx, wrap_vgcanvas_set_text_align, "vgcanvas_set_text_align", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_text_baseline",
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
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_global_alpha",
                      JS_NewCFunction(ctx, wrap_vgcanvas_set_global_alpha, "vgcanvas_set_global_alpha", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_line_width",
                      JS_NewCFunction(ctx, wrap_vgcanvas_set_line_width, "vgcanvas_set_line_width", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_fill_color_str",
                      JS_NewCFunction(ctx, wrap_vgcanvas_set_fill_color_str, "vgcanvas_set_fill_color_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_stroke_color_str",
                      JS_NewCFunction(ctx, wrap_vgcanvas_set_stroke_color_str, "vgcanvas_set_stroke_color_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_line_cap",
                      JS_NewCFunction(ctx, wrap_vgcanvas_set_line_cap, "vgcanvas_set_line_cap", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_line_join",
                      JS_NewCFunction(ctx, wrap_vgcanvas_set_line_join, "vgcanvas_set_line_join", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_set_miter_limit",
                      JS_NewCFunction(ctx, wrap_vgcanvas_set_miter_limit, "vgcanvas_set_miter_limit", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_save",
                      JS_NewCFunction(ctx, wrap_vgcanvas_save, "vgcanvas_save", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_restore",
                      JS_NewCFunction(ctx, wrap_vgcanvas_restore, "vgcanvas_restore", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_w",
                      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_w, "vgcanvas_t_get_prop_w", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_h",
                      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_h, "vgcanvas_t_get_prop_h", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_ratio",
                      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_ratio, "vgcanvas_t_get_prop_ratio", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_anti_alias",
                      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_anti_alias, "vgcanvas_t_get_prop_anti_alias", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_line_width",
                      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_line_width, "vgcanvas_t_get_prop_line_width", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_global_alpha",
                      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_global_alpha, "vgcanvas_t_get_prop_global_alpha", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_miter_limit",
                      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_miter_limit, "vgcanvas_t_get_prop_miter_limit", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_line_cap",
                      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_line_cap, "vgcanvas_t_get_prop_line_cap", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_line_join",
                      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_line_join, "vgcanvas_t_get_prop_line_join", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_font",
                      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_font, "vgcanvas_t_get_prop_font", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_font_size",
                      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_font_size, "vgcanvas_t_get_prop_font_size", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_text_align",
                      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_text_align, "vgcanvas_t_get_prop_text_align", 1));
  JS_SetPropertyStr(ctx, global_obj, "vgcanvas_t_get_prop_text_baseline",
                      JS_NewCFunction(ctx, wrap_vgcanvas_t_get_prop_text_baseline, "vgcanvas_t_get_prop_text_baseline", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_WIDGET_PROP_EXEC(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_EXEC);
}

jsvalue_t get_WIDGET_PROP_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_X);
}

jsvalue_t get_WIDGET_PROP_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_Y);
}

jsvalue_t get_WIDGET_PROP_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_W);
}

jsvalue_t get_WIDGET_PROP_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_H);
}

jsvalue_t get_WIDGET_PROP_CANVAS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CANVAS);
}

jsvalue_t get_WIDGET_PROP_LOCALIZE_OPTIONS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LOCALIZE_OPTIONS);
}

jsvalue_t get_WIDGET_PROP_NATIVE_WINDOW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_NATIVE_WINDOW);
}

jsvalue_t get_WIDGET_PROP_HIGHLIGHT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_HIGHLIGHT);
}

jsvalue_t get_WIDGET_PROP_BAR_SIZE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_BAR_SIZE);
}

jsvalue_t get_WIDGET_PROP_OPACITY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_OPACITY);
}

jsvalue_t get_WIDGET_PROP_MIN_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MIN_W);
}

jsvalue_t get_WIDGET_PROP_MAX_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MAX_W);
}

jsvalue_t get_WIDGET_PROP_CHILDREN_LAYOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CHILDREN_LAYOUT);
}

jsvalue_t get_WIDGET_PROP_LAYOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LAYOUT);
}

jsvalue_t get_WIDGET_PROP_SELF_LAYOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SELF_LAYOUT);
}

jsvalue_t get_WIDGET_PROP_LAYOUT_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LAYOUT_W);
}

jsvalue_t get_WIDGET_PROP_LAYOUT_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LAYOUT_H);
}

jsvalue_t get_WIDGET_PROP_VIRTUAL_W(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_VIRTUAL_W);
}

jsvalue_t get_WIDGET_PROP_VIRTUAL_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_VIRTUAL_H);
}

jsvalue_t get_WIDGET_PROP_NAME(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_NAME);
}

jsvalue_t get_WIDGET_PROP_TYPE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_TYPE);
}

jsvalue_t get_WIDGET_PROP_CLOSABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSABLE);
}

jsvalue_t get_WIDGET_PROP_CURSOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CURSOR);
}

jsvalue_t get_WIDGET_PROP_VALUE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_VALUE);
}

jsvalue_t get_WIDGET_PROP_LENGTH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LENGTH);
}

jsvalue_t get_WIDGET_PROP_TEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_TEXT);
}

jsvalue_t get_WIDGET_PROP_TR_TEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_TR_TEXT);
}

jsvalue_t get_WIDGET_PROP_STYLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_STYLE);
}

jsvalue_t get_WIDGET_PROP_ENABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ENABLE);
}

jsvalue_t get_WIDGET_PROP_FEEDBACK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FEEDBACK);
}

jsvalue_t get_WIDGET_PROP_FLOATING(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FLOATING);
}

jsvalue_t get_WIDGET_PROP_MARGIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MARGIN);
}

jsvalue_t get_WIDGET_PROP_SPACING(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SPACING);
}

jsvalue_t get_WIDGET_PROP_LEFT_MARGIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LEFT_MARGIN);
}

jsvalue_t get_WIDGET_PROP_RIGHT_MARGIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_RIGHT_MARGIN);
}

jsvalue_t get_WIDGET_PROP_TOP_MARGIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_TOP_MARGIN);
}

jsvalue_t get_WIDGET_PROP_BOTTOM_MARGIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_BOTTOM_MARGIN);
}

jsvalue_t get_WIDGET_PROP_STEP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_STEP);
}

jsvalue_t get_WIDGET_PROP_VISIBLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_VISIBLE);
}

jsvalue_t get_WIDGET_PROP_SENSITIVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SENSITIVE);
}

jsvalue_t get_WIDGET_PROP_ANIMATION(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ANIMATION);
}

jsvalue_t get_WIDGET_PROP_ANIM_HINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ANIM_HINT);
}

jsvalue_t get_WIDGET_PROP_FULLSCREEN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FULLSCREEN);
}

jsvalue_t get_WIDGET_PROP_OPEN_ANIM_HINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_OPEN_ANIM_HINT);
}

jsvalue_t get_WIDGET_PROP_CLOSE_ANIM_HINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_ANIM_HINT);
}

jsvalue_t get_WIDGET_PROP_MIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MIN);
}

jsvalue_t get_WIDGET_PROP_TIPS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_TIPS);
}

jsvalue_t get_WIDGET_PROP_INPUT_TYPE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_INPUT_TYPE);
}

jsvalue_t get_WIDGET_PROP_READONLY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_READONLY);
}

jsvalue_t get_WIDGET_PROP_PASSWORD_VISIBLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_PASSWORD_VISIBLE);
}

jsvalue_t get_WIDGET_PROP_ACTIVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ACTIVE);
}

jsvalue_t get_WIDGET_PROP_VERTICAL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_VERTICAL);
}

jsvalue_t get_WIDGET_PROP_SHOW_TEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SHOW_TEXT);
}

jsvalue_t get_WIDGET_PROP_XOFFSET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_XOFFSET);
}

jsvalue_t get_WIDGET_PROP_YOFFSET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_YOFFSET);
}

jsvalue_t get_WIDGET_PROP_ALIGN_V(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ALIGN_V);
}

jsvalue_t get_WIDGET_PROP_ALIGN_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ALIGN_H);
}

jsvalue_t get_WIDGET_PROP_AUTO_PLAY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_PLAY);
}

jsvalue_t get_WIDGET_PROP_LOOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LOOP);
}

jsvalue_t get_WIDGET_PROP_AUTO_FIX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_FIX);
}

jsvalue_t get_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED);
}

jsvalue_t get_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_OPEN_IM_WHEN_FOCUSED);
}

jsvalue_t get_WIDGET_PROP_X_MIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_X_MIN);
}

jsvalue_t get_WIDGET_PROP_X_MAX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_X_MAX);
}

jsvalue_t get_WIDGET_PROP_Y_MIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_Y_MIN);
}

jsvalue_t get_WIDGET_PROP_Y_MAX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_Y_MAX);
}

jsvalue_t get_WIDGET_PROP_MAX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MAX);
}

jsvalue_t get_WIDGET_PROP_GRAB_KEYS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_GRAB_KEYS);
}

jsvalue_t get_WIDGET_PROP_ROW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ROW);
}

jsvalue_t get_WIDGET_PROP_STATE_FOR_STYLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_STATE_FOR_STYLE);
}

jsvalue_t get_WIDGET_PROP_THEME(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_THEME);
}

jsvalue_t get_WIDGET_PROP_STAGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_STAGE);
}

jsvalue_t get_WIDGET_PROP_IMAGE_MANAGER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_IMAGE_MANAGER);
}

jsvalue_t get_WIDGET_PROP_ASSETS_MANAGER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ASSETS_MANAGER);
}

jsvalue_t get_WIDGET_PROP_LOCALE_INFO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LOCALE_INFO);
}

jsvalue_t get_WIDGET_PROP_FONT_MANAGER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FONT_MANAGER);
}

jsvalue_t get_WIDGET_PROP_THEME_OBJ(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_THEME_OBJ);
}

jsvalue_t get_WIDGET_PROP_DEFAULT_THEME_OBJ(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_DEFAULT_THEME_OBJ);
}

jsvalue_t get_WIDGET_PROP_ITEM_WIDTH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ITEM_WIDTH);
}

jsvalue_t get_WIDGET_PROP_ITEM_HEIGHT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ITEM_HEIGHT);
}

jsvalue_t get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_DEFAULT_ITEM_HEIGHT);
}

jsvalue_t get_WIDGET_PROP_XSLIDABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_XSLIDABLE);
}

jsvalue_t get_WIDGET_PROP_YSLIDABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_YSLIDABLE);
}

jsvalue_t get_WIDGET_PROP_REPEAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_REPEAT);
}

jsvalue_t get_WIDGET_PROP_ENABLE_LONG_PRESS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ENABLE_LONG_PRESS);
}

jsvalue_t get_WIDGET_PROP_ANIMATABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ANIMATABLE);
}

jsvalue_t get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_AUTO_HIDE_SCROLL_BAR);
}

jsvalue_t get_WIDGET_PROP_IMAGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_IMAGE);
}

jsvalue_t get_WIDGET_PROP_FORMAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FORMAT);
}

jsvalue_t get_WIDGET_PROP_DRAW_TYPE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_DRAW_TYPE);
}

jsvalue_t get_WIDGET_PROP_SELECTABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECTABLE);
}

jsvalue_t get_WIDGET_PROP_CLICKABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CLICKABLE);
}

jsvalue_t get_WIDGET_PROP_SCALE_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SCALE_X);
}

jsvalue_t get_WIDGET_PROP_SCALE_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SCALE_Y);
}

jsvalue_t get_WIDGET_PROP_ANCHOR_X(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ANCHOR_X);
}

jsvalue_t get_WIDGET_PROP_ANCHOR_Y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ANCHOR_Y);
}

jsvalue_t get_WIDGET_PROP_ROTATION(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ROTATION);
}

jsvalue_t get_WIDGET_PROP_COMPACT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_COMPACT);
}

jsvalue_t get_WIDGET_PROP_SCROLLABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SCROLLABLE);
}

jsvalue_t get_WIDGET_PROP_ICON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ICON);
}

jsvalue_t get_WIDGET_PROP_OPTIONS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_OPTIONS);
}

jsvalue_t get_WIDGET_PROP_SELECTED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECTED);
}

jsvalue_t get_WIDGET_PROP_CHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CHECKED);
}

jsvalue_t get_WIDGET_PROP_ACTIVE_ICON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_ACTIVE_ICON);
}

jsvalue_t get_WIDGET_PROP_OPEN_WINDOW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_OPEN_WINDOW);
}

jsvalue_t get_WIDGET_PROP_SELECTED_INDEX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_SELECTED_INDEX);
}

jsvalue_t get_WIDGET_PROP_CLOSE_WHEN_CLICK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_WHEN_CLICK);
}

jsvalue_t get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE);
}

jsvalue_t get_WIDGET_PROP_LINE_GAP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_LINE_GAP);
}

jsvalue_t get_WIDGET_PROP_BG_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_BG_COLOR);
}

jsvalue_t get_WIDGET_PROP_BORDER_COLOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_BORDER_COLOR);
}

jsvalue_t get_WIDGET_PROP_DELAY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_DELAY);
}

jsvalue_t get_WIDGET_PROP_IS_KEYBOARD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_IS_KEYBOARD);
}

jsvalue_t get_WIDGET_PROP_FOCUSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FOCUSED);
}

jsvalue_t get_WIDGET_PROP_FOCUS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FOCUS);
}

jsvalue_t get_WIDGET_PROP_FOCUSABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_FOCUSABLE);
}

jsvalue_t get_WIDGET_PROP_WITH_FOCUS_STATE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_WITH_FOCUS_STATE);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_PREV_KEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_PREV_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_NEXT_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_UP_KEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_UP_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_DOWN_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_LEFT_KEY);
}

jsvalue_t get_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY);
}

ret_t widget_prop_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_EXEC",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_EXEC, "WIDGET_PROP_EXEC", 1));
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
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_LOCALIZE_OPTIONS",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_LOCALIZE_OPTIONS, "WIDGET_PROP_LOCALIZE_OPTIONS", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_NATIVE_WINDOW",
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
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_CHILDREN_LAYOUT",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_CHILDREN_LAYOUT, "WIDGET_PROP_CHILDREN_LAYOUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_LAYOUT",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_LAYOUT, "WIDGET_PROP_LAYOUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_SELF_LAYOUT",
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
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_FEEDBACK",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_FEEDBACK, "WIDGET_PROP_FEEDBACK", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_FLOATING",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_FLOATING, "WIDGET_PROP_FLOATING", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MARGIN",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_MARGIN, "WIDGET_PROP_MARGIN", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_SPACING",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_SPACING, "WIDGET_PROP_SPACING", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_LEFT_MARGIN",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_LEFT_MARGIN, "WIDGET_PROP_LEFT_MARGIN", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_RIGHT_MARGIN",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_RIGHT_MARGIN, "WIDGET_PROP_RIGHT_MARGIN", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_TOP_MARGIN",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_TOP_MARGIN, "WIDGET_PROP_TOP_MARGIN", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_BOTTOM_MARGIN",
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
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_OPEN_ANIM_HINT",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_OPEN_ANIM_HINT, "WIDGET_PROP_OPEN_ANIM_HINT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_CLOSE_ANIM_HINT",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_CLOSE_ANIM_HINT, "WIDGET_PROP_CLOSE_ANIM_HINT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MIN",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_MIN, "WIDGET_PROP_MIN", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_TIPS",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_TIPS, "WIDGET_PROP_TIPS", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_INPUT_TYPE",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_INPUT_TYPE, "WIDGET_PROP_INPUT_TYPE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_READONLY",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_READONLY, "WIDGET_PROP_READONLY", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_PASSWORD_VISIBLE",
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
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED, "WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_OPEN_IM_WHEN_FOCUSED",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED, "WIDGET_PROP_OPEN_IM_WHEN_FOCUSED", 1));
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
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_GRAB_KEYS",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_GRAB_KEYS, "WIDGET_PROP_GRAB_KEYS", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ROW",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_ROW, "WIDGET_PROP_ROW", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_STATE_FOR_STYLE",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_STATE_FOR_STYLE, "WIDGET_PROP_STATE_FOR_STYLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_THEME",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_THEME, "WIDGET_PROP_THEME", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_STAGE",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_STAGE, "WIDGET_PROP_STAGE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_IMAGE_MANAGER",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_IMAGE_MANAGER, "WIDGET_PROP_IMAGE_MANAGER", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ASSETS_MANAGER",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_ASSETS_MANAGER, "WIDGET_PROP_ASSETS_MANAGER", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_LOCALE_INFO",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_LOCALE_INFO, "WIDGET_PROP_LOCALE_INFO", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_FONT_MANAGER",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_FONT_MANAGER, "WIDGET_PROP_FONT_MANAGER", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_THEME_OBJ",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_THEME_OBJ, "WIDGET_PROP_THEME_OBJ", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_DEFAULT_THEME_OBJ",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_DEFAULT_THEME_OBJ, "WIDGET_PROP_DEFAULT_THEME_OBJ", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ITEM_WIDTH",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_ITEM_WIDTH, "WIDGET_PROP_ITEM_WIDTH", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ITEM_HEIGHT",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_ITEM_HEIGHT, "WIDGET_PROP_ITEM_HEIGHT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_DEFAULT_ITEM_HEIGHT",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_DEFAULT_ITEM_HEIGHT, "WIDGET_PROP_DEFAULT_ITEM_HEIGHT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_XSLIDABLE",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_XSLIDABLE, "WIDGET_PROP_XSLIDABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_YSLIDABLE",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_YSLIDABLE, "WIDGET_PROP_YSLIDABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_REPEAT",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_REPEAT, "WIDGET_PROP_REPEAT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ENABLE_LONG_PRESS",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_ENABLE_LONG_PRESS, "WIDGET_PROP_ENABLE_LONG_PRESS", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ANIMATABLE",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_ANIMATABLE, "WIDGET_PROP_ANIMATABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_AUTO_HIDE_SCROLL_BAR",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR, "WIDGET_PROP_AUTO_HIDE_SCROLL_BAR", 1));
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
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_ACTIVE_ICON",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_ACTIVE_ICON, "WIDGET_PROP_ACTIVE_ICON", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_OPEN_WINDOW",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_OPEN_WINDOW, "WIDGET_PROP_OPEN_WINDOW", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_SELECTED_INDEX",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_SELECTED_INDEX, "WIDGET_PROP_SELECTED_INDEX", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_CLOSE_WHEN_CLICK",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_CLOSE_WHEN_CLICK, "WIDGET_PROP_CLOSE_WHEN_CLICK", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE, "WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_LINE_GAP",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_LINE_GAP, "WIDGET_PROP_LINE_GAP", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_BG_COLOR",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_BG_COLOR, "WIDGET_PROP_BG_COLOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_BORDER_COLOR",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_BORDER_COLOR, "WIDGET_PROP_BORDER_COLOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_DELAY",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_DELAY, "WIDGET_PROP_DELAY", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_IS_KEYBOARD",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_IS_KEYBOARD, "WIDGET_PROP_IS_KEYBOARD", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_FOCUSED",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_FOCUSED, "WIDGET_PROP_FOCUSED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_FOCUS",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_FOCUS, "WIDGET_PROP_FOCUS", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_FOCUSABLE",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_FOCUSABLE, "WIDGET_PROP_FOCUSABLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_WITH_FOCUS_STATE",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_WITH_FOCUS_STATE, "WIDGET_PROP_WITH_FOCUS_STATE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MOVE_FOCUS_PREV_KEY",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_MOVE_FOCUS_PREV_KEY, "WIDGET_PROP_MOVE_FOCUS_PREV_KEY", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MOVE_FOCUS_NEXT_KEY",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY, "WIDGET_PROP_MOVE_FOCUS_NEXT_KEY", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MOVE_FOCUS_UP_KEY",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_MOVE_FOCUS_UP_KEY, "WIDGET_PROP_MOVE_FOCUS_UP_KEY", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MOVE_FOCUS_DOWN_KEY",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY, "WIDGET_PROP_MOVE_FOCUS_DOWN_KEY", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MOVE_FOCUS_LEFT_KEY",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY, "WIDGET_PROP_MOVE_FOCUS_LEFT_KEY", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY",
                      JS_NewCFunction(ctx, get_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY, "WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_WIDGET_TYPE_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_NONE);
}

jsvalue_t get_WIDGET_TYPE_WINDOW_MANAGER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_WINDOW_MANAGER);
}

jsvalue_t get_WIDGET_TYPE_NORMAL_WINDOW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_NORMAL_WINDOW);
}

jsvalue_t get_WIDGET_TYPE_OVERLAY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_OVERLAY);
}

jsvalue_t get_WIDGET_TYPE_TOOL_BAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_TOOL_BAR);
}

jsvalue_t get_WIDGET_TYPE_DIALOG(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_DIALOG);
}

jsvalue_t get_WIDGET_TYPE_POPUP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_POPUP);
}

jsvalue_t get_WIDGET_TYPE_SYSTEM_BAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SYSTEM_BAR);
}

jsvalue_t get_WIDGET_TYPE_SYSTEM_BAR_BOTTOM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SYSTEM_BAR_BOTTOM);
}

jsvalue_t get_WIDGET_TYPE_SPRITE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SPRITE);
}

jsvalue_t get_WIDGET_TYPE_KEYBOARD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_KEYBOARD);
}

jsvalue_t get_WIDGET_TYPE_DND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_DND);
}

jsvalue_t get_WIDGET_TYPE_LABEL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_LABEL);
}

jsvalue_t get_WIDGET_TYPE_BUTTON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_BUTTON);
}

jsvalue_t get_WIDGET_TYPE_IMAGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_IMAGE);
}

jsvalue_t get_WIDGET_TYPE_EDIT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_EDIT);
}

jsvalue_t get_WIDGET_TYPE_PROGRESS_BAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_PROGRESS_BAR);
}

jsvalue_t get_WIDGET_TYPE_GROUP_BOX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_GROUP_BOX);
}

jsvalue_t get_WIDGET_TYPE_CHECK_BUTTON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_CHECK_BUTTON);
}

jsvalue_t get_WIDGET_TYPE_RADIO_BUTTON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_RADIO_BUTTON);
}

jsvalue_t get_WIDGET_TYPE_DIALOG_TITLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_DIALOG_TITLE);
}

jsvalue_t get_WIDGET_TYPE_DIALOG_CLIENT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_DIALOG_CLIENT);
}

jsvalue_t get_WIDGET_TYPE_SLIDER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDER);
}

jsvalue_t get_WIDGET_TYPE_VIEW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_VIEW);
}

jsvalue_t get_WIDGET_TYPE_COMBO_BOX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_COMBO_BOX);
}

jsvalue_t get_WIDGET_TYPE_COMBO_BOX_ITEM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_COMBO_BOX_ITEM);
}

jsvalue_t get_WIDGET_TYPE_SLIDE_VIEW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDE_VIEW);
}

jsvalue_t get_WIDGET_TYPE_SLIDE_INDICATOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDE_INDICATOR);
}

jsvalue_t get_WIDGET_TYPE_SLIDE_INDICATOR_ARC(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SLIDE_INDICATOR_ARC);
}

jsvalue_t get_WIDGET_TYPE_PAGES(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_PAGES);
}

jsvalue_t get_WIDGET_TYPE_TAB_BUTTON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_TAB_BUTTON);
}

jsvalue_t get_WIDGET_TYPE_TAB_CONTROL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_TAB_CONTROL);
}

jsvalue_t get_WIDGET_TYPE_TAB_BUTTON_GROUP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_TAB_BUTTON_GROUP);
}

jsvalue_t get_WIDGET_TYPE_BUTTON_GROUP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_BUTTON_GROUP);
}

jsvalue_t get_WIDGET_TYPE_CANDIDATES(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_CANDIDATES);
}

jsvalue_t get_WIDGET_TYPE_SPIN_BOX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SPIN_BOX);
}

jsvalue_t get_WIDGET_TYPE_DRAGGER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_DRAGGER);
}

jsvalue_t get_WIDGET_TYPE_SCROLL_BAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_BAR);
}

jsvalue_t get_WIDGET_TYPE_SCROLL_BAR_DESKTOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_BAR_DESKTOP);
}

jsvalue_t get_WIDGET_TYPE_SCROLL_BAR_MOBILE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_BAR_MOBILE);
}

jsvalue_t get_WIDGET_TYPE_SCROLL_VIEW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_SCROLL_VIEW);
}

jsvalue_t get_WIDGET_TYPE_LIST_VIEW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_LIST_VIEW);
}

jsvalue_t get_WIDGET_TYPE_LIST_VIEW_H(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_LIST_VIEW_H);
}

jsvalue_t get_WIDGET_TYPE_LIST_ITEM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_LIST_ITEM);
}

jsvalue_t get_WIDGET_TYPE_COLOR_PICKER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLOR_PICKER);
}

jsvalue_t get_WIDGET_TYPE_COLOR_COMPONENT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLOR_COMPONENT);
}

jsvalue_t get_WIDGET_TYPE_COLOR_TILE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLOR_TILE);
}

jsvalue_t get_WIDGET_TYPE_RICH_TEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_RICH_TEXT);
}

jsvalue_t get_WIDGET_TYPE_APP_BAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_APP_BAR);
}

jsvalue_t get_WIDGET_TYPE_GRID(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_GRID);
}

jsvalue_t get_WIDGET_TYPE_GRID_ITEM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_GRID_ITEM);
}

jsvalue_t get_WIDGET_TYPE_ROW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_ROW);
}

jsvalue_t get_WIDGET_TYPE_COLUMN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_COLUMN);
}

jsvalue_t get_WIDGET_TYPE_CALIBRATION_WIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_TYPE_CALIBRATION_WIN);
}

ret_t widget_type_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_NONE",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_NONE, "WIDGET_TYPE_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_WINDOW_MANAGER",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_WINDOW_MANAGER, "WIDGET_TYPE_WINDOW_MANAGER", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_NORMAL_WINDOW",
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
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SYSTEM_BAR_BOTTOM",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_SYSTEM_BAR_BOTTOM, "WIDGET_TYPE_SYSTEM_BAR_BOTTOM", 1));
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
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_PROGRESS_BAR",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_PROGRESS_BAR, "WIDGET_TYPE_PROGRESS_BAR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_GROUP_BOX",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_GROUP_BOX, "WIDGET_TYPE_GROUP_BOX", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_CHECK_BUTTON",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_CHECK_BUTTON, "WIDGET_TYPE_CHECK_BUTTON", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_RADIO_BUTTON",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_RADIO_BUTTON, "WIDGET_TYPE_RADIO_BUTTON", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_DIALOG_TITLE",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_DIALOG_TITLE, "WIDGET_TYPE_DIALOG_TITLE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_DIALOG_CLIENT",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_DIALOG_CLIENT, "WIDGET_TYPE_DIALOG_CLIENT", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SLIDER",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_SLIDER, "WIDGET_TYPE_SLIDER", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_VIEW",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_VIEW, "WIDGET_TYPE_VIEW", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_COMBO_BOX",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_COMBO_BOX, "WIDGET_TYPE_COMBO_BOX", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_COMBO_BOX_ITEM",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_COMBO_BOX_ITEM, "WIDGET_TYPE_COMBO_BOX_ITEM", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SLIDE_VIEW",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_SLIDE_VIEW, "WIDGET_TYPE_SLIDE_VIEW", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SLIDE_INDICATOR",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_SLIDE_INDICATOR, "WIDGET_TYPE_SLIDE_INDICATOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SLIDE_INDICATOR_ARC",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_SLIDE_INDICATOR_ARC, "WIDGET_TYPE_SLIDE_INDICATOR_ARC", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_PAGES",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_PAGES, "WIDGET_TYPE_PAGES", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_TAB_BUTTON",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_TAB_BUTTON, "WIDGET_TYPE_TAB_BUTTON", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_TAB_CONTROL",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_TAB_CONTROL, "WIDGET_TYPE_TAB_CONTROL", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_TAB_BUTTON_GROUP",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_TAB_BUTTON_GROUP, "WIDGET_TYPE_TAB_BUTTON_GROUP", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_BUTTON_GROUP",
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
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_SCROLL_BAR_DESKTOP, "WIDGET_TYPE_SCROLL_BAR_DESKTOP", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SCROLL_BAR_MOBILE",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_SCROLL_BAR_MOBILE, "WIDGET_TYPE_SCROLL_BAR_MOBILE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_SCROLL_VIEW",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_SCROLL_VIEW, "WIDGET_TYPE_SCROLL_VIEW", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_LIST_VIEW",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_LIST_VIEW, "WIDGET_TYPE_LIST_VIEW", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_LIST_VIEW_H",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_LIST_VIEW_H, "WIDGET_TYPE_LIST_VIEW_H", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_LIST_ITEM",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_LIST_ITEM, "WIDGET_TYPE_LIST_ITEM", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_COLOR_PICKER",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_COLOR_PICKER, "WIDGET_TYPE_COLOR_PICKER", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_COLOR_COMPONENT",
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
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_TYPE_CALIBRATION_WIN",
                      JS_NewCFunction(ctx, get_WIDGET_TYPE_CALIBRATION_WIN, "WIDGET_TYPE_CALIBRATION_WIN", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_WINDOW_STAGE_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_STAGE_NONE);
}

jsvalue_t get_WINDOW_STAGE_CREATED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_STAGE_CREATED);
}

jsvalue_t get_WINDOW_STAGE_OPENED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_STAGE_OPENED);
}

jsvalue_t get_WINDOW_STAGE_CLOSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_STAGE_CLOSED);
}

ret_t window_stage_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "WINDOW_STAGE_NONE",
                      JS_NewCFunction(ctx, get_WINDOW_STAGE_NONE, "WINDOW_STAGE_NONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WINDOW_STAGE_CREATED",
                      JS_NewCFunction(ctx, get_WINDOW_STAGE_CREATED, "WINDOW_STAGE_CREATED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WINDOW_STAGE_OPENED",
                      JS_NewCFunction(ctx, get_WINDOW_STAGE_OPENED, "WINDOW_STAGE_OPENED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WINDOW_STAGE_CLOSED",
                      JS_NewCFunction(ctx, get_WINDOW_STAGE_CLOSED, "WINDOW_STAGE_CLOSED", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_WINDOW_CLOSABLE_YES(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_CLOSABLE_YES);
}

jsvalue_t get_WINDOW_CLOSABLE_NO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_CLOSABLE_NO);
}

jsvalue_t get_WINDOW_CLOSABLE_CONFIRM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, WINDOW_CLOSABLE_CONFIRM);
}

ret_t window_closable_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "WINDOW_CLOSABLE_YES",
                      JS_NewCFunction(ctx, get_WINDOW_CLOSABLE_YES, "WINDOW_CLOSABLE_YES", 1));
  JS_SetPropertyStr(ctx, global_obj, "WINDOW_CLOSABLE_NO",
                      JS_NewCFunction(ctx, get_WINDOW_CLOSABLE_NO, "WINDOW_CLOSABLE_NO", 1));
  JS_SetPropertyStr(ctx, global_obj, "WINDOW_CLOSABLE_CONFIRM",
                      JS_NewCFunction(ctx, get_WINDOW_CLOSABLE_CONFIRM, "WINDOW_CLOSABLE_CONFIRM", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_WIDGET_STATE_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_NONE);
}

jsvalue_t get_WIDGET_STATE_NORMAL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_NORMAL);
}

jsvalue_t get_WIDGET_STATE_PRESSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_PRESSED);
}

jsvalue_t get_WIDGET_STATE_OVER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_OVER);
}

jsvalue_t get_WIDGET_STATE_DISABLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_DISABLE);
}

jsvalue_t get_WIDGET_STATE_FOCUSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_FOCUSED);
}

jsvalue_t get_WIDGET_STATE_CHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_CHECKED);
}

jsvalue_t get_WIDGET_STATE_UNCHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_UNCHECKED);
}

jsvalue_t get_WIDGET_STATE_EMPTY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_EMPTY);
}

jsvalue_t get_WIDGET_STATE_EMPTY_FOCUS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_EMPTY_FOCUS);
}

jsvalue_t get_WIDGET_STATE_ERROR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_ERROR);
}

jsvalue_t get_WIDGET_STATE_SELECTED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_SELECTED);
}

jsvalue_t get_WIDGET_STATE_NORMAL_OF_CHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_NORMAL_OF_CHECKED);
}

jsvalue_t get_WIDGET_STATE_PRESSED_OF_CHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_PRESSED_OF_CHECKED);
}

jsvalue_t get_WIDGET_STATE_OVER_OF_CHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_OVER_OF_CHECKED);
}

jsvalue_t get_WIDGET_STATE_FOCUSED_OF_CHECKED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_FOCUSED_OF_CHECKED);
}

jsvalue_t get_WIDGET_STATE_NORMAL_OF_ACTIVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_NORMAL_OF_ACTIVE);
}

jsvalue_t get_WIDGET_STATE_PRESSED_OF_ACTIVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_PRESSED_OF_ACTIVE);
}

jsvalue_t get_WIDGET_STATE_OVER_OF_ACTIVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_OVER_OF_ACTIVE);
}

jsvalue_t get_WIDGET_STATE_FOCUSED_OF_ACTIVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, WIDGET_STATE_FOCUSED_OF_ACTIVE);
}

ret_t widget_state_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_EMPTY_FOCUS",
                      JS_NewCFunction(ctx, get_WIDGET_STATE_EMPTY_FOCUS, "WIDGET_STATE_EMPTY_FOCUS", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_ERROR",
                      JS_NewCFunction(ctx, get_WIDGET_STATE_ERROR, "WIDGET_STATE_ERROR", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_SELECTED",
                      JS_NewCFunction(ctx, get_WIDGET_STATE_SELECTED, "WIDGET_STATE_SELECTED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_NORMAL_OF_CHECKED",
                      JS_NewCFunction(ctx, get_WIDGET_STATE_NORMAL_OF_CHECKED, "WIDGET_STATE_NORMAL_OF_CHECKED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_PRESSED_OF_CHECKED",
                      JS_NewCFunction(ctx, get_WIDGET_STATE_PRESSED_OF_CHECKED, "WIDGET_STATE_PRESSED_OF_CHECKED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_OVER_OF_CHECKED",
                      JS_NewCFunction(ctx, get_WIDGET_STATE_OVER_OF_CHECKED, "WIDGET_STATE_OVER_OF_CHECKED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_FOCUSED_OF_CHECKED",
                      JS_NewCFunction(ctx, get_WIDGET_STATE_FOCUSED_OF_CHECKED, "WIDGET_STATE_FOCUSED_OF_CHECKED", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_NORMAL_OF_ACTIVE",
                      JS_NewCFunction(ctx, get_WIDGET_STATE_NORMAL_OF_ACTIVE, "WIDGET_STATE_NORMAL_OF_ACTIVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_PRESSED_OF_ACTIVE",
                      JS_NewCFunction(ctx, get_WIDGET_STATE_PRESSED_OF_ACTIVE, "WIDGET_STATE_PRESSED_OF_ACTIVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_OVER_OF_ACTIVE",
                      JS_NewCFunction(ctx, get_WIDGET_STATE_OVER_OF_ACTIVE, "WIDGET_STATE_OVER_OF_ACTIVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "WIDGET_STATE_FOCUSED_OF_ACTIVE",
                      JS_NewCFunction(ctx, get_WIDGET_STATE_FOCUSED_OF_ACTIVE, "WIDGET_STATE_FOCUSED_OF_ACTIVE", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_widget_count_children(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)widget_count_children(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_child(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t index = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (widget_t*)widget_get_child(widget, index);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_index_of(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)widget_index_of(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_move(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_move(widget, x, y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_resize(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_resize(widget, w, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_move_resize(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)widget_move_resize(widget, x, y, w, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_animate_value_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_animate_value_to(widget, value, duration);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_add_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_add_value(widget, delta);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_use_style(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* style = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_use_style(widget, style);
  jsvalue_free_str(ctx, style);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_text_utf8(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_text_utf8(widget, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_tr_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_tr_text(widget, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)widget_get_value(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  wchar_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (wchar_t*)widget_get_text(widget);

  jret = jsvalue_create_string_from_wstring(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_name(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_theme(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_theme(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_pointer_cursor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* cursor = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_pointer_cursor(widget, cursor);
  jsvalue_free_str(ctx, cursor);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_animation(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* animation = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_animation(widget, animation);
  jsvalue_free_str(ctx, animation);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_create_animator(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* animation = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_create_animator(widget, animation);
  jsvalue_free_str(ctx, animation);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_start_animator(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_start_animator(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_animator_time_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t time_scale = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)widget_set_animator_time_scale(widget, name, time_scale);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_pause_animator(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_pause_animator(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_stop_animator(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_stop_animator(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_destroy_animator(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_destroy_animator(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_enable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t enable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_enable(widget, enable);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_feedback(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t feedback = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_feedback(widget, feedback);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_floating(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t floating = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_floating(widget, floating);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_focused(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focused = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_focused(widget, focused);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_state(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* state = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_state(widget, state);
  jsvalue_free_str(ctx, state);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_opacity(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint8_t opacity = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_set_opacity(widget, opacity);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_destroy_children(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)widget_destroy_children(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_add_child(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (ret_t)widget_add_child(widget, child);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_remove_child(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (ret_t)widget_remove_child(widget, child);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_insert_child(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  widget_t* child = (widget_t*)jsvalue_get_pointer(ctx, argv[2], "widget_t*");
  ret = (ret_t)widget_insert_child(widget, index, child);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_restack(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_restack(widget, index);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_child(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (widget_t*)widget_child(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_lookup(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (widget_t*)widget_lookup(widget, name, recursive);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_lookup_by_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* type = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (widget_t*)widget_lookup_by_type(widget, type, recursive);
  jsvalue_free_str(ctx, type);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_set_visible(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  bool_t recursive = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (ret_t)widget_set_visible(widget, visible, recursive);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_visible_only(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_visible_only(widget, visible);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_sensitive(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t sensitive = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)widget_set_sensitive(widget, sensitive);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_off(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t id = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)widget_off(widget, id);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_invalidate_force(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  rect_t* r = (rect_t*)jsvalue_get_pointer(ctx, argv[1], "rect_t*");
  ret = (ret_t)widget_invalidate_force(widget, r);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_prop_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* v = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)widget_set_prop_str(widget, name, v);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_prop_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  const char* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* defval = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (const char*)widget_get_prop_str(widget, name, defval);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, defval);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_prop_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t v = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_set_prop_int(widget, name, v);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_prop_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (int32_t)widget_get_prop_int(widget, name, defval);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_prop_bool(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t v = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (ret_t)widget_set_prop_bool(widget, name, v);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_prop_bool(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t defval = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (bool_t)widget_get_prop_bool(widget, name, defval);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_window_opened(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_window_opened(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_window(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_designing_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_designing_window(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_is_window_manager(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)widget_is_window_manager(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_get_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)widget_get_window(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_get_window_manager(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)widget_get_window_manager(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_get_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  char* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (char*)widget_get_type(widget);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_clone(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (widget_t*)widget_clone(widget, parent);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_equal(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  widget_t* other = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (bool_t)widget_equal(widget, other);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)widget_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_widget_destroy(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)widget_destroy(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_unref(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)widget_unref(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_layout(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)widget_layout(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_self_layout(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* params = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_self_layout(widget, params);
  jsvalue_free_str(ctx, params);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_children_layout(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* params = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)widget_set_children_layout(widget, params);
  jsvalue_free_str(ctx, params);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_self_layout_params(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  const char* w = (const char*)jsvalue_get_utf8_string(ctx, argv[3]);
  const char* h = (const char*)jsvalue_get_utf8_string(ctx, argv[4]);
  ret = (ret_t)widget_set_self_layout_params(widget, x, y, w, h);
  jsvalue_free_str(ctx, x);
  jsvalue_free_str(ctx, y);
  jsvalue_free_str(ctx, w);
  jsvalue_free_str(ctx, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_style_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* state_and_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_set_style_int(widget, state_and_name, value);
  jsvalue_free_str(ctx, state_and_name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_style_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* state_and_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* value = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)widget_set_style_str(widget, state_and_name, value);
  jsvalue_free_str(ctx, state_and_name);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_set_style_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* state_and_name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)widget_set_style_color(widget, state_and_name, value);
  jsvalue_free_str(ctx, state_and_name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->x);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->y);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_tr_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->tr_text);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_style(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->style);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_animation(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_string(ctx, obj->animation);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_enable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->enable);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_feedback(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->feedback);
  return jret;
}

jsvalue_t wrap_widget_t_set_prop_visible(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->visible = visible;
  return jsvalue_create_int(ctx, RET_OK);
};

jsvalue_t wrap_widget_t_get_prop_visible(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->visible);
  return jret;
}

jsvalue_t wrap_widget_t_set_prop_sensitive(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t sensitive = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->sensitive = sensitive;
  return jsvalue_create_int(ctx, RET_OK);
};

jsvalue_t wrap_widget_t_get_prop_sensitive(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->sensitive);
  return jret;
}

jsvalue_t wrap_widget_t_set_prop_focusable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focusable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->focusable = focusable;
  return jsvalue_create_int(ctx, RET_OK);
};

jsvalue_t wrap_widget_t_get_prop_focusable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->focusable);
  return jret;
}

jsvalue_t wrap_widget_t_set_prop_with_focus_state(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t with_focus_state = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  obj->with_focus_state = with_focus_state;
  return jsvalue_create_int(ctx, RET_OK);
};

jsvalue_t wrap_widget_t_get_prop_with_focus_state(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->with_focus_state);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_floating(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_bool(ctx, obj->floating);
  return jret;
}

jsvalue_t wrap_widget_t_get_prop_parent(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  widget_t* obj = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");

  jret = jsvalue_create_pointer(ctx, obj->parent, "widget_t*");
  return jret;
}

ret_t widget_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "widget_animate_value_to",
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
  JS_SetPropertyStr(ctx, global_obj, "widget_set_theme",
                      JS_NewCFunction(ctx, wrap_widget_set_theme, "widget_set_theme", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_pointer_cursor",
                      JS_NewCFunction(ctx, wrap_widget_set_pointer_cursor, "widget_set_pointer_cursor", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_animation",
                      JS_NewCFunction(ctx, wrap_widget_set_animation, "widget_set_animation", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_create_animator",
                      JS_NewCFunction(ctx, wrap_widget_create_animator, "widget_create_animator", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_start_animator",
                      JS_NewCFunction(ctx, wrap_widget_start_animator, "widget_start_animator", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_animator_time_scale",
                      JS_NewCFunction(ctx, wrap_widget_set_animator_time_scale, "widget_set_animator_time_scale", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_pause_animator",
                      JS_NewCFunction(ctx, wrap_widget_pause_animator, "widget_pause_animator", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_stop_animator",
                      JS_NewCFunction(ctx, wrap_widget_stop_animator, "widget_stop_animator", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_destroy_animator",
                      JS_NewCFunction(ctx, wrap_widget_destroy_animator, "widget_destroy_animator", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_enable",
                      JS_NewCFunction(ctx, wrap_widget_set_enable, "widget_set_enable", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_feedback",
                      JS_NewCFunction(ctx, wrap_widget_set_feedback, "widget_set_feedback", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_floating",
                      JS_NewCFunction(ctx, wrap_widget_set_floating, "widget_set_floating", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_focused",
                      JS_NewCFunction(ctx, wrap_widget_set_focused, "widget_set_focused", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_state",
                      JS_NewCFunction(ctx, wrap_widget_set_state, "widget_set_state", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_opacity",
                      JS_NewCFunction(ctx, wrap_widget_set_opacity, "widget_set_opacity", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_destroy_children",
                      JS_NewCFunction(ctx, wrap_widget_destroy_children, "widget_destroy_children", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_add_child",
                      JS_NewCFunction(ctx, wrap_widget_add_child, "widget_add_child", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_remove_child",
                      JS_NewCFunction(ctx, wrap_widget_remove_child, "widget_remove_child", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_insert_child",
                      JS_NewCFunction(ctx, wrap_widget_insert_child, "widget_insert_child", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_restack",
                      JS_NewCFunction(ctx, wrap_widget_restack, "widget_restack", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_child",
                      JS_NewCFunction(ctx, wrap_widget_child, "widget_child", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_lookup",
                      JS_NewCFunction(ctx, wrap_widget_lookup, "widget_lookup", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_lookup_by_type",
                      JS_NewCFunction(ctx, wrap_widget_lookup_by_type, "widget_lookup_by_type", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_visible",
                      JS_NewCFunction(ctx, wrap_widget_set_visible, "widget_set_visible", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_visible_only",
                      JS_NewCFunction(ctx, wrap_widget_set_visible_only, "widget_set_visible_only", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_sensitive",
                      JS_NewCFunction(ctx, wrap_widget_set_sensitive, "widget_set_sensitive", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_on",
                      JS_NewCFunction(ctx, wrap_widget_on, "widget_on", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_off",
                      JS_NewCFunction(ctx, wrap_widget_off, "widget_off", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_invalidate_force",
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
  JS_SetPropertyStr(ctx, global_obj, "widget_is_window_opened",
                      JS_NewCFunction(ctx, wrap_widget_is_window_opened, "widget_is_window_opened", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_is_window",
                      JS_NewCFunction(ctx, wrap_widget_is_window, "widget_is_window", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_is_designing_window",
                      JS_NewCFunction(ctx, wrap_widget_is_designing_window, "widget_is_designing_window", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_is_window_manager",
                      JS_NewCFunction(ctx, wrap_widget_is_window_manager, "widget_is_window_manager", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_foreach",
                      JS_NewCFunction(ctx, wrap_widget_foreach, "widget_foreach", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_get_window",
                      JS_NewCFunction(ctx, wrap_widget_get_window, "widget_get_window", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_get_window_manager",
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
  JS_SetPropertyStr(ctx, global_obj, "widget_unref",
                      JS_NewCFunction(ctx, wrap_widget_unref, "widget_unref", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_layout",
                      JS_NewCFunction(ctx, wrap_widget_layout, "widget_layout", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_self_layout",
                      JS_NewCFunction(ctx, wrap_widget_set_self_layout, "widget_set_self_layout", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_children_layout",
                      JS_NewCFunction(ctx, wrap_widget_set_children_layout, "widget_set_children_layout", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_set_self_layout_params",
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
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_tr_text",
                      JS_NewCFunction(ctx, wrap_widget_t_get_prop_tr_text, "widget_t_get_prop_tr_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_style",
                      JS_NewCFunction(ctx, wrap_widget_t_get_prop_style, "widget_t_get_prop_style", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_animation",
                      JS_NewCFunction(ctx, wrap_widget_t_get_prop_animation, "widget_t_get_prop_animation", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_enable",
                      JS_NewCFunction(ctx, wrap_widget_t_get_prop_enable, "widget_t_get_prop_enable", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_feedback",
                      JS_NewCFunction(ctx, wrap_widget_t_get_prop_feedback, "widget_t_get_prop_feedback", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_set_prop_visible",
                      JS_NewCFunction(ctx, wrap_widget_t_set_prop_visible, "widget_t_set_prop_visible", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_visible",
                      JS_NewCFunction(ctx, wrap_widget_t_get_prop_visible, "widget_t_get_prop_visible", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_set_prop_sensitive",
                      JS_NewCFunction(ctx, wrap_widget_t_set_prop_sensitive, "widget_t_set_prop_sensitive", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_sensitive",
                      JS_NewCFunction(ctx, wrap_widget_t_get_prop_sensitive, "widget_t_get_prop_sensitive", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_set_prop_focusable",
                      JS_NewCFunction(ctx, wrap_widget_t_set_prop_focusable, "widget_t_set_prop_focusable", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_focusable",
                      JS_NewCFunction(ctx, wrap_widget_t_get_prop_focusable, "widget_t_get_prop_focusable", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_set_prop_with_focus_state",
                      JS_NewCFunction(ctx, wrap_widget_t_set_prop_with_focus_state, "widget_t_set_prop_with_focus_state", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_with_focus_state",
                      JS_NewCFunction(ctx, wrap_widget_t_get_prop_with_focus_state, "widget_t_get_prop_with_focus_state", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_floating",
                      JS_NewCFunction(ctx, wrap_widget_t_get_prop_floating, "widget_t_get_prop_floating", 1));
  JS_SetPropertyStr(ctx, global_obj, "widget_t_get_prop_parent",
                      JS_NewCFunction(ctx, wrap_widget_t_get_prop_parent, "widget_t_get_prop_parent", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_RET_OK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_OK);
}

jsvalue_t get_RET_OOM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_OOM);
}

jsvalue_t get_RET_FAIL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_FAIL);
}

jsvalue_t get_RET_NOT_IMPL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_NOT_IMPL);
}

jsvalue_t get_RET_QUIT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_QUIT);
}

jsvalue_t get_RET_FOUND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_FOUND);
}

jsvalue_t get_RET_BUSY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_BUSY);
}

jsvalue_t get_RET_REMOVE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_REMOVE);
}

jsvalue_t get_RET_REPEAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_REPEAT);
}

jsvalue_t get_RET_NOT_FOUND(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_NOT_FOUND);
}

jsvalue_t get_RET_DONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_DONE);
}

jsvalue_t get_RET_STOP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_STOP);
}

jsvalue_t get_RET_SKIP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_SKIP);
}

jsvalue_t get_RET_CONTINUE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_CONTINUE);
}

jsvalue_t get_RET_OBJECT_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_OBJECT_CHANGED);
}

jsvalue_t get_RET_ITEMS_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_ITEMS_CHANGED);
}

jsvalue_t get_RET_BAD_PARAMS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_BAD_PARAMS);
}

jsvalue_t get_RET_TIMEOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_TIMEOUT);
}

jsvalue_t get_RET_CRC(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_CRC);
}

jsvalue_t get_RET_IO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_IO);
}

jsvalue_t get_RET_EOS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, RET_EOS);
}

ret_t ret_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "RET_OK",
                      JS_NewCFunction(ctx, get_RET_OK, "RET_OK", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_OOM",
                      JS_NewCFunction(ctx, get_RET_OOM, "RET_OOM", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_FAIL",
                      JS_NewCFunction(ctx, get_RET_FAIL, "RET_FAIL", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_NOT_IMPL",
                      JS_NewCFunction(ctx, get_RET_NOT_IMPL, "RET_NOT_IMPL", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_QUIT",
                      JS_NewCFunction(ctx, get_RET_QUIT, "RET_QUIT", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_FOUND",
                      JS_NewCFunction(ctx, get_RET_FOUND, "RET_FOUND", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_BUSY",
                      JS_NewCFunction(ctx, get_RET_BUSY, "RET_BUSY", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_REMOVE",
                      JS_NewCFunction(ctx, get_RET_REMOVE, "RET_REMOVE", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_REPEAT",
                      JS_NewCFunction(ctx, get_RET_REPEAT, "RET_REPEAT", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_NOT_FOUND",
                      JS_NewCFunction(ctx, get_RET_NOT_FOUND, "RET_NOT_FOUND", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_DONE",
                      JS_NewCFunction(ctx, get_RET_DONE, "RET_DONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_STOP",
                      JS_NewCFunction(ctx, get_RET_STOP, "RET_STOP", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_SKIP",
                      JS_NewCFunction(ctx, get_RET_SKIP, "RET_SKIP", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_CONTINUE",
                      JS_NewCFunction(ctx, get_RET_CONTINUE, "RET_CONTINUE", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_OBJECT_CHANGED",
                      JS_NewCFunction(ctx, get_RET_OBJECT_CHANGED, "RET_OBJECT_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_ITEMS_CHANGED",
                      JS_NewCFunction(ctx, get_RET_ITEMS_CHANGED, "RET_ITEMS_CHANGED", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_BAD_PARAMS",
                      JS_NewCFunction(ctx, get_RET_BAD_PARAMS, "RET_BAD_PARAMS", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_TIMEOUT",
                      JS_NewCFunction(ctx, get_RET_TIMEOUT, "RET_TIMEOUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_CRC",
                      JS_NewCFunction(ctx, get_RET_CRC, "RET_CRC", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_IO",
                      JS_NewCFunction(ctx, get_RET_IO, "RET_IO", 1));
  JS_SetPropertyStr(ctx, global_obj, "RET_EOS",
                      JS_NewCFunction(ctx, get_RET_EOS, "RET_EOS", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

ret_t timer_manager_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_time_now_s(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  uint64_t ret = 0;
  ret = (uint64_t)time_now_s();

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_now_ms(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  uint64_t ret = 0;
  ret = (uint64_t)time_now_ms();

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t time_now_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "time_now_s",
                      JS_NewCFunction(ctx, wrap_time_now_s, "time_now_s", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_now_ms",
                      JS_NewCFunction(ctx, wrap_time_now_ms, "time_now_ms", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_rect_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  rect_t* ret = NULL;
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[0]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (rect_t*)rect_create(x, y, w, h);

  jret = jsvalue_create_object(ctx, ret, "rect_t*", (tk_destroy_t)rect_destroy);
  }
  return jret;
}

jsvalue_t wrap_rect_set(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  rect_t* ret = NULL;
  rect_t* rect = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (rect_t*)rect_set(rect, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "rect_t*");
  }
  return jret;
}

jsvalue_t wrap_rect_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  rect_t* ret = NULL;
  rect_t* rect = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");
  ret = (rect_t*)rect_cast(rect);

  jret = jsvalue_create_pointer(ctx, ret, "rect_t*");
  }
  return jret;
}

jsvalue_t wrap_rect_t_get_prop_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->x);
  return jret;
}

jsvalue_t wrap_rect_t_get_prop_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->y);
  return jret;
}

jsvalue_t wrap_rect_t_get_prop_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->w);
  return jret;
}

jsvalue_t wrap_rect_t_get_prop_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  rect_t* obj = (rect_t*)jsvalue_get_pointer(ctx, argv[0], "rect_t*");

  jret = jsvalue_create_int(ctx, obj->h);
  return jret;
}

ret_t rect_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

ret_t pointf_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

ret_t point_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

ret_t path_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_named_value_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  named_value_t* ret = NULL;
  ret = (named_value_t*)named_value_create();

  jret = jsvalue_create_object(ctx, ret, "named_value_t*", (tk_destroy_t)named_value_destroy);
  }
  return jret;
}

jsvalue_t wrap_named_value_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  named_value_t* ret = NULL;
  named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
  ret = (named_value_t*)named_value_cast(nv);

  jret = jsvalue_create_pointer(ctx, ret, "named_value_t*");
  }
  return jret;
}

jsvalue_t wrap_named_value_set_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)named_value_set_name(nv, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_named_value_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
  const value_t* value = (const value_t*)jsvalue_get_pointer(ctx, argv[1], "const value_t*");
  ret = (ret_t)named_value_set_value(nv, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_named_value_get_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  value_t* ret = NULL;
  named_value_t* nv = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");
  ret = (value_t*)named_value_get_value(nv);

  jret = jsvalue_create_pointer(ctx, ret, "value_t*");
  }
  return jret;
}

jsvalue_t wrap_named_value_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  named_value_t* obj = (named_value_t*)jsvalue_get_pointer(ctx, argv[0], "named_value_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

ret_t named_value_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "named_value_t_get_prop_name",
                      JS_NewCFunction(ctx, wrap_named_value_t_get_prop_name, "named_value_t_get_prop_name", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_MIME_TYPE_APPLICATION_ENVOY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_ENVOY);
}

jsvalue_t get_MIME_TYPE_APPLICATION_FRACTALS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_FRACTALS);
}

jsvalue_t get_MIME_TYPE_APPLICATION_FUTURESPLASH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_FUTURESPLASH);
}

jsvalue_t get_MIME_TYPE_APPLICATION_HTA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_HTA);
}

jsvalue_t get_MIME_TYPE_APPLICATION_JSON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_JSON);
}

jsvalue_t get_MIME_TYPE_APPLICATION_UBJSON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_UBJSON);
}

jsvalue_t get_MIME_TYPE_APPLICATION_MAC_BINHEX40(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_MAC_BINHEX40);
}

jsvalue_t get_MIME_TYPE_APPLICATION_MSWORD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_MSWORD);
}

jsvalue_t get_MIME_TYPE_APPLICATION_OCTET_STREAM(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_OCTET_STREAM);
}

jsvalue_t get_MIME_TYPE_APPLICATION_ODA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_ODA);
}

jsvalue_t get_MIME_TYPE_APPLICATION_OLESCRIPT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_OLESCRIPT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_PDF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PDF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_PICS_RULES(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PICS_RULES);
}

jsvalue_t get_MIME_TYPE_APPLICATION_PKCS10(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PKCS10);
}

jsvalue_t get_MIME_TYPE_APPLICATION_PKIX_CRL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_PKIX_CRL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_POSTSCRIPT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_POSTSCRIPT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_RTF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_RTF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_EXCEL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_EXCEL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_OUTLOOK);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PKISECCAT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_PKISTL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PKISTL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_POWERPOINT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_PROJECT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_PROJECT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_VND_MS_WORKS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_VND_MS_WORKS);
}

jsvalue_t get_MIME_TYPE_APPLICATION_WINHLP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_WINHLP);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_BCPIO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_BCPIO);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_CDF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_CDF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_COMPRESS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_COMPRESS);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_COMPRESSED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_COMPRESSED);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_CPIO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_CPIO);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_CSH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_CSH);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_DIRECTOR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_DIRECTOR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_DVI(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_DVI);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_GTAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_GTAR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_GZIP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_GZIP);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_HDF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_HDF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_IPHONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_IPHONE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_JAVASCRIPT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_JAVASCRIPT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_LATEX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_LATEX);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSACCESS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSACCESS);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSCARDFILE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSCARDFILE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSCLIP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSCLIP);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSDOWNLOAD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSDOWNLOAD);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSMEDIAVIEW);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSMETAFILE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSMETAFILE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSMONEY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSMONEY);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSPUBLISHER(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSPUBLISHER);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSSCHEDULE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSSCHEDULE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSTERMINAL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSTERMINAL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_MSWRITE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_MSWRITE);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_NETCDF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_NETCDF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_PERFMON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_PERFMON);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_PKCS12(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_PKCS12);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SH);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SHAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SHAR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_STUFFIT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_STUFFIT);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SV4CPIO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SV4CPIO);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_SV4CRC(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_SV4CRC);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TAR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TCL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TCL);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TEX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TEX);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TEXINFO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TEXINFO);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_TROFF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_TROFF);
}

jsvalue_t get_MIME_TYPE_APPLICATION_X_USTAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_X_USTAR);
}

jsvalue_t get_MIME_TYPE_APPLICATION_ZIP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_APPLICATION_ZIP);
}

jsvalue_t get_MIME_TYPE_AUDIO_BASIC(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_BASIC);
}

jsvalue_t get_MIME_TYPE_AUDIO_MID(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_MID);
}

jsvalue_t get_MIME_TYPE_AUDIO_MPEG(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_MPEG);
}

jsvalue_t get_MIME_TYPE_AUDIO_X_AIFF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_X_AIFF);
}

jsvalue_t get_MIME_TYPE_AUDIO_X_MPEGURL(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_X_MPEGURL);
}

jsvalue_t get_MIME_TYPE_AUDIO_X_WAV(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_AUDIO_X_WAV);
}

jsvalue_t get_MIME_TYPE_IMAGE_BMP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_BMP);
}

jsvalue_t get_MIME_TYPE_IMAGE_CIS_COD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_CIS_COD);
}

jsvalue_t get_MIME_TYPE_IMAGE_GIF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_GIF);
}

jsvalue_t get_MIME_TYPE_IMAGE_IEF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_IEF);
}

jsvalue_t get_MIME_TYPE_IMAGE_JPEG(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_JPEG);
}

jsvalue_t get_MIME_TYPE_IMAGE_PIPEG(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_PIPEG);
}

jsvalue_t get_MIME_TYPE_IMAGE_SVG_XML(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_SVG_XML);
}

jsvalue_t get_MIME_TYPE_IMAGE_TIFF(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_TIFF);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_CMX(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_CMX);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_ICON(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_ICON);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_RGB(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_RGB);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_XBITMAP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_XBITMAP);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_XPIXMAP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_XPIXMAP);
}

jsvalue_t get_MIME_TYPE_IMAGE_X_XWINDOWDUMP(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_IMAGE_X_XWINDOWDUMP);
}

jsvalue_t get_MIME_TYPE_MESSAGE_RFC822(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_MESSAGE_RFC822);
}

jsvalue_t get_MIME_TYPE_TEXT_CSS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_CSS);
}

jsvalue_t get_MIME_TYPE_TEXT_H323(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_H323);
}

jsvalue_t get_MIME_TYPE_TEXT_HTML(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_HTML);
}

jsvalue_t get_MIME_TYPE_TEXT_IULS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_IULS);
}

jsvalue_t get_MIME_TYPE_TEXT_PLAIN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_PLAIN);
}

jsvalue_t get_MIME_TYPE_TEXT_RICHTEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_RICHTEXT);
}

jsvalue_t get_MIME_TYPE_TEXT_SCRIPTLET(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_SCRIPTLET);
}

jsvalue_t get_MIME_TYPE_TEXT_WEBVIEWHTML(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_WEBVIEWHTML);
}

jsvalue_t get_MIME_TYPE_TEXT_X_COMPONENT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_X_COMPONENT);
}

jsvalue_t get_MIME_TYPE_TEXT_X_SETEXT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_X_SETEXT);
}

jsvalue_t get_MIME_TYPE_TEXT_X_VCARD(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_TEXT_X_VCARD);
}

jsvalue_t get_MIME_TYPE_VIDEO_MPEG(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_VIDEO_MPEG);
}

jsvalue_t get_MIME_TYPE_VIDEO_QUICKTIME(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_VIDEO_QUICKTIME);
}

jsvalue_t get_MIME_TYPE_VIDEO_X_MSVIDEO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_string(ctx, MIME_TYPE_VIDEO_X_MSVIDEO);
}

ret_t MIME_TYPE_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_ENVOY",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_ENVOY, "MIME_TYPE_APPLICATION_ENVOY", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_FRACTALS",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_FRACTALS, "MIME_TYPE_APPLICATION_FRACTALS", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_FUTURESPLASH",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_FUTURESPLASH, "MIME_TYPE_APPLICATION_FUTURESPLASH", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_HTA",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_HTA, "MIME_TYPE_APPLICATION_HTA", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_JSON",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_JSON, "MIME_TYPE_APPLICATION_JSON", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_UBJSON",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_UBJSON, "MIME_TYPE_APPLICATION_UBJSON", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_MAC_BINHEX40",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_MAC_BINHEX40, "MIME_TYPE_APPLICATION_MAC_BINHEX40", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_MSWORD",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_MSWORD, "MIME_TYPE_APPLICATION_MSWORD", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_OCTET_STREAM",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_OCTET_STREAM, "MIME_TYPE_APPLICATION_OCTET_STREAM", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_ODA",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_ODA, "MIME_TYPE_APPLICATION_ODA", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_OLESCRIPT",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_OLESCRIPT, "MIME_TYPE_APPLICATION_OLESCRIPT", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_PDF",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_PDF, "MIME_TYPE_APPLICATION_PDF", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_PICS_RULES",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_PICS_RULES, "MIME_TYPE_APPLICATION_PICS_RULES", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_PKCS10",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_PKCS10, "MIME_TYPE_APPLICATION_PKCS10", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_PKIX_CRL",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_PKIX_CRL, "MIME_TYPE_APPLICATION_PKIX_CRL", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_POSTSCRIPT",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_POSTSCRIPT, "MIME_TYPE_APPLICATION_POSTSCRIPT", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_RTF",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_RTF, "MIME_TYPE_APPLICATION_RTF", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_VND_MS_EXCEL",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_VND_MS_EXCEL, "MIME_TYPE_APPLICATION_VND_MS_EXCEL", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_VND_MS_OUTLOOK",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK, "MIME_TYPE_APPLICATION_VND_MS_OUTLOOK", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE, "MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_VND_MS_PKISECCAT",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT, "MIME_TYPE_APPLICATION_VND_MS_PKISECCAT", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_VND_MS_PKISTL",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_VND_MS_PKISTL, "MIME_TYPE_APPLICATION_VND_MS_PKISTL", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_VND_MS_POWERPOINT",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT, "MIME_TYPE_APPLICATION_VND_MS_POWERPOINT", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_VND_MS_PROJECT",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_VND_MS_PROJECT, "MIME_TYPE_APPLICATION_VND_MS_PROJECT", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_VND_MS_WORKS",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_VND_MS_WORKS, "MIME_TYPE_APPLICATION_VND_MS_WORKS", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_WINHLP",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_WINHLP, "MIME_TYPE_APPLICATION_WINHLP", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_BCPIO",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_BCPIO, "MIME_TYPE_APPLICATION_X_BCPIO", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_CDF",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_CDF, "MIME_TYPE_APPLICATION_X_CDF", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_COMPRESS",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_COMPRESS, "MIME_TYPE_APPLICATION_X_COMPRESS", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_COMPRESSED",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_COMPRESSED, "MIME_TYPE_APPLICATION_X_COMPRESSED", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_CPIO",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_CPIO, "MIME_TYPE_APPLICATION_X_CPIO", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_CSH",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_CSH, "MIME_TYPE_APPLICATION_X_CSH", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_DIRECTOR",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_DIRECTOR, "MIME_TYPE_APPLICATION_X_DIRECTOR", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_DVI",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_DVI, "MIME_TYPE_APPLICATION_X_DVI", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_GTAR",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_GTAR, "MIME_TYPE_APPLICATION_X_GTAR", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_GZIP",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_GZIP, "MIME_TYPE_APPLICATION_X_GZIP", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_HDF",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_HDF, "MIME_TYPE_APPLICATION_X_HDF", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_IPHONE",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_IPHONE, "MIME_TYPE_APPLICATION_X_IPHONE", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_JAVASCRIPT",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_JAVASCRIPT, "MIME_TYPE_APPLICATION_X_JAVASCRIPT", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_LATEX",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_LATEX, "MIME_TYPE_APPLICATION_X_LATEX", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_MSACCESS",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_MSACCESS, "MIME_TYPE_APPLICATION_X_MSACCESS", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_MSCARDFILE",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_MSCARDFILE, "MIME_TYPE_APPLICATION_X_MSCARDFILE", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_MSCLIP",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_MSCLIP, "MIME_TYPE_APPLICATION_X_MSCLIP", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_MSDOWNLOAD",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_MSDOWNLOAD, "MIME_TYPE_APPLICATION_X_MSDOWNLOAD", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_MSMEDIAVIEW",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW, "MIME_TYPE_APPLICATION_X_MSMEDIAVIEW", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_MSMETAFILE",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_MSMETAFILE, "MIME_TYPE_APPLICATION_X_MSMETAFILE", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_MSMONEY",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_MSMONEY, "MIME_TYPE_APPLICATION_X_MSMONEY", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_MSPUBLISHER",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_MSPUBLISHER, "MIME_TYPE_APPLICATION_X_MSPUBLISHER", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_MSSCHEDULE",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_MSSCHEDULE, "MIME_TYPE_APPLICATION_X_MSSCHEDULE", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_MSTERMINAL",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_MSTERMINAL, "MIME_TYPE_APPLICATION_X_MSTERMINAL", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_MSWRITE",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_MSWRITE, "MIME_TYPE_APPLICATION_X_MSWRITE", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_NETCDF",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_NETCDF, "MIME_TYPE_APPLICATION_X_NETCDF", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_PERFMON",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_PERFMON, "MIME_TYPE_APPLICATION_X_PERFMON", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_PKCS12",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_PKCS12, "MIME_TYPE_APPLICATION_X_PKCS12", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_SH",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_SH, "MIME_TYPE_APPLICATION_X_SH", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_SHAR",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_SHAR, "MIME_TYPE_APPLICATION_X_SHAR", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH, "MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_STUFFIT",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_STUFFIT, "MIME_TYPE_APPLICATION_X_STUFFIT", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_SV4CPIO",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_SV4CPIO, "MIME_TYPE_APPLICATION_X_SV4CPIO", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_SV4CRC",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_SV4CRC, "MIME_TYPE_APPLICATION_X_SV4CRC", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_TAR",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_TAR, "MIME_TYPE_APPLICATION_X_TAR", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_TCL",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_TCL, "MIME_TYPE_APPLICATION_X_TCL", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_TEX",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_TEX, "MIME_TYPE_APPLICATION_X_TEX", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_TEXINFO",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_TEXINFO, "MIME_TYPE_APPLICATION_X_TEXINFO", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_TROFF",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_TROFF, "MIME_TYPE_APPLICATION_X_TROFF", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_X_USTAR",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_X_USTAR, "MIME_TYPE_APPLICATION_X_USTAR", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_APPLICATION_ZIP",
                      JS_NewCFunction(ctx, get_MIME_TYPE_APPLICATION_ZIP, "MIME_TYPE_APPLICATION_ZIP", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_AUDIO_BASIC",
                      JS_NewCFunction(ctx, get_MIME_TYPE_AUDIO_BASIC, "MIME_TYPE_AUDIO_BASIC", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_AUDIO_MID",
                      JS_NewCFunction(ctx, get_MIME_TYPE_AUDIO_MID, "MIME_TYPE_AUDIO_MID", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_AUDIO_MPEG",
                      JS_NewCFunction(ctx, get_MIME_TYPE_AUDIO_MPEG, "MIME_TYPE_AUDIO_MPEG", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_AUDIO_X_AIFF",
                      JS_NewCFunction(ctx, get_MIME_TYPE_AUDIO_X_AIFF, "MIME_TYPE_AUDIO_X_AIFF", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_AUDIO_X_MPEGURL",
                      JS_NewCFunction(ctx, get_MIME_TYPE_AUDIO_X_MPEGURL, "MIME_TYPE_AUDIO_X_MPEGURL", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_AUDIO_X_WAV",
                      JS_NewCFunction(ctx, get_MIME_TYPE_AUDIO_X_WAV, "MIME_TYPE_AUDIO_X_WAV", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_BMP",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_BMP, "MIME_TYPE_IMAGE_BMP", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_CIS_COD",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_CIS_COD, "MIME_TYPE_IMAGE_CIS_COD", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_GIF",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_GIF, "MIME_TYPE_IMAGE_GIF", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_IEF",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_IEF, "MIME_TYPE_IMAGE_IEF", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_JPEG",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_JPEG, "MIME_TYPE_IMAGE_JPEG", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_PIPEG",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_PIPEG, "MIME_TYPE_IMAGE_PIPEG", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_SVG_XML",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_SVG_XML, "MIME_TYPE_IMAGE_SVG_XML", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_TIFF",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_TIFF, "MIME_TYPE_IMAGE_TIFF", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_X_CMX",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_X_CMX, "MIME_TYPE_IMAGE_X_CMX", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_X_ICON",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_X_ICON, "MIME_TYPE_IMAGE_X_ICON", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_X_RGB",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_X_RGB, "MIME_TYPE_IMAGE_X_RGB", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_X_XBITMAP",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_X_XBITMAP, "MIME_TYPE_IMAGE_X_XBITMAP", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_X_XPIXMAP",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_X_XPIXMAP, "MIME_TYPE_IMAGE_X_XPIXMAP", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_IMAGE_X_XWINDOWDUMP",
                      JS_NewCFunction(ctx, get_MIME_TYPE_IMAGE_X_XWINDOWDUMP, "MIME_TYPE_IMAGE_X_XWINDOWDUMP", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_MESSAGE_RFC822",
                      JS_NewCFunction(ctx, get_MIME_TYPE_MESSAGE_RFC822, "MIME_TYPE_MESSAGE_RFC822", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_TEXT_CSS",
                      JS_NewCFunction(ctx, get_MIME_TYPE_TEXT_CSS, "MIME_TYPE_TEXT_CSS", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_TEXT_H323",
                      JS_NewCFunction(ctx, get_MIME_TYPE_TEXT_H323, "MIME_TYPE_TEXT_H323", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_TEXT_HTML",
                      JS_NewCFunction(ctx, get_MIME_TYPE_TEXT_HTML, "MIME_TYPE_TEXT_HTML", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_TEXT_IULS",
                      JS_NewCFunction(ctx, get_MIME_TYPE_TEXT_IULS, "MIME_TYPE_TEXT_IULS", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_TEXT_PLAIN",
                      JS_NewCFunction(ctx, get_MIME_TYPE_TEXT_PLAIN, "MIME_TYPE_TEXT_PLAIN", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_TEXT_RICHTEXT",
                      JS_NewCFunction(ctx, get_MIME_TYPE_TEXT_RICHTEXT, "MIME_TYPE_TEXT_RICHTEXT", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_TEXT_SCRIPTLET",
                      JS_NewCFunction(ctx, get_MIME_TYPE_TEXT_SCRIPTLET, "MIME_TYPE_TEXT_SCRIPTLET", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_TEXT_WEBVIEWHTML",
                      JS_NewCFunction(ctx, get_MIME_TYPE_TEXT_WEBVIEWHTML, "MIME_TYPE_TEXT_WEBVIEWHTML", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_TEXT_X_COMPONENT",
                      JS_NewCFunction(ctx, get_MIME_TYPE_TEXT_X_COMPONENT, "MIME_TYPE_TEXT_X_COMPONENT", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_TEXT_X_SETEXT",
                      JS_NewCFunction(ctx, get_MIME_TYPE_TEXT_X_SETEXT, "MIME_TYPE_TEXT_X_SETEXT", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_TEXT_X_VCARD",
                      JS_NewCFunction(ctx, get_MIME_TYPE_TEXT_X_VCARD, "MIME_TYPE_TEXT_X_VCARD", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_VIDEO_MPEG",
                      JS_NewCFunction(ctx, get_MIME_TYPE_VIDEO_MPEG, "MIME_TYPE_VIDEO_MPEG", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_VIDEO_QUICKTIME",
                      JS_NewCFunction(ctx, get_MIME_TYPE_VIDEO_QUICKTIME, "MIME_TYPE_VIDEO_QUICKTIME", 1));
  JS_SetPropertyStr(ctx, global_obj, "MIME_TYPE_VIDEO_X_MSVIDEO",
                      JS_NewCFunction(ctx, get_MIME_TYPE_VIDEO_X_MSVIDEO, "MIME_TYPE_VIDEO_X_MSVIDEO", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

ret_t idle_manager_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_AUTO(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_AUTO);
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_FILL_DOT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_FILL_DOT);
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_STROKE_DOT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_STROKE_DOT);
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_FILL_RECT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_FILL_RECT);
}

jsvalue_t get_INDICATOR_DEFAULT_PAINT_STROKE_RECT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, INDICATOR_DEFAULT_PAINT_STROKE_RECT);
}

ret_t indicator_default_paint_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "INDICATOR_DEFAULT_PAINT_AUTO",
                      JS_NewCFunction(ctx, get_INDICATOR_DEFAULT_PAINT_AUTO, "INDICATOR_DEFAULT_PAINT_AUTO", 1));
  JS_SetPropertyStr(ctx, global_obj, "INDICATOR_DEFAULT_PAINT_FILL_DOT",
                      JS_NewCFunction(ctx, get_INDICATOR_DEFAULT_PAINT_FILL_DOT, "INDICATOR_DEFAULT_PAINT_FILL_DOT", 1));
  JS_SetPropertyStr(ctx, global_obj, "INDICATOR_DEFAULT_PAINT_STROKE_DOT",
                      JS_NewCFunction(ctx, get_INDICATOR_DEFAULT_PAINT_STROKE_DOT, "INDICATOR_DEFAULT_PAINT_STROKE_DOT", 1));
  JS_SetPropertyStr(ctx, global_obj, "INDICATOR_DEFAULT_PAINT_FILL_RECT",
                      JS_NewCFunction(ctx, get_INDICATOR_DEFAULT_PAINT_FILL_RECT, "INDICATOR_DEFAULT_PAINT_FILL_RECT", 1));
  JS_SetPropertyStr(ctx, global_obj, "INDICATOR_DEFAULT_PAINT_STROKE_RECT",
                      JS_NewCFunction(ctx, get_INDICATOR_DEFAULT_PAINT_STROKE_RECT, "INDICATOR_DEFAULT_PAINT_STROKE_RECT", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

ret_t fs_file_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (event_t*)event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "event_t*");
  }
  return jret;
}

jsvalue_t wrap_event_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  event_t* ret = NULL;
  uint32_t type = (uint32_t)jsvalue_get_int_value(ctx, argv[0]);
  ret = (event_t*)event_create(type);

  jret = jsvalue_create_object(ctx, ret, "event_t*", (tk_destroy_t)event_destroy);
  }
  return jret;
}

jsvalue_t wrap_event_t_get_prop_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  jret = jsvalue_create_int(ctx, obj->type);
  return jret;
}

jsvalue_t wrap_event_t_get_prop_time(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  jret = jsvalue_create_int(ctx, obj->time);
  return jret;
}

jsvalue_t wrap_event_t_get_prop_target(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  event_t* obj = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");

  jret = jsvalue_create_pointer(ctx, obj->target, "void*");
  return jret;
}

ret_t event_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "event_cast",
                      JS_NewCFunction(ctx, wrap_event_cast, "event_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "event_create",
                      JS_NewCFunction(ctx, wrap_event_create, "event_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "event_t_get_prop_type",
                      JS_NewCFunction(ctx, wrap_event_t_get_prop_type, "event_t_get_prop_type", 1));
  JS_SetPropertyStr(ctx, global_obj, "event_t_get_prop_time",
                      JS_NewCFunction(ctx, wrap_event_t_get_prop_time, "event_t_get_prop_time", 1));
  JS_SetPropertyStr(ctx, global_obj, "event_t_get_prop_target",
                      JS_NewCFunction(ctx, wrap_event_t_get_prop_target, "event_t_get_prop_target", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_EVT_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_NONE);
}

jsvalue_t get_EVT_PROP_WILL_CHANGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_PROP_WILL_CHANGE);
}

jsvalue_t get_EVT_PROP_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_PROP_CHANGED);
}

jsvalue_t get_EVT_ITEMS_WILL_CHANGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ITEMS_WILL_CHANGE);
}

jsvalue_t get_EVT_ITEMS_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_ITEMS_CHANGED);
}

jsvalue_t get_EVT_PROPS_CHANGED(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_PROPS_CHANGED);
}

jsvalue_t get_EVT_PROGRESS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_PROGRESS);
}

jsvalue_t get_EVT_DESTROY(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EVT_DESTROY);
}

ret_t event_base_type_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "EVT_NONE",
                      JS_NewCFunction(ctx, get_EVT_NONE, "EVT_NONE", 1));
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
  JS_SetPropertyStr(ctx, global_obj, "EVT_PROGRESS",
                      JS_NewCFunction(ctx, get_EVT_PROGRESS, "EVT_PROGRESS", 1));
  JS_SetPropertyStr(ctx, global_obj, "EVT_DESTROY",
                      JS_NewCFunction(ctx, get_EVT_DESTROY, "EVT_DESTROY", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_emitter_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  emitter_t* ret = NULL;
  ret = (emitter_t*)emitter_create();

  jret = jsvalue_create_object(ctx, ret, "emitter_t*", (tk_destroy_t)emitter_destroy);
  }
  return jret;
}

jsvalue_t wrap_emitter_dispatch(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  event_t* e = (event_t*)jsvalue_get_pointer(ctx, argv[1], "event_t*");
  ret = (ret_t)emitter_dispatch(emitter, e);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_dispatch_simple_event(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  uint32_t type = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)emitter_dispatch_simple_event(emitter, type);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_off(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  uint32_t id = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)emitter_off(emitter, id);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_enable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  ret = (ret_t)emitter_enable(emitter);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_disable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  ret = (ret_t)emitter_disable(emitter);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint32_t ret = 0;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  ret = (uint32_t)emitter_size(emitter);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_emitter_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  emitter_t* ret = NULL;
  emitter_t* emitter = (emitter_t*)jsvalue_get_pointer(ctx, argv[0], "emitter_t*");
  ret = (emitter_t*)emitter_cast(emitter);

  jret = jsvalue_create_pointer(ctx, ret, "emitter_t*");
  }
  return jret;
}

ret_t emitter_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "emitter_create",
                      JS_NewCFunction(ctx, wrap_emitter_create, "emitter_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "emitter_dispatch",
                      JS_NewCFunction(ctx, wrap_emitter_dispatch, "emitter_dispatch", 1));
  JS_SetPropertyStr(ctx, global_obj, "emitter_dispatch_simple_event",
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

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_EASING_LINEAR(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_LINEAR);
}

jsvalue_t get_EASING_QUADRATIC_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_QUADRATIC_IN);
}

jsvalue_t get_EASING_QUADRATIC_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_QUADRATIC_OUT);
}

jsvalue_t get_EASING_QUADRATIC_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_QUADRATIC_INOUT);
}

jsvalue_t get_EASING_CUBIC_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_CUBIC_IN);
}

jsvalue_t get_EASING_CUBIC_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_CUBIC_OUT);
}

jsvalue_t get_EASING_SIN_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_SIN_IN);
}

jsvalue_t get_EASING_SIN_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_SIN_OUT);
}

jsvalue_t get_EASING_SIN_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_SIN_INOUT);
}

jsvalue_t get_EASING_POW_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_POW_IN);
}

jsvalue_t get_EASING_POW_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_POW_OUT);
}

jsvalue_t get_EASING_POW_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_POW_INOUT);
}

jsvalue_t get_EASING_CIRCULAR_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_CIRCULAR_IN);
}

jsvalue_t get_EASING_CIRCULAR_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_CIRCULAR_OUT);
}

jsvalue_t get_EASING_CIRCULAR_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_CIRCULAR_INOUT);
}

jsvalue_t get_EASING_ELASTIC_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_ELASTIC_IN);
}

jsvalue_t get_EASING_ELASTIC_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_ELASTIC_OUT);
}

jsvalue_t get_EASING_ELASTIC_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_ELASTIC_INOUT);
}

jsvalue_t get_EASING_BACK_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_BACK_IN);
}

jsvalue_t get_EASING_BACK_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_BACK_OUT);
}

jsvalue_t get_EASING_BACK_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_BACK_INOUT);
}

jsvalue_t get_EASING_BOUNCE_IN(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_BOUNCE_IN);
}

jsvalue_t get_EASING_BOUNCE_OUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_BOUNCE_OUT);
}

jsvalue_t get_EASING_BOUNCE_INOUT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, EASING_BOUNCE_INOUT);
}

ret_t easing_type_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "EASING_LINEAR",
                      JS_NewCFunction(ctx, get_EASING_LINEAR, "EASING_LINEAR", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_QUADRATIC_IN",
                      JS_NewCFunction(ctx, get_EASING_QUADRATIC_IN, "EASING_QUADRATIC_IN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_QUADRATIC_OUT",
                      JS_NewCFunction(ctx, get_EASING_QUADRATIC_OUT, "EASING_QUADRATIC_OUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_QUADRATIC_INOUT",
                      JS_NewCFunction(ctx, get_EASING_QUADRATIC_INOUT, "EASING_QUADRATIC_INOUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_CUBIC_IN",
                      JS_NewCFunction(ctx, get_EASING_CUBIC_IN, "EASING_CUBIC_IN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_CUBIC_OUT",
                      JS_NewCFunction(ctx, get_EASING_CUBIC_OUT, "EASING_CUBIC_OUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_SIN_IN",
                      JS_NewCFunction(ctx, get_EASING_SIN_IN, "EASING_SIN_IN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_SIN_OUT",
                      JS_NewCFunction(ctx, get_EASING_SIN_OUT, "EASING_SIN_OUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_SIN_INOUT",
                      JS_NewCFunction(ctx, get_EASING_SIN_INOUT, "EASING_SIN_INOUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_POW_IN",
                      JS_NewCFunction(ctx, get_EASING_POW_IN, "EASING_POW_IN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_POW_OUT",
                      JS_NewCFunction(ctx, get_EASING_POW_OUT, "EASING_POW_OUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_POW_INOUT",
                      JS_NewCFunction(ctx, get_EASING_POW_INOUT, "EASING_POW_INOUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_CIRCULAR_IN",
                      JS_NewCFunction(ctx, get_EASING_CIRCULAR_IN, "EASING_CIRCULAR_IN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_CIRCULAR_OUT",
                      JS_NewCFunction(ctx, get_EASING_CIRCULAR_OUT, "EASING_CIRCULAR_OUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_CIRCULAR_INOUT",
                      JS_NewCFunction(ctx, get_EASING_CIRCULAR_INOUT, "EASING_CIRCULAR_INOUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_ELASTIC_IN",
                      JS_NewCFunction(ctx, get_EASING_ELASTIC_IN, "EASING_ELASTIC_IN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_ELASTIC_OUT",
                      JS_NewCFunction(ctx, get_EASING_ELASTIC_OUT, "EASING_ELASTIC_OUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_ELASTIC_INOUT",
                      JS_NewCFunction(ctx, get_EASING_ELASTIC_INOUT, "EASING_ELASTIC_INOUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_BACK_IN",
                      JS_NewCFunction(ctx, get_EASING_BACK_IN, "EASING_BACK_IN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_BACK_OUT",
                      JS_NewCFunction(ctx, get_EASING_BACK_OUT, "EASING_BACK_OUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_BACK_INOUT",
                      JS_NewCFunction(ctx, get_EASING_BACK_INOUT, "EASING_BACK_INOUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_BOUNCE_IN",
                      JS_NewCFunction(ctx, get_EASING_BOUNCE_IN, "EASING_BOUNCE_IN", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_BOUNCE_OUT",
                      JS_NewCFunction(ctx, get_EASING_BOUNCE_OUT, "EASING_BOUNCE_OUT", 1));
  JS_SetPropertyStr(ctx, global_obj, "EASING_BOUNCE_INOUT",
                      JS_NewCFunction(ctx, get_EASING_BOUNCE_INOUT, "EASING_BOUNCE_INOUT", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_date_time_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  date_time_t* ret = NULL;
  ret = (date_time_t*)date_time_create();

  jret = jsvalue_create_object(ctx, ret, "date_time_t*", (tk_destroy_t)date_time_destroy);
  }
  return jret;
}

jsvalue_t wrap_date_time_set(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  date_time_t* dt = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");
  ret = (ret_t)date_time_set(dt);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_second(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->second);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_minute(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->minute);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_hour(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->hour);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_day(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->day);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_wday(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->wday);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_month(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->month);
  return jret;
}

jsvalue_t wrap_date_time_t_get_prop_year(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  date_time_t* obj = (date_time_t*)jsvalue_get_pointer(ctx, argv[0], "date_time_t*");

  jret = jsvalue_create_int(ctx, obj->year);
  return jret;
}

ret_t date_time_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "date_time_create",
                      JS_NewCFunction(ctx, wrap_date_time_create, "date_time_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "date_time_set",
                      JS_NewCFunction(ctx, wrap_date_time_set, "date_time_set", 1));
  JS_SetPropertyStr(ctx, global_obj, "date_time_t_get_prop_second",
                      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_second, "date_time_t_get_prop_second", 1));
  JS_SetPropertyStr(ctx, global_obj, "date_time_t_get_prop_minute",
                      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_minute, "date_time_t_get_prop_minute", 1));
  JS_SetPropertyStr(ctx, global_obj, "date_time_t_get_prop_hour",
                      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_hour, "date_time_t_get_prop_hour", 1));
  JS_SetPropertyStr(ctx, global_obj, "date_time_t_get_prop_day",
                      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_day, "date_time_t_get_prop_day", 1));
  JS_SetPropertyStr(ctx, global_obj, "date_time_t_get_prop_wday",
                      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_wday, "date_time_t_get_prop_wday", 1));
  JS_SetPropertyStr(ctx, global_obj, "date_time_t_get_prop_month",
                      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_month, "date_time_t_get_prop_month", 1));
  JS_SetPropertyStr(ctx, global_obj, "date_time_t_get_prop_year",
                      JS_NewCFunction(ctx, wrap_date_time_t_get_prop_year, "date_time_t_get_prop_year", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_color_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  color_t* ret = NULL;
  uint8_t r = (uint8_t)jsvalue_get_int_value(ctx, argv[0]);
  uint8_t b = (uint8_t)jsvalue_get_int_value(ctx, argv[1]);
  uint8_t g = (uint8_t)jsvalue_get_int_value(ctx, argv[2]);
  uint8_t a = (uint8_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (color_t*)color_create(r, b, g, a);

  jret = jsvalue_create_object(ctx, ret, "color_t*", (tk_destroy_t)color_destroy);
  }
  return jret;
}

jsvalue_t wrap_color_from_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  color_t* ret = NULL;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  const char* str = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (color_t*)color_from_str(c, str);
  jsvalue_free_str(ctx, str);

  jret = jsvalue_create_pointer(ctx, ret, "color_t*");
  }
  return jret;
}

jsvalue_t wrap_color_r(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint8_t ret = 0;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (uint8_t)color_r(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_g(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint8_t ret = 0;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (uint8_t)color_g(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_b(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint8_t ret = 0;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (uint8_t)color_b(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_a(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint8_t ret = 0;
  color_t* c = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (uint8_t)color_a(c);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  color_t* ret = NULL;
  color_t* color = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  ret = (color_t*)color_cast(color);

  jret = jsvalue_create_pointer(ctx, ret, "color_t*");
  }
  return jret;
}

jsvalue_t wrap_color_t_set_prop_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  color_t* obj = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");
  uint32_t color = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  obj->color = color;
  return jsvalue_create_int(ctx, RET_OK);
};

jsvalue_t wrap_color_t_get_prop_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  color_t* obj = (color_t*)jsvalue_get_pointer(ctx, argv[0], "color_t*");

  jret = jsvalue_create_int(ctx, obj->color);
  return jret;
}

ret_t color_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "color_create",
                      JS_NewCFunction(ctx, wrap_color_create, "color_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_from_str",
                      JS_NewCFunction(ctx, wrap_color_from_str, "color_from_str", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_r",
                      JS_NewCFunction(ctx, wrap_color_r, "color_r", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_g",
                      JS_NewCFunction(ctx, wrap_color_g, "color_g", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_b",
                      JS_NewCFunction(ctx, wrap_color_b, "color_b", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_a",
                      JS_NewCFunction(ctx, wrap_color_a, "color_a", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_cast",
                      JS_NewCFunction(ctx, wrap_color_cast, "color_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_t_set_prop_color",
                      JS_NewCFunction(ctx, wrap_color_t_set_prop_color, "color_t_set_prop_color", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_t_get_prop_color",
                      JS_NewCFunction(ctx, wrap_color_t_get_prop_color, "color_t_get_prop_color", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_asset_info_t_get_prop_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->type);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_subtype(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->subtype);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_is_in_rom(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->is_in_rom);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->size);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_refcount(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_int(ctx, obj->refcount);
  return jret;
}

jsvalue_t wrap_asset_info_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  asset_info_t* obj = (asset_info_t*)jsvalue_get_pointer(ctx, argv[0], "asset_info_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

ret_t asset_info_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "asset_info_t_get_prop_type",
                      JS_NewCFunction(ctx, wrap_asset_info_t_get_prop_type, "asset_info_t_get_prop_type", 1));
  JS_SetPropertyStr(ctx, global_obj, "asset_info_t_get_prop_subtype",
                      JS_NewCFunction(ctx, wrap_asset_info_t_get_prop_subtype, "asset_info_t_get_prop_subtype", 1));
  JS_SetPropertyStr(ctx, global_obj, "asset_info_t_get_prop_is_in_rom",
                      JS_NewCFunction(ctx, wrap_asset_info_t_get_prop_is_in_rom, "asset_info_t_get_prop_is_in_rom", 1));
  JS_SetPropertyStr(ctx, global_obj, "asset_info_t_get_prop_size",
                      JS_NewCFunction(ctx, wrap_asset_info_t_get_prop_size, "asset_info_t_get_prop_size", 1));
  JS_SetPropertyStr(ctx, global_obj, "asset_info_t_get_prop_refcount",
                      JS_NewCFunction(ctx, wrap_asset_info_t_get_prop_refcount, "asset_info_t_get_prop_refcount", 1));
  JS_SetPropertyStr(ctx, global_obj, "asset_info_t_get_prop_name",
                      JS_NewCFunction(ctx, wrap_asset_info_t_get_prop_name, "asset_info_t_get_prop_name", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t get_ASSET_TYPE_NONE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_NONE);
}

jsvalue_t get_ASSET_TYPE_FONT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_FONT);
}

jsvalue_t get_ASSET_TYPE_IMAGE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_IMAGE);
}

jsvalue_t get_ASSET_TYPE_STYLE(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_STYLE);
}

jsvalue_t get_ASSET_TYPE_UI(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_UI);
}

jsvalue_t get_ASSET_TYPE_XML(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_XML);
}

jsvalue_t get_ASSET_TYPE_STRINGS(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_STRINGS);
}

jsvalue_t get_ASSET_TYPE_SCRIPT(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_SCRIPT);
}

jsvalue_t get_ASSET_TYPE_DATA(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  return jsvalue_create_int(ctx, ASSET_TYPE_DATA);
}

ret_t asset_type_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_assets_manager(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  assets_manager_t* ret = NULL;
  ret = (assets_manager_t*)assets_manager();

  jret = jsvalue_create_pointer(ctx, ret, "assets_manager_t*");
  }
  return jret;
}

jsvalue_t wrap_assets_manager_ref(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  asset_info_t* ret = NULL;
  assets_manager_t* am = (assets_manager_t*)jsvalue_get_pointer(ctx, argv[0], "assets_manager_t*");
  asset_type_t type = (asset_type_t)jsvalue_get_number_value(ctx, argv[1]);
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (asset_info_t*)assets_manager_ref(am, type, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "asset_info_t*");
  }
  return jret;
}

jsvalue_t wrap_assets_manager_unref(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  assets_manager_t* am = (assets_manager_t*)jsvalue_get_pointer(ctx, argv[0], "assets_manager_t*");
  asset_info_t* info = (asset_info_t*)jsvalue_get_pointer(ctx, argv[1], "asset_info_t*");
  ret = (ret_t)assets_manager_unref(am, info);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t assets_manager_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "assets_manager",
                      JS_NewCFunction(ctx, wrap_assets_manager, "assets_manager", 1));
  JS_SetPropertyStr(ctx, global_obj, "assets_manager_ref",
                      JS_NewCFunction(ctx, wrap_assets_manager_ref, "assets_manager_ref", 1));
  JS_SetPropertyStr(ctx, global_obj, "assets_manager_unref",
                      JS_NewCFunction(ctx, wrap_assets_manager_unref, "assets_manager_unref", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_color_component_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)color_component_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "color_component_t*");
  }
  return jret;
}

ret_t color_component_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "color_component_cast",
                      JS_NewCFunction(ctx, wrap_color_component_cast, "color_component_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_time_clock_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)time_clock_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "time_clock_t*");
  }
  return jret;
}

jsvalue_t wrap_time_clock_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)time_clock_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "time_clock_t*");
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_hour(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t hour = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)time_clock_set_hour(widget, hour);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_minute(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t minute = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)time_clock_set_minute(widget, minute);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_second(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t second = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)time_clock_set_second(widget, second);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_hour_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* hour = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_hour_image(widget, hour);
  jsvalue_free_str(ctx, hour);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_minute_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* minute_image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_minute_image(widget, minute_image);
  jsvalue_free_str(ctx, minute_image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_second_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* second_image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_second_image(widget, second_image);
  jsvalue_free_str(ctx, second_image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_bg_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* bg_image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_bg_image(widget, bg_image);
  jsvalue_free_str(ctx, bg_image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)time_clock_set_image(widget, image);
  jsvalue_free_str(ctx, image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_hour_anchor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)time_clock_set_hour_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_minute_anchor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)time_clock_set_minute_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_set_second_anchor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)time_clock_set_second_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_hour(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_int(ctx, obj->hour);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_minute(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_int(ctx, obj->minute);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_second(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_int(ctx, obj->second);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_bg_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->bg_image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_hour_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->hour_image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_minute_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->minute_image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_second_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->second_image);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_hour_anchor_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->hour_anchor_x);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_hour_anchor_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->hour_anchor_y);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_minute_anchor_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->minute_anchor_x);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_minute_anchor_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->minute_anchor_y);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_second_anchor_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->second_anchor_x);
  return jret;
}

jsvalue_t wrap_time_clock_t_get_prop_second_anchor_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  time_clock_t* obj = (time_clock_t*)jsvalue_get_pointer(ctx, argv[0], "time_clock_t*");

  jret = jsvalue_create_string(ctx, obj->second_anchor_y);
  return jret;
}

ret_t time_clock_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "time_clock_set_hour_image",
                      JS_NewCFunction(ctx, wrap_time_clock_set_hour_image, "time_clock_set_hour_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_set_minute_image",
                      JS_NewCFunction(ctx, wrap_time_clock_set_minute_image, "time_clock_set_minute_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_set_second_image",
                      JS_NewCFunction(ctx, wrap_time_clock_set_second_image, "time_clock_set_second_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_set_bg_image",
                      JS_NewCFunction(ctx, wrap_time_clock_set_bg_image, "time_clock_set_bg_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_set_image",
                      JS_NewCFunction(ctx, wrap_time_clock_set_image, "time_clock_set_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_set_hour_anchor",
                      JS_NewCFunction(ctx, wrap_time_clock_set_hour_anchor, "time_clock_set_hour_anchor", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_set_minute_anchor",
                      JS_NewCFunction(ctx, wrap_time_clock_set_minute_anchor, "time_clock_set_minute_anchor", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_set_second_anchor",
                      JS_NewCFunction(ctx, wrap_time_clock_set_second_anchor, "time_clock_set_second_anchor", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_hour",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_hour, "time_clock_t_get_prop_hour", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_minute",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_minute, "time_clock_t_get_prop_minute", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_second",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_second, "time_clock_t_get_prop_second", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_image",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_image, "time_clock_t_get_prop_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_bg_image",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_bg_image, "time_clock_t_get_prop_bg_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_hour_image",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_hour_image, "time_clock_t_get_prop_hour_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_minute_image",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_minute_image, "time_clock_t_get_prop_minute_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_second_image",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_second_image, "time_clock_t_get_prop_second_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_hour_anchor_x",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_hour_anchor_x, "time_clock_t_get_prop_hour_anchor_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_hour_anchor_y",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_hour_anchor_y, "time_clock_t_get_prop_hour_anchor_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_minute_anchor_x",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_minute_anchor_x, "time_clock_t_get_prop_minute_anchor_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_minute_anchor_y",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_minute_anchor_y, "time_clock_t_get_prop_minute_anchor_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_second_anchor_x",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_second_anchor_x, "time_clock_t_get_prop_second_anchor_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "time_clock_t_get_prop_second_anchor_y",
                      JS_NewCFunction(ctx, wrap_time_clock_t_get_prop_second_anchor_y, "time_clock_t_get_prop_second_anchor_y", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_text_selector_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)text_selector_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "text_selector_t*");
  }
  return jret;
}

jsvalue_t wrap_text_selector_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)text_selector_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "text_selector_t*");
  }
  return jret;
}

jsvalue_t wrap_text_selector_reset_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)text_selector_reset_options(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_count_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)text_selector_count_options(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_append_option(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)text_selector_append_option(widget, value, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* options = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)text_selector_set_options(widget, options);
  jsvalue_free_str(ctx, options);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_range_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t start = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t nr = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  int32_t step = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)text_selector_set_range_options(widget, start, nr, step);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_get_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)text_selector_get_value(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)text_selector_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_get_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  char* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (char*)text_selector_get_text(widget);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)text_selector_set_text(widget, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_selected_index(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)text_selector_set_selected_index(widget, index);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_set_visible_nr(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t visible_nr = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)text_selector_set_visible_nr(widget, visible_nr);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_text_selector_t_get_prop_visible_nr(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_int(ctx, obj->visible_nr);
  return jret;
}

jsvalue_t wrap_text_selector_t_get_prop_selected_index(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_int(ctx, obj->selected_index);
  return jret;
}

jsvalue_t wrap_text_selector_t_get_prop_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  text_selector_t* obj = (text_selector_t*)jsvalue_get_pointer(ctx, argv[0], "text_selector_t*");

  jret = jsvalue_create_string(ctx, obj->options);
  return jret;
}

ret_t text_selector_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "text_selector_create",
                      JS_NewCFunction(ctx, wrap_text_selector_create, "text_selector_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_cast",
                      JS_NewCFunction(ctx, wrap_text_selector_cast, "text_selector_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_reset_options",
                      JS_NewCFunction(ctx, wrap_text_selector_reset_options, "text_selector_reset_options", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_count_options",
                      JS_NewCFunction(ctx, wrap_text_selector_count_options, "text_selector_count_options", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_append_option",
                      JS_NewCFunction(ctx, wrap_text_selector_append_option, "text_selector_append_option", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_set_options",
                      JS_NewCFunction(ctx, wrap_text_selector_set_options, "text_selector_set_options", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_set_range_options",
                      JS_NewCFunction(ctx, wrap_text_selector_set_range_options, "text_selector_set_range_options", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_get_value",
                      JS_NewCFunction(ctx, wrap_text_selector_get_value, "text_selector_get_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_set_value",
                      JS_NewCFunction(ctx, wrap_text_selector_set_value, "text_selector_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_get_text",
                      JS_NewCFunction(ctx, wrap_text_selector_get_text, "text_selector_get_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_set_text",
                      JS_NewCFunction(ctx, wrap_text_selector_set_text, "text_selector_set_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_set_selected_index",
                      JS_NewCFunction(ctx, wrap_text_selector_set_selected_index, "text_selector_set_selected_index", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_set_visible_nr",
                      JS_NewCFunction(ctx, wrap_text_selector_set_visible_nr, "text_selector_set_visible_nr", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_t_get_prop_visible_nr",
                      JS_NewCFunction(ctx, wrap_text_selector_t_get_prop_visible_nr, "text_selector_t_get_prop_visible_nr", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_t_get_prop_selected_index",
                      JS_NewCFunction(ctx, wrap_text_selector_t_get_prop_selected_index, "text_selector_t_get_prop_selected_index", 1));
  JS_SetPropertyStr(ctx, global_obj, "text_selector_t_get_prop_options",
                      JS_NewCFunction(ctx, wrap_text_selector_t_get_prop_options, "text_selector_t_get_prop_options", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_switch_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)switch_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "switch_t*");
  }
  return jret;
}

jsvalue_t wrap_switch_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)switch_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_switch_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)switch_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "switch_t*");
  }
  return jret;
}

jsvalue_t wrap_switch_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  switch_t* obj = (switch_t*)jsvalue_get_pointer(ctx, argv[0], "switch_t*");

  jret = jsvalue_create_bool(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_switch_t_get_prop_max_xoffset_ratio(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  switch_t* obj = (switch_t*)jsvalue_get_pointer(ctx, argv[0], "switch_t*");

  jret = jsvalue_create_number(ctx, obj->max_xoffset_ratio);
  return jret;
}

ret_t switch_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "switch_create",
                      JS_NewCFunction(ctx, wrap_switch_create, "switch_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "switch_set_value",
                      JS_NewCFunction(ctx, wrap_switch_set_value, "switch_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "switch_cast",
                      JS_NewCFunction(ctx, wrap_switch_cast, "switch_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "switch_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_switch_t_get_prop_value, "switch_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "switch_t_get_prop_max_xoffset_ratio",
                      JS_NewCFunction(ctx, wrap_switch_t_get_prop_max_xoffset_ratio, "switch_t_get_prop_max_xoffset_ratio", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_prop_change_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  prop_change_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (prop_change_event_t*)prop_change_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "prop_change_event_t*");
  }
  return jret;
}

jsvalue_t wrap_prop_change_event_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  prop_change_event_t* obj = (prop_change_event_t*)jsvalue_get_pointer(ctx, argv[0], "prop_change_event_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

jsvalue_t wrap_prop_change_event_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  prop_change_event_t* obj = (prop_change_event_t*)jsvalue_get_pointer(ctx, argv[0], "prop_change_event_t*");

  jret = jsvalue_create_pointer(ctx, obj->value, "const value_t*");
  return jret;
}

ret_t prop_change_event_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "prop_change_event_cast",
                      JS_NewCFunction(ctx, wrap_prop_change_event_cast, "prop_change_event_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "prop_change_event_t_get_prop_name",
                      JS_NewCFunction(ctx, wrap_prop_change_event_t_get_prop_name, "prop_change_event_t_get_prop_name", 1));
  JS_SetPropertyStr(ctx, global_obj, "prop_change_event_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_prop_change_event_t_get_prop_value, "prop_change_event_t_get_prop_value", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_progress_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  progress_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (progress_event_t*)progress_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "progress_event_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_event_t_get_prop_percent(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_event_t* obj = (progress_event_t*)jsvalue_get_pointer(ctx, argv[0], "progress_event_t*");

  jret = jsvalue_create_int(ctx, obj->percent);
  return jret;
}

ret_t progress_event_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "progress_event_cast",
                      JS_NewCFunction(ctx, wrap_progress_event_cast, "progress_event_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_event_t_get_prop_percent",
                      JS_NewCFunction(ctx, wrap_progress_event_t_get_prop_percent, "progress_event_t_get_prop_percent", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_view_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)view_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "view_t*");
  }
  return jret;
}

jsvalue_t wrap_view_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)view_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "view_t*");
  }
  return jret;
}

ret_t view_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "view_create",
                      JS_NewCFunction(ctx, wrap_view_create, "view_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "view_cast",
                      JS_NewCFunction(ctx, wrap_view_cast, "view_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_slide_view_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_view_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "slide_view_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_view_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)slide_view_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "slide_view_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_auto_play(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint16_t auto_play = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_view_set_auto_play(widget, auto_play);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_active(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_view_set_active(widget, index);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_vertical(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t vertical = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)slide_view_set_vertical(widget, vertical);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_anim_hint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anim_hint = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)slide_view_set_anim_hint(widget, anim_hint);
  jsvalue_free_str(ctx, anim_hint);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_set_loop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t loop = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)slide_view_set_loop(widget, loop);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_view_t_get_prop_vertical(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical);
  return jret;
}

jsvalue_t wrap_slide_view_t_get_prop_auto_play(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_int(ctx, obj->auto_play);
  return jret;
}

jsvalue_t wrap_slide_view_t_get_prop_loop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_bool(ctx, obj->loop);
  return jret;
}

jsvalue_t wrap_slide_view_t_get_prop_anim_hint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_view_t* obj = (slide_view_t*)jsvalue_get_pointer(ctx, argv[0], "slide_view_t*");

  jret = jsvalue_create_string(ctx, obj->anim_hint);
  return jret;
}

ret_t slide_view_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "slide_view_create",
                      JS_NewCFunction(ctx, wrap_slide_view_create, "slide_view_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_cast",
                      JS_NewCFunction(ctx, wrap_slide_view_cast, "slide_view_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_set_auto_play",
                      JS_NewCFunction(ctx, wrap_slide_view_set_auto_play, "slide_view_set_auto_play", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_set_active",
                      JS_NewCFunction(ctx, wrap_slide_view_set_active, "slide_view_set_active", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_set_vertical",
                      JS_NewCFunction(ctx, wrap_slide_view_set_vertical, "slide_view_set_vertical", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_set_anim_hint",
                      JS_NewCFunction(ctx, wrap_slide_view_set_anim_hint, "slide_view_set_anim_hint", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_set_loop",
                      JS_NewCFunction(ctx, wrap_slide_view_set_loop, "slide_view_set_loop", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_t_get_prop_vertical",
                      JS_NewCFunction(ctx, wrap_slide_view_t_get_prop_vertical, "slide_view_t_get_prop_vertical", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_t_get_prop_auto_play",
                      JS_NewCFunction(ctx, wrap_slide_view_t_get_prop_auto_play, "slide_view_t_get_prop_auto_play", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_t_get_prop_loop",
                      JS_NewCFunction(ctx, wrap_slide_view_t_get_prop_loop, "slide_view_t_get_prop_loop", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_view_t_get_prop_anim_hint",
                      JS_NewCFunction(ctx, wrap_slide_view_t_get_prop_anim_hint, "slide_view_t_get_prop_anim_hint", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_slide_indicator_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_indicator_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_create_linear(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_indicator_create_linear(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_create_arc(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_indicator_create_arc(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)slide_indicator_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "slide_indicator_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_max(widget, max);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_default_paint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  indicator_default_paint_t default_paint = (indicator_default_paint_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_default_paint(widget, default_paint);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_auto_hide(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint16_t auto_hide = (uint16_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_auto_hide(widget, auto_hide);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_margin(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t margin = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_margin(widget, margin);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_spacing(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t spacing = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_spacing(widget, spacing);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t size = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_size(widget, size);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_anchor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)slide_indicator_set_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_set_indicated_target(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* indicated_target = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)slide_indicator_set_indicated_target(widget, indicated_target);
  jsvalue_free_str(ctx, indicated_target);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_default_paint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->default_paint);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_auto_hide(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->auto_hide);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_margin(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->margin);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_spacing(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_number(ctx, obj->spacing);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_int(ctx, obj->size);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_anchor_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_x);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_anchor_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_y);
  return jret;
}

jsvalue_t wrap_slide_indicator_t_get_prop_indicated_target(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_indicator_t* obj = (slide_indicator_t*)jsvalue_get_pointer(ctx, argv[0], "slide_indicator_t*");

  jret = jsvalue_create_string(ctx, obj->indicated_target);
  return jret;
}

ret_t slide_indicator_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_create",
                      JS_NewCFunction(ctx, wrap_slide_indicator_create, "slide_indicator_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_create_linear",
                      JS_NewCFunction(ctx, wrap_slide_indicator_create_linear, "slide_indicator_create_linear", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_create_arc",
                      JS_NewCFunction(ctx, wrap_slide_indicator_create_arc, "slide_indicator_create_arc", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_cast",
                      JS_NewCFunction(ctx, wrap_slide_indicator_cast, "slide_indicator_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_set_value",
                      JS_NewCFunction(ctx, wrap_slide_indicator_set_value, "slide_indicator_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_set_max",
                      JS_NewCFunction(ctx, wrap_slide_indicator_set_max, "slide_indicator_set_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_set_default_paint",
                      JS_NewCFunction(ctx, wrap_slide_indicator_set_default_paint, "slide_indicator_set_default_paint", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_set_auto_hide",
                      JS_NewCFunction(ctx, wrap_slide_indicator_set_auto_hide, "slide_indicator_set_auto_hide", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_set_margin",
                      JS_NewCFunction(ctx, wrap_slide_indicator_set_margin, "slide_indicator_set_margin", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_set_spacing",
                      JS_NewCFunction(ctx, wrap_slide_indicator_set_spacing, "slide_indicator_set_spacing", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_set_size",
                      JS_NewCFunction(ctx, wrap_slide_indicator_set_size, "slide_indicator_set_size", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_set_anchor",
                      JS_NewCFunction(ctx, wrap_slide_indicator_set_anchor, "slide_indicator_set_anchor", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_set_indicated_target",
                      JS_NewCFunction(ctx, wrap_slide_indicator_set_indicated_target, "slide_indicator_set_indicated_target", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_value, "slide_indicator_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_max",
                      JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_max, "slide_indicator_t_get_prop_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_default_paint",
                      JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_default_paint, "slide_indicator_t_get_prop_default_paint", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_auto_hide",
                      JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_auto_hide, "slide_indicator_t_get_prop_auto_hide", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_margin",
                      JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_margin, "slide_indicator_t_get_prop_margin", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_spacing",
                      JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_spacing, "slide_indicator_t_get_prop_spacing", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_size",
                      JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_size, "slide_indicator_t_get_prop_size", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_anchor_x",
                      JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_anchor_x, "slide_indicator_t_get_prop_anchor_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_anchor_y",
                      JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_anchor_y, "slide_indicator_t_get_prop_anchor_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_indicator_t_get_prop_indicated_target",
                      JS_NewCFunction(ctx, wrap_slide_indicator_t_get_prop_indicated_target, "slide_indicator_t_get_prop_indicated_target", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_slide_menu_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slide_menu_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "slide_menu_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_menu_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)slide_menu_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "slide_menu_t*");
  }
  return jret;
}

jsvalue_t wrap_slide_menu_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slide_menu_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_menu_set_align_v(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  align_v_t align_v = (align_v_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slide_menu_set_align_v(widget, align_v);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_menu_set_min_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t min_scale = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slide_menu_set_min_scale(widget, min_scale);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slide_menu_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_slide_menu_t_get_prop_align_v(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = jsvalue_create_number(ctx, obj->align_v);
  return jret;
}

jsvalue_t wrap_slide_menu_t_get_prop_min_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slide_menu_t* obj = (slide_menu_t*)jsvalue_get_pointer(ctx, argv[0], "slide_menu_t*");

  jret = jsvalue_create_number(ctx, obj->min_scale);
  return jret;
}

ret_t slide_menu_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "slide_menu_create",
                      JS_NewCFunction(ctx, wrap_slide_menu_create, "slide_menu_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_menu_cast",
                      JS_NewCFunction(ctx, wrap_slide_menu_cast, "slide_menu_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_menu_set_value",
                      JS_NewCFunction(ctx, wrap_slide_menu_set_value, "slide_menu_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_menu_set_align_v",
                      JS_NewCFunction(ctx, wrap_slide_menu_set_align_v, "slide_menu_set_align_v", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_menu_set_min_scale",
                      JS_NewCFunction(ctx, wrap_slide_menu_set_min_scale, "slide_menu_set_min_scale", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_menu_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_slide_menu_t_get_prop_value, "slide_menu_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_menu_t_get_prop_align_v",
                      JS_NewCFunction(ctx, wrap_slide_menu_t_get_prop_align_v, "slide_menu_t_get_prop_align_v", 1));
  JS_SetPropertyStr(ctx, global_obj, "slide_menu_t_get_prop_min_scale",
                      JS_NewCFunction(ctx, wrap_slide_menu_t_get_prop_min_scale, "slide_menu_t_get_prop_min_scale", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_scroll_view_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)scroll_view_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "scroll_view_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_view_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)scroll_view_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "scroll_view_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_virtual_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_view_set_virtual_w(widget, w);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_virtual_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_view_set_virtual_h(widget, h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_xslidable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t xslidable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)scroll_view_set_xslidable(widget, xslidable);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_yslidable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t yslidable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)scroll_view_set_yslidable(widget, yslidable);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_offset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t xoffset = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t yoffset = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)scroll_view_set_offset(widget, xoffset, yoffset);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_set_speed_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t xspeed_scale = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t yspeed_scale = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)scroll_view_set_speed_scale(widget, xspeed_scale, yspeed_scale);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_scroll_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t xoffset_end = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t yoffset_end = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)scroll_view_scroll_to(widget, xoffset_end, yoffset_end, duration);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_scroll_delta_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t xoffset_delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t yoffset_delta = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)scroll_view_scroll_delta_to(widget, xoffset_delta, yoffset_delta, duration);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_virtual_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->virtual_w);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_virtual_h(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->virtual_h);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_xoffset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->xoffset);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_yoffset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_int(ctx, obj->yoffset);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_xspeed_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_number(ctx, obj->xspeed_scale);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_yspeed_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_number(ctx, obj->yspeed_scale);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_xslidable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_bool(ctx, obj->xslidable);
  return jret;
}

jsvalue_t wrap_scroll_view_t_get_prop_yslidable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_view_t* obj = (scroll_view_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_view_t*");

  jret = jsvalue_create_bool(ctx, obj->yslidable);
  return jret;
}

ret_t scroll_view_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_create",
                      JS_NewCFunction(ctx, wrap_scroll_view_create, "scroll_view_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_cast",
                      JS_NewCFunction(ctx, wrap_scroll_view_cast, "scroll_view_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_set_virtual_w",
                      JS_NewCFunction(ctx, wrap_scroll_view_set_virtual_w, "scroll_view_set_virtual_w", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_set_virtual_h",
                      JS_NewCFunction(ctx, wrap_scroll_view_set_virtual_h, "scroll_view_set_virtual_h", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_set_xslidable",
                      JS_NewCFunction(ctx, wrap_scroll_view_set_xslidable, "scroll_view_set_xslidable", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_set_yslidable",
                      JS_NewCFunction(ctx, wrap_scroll_view_set_yslidable, "scroll_view_set_yslidable", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_set_offset",
                      JS_NewCFunction(ctx, wrap_scroll_view_set_offset, "scroll_view_set_offset", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_set_speed_scale",
                      JS_NewCFunction(ctx, wrap_scroll_view_set_speed_scale, "scroll_view_set_speed_scale", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_scroll_to",
                      JS_NewCFunction(ctx, wrap_scroll_view_scroll_to, "scroll_view_scroll_to", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_scroll_delta_to",
                      JS_NewCFunction(ctx, wrap_scroll_view_scroll_delta_to, "scroll_view_scroll_delta_to", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_virtual_w",
                      JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_virtual_w, "scroll_view_t_get_prop_virtual_w", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_virtual_h",
                      JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_virtual_h, "scroll_view_t_get_prop_virtual_h", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_xoffset",
                      JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_xoffset, "scroll_view_t_get_prop_xoffset", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_yoffset",
                      JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_yoffset, "scroll_view_t_get_prop_yoffset", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_xspeed_scale",
                      JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_xspeed_scale, "scroll_view_t_get_prop_xspeed_scale", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_yspeed_scale",
                      JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_yspeed_scale, "scroll_view_t_get_prop_yspeed_scale", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_xslidable",
                      JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_xslidable, "scroll_view_t_get_prop_xslidable", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_view_t_get_prop_yslidable",
                      JS_NewCFunction(ctx, wrap_scroll_view_t_get_prop_yslidable, "scroll_view_t_get_prop_yslidable", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_scroll_bar_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)scroll_bar_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)scroll_bar_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_create_mobile(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)scroll_bar_create_mobile(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_create_desktop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)scroll_bar_create_desktop(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "scroll_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_set_params(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t virtual_size = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t row = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)scroll_bar_set_params(widget, virtual_size, row);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_scroll_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)scroll_bar_scroll_to(widget, value, duration);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_bar_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_add_delta(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_bar_add_delta(widget, delta);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_scroll_delta(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t delta = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_bar_scroll_delta(widget, delta);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_set_value_only(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)scroll_bar_set_value_only(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_is_mobile(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)scroll_bar_is_mobile(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_scroll_bar_t_get_prop_virtual_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_int(ctx, obj->virtual_size);
  return jret;
}

jsvalue_t wrap_scroll_bar_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_scroll_bar_t_get_prop_row(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_int(ctx, obj->row);
  return jret;
}

jsvalue_t wrap_scroll_bar_t_get_prop_animatable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  scroll_bar_t* obj = (scroll_bar_t*)jsvalue_get_pointer(ctx, argv[0], "scroll_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->animatable);
  return jret;
}

ret_t scroll_bar_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_create",
                      JS_NewCFunction(ctx, wrap_scroll_bar_create, "scroll_bar_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_cast",
                      JS_NewCFunction(ctx, wrap_scroll_bar_cast, "scroll_bar_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_create_mobile",
                      JS_NewCFunction(ctx, wrap_scroll_bar_create_mobile, "scroll_bar_create_mobile", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_create_desktop",
                      JS_NewCFunction(ctx, wrap_scroll_bar_create_desktop, "scroll_bar_create_desktop", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_set_params",
                      JS_NewCFunction(ctx, wrap_scroll_bar_set_params, "scroll_bar_set_params", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_scroll_to",
                      JS_NewCFunction(ctx, wrap_scroll_bar_scroll_to, "scroll_bar_scroll_to", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_set_value",
                      JS_NewCFunction(ctx, wrap_scroll_bar_set_value, "scroll_bar_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_add_delta",
                      JS_NewCFunction(ctx, wrap_scroll_bar_add_delta, "scroll_bar_add_delta", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_scroll_delta",
                      JS_NewCFunction(ctx, wrap_scroll_bar_scroll_delta, "scroll_bar_scroll_delta", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_set_value_only",
                      JS_NewCFunction(ctx, wrap_scroll_bar_set_value_only, "scroll_bar_set_value_only", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_is_mobile",
                      JS_NewCFunction(ctx, wrap_scroll_bar_is_mobile, "scroll_bar_is_mobile", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_t_get_prop_virtual_size",
                      JS_NewCFunction(ctx, wrap_scroll_bar_t_get_prop_virtual_size, "scroll_bar_t_get_prop_virtual_size", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_scroll_bar_t_get_prop_value, "scroll_bar_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_t_get_prop_row",
                      JS_NewCFunction(ctx, wrap_scroll_bar_t_get_prop_row, "scroll_bar_t_get_prop_row", 1));
  JS_SetPropertyStr(ctx, global_obj, "scroll_bar_t_get_prop_animatable",
                      JS_NewCFunction(ctx, wrap_scroll_bar_t_get_prop_animatable, "scroll_bar_t_get_prop_animatable", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_tab_control_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)tab_control_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "tab_control_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_control_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)tab_control_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "tab_control_t*");
  }
  return jret;
}

ret_t tab_control_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "tab_control_create",
                      JS_NewCFunction(ctx, wrap_tab_control_create, "tab_control_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_control_cast",
                      JS_NewCFunction(ctx, wrap_tab_control_cast, "tab_control_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_list_view_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)list_view_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "list_view_t*");
  }
  return jret;
}

jsvalue_t wrap_list_view_set_item_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t item_height = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)list_view_set_item_height(widget, item_height);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_set_default_item_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t default_item_height = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)list_view_set_default_item_height(widget, default_item_height);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_set_auto_hide_scroll_bar(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t auto_hide_scroll_bar = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)list_view_set_auto_hide_scroll_bar(widget, auto_hide_scroll_bar);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)list_view_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "list_view_t*");
  }
  return jret;
}

jsvalue_t wrap_list_view_t_get_prop_item_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  jret = jsvalue_create_int(ctx, obj->item_height);
  return jret;
}

jsvalue_t wrap_list_view_t_get_prop_default_item_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  jret = jsvalue_create_int(ctx, obj->default_item_height);
  return jret;
}

jsvalue_t wrap_list_view_t_get_prop_auto_hide_scroll_bar(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  list_view_t* obj = (list_view_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_hide_scroll_bar);
  return jret;
}

ret_t list_view_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "list_view_create",
                      JS_NewCFunction(ctx, wrap_list_view_create, "list_view_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_set_item_height",
                      JS_NewCFunction(ctx, wrap_list_view_set_item_height, "list_view_set_item_height", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_set_default_item_height",
                      JS_NewCFunction(ctx, wrap_list_view_set_default_item_height, "list_view_set_default_item_height", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_set_auto_hide_scroll_bar",
                      JS_NewCFunction(ctx, wrap_list_view_set_auto_hide_scroll_bar, "list_view_set_auto_hide_scroll_bar", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_cast",
                      JS_NewCFunction(ctx, wrap_list_view_cast, "list_view_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_t_get_prop_item_height",
                      JS_NewCFunction(ctx, wrap_list_view_t_get_prop_item_height, "list_view_t_get_prop_item_height", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_t_get_prop_default_item_height",
                      JS_NewCFunction(ctx, wrap_list_view_t_get_prop_default_item_height, "list_view_t_get_prop_default_item_height", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_t_get_prop_auto_hide_scroll_bar",
                      JS_NewCFunction(ctx, wrap_list_view_t_get_prop_auto_hide_scroll_bar, "list_view_t_get_prop_auto_hide_scroll_bar", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_list_view_h_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)list_view_h_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "list_view_h_t*");
  }
  return jret;
}

jsvalue_t wrap_list_view_h_set_item_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t item_width = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)list_view_h_set_item_width(widget, item_width);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_h_set_spacing(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t spacing = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)list_view_h_set_spacing(widget, spacing);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_list_view_h_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)list_view_h_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "list_view_h_t*");
  }
  return jret;
}

jsvalue_t wrap_list_view_h_t_get_prop_item_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  list_view_h_t* obj = (list_view_h_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_h_t*");

  jret = jsvalue_create_int(ctx, obj->item_width);
  return jret;
}

jsvalue_t wrap_list_view_h_t_get_prop_spacing(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  list_view_h_t* obj = (list_view_h_t*)jsvalue_get_pointer(ctx, argv[0], "list_view_h_t*");

  jret = jsvalue_create_int(ctx, obj->spacing);
  return jret;
}

ret_t list_view_h_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "list_view_h_create",
                      JS_NewCFunction(ctx, wrap_list_view_h_create, "list_view_h_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_h_set_item_width",
                      JS_NewCFunction(ctx, wrap_list_view_h_set_item_width, "list_view_h_set_item_width", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_h_set_spacing",
                      JS_NewCFunction(ctx, wrap_list_view_h_set_spacing, "list_view_h_set_spacing", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_h_cast",
                      JS_NewCFunction(ctx, wrap_list_view_h_cast, "list_view_h_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_h_t_get_prop_item_width",
                      JS_NewCFunction(ctx, wrap_list_view_h_t_get_prop_item_width, "list_view_h_t_get_prop_item_width", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_view_h_t_get_prop_spacing",
                      JS_NewCFunction(ctx, wrap_list_view_h_t_get_prop_spacing, "list_view_h_t_get_prop_spacing", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_tab_button_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)tab_button_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "tab_button_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_button_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)tab_button_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "tab_button_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_button_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t value = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)tab_button_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_set_icon(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)tab_button_set_icon(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_set_active_icon(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)tab_button_set_active_icon(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_bool(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_tab_button_t_get_prop_active_icon(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_string(ctx, obj->active_icon);
  return jret;
}

jsvalue_t wrap_tab_button_t_get_prop_icon(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  tab_button_t* obj = (tab_button_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_t*");

  jret = jsvalue_create_string(ctx, obj->icon);
  return jret;
}

ret_t tab_button_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "tab_button_create",
                      JS_NewCFunction(ctx, wrap_tab_button_create, "tab_button_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_cast",
                      JS_NewCFunction(ctx, wrap_tab_button_cast, "tab_button_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_set_value",
                      JS_NewCFunction(ctx, wrap_tab_button_set_value, "tab_button_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_set_icon",
                      JS_NewCFunction(ctx, wrap_tab_button_set_icon, "tab_button_set_icon", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_set_active_icon",
                      JS_NewCFunction(ctx, wrap_tab_button_set_active_icon, "tab_button_set_active_icon", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_tab_button_t_get_prop_value, "tab_button_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_t_get_prop_active_icon",
                      JS_NewCFunction(ctx, wrap_tab_button_t_get_prop_active_icon, "tab_button_t_get_prop_active_icon", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_t_get_prop_icon",
                      JS_NewCFunction(ctx, wrap_tab_button_t_get_prop_icon, "tab_button_t_get_prop_icon", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_tab_button_group_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)tab_button_group_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "tab_button_group_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_button_group_set_compact(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t compact = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)tab_button_group_set_compact(widget, compact);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_group_set_scrollable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t scrollable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)tab_button_group_set_scrollable(widget, scrollable);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_tab_button_group_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)tab_button_group_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "tab_button_group_t*");
  }
  return jret;
}

jsvalue_t wrap_tab_button_group_t_get_prop_compact(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  tab_button_group_t* obj = (tab_button_group_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_group_t*");

  jret = jsvalue_create_bool(ctx, obj->compact);
  return jret;
}

jsvalue_t wrap_tab_button_group_t_get_prop_scrollable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  tab_button_group_t* obj = (tab_button_group_t*)jsvalue_get_pointer(ctx, argv[0], "tab_button_group_t*");

  jret = jsvalue_create_bool(ctx, obj->scrollable);
  return jret;
}

ret_t tab_button_group_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "tab_button_group_create",
                      JS_NewCFunction(ctx, wrap_tab_button_group_create, "tab_button_group_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_group_set_compact",
                      JS_NewCFunction(ctx, wrap_tab_button_group_set_compact, "tab_button_group_set_compact", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_group_set_scrollable",
                      JS_NewCFunction(ctx, wrap_tab_button_group_set_scrollable, "tab_button_group_set_scrollable", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_group_cast",
                      JS_NewCFunction(ctx, wrap_tab_button_group_cast, "tab_button_group_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_group_t_get_prop_compact",
                      JS_NewCFunction(ctx, wrap_tab_button_group_t_get_prop_compact, "tab_button_group_t_get_prop_compact", 1));
  JS_SetPropertyStr(ctx, global_obj, "tab_button_group_t_get_prop_scrollable",
                      JS_NewCFunction(ctx, wrap_tab_button_group_t_get_prop_scrollable, "tab_button_group_t_get_prop_scrollable", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_list_item_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)list_item_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "list_item_t*");
  }
  return jret;
}

jsvalue_t wrap_list_item_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)list_item_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "list_item_t*");
  }
  return jret;
}

ret_t list_item_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "list_item_create",
                      JS_NewCFunction(ctx, wrap_list_item_create, "list_item_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "list_item_cast",
                      JS_NewCFunction(ctx, wrap_list_item_cast, "list_item_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_hscroll_label_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)hscroll_label_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "hscroll_label_t*");
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_lull(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t lull = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_lull(widget, lull);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_duration(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t duration = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_duration(widget, duration);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_only_focus(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t only_focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_only_focus(widget, only_focus);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_only_parent_focus(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t only_parent_focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_only_parent_focus(widget, only_parent_focus);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_loop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t loop = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_loop(widget, loop);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_yoyo(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t yoyo = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_yoyo(widget, yoyo);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_ellipses(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t ellipses = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_ellipses(widget, ellipses);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_set_xoffset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t xoffset = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)hscroll_label_set_xoffset(widget, xoffset);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_start(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)hscroll_label_start(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_stop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)hscroll_label_stop(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)hscroll_label_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "hscroll_label_t*");
  }
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_only_focus(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->only_focus);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_only_parent_focus(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->only_parent_focus);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_loop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->loop);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_yoyo(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->yoyo);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_ellipses(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_bool(ctx, obj->ellipses);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_lull(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->lull);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_duration(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->duration);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_xoffset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->xoffset);
  return jret;
}

jsvalue_t wrap_hscroll_label_t_get_prop_text_w(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  hscroll_label_t* obj = (hscroll_label_t*)jsvalue_get_pointer(ctx, argv[0], "hscroll_label_t*");

  jret = jsvalue_create_int(ctx, obj->text_w);
  return jret;
}

ret_t hscroll_label_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_create",
                      JS_NewCFunction(ctx, wrap_hscroll_label_create, "hscroll_label_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_set_lull",
                      JS_NewCFunction(ctx, wrap_hscroll_label_set_lull, "hscroll_label_set_lull", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_set_duration",
                      JS_NewCFunction(ctx, wrap_hscroll_label_set_duration, "hscroll_label_set_duration", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_set_only_focus",
                      JS_NewCFunction(ctx, wrap_hscroll_label_set_only_focus, "hscroll_label_set_only_focus", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_set_only_parent_focus",
                      JS_NewCFunction(ctx, wrap_hscroll_label_set_only_parent_focus, "hscroll_label_set_only_parent_focus", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_set_loop",
                      JS_NewCFunction(ctx, wrap_hscroll_label_set_loop, "hscroll_label_set_loop", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_set_yoyo",
                      JS_NewCFunction(ctx, wrap_hscroll_label_set_yoyo, "hscroll_label_set_yoyo", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_set_ellipses",
                      JS_NewCFunction(ctx, wrap_hscroll_label_set_ellipses, "hscroll_label_set_ellipses", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_set_xoffset",
                      JS_NewCFunction(ctx, wrap_hscroll_label_set_xoffset, "hscroll_label_set_xoffset", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_start",
                      JS_NewCFunction(ctx, wrap_hscroll_label_start, "hscroll_label_start", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_stop",
                      JS_NewCFunction(ctx, wrap_hscroll_label_stop, "hscroll_label_stop", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_cast",
                      JS_NewCFunction(ctx, wrap_hscroll_label_cast, "hscroll_label_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_only_focus",
                      JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_only_focus, "hscroll_label_t_get_prop_only_focus", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_only_parent_focus",
                      JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_only_parent_focus, "hscroll_label_t_get_prop_only_parent_focus", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_loop",
                      JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_loop, "hscroll_label_t_get_prop_loop", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_yoyo",
                      JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_yoyo, "hscroll_label_t_get_prop_yoyo", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_ellipses",
                      JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_ellipses, "hscroll_label_t_get_prop_ellipses", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_lull",
                      JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_lull, "hscroll_label_t_get_prop_lull", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_duration",
                      JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_duration, "hscroll_label_t_get_prop_duration", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_xoffset",
                      JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_xoffset, "hscroll_label_t_get_prop_xoffset", 1));
  JS_SetPropertyStr(ctx, global_obj, "hscroll_label_t_get_prop_text_w",
                      JS_NewCFunction(ctx, wrap_hscroll_label_t_get_prop_text_w, "hscroll_label_t_get_prop_text_w", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_rich_text_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)rich_text_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "rich_text_t*");
  }
  return jret;
}

jsvalue_t wrap_rich_text_set_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* text = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)rich_text_set_text(widget, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_rich_text_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)rich_text_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "rich_text_t*");
  }
  return jret;
}

jsvalue_t wrap_rich_text_t_get_prop_line_gap(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  rich_text_t* obj = (rich_text_t*)jsvalue_get_pointer(ctx, argv[0], "rich_text_t*");

  jret = jsvalue_create_int(ctx, obj->line_gap);
  return jret;
}

ret_t rich_text_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "rich_text_create",
                      JS_NewCFunction(ctx, wrap_rich_text_create, "rich_text_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "rich_text_set_text",
                      JS_NewCFunction(ctx, wrap_rich_text_set_text, "rich_text_set_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "rich_text_cast",
                      JS_NewCFunction(ctx, wrap_rich_text_cast, "rich_text_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "rich_text_t_get_prop_line_gap",
                      JS_NewCFunction(ctx, wrap_rich_text_t_get_prop_line_gap, "rich_text_t_get_prop_line_gap", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_progress_circle_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)progress_circle_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "progress_circle_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_circle_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)progress_circle_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "progress_circle_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_max(widget, max);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_line_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t line_width = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_line_width(widget, line_width);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_start_angle(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t start_angle = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_start_angle(widget, start_angle);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_unit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* unit = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_unit(widget, unit);
  jsvalue_free_str(ctx, unit);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_show_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t show_text = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_show_text(widget, show_text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_set_counter_clock_wise(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t counter_clock_wise = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)progress_circle_set_counter_clock_wise(widget, counter_clock_wise);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_int(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_start_angle(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_int(ctx, obj->start_angle);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_line_width(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_int(ctx, obj->line_width);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_unit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_string(ctx, obj->unit);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_counter_clock_wise(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_bool(ctx, obj->counter_clock_wise);
  return jret;
}

jsvalue_t wrap_progress_circle_t_get_prop_show_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_circle_t* obj = (progress_circle_t*)jsvalue_get_pointer(ctx, argv[0], "progress_circle_t*");

  jret = jsvalue_create_bool(ctx, obj->show_text);
  return jret;
}

ret_t progress_circle_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_create",
                      JS_NewCFunction(ctx, wrap_progress_circle_create, "progress_circle_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_cast",
                      JS_NewCFunction(ctx, wrap_progress_circle_cast, "progress_circle_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_set_value",
                      JS_NewCFunction(ctx, wrap_progress_circle_set_value, "progress_circle_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_set_max",
                      JS_NewCFunction(ctx, wrap_progress_circle_set_max, "progress_circle_set_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_set_line_width",
                      JS_NewCFunction(ctx, wrap_progress_circle_set_line_width, "progress_circle_set_line_width", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_set_start_angle",
                      JS_NewCFunction(ctx, wrap_progress_circle_set_start_angle, "progress_circle_set_start_angle", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_set_unit",
                      JS_NewCFunction(ctx, wrap_progress_circle_set_unit, "progress_circle_set_unit", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_set_show_text",
                      JS_NewCFunction(ctx, wrap_progress_circle_set_show_text, "progress_circle_set_show_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_set_counter_clock_wise",
                      JS_NewCFunction(ctx, wrap_progress_circle_set_counter_clock_wise, "progress_circle_set_counter_clock_wise", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_value, "progress_circle_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_max",
                      JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_max, "progress_circle_t_get_prop_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_start_angle",
                      JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_start_angle, "progress_circle_t_get_prop_start_angle", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_line_width",
                      JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_line_width, "progress_circle_t_get_prop_line_width", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_unit",
                      JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_unit, "progress_circle_t_get_prop_unit", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_counter_clock_wise",
                      JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_counter_clock_wise, "progress_circle_t_get_prop_counter_clock_wise", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_circle_t_get_prop_show_text",
                      JS_NewCFunction(ctx, wrap_progress_circle_t_get_prop_show_text, "progress_circle_t_get_prop_show_text", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_slider_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)slider_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "slider_t*");
  }
  return jret;
}

jsvalue_t wrap_slider_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)slider_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "slider_t*");
  }
  return jret;
}

jsvalue_t wrap_slider_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double value = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slider_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_min(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double min = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slider_set_min(widget, min);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double max = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slider_set_max(widget, max);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_step(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double step = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)slider_set_step(widget, step);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_bar_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t bar_size = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)slider_set_bar_size(widget, bar_size);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_set_vertical(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t vertical = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)slider_set_vertical(widget, vertical);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_min(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->min);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_step(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_number(ctx, obj->step);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_vertical(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical);
  return jret;
}

jsvalue_t wrap_slider_t_get_prop_bar_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  slider_t* obj = (slider_t*)jsvalue_get_pointer(ctx, argv[0], "slider_t*");

  jret = jsvalue_create_int(ctx, obj->bar_size);
  return jret;
}

ret_t slider_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "slider_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_slider_t_get_prop_value, "slider_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_t_get_prop_min",
                      JS_NewCFunction(ctx, wrap_slider_t_get_prop_min, "slider_t_get_prop_min", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_t_get_prop_max",
                      JS_NewCFunction(ctx, wrap_slider_t_get_prop_max, "slider_t_get_prop_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_t_get_prop_step",
                      JS_NewCFunction(ctx, wrap_slider_t_get_prop_step, "slider_t_get_prop_step", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_t_get_prop_vertical",
                      JS_NewCFunction(ctx, wrap_slider_t_get_prop_vertical, "slider_t_get_prop_vertical", 1));
  JS_SetPropertyStr(ctx, global_obj, "slider_t_get_prop_bar_size",
                      JS_NewCFunction(ctx, wrap_slider_t_get_prop_bar_size, "slider_t_get_prop_bar_size", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_mledit_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)mledit_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "mledit_t*");
  }
  return jret;
}

jsvalue_t wrap_mledit_set_readonly(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t readonly = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_readonly(widget, readonly);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_focus(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_focus(widget, focus);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_wrap_word(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t wrap_word = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_wrap_word(widget, wrap_word);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_max_lines(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t max_lines = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_max_lines(widget, max_lines);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_input_tips(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* tips = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)mledit_set_input_tips(widget, tips);
  jsvalue_free_str(ctx, tips);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_cursor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t cursor = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_cursor(widget, cursor);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_set_scroll_line(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t scroll_line = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)mledit_set_scroll_line(widget, scroll_line);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_mledit_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)mledit_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "mledit_t*");
  }
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_readonly(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_bool(ctx, obj->readonly);
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_tips(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_string(ctx, obj->tips);
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_wrap_word(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_bool(ctx, obj->wrap_word);
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_max_lines(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_int(ctx, obj->max_lines);
  return jret;
}

jsvalue_t wrap_mledit_t_get_prop_scroll_line(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  mledit_t* obj = (mledit_t*)jsvalue_get_pointer(ctx, argv[0], "mledit_t*");

  jret = jsvalue_create_number(ctx, obj->scroll_line);
  return jret;
}

ret_t mledit_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "mledit_set_cursor",
                      JS_NewCFunction(ctx, wrap_mledit_set_cursor, "mledit_set_cursor", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_set_scroll_line",
                      JS_NewCFunction(ctx, wrap_mledit_set_scroll_line, "mledit_set_scroll_line", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_cast",
                      JS_NewCFunction(ctx, wrap_mledit_cast, "mledit_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_t_get_prop_readonly",
                      JS_NewCFunction(ctx, wrap_mledit_t_get_prop_readonly, "mledit_t_get_prop_readonly", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_t_get_prop_tips",
                      JS_NewCFunction(ctx, wrap_mledit_t_get_prop_tips, "mledit_t_get_prop_tips", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_t_get_prop_wrap_word",
                      JS_NewCFunction(ctx, wrap_mledit_t_get_prop_wrap_word, "mledit_t_get_prop_wrap_word", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_t_get_prop_max_lines",
                      JS_NewCFunction(ctx, wrap_mledit_t_get_prop_max_lines, "mledit_t_get_prop_max_lines", 1));
  JS_SetPropertyStr(ctx, global_obj, "mledit_t_get_prop_scroll_line",
                      JS_NewCFunction(ctx, wrap_mledit_t_get_prop_scroll_line, "mledit_t_get_prop_scroll_line", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_row_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)row_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "row_t*");
  }
  return jret;
}

jsvalue_t wrap_row_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)row_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "row_t*");
  }
  return jret;
}

ret_t row_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "row_create",
                      JS_NewCFunction(ctx, wrap_row_create, "row_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "row_cast",
                      JS_NewCFunction(ctx, wrap_row_cast, "row_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_progress_bar_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)progress_bar_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "progress_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_bar_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)progress_bar_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "progress_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_progress_bar_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)progress_bar_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_set_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)progress_bar_set_max(widget, max);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_set_vertical(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t vertical = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)progress_bar_set_vertical(widget, vertical);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_set_show_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t show_text = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)progress_bar_set_show_text(widget, show_text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_get_percent(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (uint32_t)progress_bar_get_percent(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_progress_bar_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_progress_bar_t_get_prop_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_progress_bar_t_get_prop_vertical(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical);
  return jret;
}

jsvalue_t wrap_progress_bar_t_get_prop_show_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  progress_bar_t* obj = (progress_bar_t*)jsvalue_get_pointer(ctx, argv[0], "progress_bar_t*");

  jret = jsvalue_create_bool(ctx, obj->show_text);
  return jret;
}

ret_t progress_bar_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_create",
                      JS_NewCFunction(ctx, wrap_progress_bar_create, "progress_bar_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_cast",
                      JS_NewCFunction(ctx, wrap_progress_bar_cast, "progress_bar_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_set_value",
                      JS_NewCFunction(ctx, wrap_progress_bar_set_value, "progress_bar_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_set_max",
                      JS_NewCFunction(ctx, wrap_progress_bar_set_max, "progress_bar_set_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_set_vertical",
                      JS_NewCFunction(ctx, wrap_progress_bar_set_vertical, "progress_bar_set_vertical", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_set_show_text",
                      JS_NewCFunction(ctx, wrap_progress_bar_set_show_text, "progress_bar_set_show_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_get_percent",
                      JS_NewCFunction(ctx, wrap_progress_bar_get_percent, "progress_bar_get_percent", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_progress_bar_t_get_prop_value, "progress_bar_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_t_get_prop_max",
                      JS_NewCFunction(ctx, wrap_progress_bar_t_get_prop_max, "progress_bar_t_get_prop_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_t_get_prop_vertical",
                      JS_NewCFunction(ctx, wrap_progress_bar_t_get_prop_vertical, "progress_bar_t_get_prop_vertical", 1));
  JS_SetPropertyStr(ctx, global_obj, "progress_bar_t_get_prop_show_text",
                      JS_NewCFunction(ctx, wrap_progress_bar_t_get_prop_show_text, "progress_bar_t_get_prop_show_text", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_object_ref(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  object_t* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (object_t*)object_ref(obj);

  jret = jsvalue_create_object(ctx, ret, "object_t*", (tk_destroy_t)object_unref);
  }
  return jret;
}

jsvalue_t wrap_object_get_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  const char* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (const char*)object_get_type(obj);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_desc(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  const char* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (const char*)object_get_desc(obj);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  uint32_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (uint32_t)object_get_size(obj);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_is_collection(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (bool_t)object_is_collection(obj);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)object_set_name(obj, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_compare(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  int ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  object_t* other = (object_t*)jsvalue_get_pointer(ctx, argv[1], "object_t*");
  ret = (int)object_compare(obj, other);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
  ret = (ret_t)object_get_prop(obj, name, v);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  const char* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (const char*)object_get_prop_str(obj, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_pointer(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  void* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (void*)object_get_prop_pointer(obj, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "void*");
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_object(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  object_t* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (object_t*)object_get_prop_object(obj, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "object_t*");
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  int32_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (int32_t)object_get_prop_int(obj, name, defval);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_bool(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  bool_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t defval = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (bool_t)object_get_prop_bool(obj, name, defval);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_float(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  float_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t defval = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (float_t)object_get_prop_float(obj, name, defval);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_remove_prop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)object_remove_prop(obj, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  value_t* value = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
  ret = (ret_t)object_set_prop(obj, name, value);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_str(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* value = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)object_set_prop_str(obj, name, value);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_object(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  object_t* value = (object_t*)jsvalue_get_pointer(ctx, argv[2], "object_t*");
  ret = (ret_t)object_set_prop_object(obj, name, value);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)object_set_prop_int(obj, name, value);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_bool(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (ret_t)object_set_prop_bool(obj, name, value);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_set_prop_float(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)object_set_prop_float(obj, name, value);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_copy_prop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  object_t* src = (object_t*)jsvalue_get_pointer(ctx, argv[1], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)object_copy_prop(obj, src, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_has_prop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  bool_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (bool_t)object_has_prop(obj, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_eval(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* expr = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  value_t* v = (value_t*)jsvalue_get_pointer(ctx, argv[2], "value_t*");
  ret = (ret_t)object_eval(obj, expr, v);
  jsvalue_free_str(ctx, expr);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_can_exec(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  bool_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* args = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (bool_t)object_can_exec(obj, name, args);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, args);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_exec(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* args = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)object_exec(obj, name, args);
  jsvalue_free_str(ctx, name);
  jsvalue_free_str(ctx, args);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_notify_changed(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (ret_t)object_notify_changed(obj);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_str_by_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  const char* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (const char*)object_get_prop_str_by_path(obj, path);
  jsvalue_free_str(ctx, path);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_pointer_by_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  void* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (void*)object_get_prop_pointer_by_path(obj, path);
  jsvalue_free_str(ctx, path);

  jret = jsvalue_create_pointer(ctx, ret, "void*");
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_object_by_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  object_t* ret = NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (object_t*)object_get_prop_object_by_path(obj, path);
  jsvalue_free_str(ctx, path);

  jret = jsvalue_create_pointer(ctx, ret, "object_t*");
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_int_by_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  int32_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  int32_t defval = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (int32_t)object_get_prop_int_by_path(obj, path, defval);
  jsvalue_free_str(ctx, path);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_bool_by_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  bool_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  bool_t defval = (bool_t)jsvalue_get_boolean_value(ctx, argv[2]);
  ret = (bool_t)object_get_prop_bool_by_path(obj, path, defval);
  jsvalue_free_str(ctx, path);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_get_prop_float_by_path(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  float_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  const char* path = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  float_t defval = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (float_t)object_get_prop_float_by_path(obj, path, defval);
  jsvalue_free_str(ctx, path);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_t_get_prop_ref_count(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");

  jret = jsvalue_create_int(ctx, obj->ref_count);
  return jret;
}

jsvalue_t wrap_object_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

ret_t object_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "object_get_prop_pointer",
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
  JS_SetPropertyStr(ctx, global_obj, "object_get_prop_str_by_path",
                      JS_NewCFunction(ctx, wrap_object_get_prop_str_by_path, "object_get_prop_str_by_path", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_prop_pointer_by_path",
                      JS_NewCFunction(ctx, wrap_object_get_prop_pointer_by_path, "object_get_prop_pointer_by_path", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_prop_object_by_path",
                      JS_NewCFunction(ctx, wrap_object_get_prop_object_by_path, "object_get_prop_object_by_path", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_prop_int_by_path",
                      JS_NewCFunction(ctx, wrap_object_get_prop_int_by_path, "object_get_prop_int_by_path", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_prop_bool_by_path",
                      JS_NewCFunction(ctx, wrap_object_get_prop_bool_by_path, "object_get_prop_bool_by_path", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_get_prop_float_by_path",
                      JS_NewCFunction(ctx, wrap_object_get_prop_float_by_path, "object_get_prop_float_by_path", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_t_get_prop_ref_count",
                      JS_NewCFunction(ctx, wrap_object_t_get_prop_ref_count, "object_t_get_prop_ref_count", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_t_get_prop_name",
                      JS_NewCFunction(ctx, wrap_object_t_get_prop_name, "object_t_get_prop_name", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_pages_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)pages_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "pages_t*");
  }
  return jret;
}

jsvalue_t wrap_pages_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)pages_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "pages_t*");
  }
  return jret;
}

jsvalue_t wrap_pages_set_active(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)pages_set_active(widget, index);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_pages_set_active_by_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)pages_set_active_by_name(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_pages_t_get_prop_active(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pages_t* obj = (pages_t*)jsvalue_get_pointer(ctx, argv[0], "pages_t*");

  jret = jsvalue_create_int(ctx, obj->active);
  return jret;
}

ret_t pages_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "pages_create",
                      JS_NewCFunction(ctx, wrap_pages_create, "pages_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "pages_cast",
                      JS_NewCFunction(ctx, wrap_pages_cast, "pages_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "pages_set_active",
                      JS_NewCFunction(ctx, wrap_pages_set_active, "pages_set_active", 1));
  JS_SetPropertyStr(ctx, global_obj, "pages_set_active_by_name",
                      JS_NewCFunction(ctx, wrap_pages_set_active_by_name, "pages_set_active_by_name", 1));
  JS_SetPropertyStr(ctx, global_obj, "pages_t_get_prop_active",
                      JS_NewCFunction(ctx, wrap_pages_t_get_prop_active, "pages_t_get_prop_active", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_line_number_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)line_number_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "line_number_t*");
  }
  return jret;
}

jsvalue_t wrap_line_number_set_top_margin(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t top_margin = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)line_number_set_top_margin(widget, top_margin);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_line_number_set_bottom_margin(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t bottom_margin = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)line_number_set_bottom_margin(widget, bottom_margin);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_line_number_set_line_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t line_height = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)line_number_set_line_height(widget, line_height);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_line_number_set_yoffset(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t yoffset = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)line_number_set_yoffset(widget, yoffset);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_line_number_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)line_number_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "line_number_t*");
  }
  return jret;
}

ret_t line_number_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "line_number_create",
                      JS_NewCFunction(ctx, wrap_line_number_create, "line_number_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "line_number_set_top_margin",
                      JS_NewCFunction(ctx, wrap_line_number_set_top_margin, "line_number_set_top_margin", 1));
  JS_SetPropertyStr(ctx, global_obj, "line_number_set_bottom_margin",
                      JS_NewCFunction(ctx, wrap_line_number_set_bottom_margin, "line_number_set_bottom_margin", 1));
  JS_SetPropertyStr(ctx, global_obj, "line_number_set_line_height",
                      JS_NewCFunction(ctx, wrap_line_number_set_line_height, "line_number_set_line_height", 1));
  JS_SetPropertyStr(ctx, global_obj, "line_number_set_yoffset",
                      JS_NewCFunction(ctx, wrap_line_number_set_yoffset, "line_number_set_yoffset", 1));
  JS_SetPropertyStr(ctx, global_obj, "line_number_cast",
                      JS_NewCFunction(ctx, wrap_line_number_cast, "line_number_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_overlay_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)overlay_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "overlay_t*");
  }
  return jret;
}

jsvalue_t wrap_overlay_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)overlay_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "overlay_t*");
  }
  return jret;
}

ret_t overlay_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "overlay_create",
                      JS_NewCFunction(ctx, wrap_overlay_create, "overlay_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "overlay_cast",
                      JS_NewCFunction(ctx, wrap_overlay_cast, "overlay_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_image_value_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)image_value_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "image_value_t*");
  }
  return jret;
}

jsvalue_t wrap_image_value_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_value_set_image(widget, image);
  jsvalue_free_str(ctx, image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_value_set_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_value_set_format(widget, format);
  jsvalue_free_str(ctx, format);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_value_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t value = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)image_value_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_value_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)image_value_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "image_value_t*");
  }
  return jret;
}

jsvalue_t wrap_image_value_t_get_prop_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_image_value_t_get_prop_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_string(ctx, obj->format);
  return jret;
}

jsvalue_t wrap_image_value_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_value_t* obj = (image_value_t*)jsvalue_get_pointer(ctx, argv[0], "image_value_t*");

  jret = jsvalue_create_number(ctx, obj->value);
  return jret;
}

ret_t image_value_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "image_value_t_get_prop_image",
                      JS_NewCFunction(ctx, wrap_image_value_t_get_prop_image, "image_value_t_get_prop_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_value_t_get_prop_format",
                      JS_NewCFunction(ctx, wrap_image_value_t_get_prop_format, "image_value_t_get_prop_format", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_value_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_image_value_t_get_prop_value, "image_value_t_get_prop_value", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_image_animation_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)image_animation_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "image_animation_t*");
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_loop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t loop = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_loop(widget, loop);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_animation_set_image(widget, image);
  jsvalue_free_str(ctx, image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_interval(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t interval = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_interval(widget, interval);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_delay(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t delay = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_delay(widget, delay);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_auto_play(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t auto_play = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_auto_play(widget, auto_play);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_sequence(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* sequence = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_animation_set_sequence(widget, sequence);
  jsvalue_free_str(ctx, sequence);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_range_sequence(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t start_index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t end_index = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)image_animation_set_range_sequence(widget, start_index, end_index);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_play(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)image_animation_play(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_stop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)image_animation_stop(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_pause(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)image_animation_pause(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_next(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)image_animation_next(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_animation_set_format(widget, format);
  jsvalue_free_str(ctx, format);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_set_unload_after_paint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t unload_after_paint = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_animation_set_unload_after_paint(widget, unload_after_paint);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_animation_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)image_animation_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "image_animation_t*");
  }
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_sequence(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_string(ctx, obj->sequence);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_start_index(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->start_index);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_end_index(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->end_index);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_loop(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->loop);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_auto_play(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_play);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_unload_after_paint(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_bool(ctx, obj->unload_after_paint);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_string(ctx, obj->format);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_interval(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->interval);
  return jret;
}

jsvalue_t wrap_image_animation_t_get_prop_delay(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_animation_t* obj = (image_animation_t*)jsvalue_get_pointer(ctx, argv[0], "image_animation_t*");

  jret = jsvalue_create_int(ctx, obj->delay);
  return jret;
}

ret_t image_animation_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "image_animation_create",
                      JS_NewCFunction(ctx, wrap_image_animation_create, "image_animation_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_set_loop",
                      JS_NewCFunction(ctx, wrap_image_animation_set_loop, "image_animation_set_loop", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_set_image",
                      JS_NewCFunction(ctx, wrap_image_animation_set_image, "image_animation_set_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_set_interval",
                      JS_NewCFunction(ctx, wrap_image_animation_set_interval, "image_animation_set_interval", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_set_delay",
                      JS_NewCFunction(ctx, wrap_image_animation_set_delay, "image_animation_set_delay", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_set_auto_play",
                      JS_NewCFunction(ctx, wrap_image_animation_set_auto_play, "image_animation_set_auto_play", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_set_sequence",
                      JS_NewCFunction(ctx, wrap_image_animation_set_sequence, "image_animation_set_sequence", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_set_range_sequence",
                      JS_NewCFunction(ctx, wrap_image_animation_set_range_sequence, "image_animation_set_range_sequence", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_play",
                      JS_NewCFunction(ctx, wrap_image_animation_play, "image_animation_play", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_stop",
                      JS_NewCFunction(ctx, wrap_image_animation_stop, "image_animation_stop", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_pause",
                      JS_NewCFunction(ctx, wrap_image_animation_pause, "image_animation_pause", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_next",
                      JS_NewCFunction(ctx, wrap_image_animation_next, "image_animation_next", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_set_format",
                      JS_NewCFunction(ctx, wrap_image_animation_set_format, "image_animation_set_format", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_set_unload_after_paint",
                      JS_NewCFunction(ctx, wrap_image_animation_set_unload_after_paint, "image_animation_set_unload_after_paint", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_cast",
                      JS_NewCFunction(ctx, wrap_image_animation_cast, "image_animation_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_image",
                      JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_image, "image_animation_t_get_prop_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_sequence",
                      JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_sequence, "image_animation_t_get_prop_sequence", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_start_index",
                      JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_start_index, "image_animation_t_get_prop_start_index", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_end_index",
                      JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_end_index, "image_animation_t_get_prop_end_index", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_loop",
                      JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_loop, "image_animation_t_get_prop_loop", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_auto_play",
                      JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_auto_play, "image_animation_t_get_prop_auto_play", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_unload_after_paint",
                      JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_unload_after_paint, "image_animation_t_get_prop_unload_after_paint", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_format",
                      JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_format, "image_animation_t_get_prop_format", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_interval",
                      JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_interval, "image_animation_t_get_prop_interval", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_animation_t_get_prop_delay",
                      JS_NewCFunction(ctx, wrap_image_animation_t_get_prop_delay, "image_animation_t_get_prop_delay", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_guage_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)guage_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "guage_t*");
  }
  return jret;
}

jsvalue_t wrap_guage_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)guage_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "guage_t*");
  }
  return jret;
}

jsvalue_t wrap_guage_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)guage_set_image(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_set_draw_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)guage_set_draw_type(widget, draw_type);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_t_get_prop_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  guage_t* obj = (guage_t*)jsvalue_get_pointer(ctx, argv[0], "guage_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_guage_t_get_prop_draw_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  guage_t* obj = (guage_t*)jsvalue_get_pointer(ctx, argv[0], "guage_t*");

  jret = jsvalue_create_number(ctx, obj->draw_type);
  return jret;
}

ret_t guage_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "guage_t_get_prop_draw_type",
                      JS_NewCFunction(ctx, wrap_guage_t_get_prop_draw_type, "guage_t_get_prop_draw_type", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_guage_pointer_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)guage_pointer_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "guage_pointer_t*");
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)guage_pointer_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "guage_pointer_t*");
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_set_angle(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t angle = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)guage_pointer_set_angle(widget, angle);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* image = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)guage_pointer_set_image(widget, image);
  jsvalue_free_str(ctx, image);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_set_anchor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* anchor_x = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* anchor_y = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)guage_pointer_set_anchor(widget, anchor_x, anchor_y);
  jsvalue_free_str(ctx, anchor_x);
  jsvalue_free_str(ctx, anchor_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_guage_pointer_t_get_prop_angle(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = jsvalue_create_int(ctx, obj->angle);
  return jret;
}

jsvalue_t wrap_guage_pointer_t_get_prop_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_guage_pointer_t_get_prop_anchor_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_x);
  return jret;
}

jsvalue_t wrap_guage_pointer_t_get_prop_anchor_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  guage_pointer_t* obj = (guage_pointer_t*)jsvalue_get_pointer(ctx, argv[0], "guage_pointer_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_y);
  return jret;
}

ret_t guage_pointer_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_create",
                      JS_NewCFunction(ctx, wrap_guage_pointer_create, "guage_pointer_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_cast",
                      JS_NewCFunction(ctx, wrap_guage_pointer_cast, "guage_pointer_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_set_angle",
                      JS_NewCFunction(ctx, wrap_guage_pointer_set_angle, "guage_pointer_set_angle", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_set_image",
                      JS_NewCFunction(ctx, wrap_guage_pointer_set_image, "guage_pointer_set_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_set_anchor",
                      JS_NewCFunction(ctx, wrap_guage_pointer_set_anchor, "guage_pointer_set_anchor", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_t_get_prop_angle",
                      JS_NewCFunction(ctx, wrap_guage_pointer_t_get_prop_angle, "guage_pointer_t_get_prop_angle", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_t_get_prop_image",
                      JS_NewCFunction(ctx, wrap_guage_pointer_t_get_prop_image, "guage_pointer_t_get_prop_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_t_get_prop_anchor_x",
                      JS_NewCFunction(ctx, wrap_guage_pointer_t_get_prop_anchor_x, "guage_pointer_t_get_prop_anchor_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "guage_pointer_t_get_prop_anchor_y",
                      JS_NewCFunction(ctx, wrap_guage_pointer_t_get_prop_anchor_y, "guage_pointer_t_get_prop_anchor_y", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_label_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)label_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "label_t*");
  }
  return jret;
}

jsvalue_t wrap_label_set_length(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t length = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)label_set_length(widget, length);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_label_resize_to_content(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t min_w = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t max_w = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  uint32_t min_h = (uint32_t)jsvalue_get_int_value(ctx, argv[3]);
  uint32_t max_h = (uint32_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (ret_t)label_resize_to_content(widget, min_w, max_w, min_h, max_h);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_label_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)label_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "label_t*");
  }
  return jret;
}

jsvalue_t wrap_label_t_get_prop_length(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  label_t* obj = (label_t*)jsvalue_get_pointer(ctx, argv[0], "label_t*");

  jret = jsvalue_create_int(ctx, obj->length);
  return jret;
}

ret_t label_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "label_create",
                      JS_NewCFunction(ctx, wrap_label_create, "label_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "label_set_length",
                      JS_NewCFunction(ctx, wrap_label_set_length, "label_set_length", 1));
  JS_SetPropertyStr(ctx, global_obj, "label_resize_to_content",
                      JS_NewCFunction(ctx, wrap_label_resize_to_content, "label_resize_to_content", 1));
  JS_SetPropertyStr(ctx, global_obj, "label_cast",
                      JS_NewCFunction(ctx, wrap_label_cast, "label_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "label_t_get_prop_length",
                      JS_NewCFunction(ctx, wrap_label_t_get_prop_length, "label_t_get_prop_length", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_draggable_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)draggable_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "draggable_t*");
  }
  return jret;
}

jsvalue_t wrap_draggable_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)draggable_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "draggable_t*");
  }
  return jret;
}

jsvalue_t wrap_draggable_set_top(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t top = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_top(widget, top);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_bottom(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t bottom = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_bottom(widget, bottom);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_left(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t left = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_left(widget, left);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_right(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t right = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_right(widget, right);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_vertical_only(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t vertical_only = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_vertical_only(widget, vertical_only);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_horizontal_only(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t horizontal_only = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_horizontal_only(widget, horizontal_only);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_set_drag_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t drag_window = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)draggable_set_drag_window(widget, drag_window);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_top(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->top);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_bottom(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->bottom);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_left(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->left);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_right(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_int(ctx, obj->right);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_vertical_only(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_bool(ctx, obj->vertical_only);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_horizontal_only(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_bool(ctx, obj->horizontal_only);
  return jret;
}

jsvalue_t wrap_draggable_t_get_prop_drag_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  draggable_t* obj = (draggable_t*)jsvalue_get_pointer(ctx, argv[0], "draggable_t*");

  jret = jsvalue_create_bool(ctx, obj->drag_window);
  return jret;
}

ret_t draggable_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "draggable_create",
                      JS_NewCFunction(ctx, wrap_draggable_create, "draggable_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_cast",
                      JS_NewCFunction(ctx, wrap_draggable_cast, "draggable_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_set_top",
                      JS_NewCFunction(ctx, wrap_draggable_set_top, "draggable_set_top", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_set_bottom",
                      JS_NewCFunction(ctx, wrap_draggable_set_bottom, "draggable_set_bottom", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_set_left",
                      JS_NewCFunction(ctx, wrap_draggable_set_left, "draggable_set_left", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_set_right",
                      JS_NewCFunction(ctx, wrap_draggable_set_right, "draggable_set_right", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_set_vertical_only",
                      JS_NewCFunction(ctx, wrap_draggable_set_vertical_only, "draggable_set_vertical_only", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_set_horizontal_only",
                      JS_NewCFunction(ctx, wrap_draggable_set_horizontal_only, "draggable_set_horizontal_only", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_set_drag_window",
                      JS_NewCFunction(ctx, wrap_draggable_set_drag_window, "draggable_set_drag_window", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_t_get_prop_top",
                      JS_NewCFunction(ctx, wrap_draggable_t_get_prop_top, "draggable_t_get_prop_top", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_t_get_prop_bottom",
                      JS_NewCFunction(ctx, wrap_draggable_t_get_prop_bottom, "draggable_t_get_prop_bottom", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_t_get_prop_left",
                      JS_NewCFunction(ctx, wrap_draggable_t_get_prop_left, "draggable_t_get_prop_left", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_t_get_prop_right",
                      JS_NewCFunction(ctx, wrap_draggable_t_get_prop_right, "draggable_t_get_prop_right", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_t_get_prop_vertical_only",
                      JS_NewCFunction(ctx, wrap_draggable_t_get_prop_vertical_only, "draggable_t_get_prop_vertical_only", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_t_get_prop_horizontal_only",
                      JS_NewCFunction(ctx, wrap_draggable_t_get_prop_horizontal_only, "draggable_t_get_prop_horizontal_only", 1));
  JS_SetPropertyStr(ctx, global_obj, "draggable_t_get_prop_drag_window",
                      JS_NewCFunction(ctx, wrap_draggable_t_get_prop_drag_window, "draggable_t_get_prop_drag_window", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_group_box_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)group_box_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "group_box_t*");
  }
  return jret;
}

jsvalue_t wrap_group_box_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)group_box_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "group_box_t*");
  }
  return jret;
}

ret_t group_box_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "group_box_create",
                      JS_NewCFunction(ctx, wrap_group_box_create, "group_box_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "group_box_cast",
                      JS_NewCFunction(ctx, wrap_group_box_cast, "group_box_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_color_picker_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)color_picker_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "color_picker_t*");
  }
  return jret;
}

jsvalue_t wrap_color_picker_set_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)color_picker_set_color(widget, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_picker_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)color_picker_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "color_picker_t*");
  }
  return jret;
}

jsvalue_t wrap_color_picker_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  color_picker_t* obj = (color_picker_t*)jsvalue_get_pointer(ctx, argv[0], "color_picker_t*");

  jret = jsvalue_create_string(ctx, obj->value);
  return jret;
}

ret_t color_picker_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "color_picker_create",
                      JS_NewCFunction(ctx, wrap_color_picker_create, "color_picker_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_picker_set_color",
                      JS_NewCFunction(ctx, wrap_color_picker_set_color, "color_picker_set_color", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_picker_cast",
                      JS_NewCFunction(ctx, wrap_color_picker_cast, "color_picker_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_picker_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_color_picker_t_get_prop_value, "color_picker_t_get_prop_value", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_canvas_widget_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)canvas_widget_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "canvas_widget_t*");
  }
  return jret;
}

jsvalue_t wrap_canvas_widget_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)canvas_widget_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "canvas_widget_t*");
  }
  return jret;
}

ret_t canvas_widget_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "canvas_widget_create",
                      JS_NewCFunction(ctx, wrap_canvas_widget_create, "canvas_widget_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "canvas_widget_cast",
                      JS_NewCFunction(ctx, wrap_canvas_widget_cast, "canvas_widget_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_grid_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)grid_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "grid_t*");
  }
  return jret;
}

jsvalue_t wrap_grid_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)grid_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "grid_t*");
  }
  return jret;
}

ret_t grid_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "grid_create",
                      JS_NewCFunction(ctx, wrap_grid_create, "grid_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "grid_cast",
                      JS_NewCFunction(ctx, wrap_grid_cast, "grid_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_grid_item_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)grid_item_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "grid_item_t*");
  }
  return jret;
}

jsvalue_t wrap_grid_item_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)grid_item_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "grid_item_t*");
  }
  return jret;
}

ret_t grid_item_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "grid_item_create",
                      JS_NewCFunction(ctx, wrap_grid_item_create, "grid_item_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "grid_item_cast",
                      JS_NewCFunction(ctx, wrap_grid_item_cast, "grid_item_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_window_manager(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  widget_t* ret = NULL;
  ret = (widget_t*)window_manager();

  jret = jsvalue_create_pointer(ctx, ret, "window_manager_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_manager_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "window_manager_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_top_main_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_manager_get_top_main_window(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_top_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_manager_get_top_window(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_prev_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_manager_get_prev_window(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_pointer_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  xy_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (xy_t)window_manager_get_pointer_x(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_pointer_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  xy_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (xy_t)window_manager_get_pointer_y(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_get_pointer_pressed(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)window_manager_get_pointer_pressed(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_set_show_fps(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t show_fps = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)window_manager_set_show_fps(widget, show_fps);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_set_screen_saver_time(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t screen_saver_time = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)window_manager_set_screen_saver_time(widget, screen_saver_time);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_set_cursor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* cursor = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)window_manager_set_cursor(widget, cursor);
  jsvalue_free_str(ctx, cursor);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_back(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)window_manager_back(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_back_to_home(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)window_manager_back_to_home(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_manager_back_to(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* target = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)window_manager_back_to(widget, target);
  jsvalue_free_str(ctx, target);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

ret_t window_manager_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "window_manager",
                      JS_NewCFunction(ctx, wrap_window_manager, "window_manager", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_cast",
                      JS_NewCFunction(ctx, wrap_window_manager_cast, "window_manager_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_get_top_main_window",
                      JS_NewCFunction(ctx, wrap_window_manager_get_top_main_window, "window_manager_get_top_main_window", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_get_top_window",
                      JS_NewCFunction(ctx, wrap_window_manager_get_top_window, "window_manager_get_top_window", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_get_prev_window",
                      JS_NewCFunction(ctx, wrap_window_manager_get_prev_window, "window_manager_get_prev_window", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_get_pointer_x",
                      JS_NewCFunction(ctx, wrap_window_manager_get_pointer_x, "window_manager_get_pointer_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_get_pointer_y",
                      JS_NewCFunction(ctx, wrap_window_manager_get_pointer_y, "window_manager_get_pointer_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_get_pointer_pressed",
                      JS_NewCFunction(ctx, wrap_window_manager_get_pointer_pressed, "window_manager_get_pointer_pressed", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_set_show_fps",
                      JS_NewCFunction(ctx, wrap_window_manager_set_show_fps, "window_manager_set_show_fps", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_set_screen_saver_time",
                      JS_NewCFunction(ctx, wrap_window_manager_set_screen_saver_time, "window_manager_set_screen_saver_time", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_set_cursor",
                      JS_NewCFunction(ctx, wrap_window_manager_set_cursor, "window_manager_set_cursor", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_back",
                      JS_NewCFunction(ctx, wrap_window_manager_back, "window_manager_back", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_back_to_home",
                      JS_NewCFunction(ctx, wrap_window_manager_back_to_home, "window_manager_back_to_home", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_manager_back_to",
                      JS_NewCFunction(ctx, wrap_window_manager_back_to, "window_manager_back_to", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_window_base_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_base_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "window_base_t*");
  }
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_theme(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_string(ctx, obj->theme);
  return jret;
}

jsvalue_t wrap_window_base_t_get_prop_closable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  window_base_t* obj = (window_base_t*)jsvalue_get_pointer(ctx, argv[0], "window_base_t*");

  jret = jsvalue_create_number(ctx, obj->closable);
  return jret;
}

ret_t window_base_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "window_base_cast",
                      JS_NewCFunction(ctx, wrap_window_base_cast, "window_base_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_base_t_get_prop_theme",
                      JS_NewCFunction(ctx, wrap_window_base_t_get_prop_theme, "window_base_t_get_prop_theme", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_base_t_get_prop_closable",
                      JS_NewCFunction(ctx, wrap_window_base_t_get_prop_closable, "window_base_t_get_prop_closable", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_edit_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)edit_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "edit_t*");
  }
  return jret;
}

jsvalue_t wrap_edit_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)edit_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "edit_t*");
  }
  return jret;
}

jsvalue_t wrap_edit_get_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)edit_get_int(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_get_double(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  double ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (double)edit_get_double(widget);

  jret = jsvalue_create_number(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)edit_set_int(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_double(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double value = (double)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)edit_set_double(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_text_limit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t min = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  uint32_t max = (uint32_t)jsvalue_get_int_value(ctx, argv[2]);
  ret = (ret_t)edit_set_text_limit(widget, min, max);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_int_limit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t min = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  int32_t max = (int32_t)jsvalue_get_int_value(ctx, argv[2]);
  int32_t step = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)edit_set_int_limit(widget, min, max, step);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_float_limit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  double min = (double)jsvalue_get_number_value(ctx, argv[1]);
  double max = (double)jsvalue_get_number_value(ctx, argv[2]);
  double step = (double)jsvalue_get_number_value(ctx, argv[3]);
  ret = (ret_t)edit_set_float_limit(widget, min, max, step);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_readonly(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t readonly = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_readonly(widget, readonly);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_auto_fix(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t auto_fix = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_auto_fix(widget, auto_fix);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_select_none_when_focused(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t select_none_when_focused = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_select_none_when_focused(widget, select_none_when_focused);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_open_im_when_focused(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t open_im_when_focused = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_open_im_when_focused(widget, open_im_when_focused);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_input_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  input_type_t type = (input_type_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)edit_set_input_type(widget, type);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_input_tips(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* tips = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)edit_set_input_tips(widget, tips);
  jsvalue_free_str(ctx, tips);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_password_visible(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t password_visible = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_password_visible(widget, password_visible);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_focus(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t focus = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)edit_set_focus(widget, focus);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_set_cursor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t cursor = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)edit_set_cursor(widget, cursor);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_readonly(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->readonly);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_password_visible(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->password_visible);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_auto_fix(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->auto_fix);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_select_none_when_focused(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->select_none_when_focused);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_open_im_when_focused(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_bool(ctx, obj->open_im_when_focused);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_tips(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_string(ctx, obj->tips);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_input_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->input_type);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_min(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->min);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->max);
  return jret;
}

jsvalue_t wrap_edit_t_get_prop_step(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  edit_t* obj = (edit_t*)jsvalue_get_pointer(ctx, argv[0], "edit_t*");

  jret = jsvalue_create_number(ctx, obj->step);
  return jret;
}

ret_t edit_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "edit_set_select_none_when_focused",
                      JS_NewCFunction(ctx, wrap_edit_set_select_none_when_focused, "edit_set_select_none_when_focused", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_open_im_when_focused",
                      JS_NewCFunction(ctx, wrap_edit_set_open_im_when_focused, "edit_set_open_im_when_focused", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_input_type",
                      JS_NewCFunction(ctx, wrap_edit_set_input_type, "edit_set_input_type", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_input_tips",
                      JS_NewCFunction(ctx, wrap_edit_set_input_tips, "edit_set_input_tips", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_password_visible",
                      JS_NewCFunction(ctx, wrap_edit_set_password_visible, "edit_set_password_visible", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_focus",
                      JS_NewCFunction(ctx, wrap_edit_set_focus, "edit_set_focus", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_set_cursor",
                      JS_NewCFunction(ctx, wrap_edit_set_cursor, "edit_set_cursor", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_t_get_prop_readonly",
                      JS_NewCFunction(ctx, wrap_edit_t_get_prop_readonly, "edit_t_get_prop_readonly", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_t_get_prop_password_visible",
                      JS_NewCFunction(ctx, wrap_edit_t_get_prop_password_visible, "edit_t_get_prop_password_visible", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_t_get_prop_auto_fix",
                      JS_NewCFunction(ctx, wrap_edit_t_get_prop_auto_fix, "edit_t_get_prop_auto_fix", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_t_get_prop_select_none_when_focused",
                      JS_NewCFunction(ctx, wrap_edit_t_get_prop_select_none_when_focused, "edit_t_get_prop_select_none_when_focused", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_t_get_prop_open_im_when_focused",
                      JS_NewCFunction(ctx, wrap_edit_t_get_prop_open_im_when_focused, "edit_t_get_prop_open_im_when_focused", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_t_get_prop_tips",
                      JS_NewCFunction(ctx, wrap_edit_t_get_prop_tips, "edit_t_get_prop_tips", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_t_get_prop_input_type",
                      JS_NewCFunction(ctx, wrap_edit_t_get_prop_input_type, "edit_t_get_prop_input_type", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_t_get_prop_min",
                      JS_NewCFunction(ctx, wrap_edit_t_get_prop_min, "edit_t_get_prop_min", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_t_get_prop_max",
                      JS_NewCFunction(ctx, wrap_edit_t_get_prop_max, "edit_t_get_prop_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "edit_t_get_prop_step",
                      JS_NewCFunction(ctx, wrap_edit_t_get_prop_step, "edit_t_get_prop_step", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_style_mutable_set_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)style_mutable_set_name(s, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_mutable_set_int(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 4) {
  ret_t ret = 0;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  const char* state = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  int32_t val = (int32_t)jsvalue_get_int_value(ctx, argv[3]);
  ret = (ret_t)style_mutable_set_int(s, state, name, val);
  jsvalue_free_str(ctx, state);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_style_mutable_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  style_t* ret = NULL;
  style_t* s = (style_t*)jsvalue_get_pointer(ctx, argv[0], "style_t*");
  ret = (style_t*)style_mutable_cast(s);

  jret = jsvalue_create_pointer(ctx, ret, "style_mutable_t*");
  }
  return jret;
}

jsvalue_t wrap_style_mutable_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  style_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  style_t* default_style = (style_t*)jsvalue_get_pointer(ctx, argv[1], "style_t*");
  ret = (style_t*)style_mutable_create(widget, default_style);

  jret = jsvalue_create_pointer(ctx, ret, "style_mutable_t*");
  }
  return jret;
}

jsvalue_t wrap_style_mutable_t_get_prop_name(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  style_mutable_t* obj = (style_mutable_t*)jsvalue_get_pointer(ctx, argv[0], "style_mutable_t*");

  jret = jsvalue_create_string(ctx, obj->name);
  return jret;
}

ret_t style_mutable_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "style_mutable_set_name",
                      JS_NewCFunction(ctx, wrap_style_mutable_set_name, "style_mutable_set_name", 1));
  JS_SetPropertyStr(ctx, global_obj, "style_mutable_set_int",
                      JS_NewCFunction(ctx, wrap_style_mutable_set_int, "style_mutable_set_int", 1));
  JS_SetPropertyStr(ctx, global_obj, "style_mutable_cast",
                      JS_NewCFunction(ctx, wrap_style_mutable_cast, "style_mutable_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "style_mutable_create",
                      JS_NewCFunction(ctx, wrap_style_mutable_create, "style_mutable_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "style_mutable_t_get_prop_name",
                      JS_NewCFunction(ctx, wrap_style_mutable_t_get_prop_name, "style_mutable_t_get_prop_name", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_dragger_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dragger_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "dragger_t*");
  }
  return jret;
}

jsvalue_t wrap_dragger_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dragger_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "dragger_t*");
  }
  return jret;
}

jsvalue_t wrap_dragger_set_range(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x_min = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y_min = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  xy_t x_max = (xy_t)jsvalue_get_int_value(ctx, argv[3]);
  xy_t y_max = (xy_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dragger_set_range(widget, x_min, y_min, x_max, y_max);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_dragger_t_get_prop_x_min(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->x_min);
  return jret;
}

jsvalue_t wrap_dragger_t_get_prop_y_min(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->y_min);
  return jret;
}

jsvalue_t wrap_dragger_t_get_prop_x_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->x_max);
  return jret;
}

jsvalue_t wrap_dragger_t_get_prop_y_max(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  dragger_t* obj = (dragger_t*)jsvalue_get_pointer(ctx, argv[0], "dragger_t*");

  jret = jsvalue_create_int(ctx, obj->y_max);
  return jret;
}

ret_t dragger_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "dragger_create",
                      JS_NewCFunction(ctx, wrap_dragger_create, "dragger_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "dragger_cast",
                      JS_NewCFunction(ctx, wrap_dragger_cast, "dragger_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "dragger_set_range",
                      JS_NewCFunction(ctx, wrap_dragger_set_range, "dragger_set_range", 1));
  JS_SetPropertyStr(ctx, global_obj, "dragger_t_get_prop_x_min",
                      JS_NewCFunction(ctx, wrap_dragger_t_get_prop_x_min, "dragger_t_get_prop_x_min", 1));
  JS_SetPropertyStr(ctx, global_obj, "dragger_t_get_prop_y_min",
                      JS_NewCFunction(ctx, wrap_dragger_t_get_prop_y_min, "dragger_t_get_prop_y_min", 1));
  JS_SetPropertyStr(ctx, global_obj, "dragger_t_get_prop_x_max",
                      JS_NewCFunction(ctx, wrap_dragger_t_get_prop_x_max, "dragger_t_get_prop_x_max", 1));
  JS_SetPropertyStr(ctx, global_obj, "dragger_t_get_prop_y_max",
                      JS_NewCFunction(ctx, wrap_dragger_t_get_prop_y_max, "dragger_t_get_prop_y_max", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_image_base_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)image_base_set_image(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_rotation(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t rotation = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)image_base_set_rotation(widget, rotation);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_scale(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t scale_x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t scale_y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)image_base_set_scale(widget, scale_x, scale_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_anchor(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  float_t anchor_x = (float_t)jsvalue_get_number_value(ctx, argv[1]);
  float_t anchor_y = (float_t)jsvalue_get_number_value(ctx, argv[2]);
  ret = (ret_t)image_base_set_anchor(widget, anchor_x, anchor_y);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_selected(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t selected = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_base_set_selected(widget, selected);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_selectable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t selectable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_base_set_selectable(widget, selectable);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_set_clickable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t clickable = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)image_base_set_clickable(widget, clickable);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_base_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)image_base_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "image_base_t*");
  }
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_string(ctx, obj->image);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_anchor_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_x);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_anchor_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->anchor_y);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_scale_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->scale_x);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_scale_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->scale_y);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_rotation(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_number(ctx, obj->rotation);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_clickable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_bool(ctx, obj->clickable);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_selectable(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_bool(ctx, obj->selectable);
  return jret;
}

jsvalue_t wrap_image_base_t_get_prop_selected(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_base_t* obj = (image_base_t*)jsvalue_get_pointer(ctx, argv[0], "image_base_t*");

  jret = jsvalue_create_bool(ctx, obj->selected);
  return jret;
}

ret_t image_base_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "image_base_set_image",
                      JS_NewCFunction(ctx, wrap_image_base_set_image, "image_base_set_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_set_rotation",
                      JS_NewCFunction(ctx, wrap_image_base_set_rotation, "image_base_set_rotation", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_set_scale",
                      JS_NewCFunction(ctx, wrap_image_base_set_scale, "image_base_set_scale", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_set_anchor",
                      JS_NewCFunction(ctx, wrap_image_base_set_anchor, "image_base_set_anchor", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_set_selected",
                      JS_NewCFunction(ctx, wrap_image_base_set_selected, "image_base_set_selected", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_set_selectable",
                      JS_NewCFunction(ctx, wrap_image_base_set_selectable, "image_base_set_selectable", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_set_clickable",
                      JS_NewCFunction(ctx, wrap_image_base_set_clickable, "image_base_set_clickable", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_cast",
                      JS_NewCFunction(ctx, wrap_image_base_cast, "image_base_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_image",
                      JS_NewCFunction(ctx, wrap_image_base_t_get_prop_image, "image_base_t_get_prop_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_anchor_x",
                      JS_NewCFunction(ctx, wrap_image_base_t_get_prop_anchor_x, "image_base_t_get_prop_anchor_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_anchor_y",
                      JS_NewCFunction(ctx, wrap_image_base_t_get_prop_anchor_y, "image_base_t_get_prop_anchor_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_scale_x",
                      JS_NewCFunction(ctx, wrap_image_base_t_get_prop_scale_x, "image_base_t_get_prop_scale_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_scale_y",
                      JS_NewCFunction(ctx, wrap_image_base_t_get_prop_scale_y, "image_base_t_get_prop_scale_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_rotation",
                      JS_NewCFunction(ctx, wrap_image_base_t_get_prop_rotation, "image_base_t_get_prop_rotation", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_clickable",
                      JS_NewCFunction(ctx, wrap_image_base_t_get_prop_clickable, "image_base_t_get_prop_clickable", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_selectable",
                      JS_NewCFunction(ctx, wrap_image_base_t_get_prop_selectable, "image_base_t_get_prop_selectable", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_base_t_get_prop_selected",
                      JS_NewCFunction(ctx, wrap_image_base_t_get_prop_selected, "image_base_t_get_prop_selected", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_window_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  window_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (window_event_t*)window_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "window_event_t*");
  }
  return jret;
}

jsvalue_t wrap_window_event_t_get_prop_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  window_event_t* obj = (window_event_t*)jsvalue_get_pointer(ctx, argv[0], "window_event_t*");

  jret = jsvalue_create_pointer(ctx, obj->window, "widget_t*");
  return jret;
}

ret_t window_event_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "window_event_cast",
                      JS_NewCFunction(ctx, wrap_window_event_cast, "window_event_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "window_event_t_get_prop_window",
                      JS_NewCFunction(ctx, wrap_window_event_t_get_prop_window, "window_event_t_get_prop_window", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_paint_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  paint_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (paint_event_t*)paint_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "paint_event_t*");
  }
  return jret;
}

jsvalue_t wrap_paint_event_t_get_prop_c(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  paint_event_t* obj = (paint_event_t*)jsvalue_get_pointer(ctx, argv[0], "paint_event_t*");

  jret = jsvalue_create_pointer(ctx, obj->c, "canvas_t*");
  return jret;
}

ret_t paint_event_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "paint_event_cast",
                      JS_NewCFunction(ctx, wrap_paint_event_cast, "paint_event_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "paint_event_t_get_prop_c",
                      JS_NewCFunction(ctx, wrap_paint_event_t_get_prop_c, "paint_event_t_get_prop_c", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_key_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  key_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (key_event_t*)key_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "key_event_t*");
  }
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_key(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_int(ctx, obj->key);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_alt(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->alt);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_lalt(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->lalt);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_ralt(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ralt);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_ctrl(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ctrl);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_lctrl(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->lctrl);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_rctrl(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->rctrl);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_shift(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->shift);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_lshift(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->lshift);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_rshift(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->rshift);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_cmd(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->cmd);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_menu(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->menu);
  return jret;
}

jsvalue_t wrap_key_event_t_get_prop_capslock(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  key_event_t* obj = (key_event_t*)jsvalue_get_pointer(ctx, argv[0], "key_event_t*");

  jret = jsvalue_create_bool(ctx, obj->capslock);
  return jret;
}

ret_t key_event_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "key_event_cast",
                      JS_NewCFunction(ctx, wrap_key_event_cast, "key_event_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "key_event_t_get_prop_key",
                      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_key, "key_event_t_get_prop_key", 1));
  JS_SetPropertyStr(ctx, global_obj, "key_event_t_get_prop_alt",
                      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_alt, "key_event_t_get_prop_alt", 1));
  JS_SetPropertyStr(ctx, global_obj, "key_event_t_get_prop_lalt",
                      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_lalt, "key_event_t_get_prop_lalt", 1));
  JS_SetPropertyStr(ctx, global_obj, "key_event_t_get_prop_ralt",
                      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_ralt, "key_event_t_get_prop_ralt", 1));
  JS_SetPropertyStr(ctx, global_obj, "key_event_t_get_prop_ctrl",
                      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_ctrl, "key_event_t_get_prop_ctrl", 1));
  JS_SetPropertyStr(ctx, global_obj, "key_event_t_get_prop_lctrl",
                      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_lctrl, "key_event_t_get_prop_lctrl", 1));
  JS_SetPropertyStr(ctx, global_obj, "key_event_t_get_prop_rctrl",
                      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_rctrl, "key_event_t_get_prop_rctrl", 1));
  JS_SetPropertyStr(ctx, global_obj, "key_event_t_get_prop_shift",
                      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_shift, "key_event_t_get_prop_shift", 1));
  JS_SetPropertyStr(ctx, global_obj, "key_event_t_get_prop_lshift",
                      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_lshift, "key_event_t_get_prop_lshift", 1));
  JS_SetPropertyStr(ctx, global_obj, "key_event_t_get_prop_rshift",
                      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_rshift, "key_event_t_get_prop_rshift", 1));
  JS_SetPropertyStr(ctx, global_obj, "key_event_t_get_prop_cmd",
                      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_cmd, "key_event_t_get_prop_cmd", 1));
  JS_SetPropertyStr(ctx, global_obj, "key_event_t_get_prop_menu",
                      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_menu, "key_event_t_get_prop_menu", 1));
  JS_SetPropertyStr(ctx, global_obj, "key_event_t_get_prop_capslock",
                      JS_NewCFunction(ctx, wrap_key_event_t_get_prop_capslock, "key_event_t_get_prop_capslock", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_pointer_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  pointer_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (pointer_event_t*)pointer_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "pointer_event_t*");
  }
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_x(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_int(ctx, obj->x);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_y(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_int(ctx, obj->y);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_button(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_int(ctx, obj->button);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_pressed(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->pressed);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_alt(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->alt);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_ctrl(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ctrl);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_cmd(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->cmd);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_menu(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->menu);
  return jret;
}

jsvalue_t wrap_pointer_event_t_get_prop_shift(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  pointer_event_t* obj = (pointer_event_t*)jsvalue_get_pointer(ctx, argv[0], "pointer_event_t*");

  jret = jsvalue_create_bool(ctx, obj->shift);
  return jret;
}

ret_t pointer_event_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_cast",
                      JS_NewCFunction(ctx, wrap_pointer_event_cast, "pointer_event_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_t_get_prop_x",
                      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_x, "pointer_event_t_get_prop_x", 1));
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_t_get_prop_y",
                      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_y, "pointer_event_t_get_prop_y", 1));
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_t_get_prop_button",
                      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_button, "pointer_event_t_get_prop_button", 1));
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_t_get_prop_pressed",
                      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_pressed, "pointer_event_t_get_prop_pressed", 1));
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_t_get_prop_alt",
                      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_alt, "pointer_event_t_get_prop_alt", 1));
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_t_get_prop_ctrl",
                      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_ctrl, "pointer_event_t_get_prop_ctrl", 1));
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_t_get_prop_cmd",
                      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_cmd, "pointer_event_t_get_prop_cmd", 1));
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_t_get_prop_menu",
                      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_menu, "pointer_event_t_get_prop_menu", 1));
  JS_SetPropertyStr(ctx, global_obj, "pointer_event_t_get_prop_shift",
                      JS_NewCFunction(ctx, wrap_pointer_event_t_get_prop_shift, "pointer_event_t_get_prop_shift", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_orientation_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  orientation_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (orientation_event_t*)orientation_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "orientation_event_t*");
  }
  return jret;
}

jsvalue_t wrap_orientation_event_t_get_prop_orientation(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  orientation_event_t* obj = (orientation_event_t*)jsvalue_get_pointer(ctx, argv[0], "orientation_event_t*");

  jret = jsvalue_create_int(ctx, obj->orientation);
  return jret;
}

ret_t orientation_event_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "orientation_event_cast",
                      JS_NewCFunction(ctx, wrap_orientation_event_cast, "orientation_event_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "orientation_event_t_get_prop_orientation",
                      JS_NewCFunction(ctx, wrap_orientation_event_t_get_prop_orientation, "orientation_event_t_get_prop_orientation", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_wheel_event_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  wheel_event_t* ret = NULL;
  event_t* event = (event_t*)jsvalue_get_pointer(ctx, argv[0], "event_t*");
  ret = (wheel_event_t*)wheel_event_cast(event);

  jret = jsvalue_create_pointer(ctx, ret, "wheel_event_t*");
  }
  return jret;
}

jsvalue_t wrap_wheel_event_t_get_prop_dy(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_int(ctx, obj->dy);
  return jret;
}

jsvalue_t wrap_wheel_event_t_get_prop_alt(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_bool(ctx, obj->alt);
  return jret;
}

jsvalue_t wrap_wheel_event_t_get_prop_ctrl(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_bool(ctx, obj->ctrl);
  return jret;
}

jsvalue_t wrap_wheel_event_t_get_prop_shift(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  wheel_event_t* obj = (wheel_event_t*)jsvalue_get_pointer(ctx, argv[0], "wheel_event_t*");

  jret = jsvalue_create_bool(ctx, obj->shift);
  return jret;
}

ret_t wheel_event_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "wheel_event_cast",
                      JS_NewCFunction(ctx, wrap_wheel_event_cast, "wheel_event_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "wheel_event_t_get_prop_dy",
                      JS_NewCFunction(ctx, wrap_wheel_event_t_get_prop_dy, "wheel_event_t_get_prop_dy", 1));
  JS_SetPropertyStr(ctx, global_obj, "wheel_event_t_get_prop_alt",
                      JS_NewCFunction(ctx, wrap_wheel_event_t_get_prop_alt, "wheel_event_t_get_prop_alt", 1));
  JS_SetPropertyStr(ctx, global_obj, "wheel_event_t_get_prop_ctrl",
                      JS_NewCFunction(ctx, wrap_wheel_event_t_get_prop_ctrl, "wheel_event_t_get_prop_ctrl", 1));
  JS_SetPropertyStr(ctx, global_obj, "wheel_event_t_get_prop_shift",
                      JS_NewCFunction(ctx, wrap_wheel_event_t_get_prop_shift, "wheel_event_t_get_prop_shift", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_app_bar_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)app_bar_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "app_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_app_bar_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)app_bar_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "app_bar_t*");
  }
  return jret;
}

ret_t app_bar_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "app_bar_create",
                      JS_NewCFunction(ctx, wrap_app_bar_create, "app_bar_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "app_bar_cast",
                      JS_NewCFunction(ctx, wrap_app_bar_cast, "app_bar_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_button_group_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)button_group_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "button_group_t*");
  }
  return jret;
}

jsvalue_t wrap_button_group_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)button_group_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "button_group_t*");
  }
  return jret;
}

ret_t button_group_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "button_group_create",
                      JS_NewCFunction(ctx, wrap_button_group_create, "button_group_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "button_group_cast",
                      JS_NewCFunction(ctx, wrap_button_group_cast, "button_group_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_button_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)button_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "button_t*");
  }
  return jret;
}

jsvalue_t wrap_button_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)button_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "button_t*");
  }
  return jret;
}

jsvalue_t wrap_button_set_repeat(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t repeat = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)button_set_repeat(widget, repeat);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_button_set_enable_long_press(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t enable_long_press = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)button_set_enable_long_press(widget, enable_long_press);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_button_t_get_prop_repeat(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  button_t* obj = (button_t*)jsvalue_get_pointer(ctx, argv[0], "button_t*");

  jret = jsvalue_create_int(ctx, obj->repeat);
  return jret;
}

jsvalue_t wrap_button_t_get_prop_enable_long_press(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  button_t* obj = (button_t*)jsvalue_get_pointer(ctx, argv[0], "button_t*");

  jret = jsvalue_create_bool(ctx, obj->enable_long_press);
  return jret;
}

ret_t button_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "button_create",
                      JS_NewCFunction(ctx, wrap_button_create, "button_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "button_cast",
                      JS_NewCFunction(ctx, wrap_button_cast, "button_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "button_set_repeat",
                      JS_NewCFunction(ctx, wrap_button_set_repeat, "button_set_repeat", 1));
  JS_SetPropertyStr(ctx, global_obj, "button_set_enable_long_press",
                      JS_NewCFunction(ctx, wrap_button_set_enable_long_press, "button_set_enable_long_press", 1));
  JS_SetPropertyStr(ctx, global_obj, "button_t_get_prop_repeat",
                      JS_NewCFunction(ctx, wrap_button_t_get_prop_repeat, "button_t_get_prop_repeat", 1));
  JS_SetPropertyStr(ctx, global_obj, "button_t_get_prop_enable_long_press",
                      JS_NewCFunction(ctx, wrap_button_t_get_prop_enable_long_press, "button_t_get_prop_enable_long_press", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_digit_clock_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)digit_clock_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "digit_clock_t*");
  }
  return jret;
}

jsvalue_t wrap_digit_clock_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)digit_clock_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "digit_clock_t*");
  }
  return jret;
}

jsvalue_t wrap_digit_clock_set_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* format = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)digit_clock_set_format(widget, format);
  jsvalue_free_str(ctx, format);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_digit_clock_t_get_prop_format(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  digit_clock_t* obj = (digit_clock_t*)jsvalue_get_pointer(ctx, argv[0], "digit_clock_t*");

  jret = jsvalue_create_string(ctx, obj->format);
  return jret;
}

ret_t digit_clock_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "digit_clock_create",
                      JS_NewCFunction(ctx, wrap_digit_clock_create, "digit_clock_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "digit_clock_cast",
                      JS_NewCFunction(ctx, wrap_digit_clock_cast, "digit_clock_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "digit_clock_set_format",
                      JS_NewCFunction(ctx, wrap_digit_clock_set_format, "digit_clock_set_format", 1));
  JS_SetPropertyStr(ctx, global_obj, "digit_clock_t_get_prop_format",
                      JS_NewCFunction(ctx, wrap_digit_clock_t_get_prop_format, "digit_clock_t_get_prop_format", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_check_button_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)check_button_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "check_button_t*");
  }
  return jret;
}

jsvalue_t wrap_check_button_create_radio(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)check_button_create_radio(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "check_button_t*");
  }
  return jret;
}

jsvalue_t wrap_check_button_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t value = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)check_button_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_check_button_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)check_button_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "check_button_t*");
  }
  return jret;
}

jsvalue_t wrap_check_button_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  check_button_t* obj = (check_button_t*)jsvalue_get_pointer(ctx, argv[0], "check_button_t*");

  jret = jsvalue_create_bool(ctx, obj->value);
  return jret;
}

ret_t check_button_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "check_button_create",
                      JS_NewCFunction(ctx, wrap_check_button_create, "check_button_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "check_button_create_radio",
                      JS_NewCFunction(ctx, wrap_check_button_create_radio, "check_button_create_radio", 1));
  JS_SetPropertyStr(ctx, global_obj, "check_button_set_value",
                      JS_NewCFunction(ctx, wrap_check_button_set_value, "check_button_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "check_button_cast",
                      JS_NewCFunction(ctx, wrap_check_button_cast, "check_button_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "check_button_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_check_button_t_get_prop_value, "check_button_t_get_prop_value", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_color_tile_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)color_tile_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "color_tile_t*");
  }
  return jret;
}

jsvalue_t wrap_color_tile_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)color_tile_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "color_tile_t*");
  }
  return jret;
}

jsvalue_t wrap_color_tile_set_bg_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* color = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)color_tile_set_bg_color(widget, color);
  jsvalue_free_str(ctx, color);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_color_tile_t_get_prop_bg_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  color_tile_t* obj = (color_tile_t*)jsvalue_get_pointer(ctx, argv[0], "color_tile_t*");

  jret = jsvalue_create_string(ctx, obj->bg_color);
  return jret;
}

jsvalue_t wrap_color_tile_t_get_prop_border_color(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  color_tile_t* obj = (color_tile_t*)jsvalue_get_pointer(ctx, argv[0], "color_tile_t*");

  jret = jsvalue_create_string(ctx, obj->border_color);
  return jret;
}

ret_t color_tile_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "color_tile_create",
                      JS_NewCFunction(ctx, wrap_color_tile_create, "color_tile_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_tile_cast",
                      JS_NewCFunction(ctx, wrap_color_tile_cast, "color_tile_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_tile_set_bg_color",
                      JS_NewCFunction(ctx, wrap_color_tile_set_bg_color, "color_tile_set_bg_color", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_tile_t_get_prop_bg_color",
                      JS_NewCFunction(ctx, wrap_color_tile_t_get_prop_bg_color, "color_tile_t_get_prop_bg_color", 1));
  JS_SetPropertyStr(ctx, global_obj, "color_tile_t_get_prop_border_color",
                      JS_NewCFunction(ctx, wrap_color_tile_t_get_prop_border_color, "color_tile_t_get_prop_border_color", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_column_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)column_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "column_t*");
  }
  return jret;
}

jsvalue_t wrap_column_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)column_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "column_t*");
  }
  return jret;
}

ret_t column_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "column_create",
                      JS_NewCFunction(ctx, wrap_column_create, "column_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "column_cast",
                      JS_NewCFunction(ctx, wrap_column_cast, "column_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_combo_box_item_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)combo_box_item_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "combo_box_item_t*");
  }
  return jret;
}

jsvalue_t wrap_combo_box_item_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)combo_box_item_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "combo_box_item_t*");
  }
  return jret;
}

jsvalue_t wrap_combo_box_item_set_checked(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t checked = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)combo_box_item_set_checked(widget, checked);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_item_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)combo_box_item_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_item_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_item_t* obj = (combo_box_item_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_item_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_combo_box_item_t_get_prop_checked(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_item_t* obj = (combo_box_item_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_item_t*");

  jret = jsvalue_create_bool(ctx, obj->checked);
  return jret;
}

ret_t combo_box_item_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "combo_box_item_create",
                      JS_NewCFunction(ctx, wrap_combo_box_item_create, "combo_box_item_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_item_cast",
                      JS_NewCFunction(ctx, wrap_combo_box_item_cast, "combo_box_item_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_item_set_checked",
                      JS_NewCFunction(ctx, wrap_combo_box_item_set_checked, "combo_box_item_set_checked", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_item_set_value",
                      JS_NewCFunction(ctx, wrap_combo_box_item_set_value, "combo_box_item_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_item_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_combo_box_item_t_get_prop_value, "combo_box_item_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_item_t_get_prop_checked",
                      JS_NewCFunction(ctx, wrap_combo_box_item_t_get_prop_checked, "combo_box_item_t_get_prop_checked", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_combo_box_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)combo_box_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "combo_box_t*");
  }
  return jret;
}

jsvalue_t wrap_combo_box_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)combo_box_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "combo_box_t*");
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_open_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* open_window = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)combo_box_set_open_window(widget, open_window);
  jsvalue_free_str(ctx, open_window);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_reset_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)combo_box_reset_options(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_count_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)combo_box_count_options(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_selected_index(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t index = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)combo_box_set_selected_index(widget, index);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_localize_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t localize_options = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)combo_box_set_localize_options(widget, localize_options);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)combo_box_set_value(widget, value);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_item_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t item_height = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)combo_box_set_item_height(widget, item_height);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_append_option(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 3) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  int32_t value = (int32_t)jsvalue_get_int_value(ctx, argv[1]);
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[2]);
  ret = (ret_t)combo_box_append_option(widget, value, text);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_set_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  const char* options = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)combo_box_set_options(widget, options);
  jsvalue_free_str(ctx, options);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_get_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  int32_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (int32_t)combo_box_get_value(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_get_text(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  const char* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (const char*)combo_box_get_text(widget);

  jret = jsvalue_create_string(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_open_window(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_string(ctx, obj->open_window);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_selected_index(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_int(ctx, obj->selected_index);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_value(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_int(ctx, obj->value);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_localize_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_bool(ctx, obj->localize_options);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_options(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_string(ctx, obj->options);
  return jret;
}

jsvalue_t wrap_combo_box_t_get_prop_item_height(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  combo_box_t* obj = (combo_box_t*)jsvalue_get_pointer(ctx, argv[0], "combo_box_t*");

  jret = jsvalue_create_int(ctx, obj->item_height);
  return jret;
}

ret_t combo_box_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "combo_box_create",
                      JS_NewCFunction(ctx, wrap_combo_box_create, "combo_box_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_cast",
                      JS_NewCFunction(ctx, wrap_combo_box_cast, "combo_box_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_set_open_window",
                      JS_NewCFunction(ctx, wrap_combo_box_set_open_window, "combo_box_set_open_window", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_reset_options",
                      JS_NewCFunction(ctx, wrap_combo_box_reset_options, "combo_box_reset_options", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_count_options",
                      JS_NewCFunction(ctx, wrap_combo_box_count_options, "combo_box_count_options", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_set_selected_index",
                      JS_NewCFunction(ctx, wrap_combo_box_set_selected_index, "combo_box_set_selected_index", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_set_localize_options",
                      JS_NewCFunction(ctx, wrap_combo_box_set_localize_options, "combo_box_set_localize_options", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_set_value",
                      JS_NewCFunction(ctx, wrap_combo_box_set_value, "combo_box_set_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_set_item_height",
                      JS_NewCFunction(ctx, wrap_combo_box_set_item_height, "combo_box_set_item_height", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_append_option",
                      JS_NewCFunction(ctx, wrap_combo_box_append_option, "combo_box_append_option", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_set_options",
                      JS_NewCFunction(ctx, wrap_combo_box_set_options, "combo_box_set_options", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_get_value",
                      JS_NewCFunction(ctx, wrap_combo_box_get_value, "combo_box_get_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_get_text",
                      JS_NewCFunction(ctx, wrap_combo_box_get_text, "combo_box_get_text", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_t_get_prop_open_window",
                      JS_NewCFunction(ctx, wrap_combo_box_t_get_prop_open_window, "combo_box_t_get_prop_open_window", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_t_get_prop_selected_index",
                      JS_NewCFunction(ctx, wrap_combo_box_t_get_prop_selected_index, "combo_box_t_get_prop_selected_index", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_t_get_prop_value",
                      JS_NewCFunction(ctx, wrap_combo_box_t_get_prop_value, "combo_box_t_get_prop_value", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_t_get_prop_localize_options",
                      JS_NewCFunction(ctx, wrap_combo_box_t_get_prop_localize_options, "combo_box_t_get_prop_localize_options", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_t_get_prop_options",
                      JS_NewCFunction(ctx, wrap_combo_box_t_get_prop_options, "combo_box_t_get_prop_options", 1));
  JS_SetPropertyStr(ctx, global_obj, "combo_box_t_get_prop_item_height",
                      JS_NewCFunction(ctx, wrap_combo_box_t_get_prop_item_height, "combo_box_t_get_prop_item_height", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_dialog_client_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dialog_client_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_client_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_client_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_client_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_client_t*");
  }
  return jret;
}

ret_t dialog_client_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "dialog_client_create",
                      JS_NewCFunction(ctx, wrap_dialog_client_create, "dialog_client_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_client_cast",
                      JS_NewCFunction(ctx, wrap_dialog_client_cast, "dialog_client_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_dialog_title_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dialog_title_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_title_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_title_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_title_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_title_t*");
  }
  return jret;
}

ret_t dialog_title_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "dialog_title_create",
                      JS_NewCFunction(ctx, wrap_dialog_title_create, "dialog_title_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "dialog_title_cast",
                      JS_NewCFunction(ctx, wrap_dialog_title_cast, "dialog_title_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_object_default_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  object_t* ret = NULL;
  ret = (object_t*)object_default_create();

  jret = jsvalue_create_object(ctx, ret, "object_default_t*", (tk_destroy_t)object_default_unref);
  }
  return jret;
}

jsvalue_t wrap_object_default_clear_props(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (ret_t)object_default_clear_props(obj);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_default_t_get_prop_props_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  object_default_t* obj = (object_default_t*)jsvalue_get_pointer(ctx, argv[0], "object_default_t*");

  jret = jsvalue_create_int(ctx, obj->props_size);
  return jret;
}

ret_t object_default_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "object_default_create",
                      JS_NewCFunction(ctx, wrap_object_default_create, "object_default_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_default_clear_props",
                      JS_NewCFunction(ctx, wrap_object_default_clear_props, "object_default_clear_props", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_default_t_get_prop_props_size",
                      JS_NewCFunction(ctx, wrap_object_default_t_get_prop_props_size, "object_default_t_get_prop_props_size", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_window_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)window_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_set_fullscreen(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t fullscreen = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)window_set_fullscreen(widget, fullscreen);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_open(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[0]);
  ret = (widget_t*)window_open(name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_open_and_close(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  widget_t* ret = NULL;
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[0]);
  widget_t* to_close = (widget_t*)jsvalue_get_pointer(ctx, argv[1], "widget_t*");
  ret = (widget_t*)window_open_and_close(name, to_close);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_close(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)window_close(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_close_force(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)window_close_force(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_window_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)window_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "window_t*");
  }
  return jret;
}

jsvalue_t wrap_window_t_get_prop_fullscreen(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  window_t* obj = (window_t*)jsvalue_get_pointer(ctx, argv[0], "window_t*");

  jret = jsvalue_create_bool(ctx, obj->fullscreen);
  return jret;
}

ret_t window_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "window_t_get_prop_fullscreen",
                      JS_NewCFunction(ctx, wrap_window_t_get_prop_fullscreen, "window_t_get_prop_fullscreen", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_timer_info_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  timer_info_t* ret = NULL;
  timer_info_t* timer = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");
  ret = (timer_info_t*)timer_info_cast(timer);

  jret = jsvalue_create_pointer(ctx, ret, "timer_info_t*");
  }
  return jret;
}

jsvalue_t wrap_timer_info_t_get_prop_ctx(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = jsvalue_create_pointer(ctx, obj->ctx, "void*");
  return jret;
}

jsvalue_t wrap_timer_info_t_get_prop_id(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = jsvalue_create_int(ctx, obj->id);
  return jret;
}

jsvalue_t wrap_timer_info_t_get_prop_now(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  timer_info_t* obj = (timer_info_t*)jsvalue_get_pointer(ctx, argv[0], "timer_info_t*");

  jret = jsvalue_create_int(ctx, obj->now);
  return jret;
}

ret_t timer_info_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "timer_info_cast",
                      JS_NewCFunction(ctx, wrap_timer_info_cast, "timer_info_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "timer_info_t_get_prop_ctx",
                      JS_NewCFunction(ctx, wrap_timer_info_t_get_prop_ctx, "timer_info_t_get_prop_ctx", 1));
  JS_SetPropertyStr(ctx, global_obj, "timer_info_t_get_prop_id",
                      JS_NewCFunction(ctx, wrap_timer_info_t_get_prop_id, "timer_info_t_get_prop_id", 1));
  JS_SetPropertyStr(ctx, global_obj, "timer_info_t_get_prop_now",
                      JS_NewCFunction(ctx, wrap_timer_info_t_get_prop_now, "timer_info_t_get_prop_now", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_combo_box_ex_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)combo_box_ex_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "combo_box_ex_t*");
  }
  return jret;
}

ret_t combo_box_ex_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "combo_box_ex_create",
                      JS_NewCFunction(ctx, wrap_combo_box_ex_create, "combo_box_ex_create", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_image_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)image_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "image_t*");
  }
  return jret;
}

jsvalue_t wrap_image_set_draw_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  image_draw_type_t draw_type = (image_draw_type_t)jsvalue_get_number_value(ctx, argv[1]);
  ret = (ret_t)image_set_draw_type(widget, draw_type);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_image_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)image_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "image_t*");
  }
  return jret;
}

jsvalue_t wrap_image_t_get_prop_draw_type(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  image_t* obj = (image_t*)jsvalue_get_pointer(ctx, argv[0], "image_t*");

  jret = jsvalue_create_number(ctx, obj->draw_type);
  return jret;
}

ret_t image_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "image_create",
                      JS_NewCFunction(ctx, wrap_image_create, "image_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_set_draw_type",
                      JS_NewCFunction(ctx, wrap_image_set_draw_type, "image_set_draw_type", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_cast",
                      JS_NewCFunction(ctx, wrap_image_cast, "image_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "image_t_get_prop_draw_type",
                      JS_NewCFunction(ctx, wrap_image_t_get_prop_draw_type, "image_t_get_prop_draw_type", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_gif_image_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)gif_image_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "gif_image_t*");
  }
  return jret;
}

jsvalue_t wrap_gif_image_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)gif_image_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "gif_image_t*");
  }
  return jret;
}

ret_t gif_image_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "gif_image_create",
                      JS_NewCFunction(ctx, wrap_gif_image_create, "gif_image_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "gif_image_cast",
                      JS_NewCFunction(ctx, wrap_gif_image_cast, "gif_image_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_keyboard_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)keyboard_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "keyboard_t*");
  }
  return jret;
}

jsvalue_t wrap_keyboard_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)keyboard_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "keyboard_t*");
  }
  return jret;
}

ret_t keyboard_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "keyboard_create",
                      JS_NewCFunction(ctx, wrap_keyboard_create, "keyboard_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "keyboard_cast",
                      JS_NewCFunction(ctx, wrap_keyboard_cast, "keyboard_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_popup_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)popup_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "popup_t*");
  }
  return jret;
}

jsvalue_t wrap_popup_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)popup_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "popup_t*");
  }
  return jret;
}

jsvalue_t wrap_popup_set_close_when_click(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t close_when_click = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)popup_set_close_when_click(widget, close_when_click);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_popup_set_close_when_click_outside(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  bool_t close_when_click_outside = (bool_t)jsvalue_get_boolean_value(ctx, argv[1]);
  ret = (ret_t)popup_set_close_when_click_outside(widget, close_when_click_outside);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_popup_t_get_prop_close_when_click(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  popup_t* obj = (popup_t*)jsvalue_get_pointer(ctx, argv[0], "popup_t*");

  jret = jsvalue_create_bool(ctx, obj->close_when_click);
  return jret;
}

jsvalue_t wrap_popup_t_get_prop_close_when_click_outside(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  popup_t* obj = (popup_t*)jsvalue_get_pointer(ctx, argv[0], "popup_t*");

  jret = jsvalue_create_bool(ctx, obj->close_when_click_outside);
  return jret;
}

ret_t popup_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "popup_create",
                      JS_NewCFunction(ctx, wrap_popup_create, "popup_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "popup_cast",
                      JS_NewCFunction(ctx, wrap_popup_cast, "popup_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "popup_set_close_when_click",
                      JS_NewCFunction(ctx, wrap_popup_set_close_when_click, "popup_set_close_when_click", 1));
  JS_SetPropertyStr(ctx, global_obj, "popup_set_close_when_click_outside",
                      JS_NewCFunction(ctx, wrap_popup_set_close_when_click_outside, "popup_set_close_when_click_outside", 1));
  JS_SetPropertyStr(ctx, global_obj, "popup_t_get_prop_close_when_click",
                      JS_NewCFunction(ctx, wrap_popup_t_get_prop_close_when_click, "popup_t_get_prop_close_when_click", 1));
  JS_SetPropertyStr(ctx, global_obj, "popup_t_get_prop_close_when_click_outside",
                      JS_NewCFunction(ctx, wrap_popup_t_get_prop_close_when_click_outside, "popup_t_get_prop_close_when_click_outside", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_object_array_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 0) {
  object_t* ret = NULL;
  ret = (object_t*)object_array_create();

  jret = jsvalue_create_object(ctx, ret, "object_array_t*", (tk_destroy_t)object_array_unref);
  }
  return jret;
}

jsvalue_t wrap_object_array_clear_props(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  object_t* obj = (object_t*)jsvalue_get_pointer(ctx, argv[0], "object_t*");
  ret = (ret_t)object_array_clear_props(obj);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_object_array_t_get_prop_props_size(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  object_array_t* obj = (object_array_t*)jsvalue_get_pointer(ctx, argv[0], "object_array_t*");

  jret = jsvalue_create_int(ctx, obj->props_size);
  return jret;
}

ret_t object_array_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "object_array_create",
                      JS_NewCFunction(ctx, wrap_object_array_create, "object_array_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_array_clear_props",
                      JS_NewCFunction(ctx, wrap_object_array_clear_props, "object_array_clear_props", 1));
  JS_SetPropertyStr(ctx, global_obj, "object_array_t_get_prop_props_size",
                      JS_NewCFunction(ctx, wrap_object_array_t_get_prop_props_size, "object_array_t_get_prop_props_size", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

ret_t mutable_image_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_spin_box_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)spin_box_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "spin_box_t*");
  }
  return jret;
}

jsvalue_t wrap_spin_box_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)spin_box_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "spin_box_t*");
  }
  return jret;
}

ret_t spin_box_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "spin_box_create",
                      JS_NewCFunction(ctx, wrap_spin_box_create, "spin_box_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "spin_box_cast",
                      JS_NewCFunction(ctx, wrap_spin_box_cast, "spin_box_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_system_bar_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)system_bar_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "system_bar_t*");
  }
  return jret;
}

jsvalue_t wrap_system_bar_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)system_bar_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "system_bar_t*");
  }
  return jret;
}

ret_t system_bar_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "system_bar_create",
                      JS_NewCFunction(ctx, wrap_system_bar_create, "system_bar_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "system_bar_cast",
                      JS_NewCFunction(ctx, wrap_system_bar_cast, "system_bar_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_idle_info_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  idle_info_t* ret = NULL;
  idle_info_t* idle = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");
  ret = (idle_info_t*)idle_info_cast(idle);

  jret = jsvalue_create_pointer(ctx, ret, "idle_info_t*");
  }
  return jret;
}

jsvalue_t wrap_idle_info_t_get_prop_ctx(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  idle_info_t* obj = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");

  jret = jsvalue_create_pointer(ctx, obj->ctx, "void*");
  return jret;
}

jsvalue_t wrap_idle_info_t_get_prop_id(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  idle_info_t* obj = (idle_info_t*)jsvalue_get_pointer(ctx, argv[0], "idle_info_t*");

  jret = jsvalue_create_int(ctx, obj->id);
  return jret;
}

ret_t idle_info_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "idle_info_cast",
                      JS_NewCFunction(ctx, wrap_idle_info_cast, "idle_info_cast", 1));
  JS_SetPropertyStr(ctx, global_obj, "idle_info_t_get_prop_ctx",
                      JS_NewCFunction(ctx, wrap_idle_info_t_get_prop_ctx, "idle_info_t_get_prop_ctx", 1));
  JS_SetPropertyStr(ctx, global_obj, "idle_info_t_get_prop_id",
                      JS_NewCFunction(ctx, wrap_idle_info_t_get_prop_id, "idle_info_t_get_prop_id", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_svg_image_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)svg_image_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "svg_image_t*");
  }
  return jret;
}

jsvalue_t wrap_svg_image_set_image(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* name = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)svg_image_set_image(widget, name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_svg_image_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)svg_image_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "svg_image_t*");
  }
  return jret;
}

ret_t svg_image_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
  JS_SetPropertyStr(ctx, global_obj, "svg_image_create",
                      JS_NewCFunction(ctx, wrap_svg_image_create, "svg_image_create", 1));
  JS_SetPropertyStr(ctx, global_obj, "svg_image_set_image",
                      JS_NewCFunction(ctx, wrap_svg_image_set_image, "svg_image_set_image", 1));
  JS_SetPropertyStr(ctx, global_obj, "svg_image_cast",
                      JS_NewCFunction(ctx, wrap_svg_image_cast, "svg_image_cast", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

jsvalue_t wrap_dialog_create(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dialog_create(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_create_simple(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 5) {
  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  xy_t x = (xy_t)jsvalue_get_int_value(ctx, argv[1]);
  xy_t y = (xy_t)jsvalue_get_int_value(ctx, argv[2]);
  wh_t w = (wh_t)jsvalue_get_int_value(ctx, argv[3]);
  wh_t h = (wh_t)jsvalue_get_int_value(ctx, argv[4]);
  ret = (widget_t*)dialog_create_simple(parent, x, y, w, h);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_cast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_cast(widget);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_get_title(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_get_title(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_get_client(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (widget_t*)dialog_get_client(widget);

  jret = jsvalue_create_pointer(ctx, ret, "widget_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_open(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  widget_t* ret = NULL;
  const char* name = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  ret = (widget_t*)dialog_open(name);
  jsvalue_free_str(ctx, name);

  jret = jsvalue_create_pointer(ctx, ret, "dialog_t*");
  }
  return jret;
}

jsvalue_t wrap_dialog_set_title(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  char* title = (char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)dialog_set_title(widget, title);
  jsvalue_free_str(ctx, title);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_modal(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (ret_t)dialog_modal(widget);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_quit(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  uint32_t code = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)dialog_quit(widget, code);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_is_quited(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)dialog_is_quited(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_is_modal(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 1) {
  bool_t ret = 0;
  widget_t* widget = (widget_t*)jsvalue_get_pointer(ctx, argv[0], "widget_t*");
  ret = (bool_t)dialog_is_modal(widget);

  jret = jsvalue_create_bool(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_toast(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  uint32_t duration = (uint32_t)jsvalue_get_int_value(ctx, argv[1]);
  ret = (ret_t)dialog_toast(text, duration);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_info(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  const char* title = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)dialog_info(title, text);
  jsvalue_free_str(ctx, title);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_warn(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  const char* title = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)dialog_warn(title, text);
  jsvalue_free_str(ctx, title);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_confirm(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  if(argc >= 2) {
  ret_t ret = 0;
  const char* title = (const char*)jsvalue_get_utf8_string(ctx, argv[0]);
  const char* text = (const char*)jsvalue_get_utf8_string(ctx, argv[1]);
  ret = (ret_t)dialog_confirm(title, text);
  jsvalue_free_str(ctx, title);
  jsvalue_free_str(ctx, text);

  jret = jsvalue_create_int(ctx, ret);
  }
  return jret;
}

jsvalue_t wrap_dialog_t_get_prop_highlight(
    JSContext *ctx, 
    jsvalue_const_t this_val,
    int argc, 
    jsvalue_const_t *argv
  ) {
  jsvalue_t jret = JS_NULL;
  dialog_t* obj = (dialog_t*)jsvalue_get_pointer(ctx, argv[0], "dialog_t*");

  jret = jsvalue_create_string(ctx, obj->highlight);
  return jret;
}

ret_t dialog_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);
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
  JS_SetPropertyStr(ctx, global_obj, "dialog_t_get_prop_highlight",
                      JS_NewCFunction(ctx, wrap_dialog_t_get_prop_highlight, "dialog_t_get_prop_highlight", 1));

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

ret_t window_manager_default_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

ret_t window_manager_simple_t_init(JSContext *ctx) {
  jsvalue_t global_obj = JS_GetGlobalObject(ctx);

 jsvalue_unref(ctx, global_obj);

 return RET_OK;
}

ret_t awtk_js_init(JSContext *ctx) {
  global_t_init(ctx);
  bitmap_t_init(ctx);
  image_draw_type_t_init(ctx);
  canvas_t_init(ctx);
  clip_board_data_type_t_init(ctx);
  clip_board_t_init(ctx);
  dialog_quit_code_t_init(ctx);
  event_type_t_init(ctx);
  font_manager_t_init(ctx);
  glyph_format_t_init(ctx);
  idle_t_init(ctx);
  value_t_init(ctx);
  image_manager_t_init(ctx);
  input_type_t_init(ctx);
  value_type_t_init(ctx);
  input_method_t_init(ctx);
  key_code_t_init(ctx);
  locale_info_t_init(ctx);
  style_id_t_init(ctx);
  style_t_init(ctx);
  theme_t_init(ctx);
  timer_t_init(ctx);
  align_v_t_init(ctx);
  align_h_t_init(ctx);
  app_type_t_init(ctx);
  bitmap_format_t_init(ctx);
  bitmap_flag_t_init(ctx);
  vgcanvas_t_init(ctx);
  widget_prop_t_init(ctx);
  widget_type_t_init(ctx);
  window_stage_t_init(ctx);
  window_closable_t_init(ctx);
  widget_state_t_init(ctx);
  widget_t_init(ctx);
  ret_t_init(ctx);
  timer_manager_t_init(ctx);
  time_now_t_init(ctx);
  rect_t_init(ctx);
  pointf_t_init(ctx);
  point_t_init(ctx);
  path_t_init(ctx);
  named_value_t_init(ctx);
  MIME_TYPE_init(ctx);
  idle_manager_t_init(ctx);
  indicator_default_paint_t_init(ctx);
  fs_file_t_init(ctx);
  event_t_init(ctx);
  event_base_type_t_init(ctx);
  emitter_t_init(ctx);
  easing_type_t_init(ctx);
  date_time_t_init(ctx);
  color_t_init(ctx);
  asset_info_t_init(ctx);
  asset_type_t_init(ctx);
  assets_manager_t_init(ctx);
  color_component_t_init(ctx);
  time_clock_t_init(ctx);
  text_selector_t_init(ctx);
  switch_t_init(ctx);
  prop_change_event_t_init(ctx);
  progress_event_t_init(ctx);
  view_t_init(ctx);
  slide_view_t_init(ctx);
  slide_indicator_t_init(ctx);
  slide_menu_t_init(ctx);
  scroll_view_t_init(ctx);
  scroll_bar_t_init(ctx);
  tab_control_t_init(ctx);
  list_view_t_init(ctx);
  list_view_h_t_init(ctx);
  tab_button_t_init(ctx);
  tab_button_group_t_init(ctx);
  list_item_t_init(ctx);
  hscroll_label_t_init(ctx);
  rich_text_t_init(ctx);
  progress_circle_t_init(ctx);
  slider_t_init(ctx);
  mledit_t_init(ctx);
  row_t_init(ctx);
  progress_bar_t_init(ctx);
  object_t_init(ctx);
  pages_t_init(ctx);
  line_number_t_init(ctx);
  overlay_t_init(ctx);
  image_value_t_init(ctx);
  image_animation_t_init(ctx);
  guage_t_init(ctx);
  guage_pointer_t_init(ctx);
  label_t_init(ctx);
  draggable_t_init(ctx);
  group_box_t_init(ctx);
  color_picker_t_init(ctx);
  canvas_widget_t_init(ctx);
  grid_t_init(ctx);
  grid_item_t_init(ctx);
  window_manager_t_init(ctx);
  window_base_t_init(ctx);
  edit_t_init(ctx);
  style_mutable_t_init(ctx);
  dragger_t_init(ctx);
  image_base_t_init(ctx);
  window_event_t_init(ctx);
  paint_event_t_init(ctx);
  key_event_t_init(ctx);
  pointer_event_t_init(ctx);
  orientation_event_t_init(ctx);
  wheel_event_t_init(ctx);
  app_bar_t_init(ctx);
  button_group_t_init(ctx);
  button_t_init(ctx);
  digit_clock_t_init(ctx);
  check_button_t_init(ctx);
  color_tile_t_init(ctx);
  column_t_init(ctx);
  combo_box_item_t_init(ctx);
  combo_box_t_init(ctx);
  dialog_client_t_init(ctx);
  dialog_title_t_init(ctx);
  object_default_t_init(ctx);
  window_t_init(ctx);
  timer_info_t_init(ctx);
  combo_box_ex_t_init(ctx);
  image_t_init(ctx);
  gif_image_t_init(ctx);
  keyboard_t_init(ctx);
  popup_t_init(ctx);
  object_array_t_init(ctx);
  mutable_image_t_init(ctx);
  spin_box_t_init(ctx);
  system_bar_t_init(ctx);
  idle_info_t_init(ctx);
  svg_image_t_init(ctx);
  dialog_t_init(ctx);
  window_manager_default_t_init(ctx);
  window_manager_simple_t_init(ctx);

  return RET_OK;
}

