
declare function print(str);
if(this['console'] === undefined) {
  this.console = {}
  this.console.log = function(str) {
      print(str);
  }
}
declare function tk_quit();
declare function tk_get_pointer_x();
declare function tk_get_pointer_y();
declare function tk_is_pointer_pressed();
declare function BITMAP_FLAG_NONE();
declare function BITMAP_FLAG_OPAQUE();
declare function BITMAP_FLAG_IMMUTABLE();
declare function BITMAP_FLAG_TEXTURE();
declare function BITMAP_FLAG_CHANGED();
declare function BITMAP_FLAG_PREMULTI_ALPHA();
declare function bitmap_create();
declare function bitmap_create_ex(w, h, line_length, format);
declare function bitmap_get_bpp(bitmap);
declare function bitmap_destroy(bitmap);
declare function bitmap_t_get_prop_w(nativeObj);
declare function bitmap_t_get_prop_h(nativeObj);
declare function bitmap_t_get_prop_line_length(nativeObj);
declare function bitmap_t_get_prop_flags(nativeObj);
declare function bitmap_t_get_prop_format(nativeObj);
declare function bitmap_t_get_prop_name(nativeObj);
declare function IMAGE_DRAW_DEFAULT();
declare function IMAGE_DRAW_CENTER();
declare function IMAGE_DRAW_ICON();
declare function IMAGE_DRAW_SCALE();
declare function IMAGE_DRAW_SCALE_AUTO();
declare function IMAGE_DRAW_SCALE_DOWN();
declare function IMAGE_DRAW_SCALE_W();
declare function IMAGE_DRAW_SCALE_H();
declare function IMAGE_DRAW_REPEAT();
declare function IMAGE_DRAW_REPEAT_X();
declare function IMAGE_DRAW_REPEAT_Y();
declare function IMAGE_DRAW_PATCH9();
declare function IMAGE_DRAW_PATCH3_X();
declare function IMAGE_DRAW_PATCH3_Y();
declare function IMAGE_DRAW_PATCH3_X_SCALE_Y();
declare function IMAGE_DRAW_PATCH3_Y_SCALE_X();
declare function canvas_get_width(c);
declare function canvas_get_height(c);
declare function canvas_get_clip_rect(c, r);
declare function canvas_set_clip_rect(c, r);
declare function canvas_set_clip_rect_ex(c, r, translate);
declare function canvas_set_fill_color_str(c, color);
declare function canvas_set_text_color_str(c, color);
declare function canvas_set_stroke_color_str(c, color);
declare function canvas_set_global_alpha(c, alpha);
declare function canvas_translate(c, dx, dy);
declare function canvas_untranslate(c, dx, dy);
declare function canvas_draw_vline(c, x, y, h);
declare function canvas_draw_hline(c, x, y, w);
declare function canvas_fill_rect(c, x, y, w, h);
declare function canvas_stroke_rect(c, x, y, w, h);
declare function canvas_set_font(c, name, size);
declare function canvas_measure_utf8(c, str);
declare function canvas_draw_utf8(c, str, x, y);
declare function canvas_draw_utf8_in_rect(c, str, r);
declare function canvas_draw_icon(c, img, cx, cy);
declare function canvas_draw_image(c, img, src, dst);
declare function canvas_get_vgcanvas(c);
declare function canvas_cast(c);
declare function canvas_reset(c);
declare function canvas_t_get_prop_ox(nativeObj);
declare function canvas_t_get_prop_oy(nativeObj);
declare function CLIP_BOARD_DATA_TYPE_NONE();
declare function CLIP_BOARD_DATA_TYPE_TEXT();
declare function clip_board_set_text(text);
declare function clip_board_get_text();
declare function EVT_POINTER_DOWN();
declare function EVT_POINTER_DOWN_BEFORE_CHILDREN();
declare function EVT_POINTER_MOVE();
declare function EVT_POINTER_MOVE_BEFORE_CHILDREN();
declare function EVT_POINTER_UP();
declare function EVT_POINTER_UP_BEFORE_CHILDREN();
declare function EVT_WHEEL();
declare function EVT_POINTER_DOWN_ABORT();
declare function EVT_CONTEXT_MENU();
declare function EVT_POINTER_ENTER();
declare function EVT_POINTER_LEAVE();
declare function EVT_LONG_PRESS();
declare function EVT_CLICK();
declare function EVT_FOCUS();
declare function EVT_BLUR();
declare function EVT_KEY_DOWN();
declare function EVT_KEY_DOWN_BEFORE_CHILDREN();
declare function EVT_KEY_REPEAT();
declare function EVT_KEY_UP();
declare function EVT_KEY_UP_BEFORE_CHILDREN();
declare function EVT_WILL_MOVE();
declare function EVT_MOVE();
declare function EVT_WILL_RESIZE();
declare function EVT_RESIZE();
declare function EVT_WILL_MOVE_RESIZE();
declare function EVT_MOVE_RESIZE();
declare function EVT_VALUE_WILL_CHANGE();
declare function EVT_VALUE_CHANGED();
declare function EVT_VALUE_CHANGING();
declare function EVT_PAINT();
declare function EVT_BEFORE_PAINT();
declare function EVT_AFTER_PAINT();
declare function EVT_PAINT_DONE();
declare function EVT_LOCALE_CHANGED();
declare function EVT_ANIM_START();
declare function EVT_ANIM_STOP();
declare function EVT_ANIM_PAUSE();
declare function EVT_ANIM_ONCE();
declare function EVT_ANIM_END();
declare function EVT_WINDOW_LOAD();
declare function EVT_WINDOW_WILL_OPEN();
declare function EVT_WINDOW_OPEN();
declare function EVT_WINDOW_TO_BACKGROUND();
declare function EVT_WINDOW_TO_FOREGROUND();
declare function EVT_WINDOW_CLOSE();
declare function EVT_REQUEST_CLOSE_WINDOW();
declare function EVT_TOP_WINDOW_CHANGED();
declare function EVT_IM_COMMIT();
declare function EVT_IM_SHOW_CANDIDATES();
declare function EVT_IM_ACTION();
declare function EVT_IM_ACTION_INFO();
declare function EVT_DRAG_START();
declare function EVT_DRAG();
declare function EVT_DRAG_END();
declare function EVT_SCREEN_SAVER();
declare function EVT_LOW_MEMORY();
declare function EVT_OUT_OF_MEMORY();
declare function EVT_ORIENTATION_WILL_CHANGED();
declare function EVT_ORIENTATION_CHANGED();
declare function EVT_WIDGET_CREATED();
declare function EVT_REQ_START();
declare function EVT_USER_START();
declare function font_manager_unload_font(fm, name, size);
declare function GLYPH_FMT_ALPHA();
declare function GLYPH_FMT_MONO();
declare function GLYPH_FMT_RGBA();
declare function idle_add(on_idle, ctx);
declare function idle_remove(idle_id);
declare function image_manager();
declare function image_manager_get_bitmap(imm, name, image);
declare function INPUT_TEXT();
declare function INPUT_INT();
declare function INPUT_UINT();
declare function INPUT_HEX();
declare function INPUT_FLOAT();
declare function INPUT_UFLOAT();
declare function INPUT_EMAIL();
declare function INPUT_PASSWORD();
declare function INPUT_PHONE();
declare function INPUT_CUSTOM();
declare function input_method_commit_text(im, text);
declare function input_method_dispatch_key(im, key);
declare function input_method();
declare function TK_KEY_RETURN();
declare function TK_KEY_ESCAPE();
declare function TK_KEY_BACKSPACE();
declare function TK_KEY_TAB();
declare function TK_KEY_SPACE();
declare function TK_KEY_EXCLAIM();
declare function TK_KEY_QUOTEDBL();
declare function TK_KEY_HASH();
declare function TK_KEY_PERCENT();
declare function TK_KEY_DOLLAR();
declare function TK_KEY_AMPERSAND();
declare function TK_KEY_QUOTE();
declare function TK_KEY_LEFTPAREN();
declare function TK_KEY_RIGHTPAREN();
declare function TK_KEY_ASTERISK();
declare function TK_KEY_PLUS();
declare function TK_KEY_COMMA();
declare function TK_KEY_MINUS();
declare function TK_KEY_PERIOD();
declare function TK_KEY_SLASH();
declare function TK_KEY_0();
declare function TK_KEY_1();
declare function TK_KEY_2();
declare function TK_KEY_3();
declare function TK_KEY_4();
declare function TK_KEY_5();
declare function TK_KEY_6();
declare function TK_KEY_7();
declare function TK_KEY_8();
declare function TK_KEY_9();
declare function TK_KEY_COLON();
declare function TK_KEY_SEMICOLON();
declare function TK_KEY_LESS();
declare function TK_KEY_EQUAL();
declare function TK_KEY_GREATER();
declare function TK_KEY_QUESTION();
declare function TK_KEY_AT();
declare function TK_KEY_LEFTBRACKET();
declare function TK_KEY_BACKSLASH();
declare function TK_KEY_RIGHTBRACKET();
declare function TK_KEY_CARET();
declare function TK_KEY_UNDERSCORE();
declare function TK_KEY_BACKQUOTE();
declare function TK_KEY_a();
declare function TK_KEY_b();
declare function TK_KEY_c();
declare function TK_KEY_d();
declare function TK_KEY_e();
declare function TK_KEY_f();
declare function TK_KEY_g();
declare function TK_KEY_h();
declare function TK_KEY_i();
declare function TK_KEY_j();
declare function TK_KEY_k();
declare function TK_KEY_l();
declare function TK_KEY_m();
declare function TK_KEY_n();
declare function TK_KEY_o();
declare function TK_KEY_p();
declare function TK_KEY_q();
declare function TK_KEY_r();
declare function TK_KEY_s();
declare function TK_KEY_t();
declare function TK_KEY_u();
declare function TK_KEY_v();
declare function TK_KEY_w();
declare function TK_KEY_x();
declare function TK_KEY_y();
declare function TK_KEY_z();
declare function TK_KEY_A();
declare function TK_KEY_B();
declare function TK_KEY_C();
declare function TK_KEY_D();
declare function TK_KEY_E();
declare function TK_KEY_F();
declare function TK_KEY_G();
declare function TK_KEY_H();
declare function TK_KEY_I();
declare function TK_KEY_J();
declare function TK_KEY_K();
declare function TK_KEY_L();
declare function TK_KEY_M();
declare function TK_KEY_N();
declare function TK_KEY_O();
declare function TK_KEY_P();
declare function TK_KEY_Q();
declare function TK_KEY_R();
declare function TK_KEY_S();
declare function TK_KEY_T();
declare function TK_KEY_U();
declare function TK_KEY_V();
declare function TK_KEY_W();
declare function TK_KEY_X();
declare function TK_KEY_Y();
declare function TK_KEY_Z();
declare function TK_KEY_DOT();
declare function TK_KEY_DELETE();
declare function TK_KEY_LEFTBRACE();
declare function TK_KEY_RIGHTBRACE();
declare function locale_info();
declare function locale_info_tr(locale_info, text);
declare function locale_info_change(locale_info, language, country);
declare function locale_info_on(locale_info, type, on_event, ctx);
declare function locale_info_off(locale_info, id);
declare function STYLE_ID_BG_COLOR();
declare function STYLE_ID_FG_COLOR();
declare function STYLE_ID_MASK_COLOR();
declare function STYLE_ID_FONT_NAME();
declare function STYLE_ID_FONT_SIZE();
declare function STYLE_ID_FONT_STYLE();
declare function STYLE_ID_TEXT_COLOR();
declare function STYLE_ID_TIPS_TEXT_COLOR();
declare function STYLE_ID_TEXT_ALIGN_H();
declare function STYLE_ID_TEXT_ALIGN_V();
declare function STYLE_ID_BORDER_COLOR();
declare function STYLE_ID_BORDER_WIDTH();
declare function STYLE_ID_BORDER();
declare function STYLE_ID_BG_IMAGE();
declare function STYLE_ID_BG_IMAGE_DRAW_TYPE();
declare function STYLE_ID_ICON();
declare function STYLE_ID_FG_IMAGE();
declare function STYLE_ID_FG_IMAGE_DRAW_TYPE();
declare function STYLE_ID_SPACER();
declare function STYLE_ID_MARGIN();
declare function STYLE_ID_MARGIN_LEFT();
declare function STYLE_ID_MARGIN_RIGHT();
declare function STYLE_ID_MARGIN_TOP();
declare function STYLE_ID_MARGIN_BOTTOM();
declare function STYLE_ID_ICON_AT();
declare function STYLE_ID_ACTIVE_ICON();
declare function STYLE_ID_X_OFFSET();
declare function STYLE_ID_Y_OFFSET();
declare function STYLE_ID_SELECTED_BG_COLOR();
declare function STYLE_ID_SELECTED_FG_COLOR();
declare function STYLE_ID_SELECTED_TEXT_COLOR();
declare function STYLE_ID_ROUND_RADIUS();
declare function style_notify_widget_state_changed(s, widget);
declare function style_is_valid(s);
declare function style_get_int(s, name, defval);
declare function style_get_str(s, name, defval);
declare function style_set(s, state, name, value);
declare function style_is_mutable(s);
declare function theme();
declare function timer_add(on_timer, ctx, duration);
declare function timer_remove(timer_id);
declare function timer_reset(timer_id);
declare function timer_modify(timer_id, duration);
declare function ALIGN_V_NONE();
declare function ALIGN_V_MIDDLE();
declare function ALIGN_V_TOP();
declare function ALIGN_V_BOTTOM();
declare function ALIGN_H_NONE();
declare function ALIGN_H_CENTER();
declare function ALIGN_H_LEFT();
declare function ALIGN_H_RIGHT();
declare function vgcanvas_cast(vg);
declare function vgcanvas_flush(vg);
declare function vgcanvas_begin_path(vg);
declare function vgcanvas_move_to(vg, x, y);
declare function vgcanvas_line_to(vg, x, y);
declare function vgcanvas_quad_to(vg, cpx, cpy, x, y);
declare function vgcanvas_bezier_to(vg, cp1x, cp1y, cp2x, cp2y, x, y);
declare function vgcanvas_arc_to(vg, x1, y1, x2, y2, r);
declare function vgcanvas_arc(vg, x, y, r, start_angle, end_angle, ccw);
declare function vgcanvas_is_point_in_path(vg, x, y);
declare function vgcanvas_rect(vg, x, y, w, h);
declare function vgcanvas_rounded_rect(vg, x, y, w, h, r);
declare function vgcanvas_ellipse(vg, x, y, rx, ry);
declare function vgcanvas_close_path(vg);
declare function vgcanvas_rotate(vg, rad);
declare function vgcanvas_scale(vg, x, y);
declare function vgcanvas_translate(vg, x, y);
declare function vgcanvas_transform(vg, a, b, c, d, e, f);
declare function vgcanvas_set_transform(vg, a, b, c, d, e, f);
declare function vgcanvas_clip_rect(vg, x, y, w, h);
declare function vgcanvas_fill(vg);
declare function vgcanvas_stroke(vg);
declare function vgcanvas_paint(vg, stroke, img);
declare function vgcanvas_set_font(vg, font);
declare function vgcanvas_set_font_size(vg, font);
declare function vgcanvas_set_text_align(vg, value);
declare function vgcanvas_set_text_baseline(vg, value);
declare function vgcanvas_fill_text(vg, text, x, y, max_width);
declare function vgcanvas_measure_text(vg, text);
declare function vgcanvas_draw_image(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);
declare function vgcanvas_draw_icon(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);
declare function vgcanvas_set_antialias(vg, value);
declare function vgcanvas_set_global_alpha(vg, alpha);
declare function vgcanvas_set_line_width(vg, value);
declare function vgcanvas_set_fill_color_str(vg, color);
declare function vgcanvas_set_stroke_color_str(vg, color);
declare function vgcanvas_set_line_cap(vg, value);
declare function vgcanvas_set_line_join(vg, value);
declare function vgcanvas_set_miter_limit(vg, value);
declare function vgcanvas_save(vg);
declare function vgcanvas_restore(vg);
declare function vgcanvas_t_get_prop_w(nativeObj);
declare function vgcanvas_t_get_prop_h(nativeObj);
declare function vgcanvas_t_get_prop_ratio(nativeObj);
declare function vgcanvas_t_get_prop_anti_alias(nativeObj);
declare function vgcanvas_t_get_prop_line_width(nativeObj);
declare function vgcanvas_t_get_prop_global_alpha(nativeObj);
declare function vgcanvas_t_get_prop_miter_limit(nativeObj);
declare function vgcanvas_t_get_prop_line_cap(nativeObj);
declare function vgcanvas_t_get_prop_line_join(nativeObj);
declare function vgcanvas_t_get_prop_font(nativeObj);
declare function vgcanvas_t_get_prop_font_size(nativeObj);
declare function vgcanvas_t_get_prop_text_align(nativeObj);
declare function vgcanvas_t_get_prop_text_baseline(nativeObj);
declare function BITMAP_FMT_NONE();
declare function BITMAP_FMT_RGBA8888();
declare function BITMAP_FMT_ABGR8888();
declare function BITMAP_FMT_BGRA8888();
declare function BITMAP_FMT_ARGB8888();
declare function BITMAP_FMT_RGB565();
declare function BITMAP_FMT_BGR565();
declare function BITMAP_FMT_RGB888();
declare function BITMAP_FMT_BGR888();
declare function BITMAP_FMT_GRAY();
declare function BITMAP_FMT_MONO();
declare function WIDGET_PROP_X();
declare function WIDGET_PROP_Y();
declare function WIDGET_PROP_W();
declare function WIDGET_PROP_H();
declare function WIDGET_PROP_CANVAS();
declare function WIDGET_PROP_NATIVE_WINDOW();
declare function WIDGET_PROP_HIGHLIGHT();
declare function WIDGET_PROP_BAR_SIZE();
declare function WIDGET_PROP_OPACITY();
declare function WIDGET_PROP_MIN_W();
declare function WIDGET_PROP_MAX_W();
declare function WIDGET_PROP_CHILDREN_LAYOUT();
declare function WIDGET_PROP_LAYOUT();
declare function WIDGET_PROP_SELF_LAYOUT();
declare function WIDGET_PROP_LAYOUT_W();
declare function WIDGET_PROP_LAYOUT_H();
declare function WIDGET_PROP_VIRTUAL_W();
declare function WIDGET_PROP_VIRTUAL_H();
declare function WIDGET_PROP_NAME();
declare function WIDGET_PROP_TYPE();
declare function WIDGET_PROP_CLOSABLE();
declare function WIDGET_PROP_CURSOR();
declare function WIDGET_PROP_VALUE();
declare function WIDGET_PROP_LENGTH();
declare function WIDGET_PROP_TEXT();
declare function WIDGET_PROP_TR_TEXT();
declare function WIDGET_PROP_STYLE();
declare function WIDGET_PROP_ENABLE();
declare function WIDGET_PROP_FLOATING();
declare function WIDGET_PROP_MARGIN();
declare function WIDGET_PROP_SPACING();
declare function WIDGET_PROP_LEFT_MARGIN();
declare function WIDGET_PROP_RIGHT_MARGIN();
declare function WIDGET_PROP_TOP_MARGIN();
declare function WIDGET_PROP_BOTTOM_MARGIN();
declare function WIDGET_PROP_STEP();
declare function WIDGET_PROP_VISIBLE();
declare function WIDGET_PROP_SENSITIVE();
declare function WIDGET_PROP_ANIMATION();
declare function WIDGET_PROP_ANIM_HINT();
declare function WIDGET_PROP_FULLSCREEN();
declare function WIDGET_PROP_OPEN_ANIM_HINT();
declare function WIDGET_PROP_CLOSE_ANIM_HINT();
declare function WIDGET_PROP_MIN();
declare function WIDGET_PROP_TIPS();
declare function WIDGET_PROP_INPUT_TYPE();
declare function WIDGET_PROP_READONLY();
declare function WIDGET_PROP_PASSWORD_VISIBLE();
declare function WIDGET_PROP_ACTIVE();
declare function WIDGET_PROP_VERTICAL();
declare function WIDGET_PROP_SHOW_TEXT();
declare function WIDGET_PROP_XOFFSET();
declare function WIDGET_PROP_YOFFSET();
declare function WIDGET_PROP_ALIGN_V();
declare function WIDGET_PROP_ALIGN_H();
declare function WIDGET_PROP_AUTO_PLAY();
declare function WIDGET_PROP_LOOP();
declare function WIDGET_PROP_AUTO_FIX();
declare function WIDGET_PROP_X_MIN();
declare function WIDGET_PROP_X_MAX();
declare function WIDGET_PROP_Y_MIN();
declare function WIDGET_PROP_Y_MAX();
declare function WIDGET_PROP_MAX();
declare function WIDGET_PROP_ROW();
declare function WIDGET_PROP_STATE_FOR_STYLE();
declare function WIDGET_PROP_THEME();
declare function WIDGET_PROP_STAGE();
declare function WIDGET_PROP_IMAGE_MANAGER();
declare function WIDGET_PROP_ASSETS_MANAGER();
declare function WIDGET_PROP_LOCALE_INFO();
declare function WIDGET_PROP_FONT_MANAGER();
declare function WIDGET_PROP_THEME_OBJ();
declare function WIDGET_PROP_DEFAULT_THEME_OBJ();
declare function WIDGET_PROP_ITEM_WIDTH();
declare function WIDGET_PROP_ITEM_HEIGHT();
declare function WIDGET_PROP_DEFAULT_ITEM_HEIGHT();
declare function WIDGET_PROP_XSLIDABLE();
declare function WIDGET_PROP_YSLIDABLE();
declare function WIDGET_PROP_REPEAT();
declare function WIDGET_PROP_ENABLE_LONG_PRESS();
declare function WIDGET_PROP_ANIMATABLE();
declare function WIDGET_PROP_AUTO_HIDE_SCROLL_BAR();
declare function WIDGET_PROP_IMAGE();
declare function WIDGET_PROP_FORMAT();
declare function WIDGET_PROP_DRAW_TYPE();
declare function WIDGET_PROP_SELECTABLE();
declare function WIDGET_PROP_CLICKABLE();
declare function WIDGET_PROP_SCALE_X();
declare function WIDGET_PROP_SCALE_Y();
declare function WIDGET_PROP_ANCHOR_X();
declare function WIDGET_PROP_ANCHOR_Y();
declare function WIDGET_PROP_ROTATION();
declare function WIDGET_PROP_COMPACT();
declare function WIDGET_PROP_SCROLLABLE();
declare function WIDGET_PROP_ICON();
declare function WIDGET_PROP_OPTIONS();
declare function WIDGET_PROP_SELECTED();
declare function WIDGET_PROP_CHECKED();
declare function WIDGET_PROP_ACTIVE_ICON();
declare function WIDGET_PROP_OPEN_WINDOW();
declare function WIDGET_PROP_SELECTED_INDEX();
declare function WIDGET_PROP_CLOSE_WHEN_CLICK();
declare function WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE();
declare function WIDGET_PROP_LINE_GAP();
declare function WIDGET_PROP_BG_COLOR();
declare function WIDGET_PROP_BORDER_COLOR();
declare function WIDGET_PROP_DELAY();
declare function WIDGET_PROP_IS_KEYBOARD();
declare function WIDGET_PROP_FOCUSED();
declare function WIDGET_PROP_FOCUS();
declare function WIDGET_PROP_FOCUSABLE();
declare function WIDGET_PROP_WITH_FOCUS_STATE();
declare function WIDGET_PROP_MOVE_FOCUS_NEXT_KEY();
declare function WIDGET_PROP_MOVE_FOCUS_PREV_KEY();
declare function WIDGET_TYPE_NONE();
declare function WIDGET_TYPE_WINDOW_MANAGER();
declare function WIDGET_TYPE_NORMAL_WINDOW();
declare function WIDGET_TYPE_OVERLAY();
declare function WIDGET_TYPE_TOOL_BAR();
declare function WIDGET_TYPE_DIALOG();
declare function WIDGET_TYPE_POPUP();
declare function WIDGET_TYPE_SYSTEM_BAR();
declare function WIDGET_TYPE_SPRITE();
declare function WIDGET_TYPE_KEYBOARD();
declare function WIDGET_TYPE_DND();
declare function WIDGET_TYPE_LABEL();
declare function WIDGET_TYPE_BUTTON();
declare function WIDGET_TYPE_IMAGE();
declare function WIDGET_TYPE_EDIT();
declare function WIDGET_TYPE_PROGRESS_BAR();
declare function WIDGET_TYPE_GROUP_BOX();
declare function WIDGET_TYPE_CHECK_BUTTON();
declare function WIDGET_TYPE_RADIO_BUTTON();
declare function WIDGET_TYPE_DIALOG_TITLE();
declare function WIDGET_TYPE_DIALOG_CLIENT();
declare function WIDGET_TYPE_SLIDER();
declare function WIDGET_TYPE_VIEW();
declare function WIDGET_TYPE_COMBO_BOX();
declare function WIDGET_TYPE_COMBO_BOX_ITEM();
declare function WIDGET_TYPE_SLIDE_VIEW();
declare function WIDGET_TYPE_SLIDE_INDICATOR();
declare function WIDGET_TYPE_SLIDE_INDICATOR_ARC();
declare function WIDGET_TYPE_PAGES();
declare function WIDGET_TYPE_TAB_BUTTON();
declare function WIDGET_TYPE_TAB_CONTROL();
declare function WIDGET_TYPE_TAB_BUTTON_GROUP();
declare function WIDGET_TYPE_BUTTON_GROUP();
declare function WIDGET_TYPE_CANDIDATES();
declare function WIDGET_TYPE_SPIN_BOX();
declare function WIDGET_TYPE_DRAGGER();
declare function WIDGET_TYPE_SCROLL_BAR();
declare function WIDGET_TYPE_SCROLL_BAR_DESKTOP();
declare function WIDGET_TYPE_SCROLL_BAR_MOBILE();
declare function WIDGET_TYPE_SCROLL_VIEW();
declare function WIDGET_TYPE_LIST_VIEW();
declare function WIDGET_TYPE_LIST_VIEW_H();
declare function WIDGET_TYPE_LIST_ITEM();
declare function WIDGET_TYPE_COLOR_PICKER();
declare function WIDGET_TYPE_COLOR_COMPONENT();
declare function WIDGET_TYPE_COLOR_TILE();
declare function WIDGET_TYPE_RICH_TEXT();
declare function WIDGET_TYPE_APP_BAR();
declare function WIDGET_TYPE_GRID();
declare function WIDGET_TYPE_GRID_ITEM();
declare function WIDGET_TYPE_ROW();
declare function WIDGET_TYPE_COLUMN();
declare function WIDGET_TYPE_CALIBRATION_WIN();
declare function WINDOW_STAGE_NONE();
declare function WINDOW_STAGE_CREATED();
declare function WINDOW_STAGE_OPENED();
declare function WINDOW_STAGE_CLOSED();
declare function WINDOW_CLOSABLE_YES();
declare function WINDOW_CLOSABLE_NO();
declare function WINDOW_CLOSABLE_CONFIRM();
declare function WIDGET_STATE_NONE();
declare function WIDGET_STATE_NORMAL();
declare function WIDGET_STATE_PRESSED();
declare function WIDGET_STATE_OVER();
declare function WIDGET_STATE_DISABLE();
declare function WIDGET_STATE_FOCUSED();
declare function WIDGET_STATE_CHECKED();
declare function WIDGET_STATE_UNCHECKED();
declare function WIDGET_STATE_EMPTY();
declare function WIDGET_STATE_EMPTY_FOCUS();
declare function WIDGET_STATE_ERROR();
declare function WIDGET_STATE_SELECTED();
declare function WIDGET_STATE_NORMAL_OF_CHECKED();
declare function WIDGET_STATE_PRESSED_OF_CHECKED();
declare function WIDGET_STATE_OVER_OF_CHECKED();
declare function WIDGET_STATE_FOCUSED_OF_CHECKED();
declare function WIDGET_STATE_NORMAL_OF_ACTIVE();
declare function WIDGET_STATE_PRESSED_OF_ACTIVE();
declare function WIDGET_STATE_OVER_OF_ACTIVE();
declare function WIDGET_STATE_FOCUSED_OF_ACTIVE();
declare function widget_count_children(widget);
declare function widget_get_child(widget, index);
declare function widget_index_of(widget);
declare function widget_move(widget, x, y);
declare function widget_resize(widget, w, h);
declare function widget_move_resize(widget, x, y, w, h);
declare function widget_set_value(widget, value);
declare function widget_animate_value_to(widget, value, duration);
declare function widget_add_value(widget, delta);
declare function widget_use_style(widget, style);
declare function widget_set_text_utf8(widget, text);
declare function widget_set_tr_text(widget, text);
declare function widget_get_value(widget);
declare function widget_get_text(widget);
declare function widget_set_name(widget, name);
declare function widget_set_cursor(widget, cursor);
declare function widget_set_animation(widget, animation);
declare function widget_create_animator(widget, animation);
declare function widget_start_animator(widget, name);
declare function widget_set_animator_time_scale(widget, name, time_scale);
declare function widget_pause_animator(widget, name);
declare function widget_find_animator(widget, name);
declare function widget_stop_animator(widget, name);
declare function widget_destroy_animator(widget, name);
declare function widget_set_enable(widget, enable);
declare function widget_set_floating(widget, floating);
declare function widget_set_focused(widget, focused);
declare function widget_child(widget, name);
declare function widget_lookup(widget, name, recursive);
declare function widget_lookup_by_type(widget, type, recursive);
declare function widget_set_visible(widget, visible, recursive);
declare function widget_set_visible_only(widget, visible);
declare function widget_set_sensitive(widget, sensitive);
declare function widget_on(widget, type, on_event, ctx);
declare function widget_off(widget, id);
declare function widget_invalidate_force(widget, r);
declare function widget_set_prop_str(widget, name, v);
declare function widget_get_prop_str(widget, name, defval);
declare function widget_set_prop_int(widget, name, v);
declare function widget_get_prop_int(widget, name, defval);
declare function widget_set_prop_bool(widget, name, v);
declare function widget_get_prop_bool(widget, name, defval);
declare function widget_is_window_opened(widget);
declare function widget_is_window(widget);
declare function widget_is_designing_window(widget);
declare function widget_is_window_manager(widget);
declare function widget_foreach(widget, visit, ctx);
declare function widget_get_window(widget);
declare function widget_get_window_manager(widget);
declare function widget_get_type(widget);
declare function widget_clone(widget, parent);
declare function widget_equal(widget, other);
declare function widget_cast(widget);
declare function widget_destroy(widget);
declare function widget_layout(widget);
declare function widget_set_self_layout(widget, params);
declare function widget_set_children_layout(widget, params);
declare function widget_set_self_layout_params(widget, x, y, w, h);
declare function widget_set_style_int(widget, state_and_name, value);
declare function widget_set_style_str(widget, state_and_name, value);
declare function widget_set_style_color(widget, state_and_name, value);
declare function widget_t_get_prop_x(nativeObj);
declare function widget_t_get_prop_y(nativeObj);
declare function widget_t_get_prop_w(nativeObj);
declare function widget_t_get_prop_h(nativeObj);
declare function widget_t_get_prop_name(nativeObj);
declare function widget_t_get_prop_tr_text(nativeObj);
declare function widget_t_get_prop_style(nativeObj);
declare function widget_t_get_prop_animation(nativeObj);
declare function widget_t_get_prop_enable(nativeObj);
declare function widget_t_get_prop_visible(nativeObj);
declare function widget_t_set_prop_visible(nativeObj, value);
declare function widget_t_get_prop_sensitive(nativeObj);
declare function widget_t_set_prop_sensitive(nativeObj, value);
declare function widget_t_get_prop_focusable(nativeObj);
declare function widget_t_set_prop_focusable(nativeObj, value);
declare function widget_t_get_prop_with_focus_state(nativeObj);
declare function widget_t_set_prop_with_focus_state(nativeObj, value);
declare function widget_t_get_prop_floating(nativeObj);
declare function assets_manager();
declare function assets_manager_ref(am, type, name);
declare function assets_manager_unref(am, info);
declare function ASSET_TYPE_NONE();
declare function ASSET_TYPE_FONT();
declare function ASSET_TYPE_IMAGE();
declare function ASSET_TYPE_STYLE();
declare function ASSET_TYPE_UI();
declare function ASSET_TYPE_XML();
declare function ASSET_TYPE_STRINGS();
declare function ASSET_TYPE_SCRIPT();
declare function ASSET_TYPE_DATA();
declare function asset_info_t_get_prop_type(nativeObj);
declare function asset_info_t_get_prop_subtype(nativeObj);
declare function asset_info_t_get_prop_is_in_rom(nativeObj);
declare function asset_info_t_get_prop_size(nativeObj);
declare function asset_info_t_get_prop_refcount(nativeObj);
declare function asset_info_t_get_prop_name(nativeObj);
declare function color_create(r, b, g, a);
declare function color_from_str(c, str);
declare function color_r(c);
declare function color_g(c);
declare function color_b(c);
declare function color_a(c);
declare function color_cast(color);
declare function color_destroy(c);
declare function color_t_get_prop_color(nativeObj);
declare function color_t_set_prop_color(nativeObj, value);
declare function date_time_create();
declare function date_time_destroy(dt);
declare function date_time_t_get_prop_second(nativeObj);
declare function date_time_t_get_prop_minute(nativeObj);
declare function date_time_t_get_prop_hour(nativeObj);
declare function date_time_t_get_prop_day(nativeObj);
declare function date_time_t_get_prop_wday(nativeObj);
declare function date_time_t_get_prop_month(nativeObj);
declare function date_time_t_get_prop_year(nativeObj);
declare function emitter_create();
declare function emitter_dispatch(emitter, e);
declare function emitter_dispatch_simple_event(emitter, type);
declare function emitter_on(emitter, type, on_event, ctx);
declare function emitter_off(emitter, id);
declare function emitter_enable(emitter);
declare function emitter_disable(emitter);
declare function emitter_size(emitter);
declare function emitter_destroy(emitter);
declare function emitter_cast(emitter);
declare function EVT_NONE();
declare function EVT_PROP_WILL_CHANGE();
declare function EVT_PROP_CHANGED();
declare function EVT_ITEMS_WILL_CHANGE();
declare function EVT_ITEMS_CHANGED();
declare function EVT_PROPS_CHANGED();
declare function EVT_DESTROY();
declare function event_cast(event);
declare function event_create(type, target);
declare function event_destroy(event);
declare function event_t_get_prop_type(nativeObj);
declare function event_t_get_prop_time(nativeObj);
declare function event_t_get_prop_target(nativeObj);
declare function named_value_create();
declare function named_value_cast(nv);
declare function named_value_set_name(nv, name);
declare function named_value_set_value(nv, value);
declare function named_value_get_value(nv);
declare function named_value_destroy(nv);
declare function named_value_t_get_prop_name(nativeObj);
declare function rect_create(x, y, w, h);
declare function rect_set(rect, x, y, w, h);
declare function rect_cast(rect);
declare function rect_destroy(r);
declare function rect_t_get_prop_x(nativeObj);
declare function rect_t_get_prop_y(nativeObj);
declare function rect_t_get_prop_w(nativeObj);
declare function rect_t_get_prop_h(nativeObj);
declare function time_now_s();
declare function time_now_ms();
declare function RET_OK();
declare function RET_OOM();
declare function RET_FAIL();
declare function RET_NOT_IMPL();
declare function RET_QUIT();
declare function RET_FOUND();
declare function RET_BUSY();
declare function RET_REMOVE();
declare function RET_REPEAT();
declare function RET_NOT_FOUND();
declare function RET_DONE();
declare function RET_STOP();
declare function RET_SKIP();
declare function RET_CONTINUE();
declare function RET_OBJECT_CHANGED();
declare function RET_ITEMS_CHANGED();
declare function RET_BAD_PARAMS();
declare function VALUE_TYPE_INVALID();
declare function VALUE_TYPE_BOOL();
declare function VALUE_TYPE_INT8();
declare function VALUE_TYPE_UINT8();
declare function VALUE_TYPE_INT16();
declare function VALUE_TYPE_UINT16();
declare function VALUE_TYPE_INT32();
declare function VALUE_TYPE_UINT32();
declare function VALUE_TYPE_INT64();
declare function VALUE_TYPE_UINT64();
declare function VALUE_TYPE_POINTER();
declare function VALUE_TYPE_FLOAT();
declare function VALUE_TYPE_FLOAT32();
declare function VALUE_TYPE_DOUBLE();
declare function VALUE_TYPE_STRING();
declare function VALUE_TYPE_WSTRING();
declare function VALUE_TYPE_OBJECT();
declare function value_set_bool(v, value);
declare function value_bool(v);
declare function value_set_int8(v, value);
declare function value_int8(v);
declare function value_set_uint8(v, value);
declare function value_uint8(v);
declare function value_set_int16(v, value);
declare function value_int16(v);
declare function value_set_uint16(v, value);
declare function value_uint16(v);
declare function value_set_int32(v, value);
declare function value_int32(v);
declare function value_set_uint32(v, value);
declare function value_set_int64(v, value);
declare function value_int64(v);
declare function value_set_uint64(v, value);
declare function value_uint64(v);
declare function value_set_float(v, value);
declare function value_float(v);
declare function value_set_float32(v, value);
declare function value_float32(v);
declare function value_set_double(v, value);
declare function value_double(v);
declare function value_dup_str(v, value);
declare function value_str(v);
declare function value_wstr(v);
declare function value_is_null(value);
declare function value_int(v);
declare function value_set_int(v, value);
declare function value_set_object(v, value);
declare function value_object(v);
declare function value_create();
declare function value_destroy(v);
declare function value_reset(v);
declare function value_cast(value);
declare function slide_indicator_create(parent, x, y, w, h);
declare function slide_indicator_create_linear(parent, x, y, w, h);
declare function slide_indicator_create_arc(parent, x, y, w, h);
declare function slide_indicator_cast(widget);
declare function slide_indicator_set_value(widget, value);
declare function slide_indicator_set_max(widget, max);
declare function slide_indicator_set_default_paint(widget, default_paint);
declare function slide_indicator_set_auto_hide(widget, auto_hide);
declare function slide_indicator_set_margin(widget, margin);
declare function slide_indicator_set_spacing(widget, spacing);
declare function slide_indicator_set_size(widget, size);
declare function slide_indicator_set_anchor(widget, anchor_x, anchor_y);
declare function slide_indicator_set_indicated_target(widget, indicated_target);
declare function slide_indicator_t_get_prop_value(nativeObj);
declare function slide_indicator_t_get_prop_max(nativeObj);
declare function slide_indicator_t_get_prop_default_paint(nativeObj);
declare function slide_indicator_t_get_prop_auto_hide(nativeObj);
declare function slide_indicator_t_get_prop_margin(nativeObj);
declare function slide_indicator_t_get_prop_spacing(nativeObj);
declare function slide_indicator_t_get_prop_size(nativeObj);
declare function slide_indicator_t_get_prop_anchor_x(nativeObj);
declare function slide_indicator_t_get_prop_anchor_y(nativeObj);
declare function slide_indicator_t_get_prop_indicated_target(nativeObj);
declare function slide_view_create(parent, x, y, w, h);
declare function slide_view_cast(widget);
declare function slide_view_set_auto_play(widget, auto_play);
declare function slide_view_set_active(widget, index);
declare function slide_view_set_vertical(widget, vertical);
declare function slide_view_set_anim_hint(widget, anim_hint);
declare function slide_view_set_loop(widget, loop);
declare function slide_view_t_get_prop_vertical(nativeObj);
declare function slide_view_t_get_prop_auto_play(nativeObj);
declare function slide_view_t_get_prop_loop(nativeObj);
declare function slide_view_t_get_prop_anim_hint(nativeObj);
declare function slider_create(parent, x, y, w, h);
declare function slider_cast(widget);
declare function slider_set_value(widget, value);
declare function slider_set_min(widget, min);
declare function slider_set_max(widget, max);
declare function slider_set_step(widget, step);
declare function slider_set_bar_size(widget, bar_size);
declare function slider_set_vertical(widget, vertical);
declare function slider_t_get_prop_value(nativeObj);
declare function slider_t_get_prop_min(nativeObj);
declare function slider_t_get_prop_max(nativeObj);
declare function slider_t_get_prop_step(nativeObj);
declare function slider_t_get_prop_vertical(nativeObj);
declare function slider_t_get_prop_bar_size(nativeObj);
declare function switch_create(parent, x, y, w, h);
declare function switch_set_value(widget, value);
declare function switch_cast(widget);
declare function switch_t_get_prop_value(nativeObj);
declare function switch_t_get_prop_max_xoffset_ratio(nativeObj);
declare function text_selector_create(parent, x, y, w, h);
declare function text_selector_cast(widget);
declare function text_selector_reset_options(widget);
declare function text_selector_count_options(widget);
declare function text_selector_append_option(widget, value, text);
declare function text_selector_set_options(widget, options);
declare function text_selector_set_range_options(widget, start, nr, step);
declare function text_selector_get_value(widget);
declare function text_selector_set_value(widget, value);
declare function text_selector_get_text(widget);
declare function text_selector_set_text(widget, text);
declare function text_selector_set_selected_index(widget, index);
declare function text_selector_set_visible_nr(widget, visible_nr);
declare function text_selector_t_get_prop_visible_nr(nativeObj);
declare function text_selector_t_get_prop_selected_index(nativeObj);
declare function text_selector_t_get_prop_options(nativeObj);
declare function digit_clock_create(parent, x, y, w, h);
declare function digit_clock_cast(widget);
declare function digit_clock_set_format(widget, format);
declare function digit_clock_t_get_prop_format(nativeObj);
declare function time_clock_create(parent, x, y, w, h);
declare function time_clock_cast(widget);
declare function time_clock_set_hour(widget, hour);
declare function time_clock_set_minute(widget, minute);
declare function time_clock_set_second(widget, second);
declare function time_clock_set_hour_image(widget, hour);
declare function time_clock_set_minute_image(widget, minute_image);
declare function time_clock_set_second_image(widget, second_image);
declare function time_clock_set_bg_image(widget, bg_image);
declare function time_clock_set_image(widget, image);
declare function time_clock_t_get_prop_hour(nativeObj);
declare function time_clock_t_get_prop_minute(nativeObj);
declare function time_clock_t_get_prop_second(nativeObj);
declare function time_clock_t_get_prop_image(nativeObj);
declare function time_clock_t_get_prop_bg_image(nativeObj);
declare function time_clock_t_get_prop_hour_image(nativeObj);
declare function time_clock_t_get_prop_minute_image(nativeObj);
declare function time_clock_t_get_prop_second_image(nativeObj);
declare function key_event_cast(event);
declare function key_event_t_get_prop_key(nativeObj);
declare function key_event_t_get_prop_alt(nativeObj);
declare function key_event_t_get_prop_lalt(nativeObj);
declare function key_event_t_get_prop_ralt(nativeObj);
declare function key_event_t_get_prop_ctrl(nativeObj);
declare function key_event_t_get_prop_lctrl(nativeObj);
declare function key_event_t_get_prop_rctrl(nativeObj);
declare function key_event_t_get_prop_shift(nativeObj);
declare function key_event_t_get_prop_lshift(nativeObj);
declare function key_event_t_get_prop_rshift(nativeObj);
declare function key_event_t_get_prop_cmd(nativeObj);
declare function key_event_t_get_prop_menu(nativeObj);
declare function key_event_t_get_prop_capslock(nativeObj);
declare function row_create(parent, x, y, w, h);
declare function row_cast(widget);
declare function progress_bar_create(parent, x, y, w, h);
declare function progress_bar_cast(widget);
declare function progress_bar_set_value(widget, value);
declare function progress_bar_set_vertical(widget, vertical);
declare function progress_bar_set_show_text(widget, show_text);
declare function progress_bar_t_get_prop_value(nativeObj);
declare function progress_bar_t_get_prop_vertical(nativeObj);
declare function progress_bar_t_get_prop_show_text(nativeObj);
declare function popup_create(parent, x, y, w, h);
declare function popup_cast(widget);
declare function popup_set_close_when_click(widget, close_when_click);
declare function popup_set_close_when_click_outside(widget, close_when_click_outside);
declare function popup_t_get_prop_close_when_click(nativeObj);
declare function popup_t_get_prop_close_when_click_outside(nativeObj);
declare function pages_create(parent, x, y, w, h);
declare function pages_cast(widget);
declare function pages_set_active(widget, index);
declare function pages_set_active_by_name(widget, name);
declare function pages_t_get_prop_active(nativeObj);
declare function overlay_create(parent, x, y, w, h);
declare function overlay_cast(widget);
declare function label_create(parent, x, y, w, h);
declare function label_set_length(widget, length);
declare function label_resize_to_content(widget, min_w, max_w, min_h, max_h);
declare function label_cast(widget);
declare function label_t_get_prop_length(nativeObj);
declare function group_box_create(parent, x, y, w, h);
declare function group_box_cast(widget);
declare function paint_event_cast(event);
declare function paint_event_t_get_prop_c(nativeObj);
declare function view_create(parent, x, y, w, h);
declare function view_cast(widget);
declare function window_event_cast(event);
declare function window_event_t_get_prop_window(nativeObj);
declare function image_base_set_image(widget, name);
declare function image_base_set_rotation(widget, rotation);
declare function image_base_set_scale(widget, scale_x, scale_y);
declare function image_base_set_anchor(widget, anchor_x, anchor_y);
declare function image_base_set_selected(widget, selected);
declare function image_base_set_selectable(widget, selectable);
declare function image_base_set_clickable(widget, clickable);
declare function image_base_cast(widget);
declare function image_base_t_get_prop_image(nativeObj);
declare function image_base_t_get_prop_anchor_x(nativeObj);
declare function image_base_t_get_prop_anchor_y(nativeObj);
declare function image_base_t_get_prop_scale_x(nativeObj);
declare function image_base_t_get_prop_scale_y(nativeObj);
declare function image_base_t_get_prop_rotation(nativeObj);
declare function image_base_t_get_prop_clickable(nativeObj);
declare function image_base_t_get_prop_selectable(nativeObj);
declare function image_base_t_get_prop_selected(nativeObj);
declare function dialog_create(parent, x, y, w, h);
declare function dialog_create_simple(parent, x, y, w, h);
declare function dialog_cast(widget);
declare function dialog_get_title(widget);
declare function dialog_get_client(widget);
declare function dialog_open(name);
declare function dialog_set_title(widget, title);
declare function dialog_modal(widget);
declare function dialog_quit(widget, code);
declare function dialog_is_quited(widget);
declare function dialog_is_modal(widget);
declare function dialog_toast(text, duration);
declare function dialog_info(title, text);
declare function dialog_warn(title, text);
declare function dialog_confirm(title, text);
declare function dialog_t_get_prop_highlight(nativeObj);
declare function wheel_event_cast(event);
declare function wheel_event_t_get_prop_dy(nativeObj);
declare function wheel_event_t_get_prop_alt(nativeObj);
declare function wheel_event_t_get_prop_ctrl(nativeObj);
declare function wheel_event_t_get_prop_shift(nativeObj);
declare function orientation_event_cast(event);
declare function orientation_event_t_get_prop_orientation(nativeObj);
declare function pointer_event_cast(event);
declare function pointer_event_t_get_prop_x(nativeObj);
declare function pointer_event_t_get_prop_y(nativeObj);
declare function pointer_event_t_get_prop_button(nativeObj);
declare function pointer_event_t_get_prop_pressed(nativeObj);
declare function pointer_event_t_get_prop_alt(nativeObj);
declare function pointer_event_t_get_prop_ctrl(nativeObj);
declare function pointer_event_t_get_prop_cmd(nativeObj);
declare function pointer_event_t_get_prop_menu(nativeObj);
declare function pointer_event_t_get_prop_shift(nativeObj);
declare function window_base_cast(widget);
declare function window_base_t_get_prop_theme(nativeObj);
declare function window_base_t_get_prop_closable(nativeObj);
declare function window_manager();
declare function window_manager_cast(widget);
declare function window_manager_get_top_main_window(widget);
declare function window_manager_get_top_window(widget);
declare function window_manager_get_prev_window(widget);
declare function window_manager_get_pointer_x(widget);
declare function window_manager_get_pointer_y(widget);
declare function window_manager_get_pointer_pressed(widget);
declare function window_manager_set_show_fps(widget, show_fps);
declare function window_manager_set_screen_saver_time(widget, screen_saver_time);
declare function window_manager_set_cursor(widget, cursor);
declare function window_manager_back(widget);
declare function window_manager_back_to_home(widget);
declare function window_create(parent, x, y, w, h);
declare function window_set_fullscreen(widget, fullscreen);
declare function window_open(name);
declare function window_open_and_close(name, to_close);
declare function window_close(widget);
declare function window_close_force(widget);
declare function window_cast(widget);
declare function window_t_get_prop_fullscreen(nativeObj);
declare function canvas_widget_create(parent, x, y, w, h);
declare function canvas_widget_cast(widget);
declare function prop_change_event_cast(event);
declare function prop_change_event_t_get_prop_name(nativeObj);
declare function prop_change_event_t_get_prop_value(nativeObj);
declare function color_picker_create(parent, x, y, w, h);
declare function color_picker_set_color(widget, color);
declare function color_picker_cast(widget);
declare function color_picker_t_get_prop_value(nativeObj);
declare function grid_create(parent, x, y, w, h);
declare function grid_cast(widget);
declare function grid_item_create(parent, x, y, w, h);
declare function grid_item_cast(widget);
declare function edit_create(parent, x, y, w, h);
declare function edit_cast(widget);
declare function edit_get_int(widget);
declare function edit_get_double(widget);
declare function edit_set_int(widget, value);
declare function edit_set_double(widget, value);
declare function edit_set_text_limit(widget, min, max);
declare function edit_set_int_limit(widget, min, max, step);
declare function edit_set_float_limit(widget, min, max, step);
declare function edit_set_readonly(widget, readonly);
declare function edit_set_auto_fix(widget, auto_fix);
declare function edit_set_input_type(widget, type);
declare function edit_set_input_tips(widget, tips);
declare function edit_set_password_visible(widget, password_visible);
declare function edit_set_focus(widget, focus);
declare function edit_t_get_prop_readonly(nativeObj);
declare function edit_t_get_prop_password_visible(nativeObj);
declare function edit_t_get_prop_auto_fix(nativeObj);
declare function edit_t_get_prop_top_margin(nativeObj);
declare function edit_t_get_prop_bottom_margin(nativeObj);
declare function edit_t_get_prop_left_margin(nativeObj);
declare function edit_t_get_prop_right_margin(nativeObj);
declare function edit_t_get_prop_tips(nativeObj);
declare function tab_control_create(parent, x, y, w, h);
declare function tab_control_cast(widget);
declare function style_mutable_get_name(s);
declare function style_mutable_set_name(s, name);
declare function style_mutable_set_int(s, state, name, val);
declare function style_mutable_cast(s);
declare function style_mutable_create(widget, default_style);
declare function style_mutable_t_get_prop_name(nativeObj);
declare function tab_button_create(parent, x, y, w, h);
declare function tab_button_cast(widget);
declare function tab_button_set_value(widget, value);
declare function tab_button_set_icon(widget, name);
declare function tab_button_set_active_icon(widget, name);
declare function tab_button_t_get_prop_value(nativeObj);
declare function tab_button_t_get_prop_active_icon(nativeObj);
declare function tab_button_t_get_prop_icon(nativeObj);
declare function dragger_create(parent, x, y, w, h);
declare function dragger_cast(widget);
declare function dragger_set_range(widget, x_min, y_min, x_max, y_max);
declare function dragger_t_get_prop_x_min(nativeObj);
declare function dragger_t_get_prop_y_min(nativeObj);
declare function dragger_t_get_prop_x_max(nativeObj);
declare function dragger_t_get_prop_y_max(nativeObj);
declare function object_unref(obj);
declare function object_ref(obj);
declare function object_get_type(obj);
declare function object_get_desc(obj);
declare function object_get_size(obj);
declare function object_is_collection(obj);
declare function object_set_name(obj, name);
declare function object_compare(obj, other);
declare function object_get_prop(obj, name, v);
declare function object_get_prop_str(obj, name);
declare function object_get_prop_pointer(obj, name);
declare function object_get_prop_object(obj, name);
declare function object_get_prop_int(obj, name, defval);
declare function object_get_prop_bool(obj, name, defval);
declare function object_get_prop_float(obj, name, defval);
declare function object_remove_prop(obj, name);
declare function object_set_prop(obj, name, value);
declare function object_set_prop_str(obj, name, value);
declare function object_set_prop_pointer(obj, name, value);
declare function object_set_prop_object(obj, name, value);
declare function object_set_prop_int(obj, name, value);
declare function object_set_prop_bool(obj, name, value);
declare function object_set_prop_float(obj, name, value);
declare function object_copy_prop(obj, src, name);
declare function object_foreach_prop(obj, on_prop, ctx);
declare function object_has_prop(obj, name);
declare function object_eval(obj, expr, v);
declare function object_can_exec(obj, name, args);
declare function object_exec(obj, name, args);
declare function object_notify_changed(obj);
declare function object_t_get_prop_ref_count(nativeObj);
declare function object_t_get_prop_name(nativeObj);
declare function dialog_title_create(parent, x, y, w, h);
declare function dialog_title_cast(widget);
declare function guage_pointer_create(parent, x, y, w, h);
declare function guage_pointer_cast(widget);
declare function guage_pointer_set_angle(widget, angle);
declare function guage_pointer_set_image(widget, image);
declare function guage_pointer_set_anchor(widget, anchor_x, anchor_y);
declare function guage_pointer_t_get_prop_angle(nativeObj);
declare function guage_pointer_t_get_prop_image(nativeObj);
declare function guage_pointer_t_get_prop_anchor_x(nativeObj);
declare function guage_pointer_t_get_prop_anchor_y(nativeObj);
declare function guage_create(parent, x, y, w, h);
declare function guage_cast(widget);
declare function guage_set_image(widget, name);
declare function guage_set_draw_type(widget, draw_type);
declare function guage_t_get_prop_image(nativeObj);
declare function guage_t_get_prop_draw_type(nativeObj);
declare function image_animation_create(parent, x, y, w, h);
declare function image_animation_set_loop(widget, loop);
declare function image_animation_set_image(widget, image);
declare function image_animation_set_interval(widget, interval);
declare function image_animation_set_delay(widget, delay);
declare function image_animation_set_auto_play(widget, auto_play);
declare function image_animation_set_sequence(widget, sequence);
declare function image_animation_set_range_sequence(widget, start_index, end_index);
declare function image_animation_play(widget);
declare function image_animation_stop(widget);
declare function image_animation_pause(widget);
declare function image_animation_set_format(widget, format);
declare function image_animation_set_unload_after_paint(widget, unload_after_paint);
declare function image_animation_cast(widget);
declare function image_animation_t_get_prop_image(nativeObj);
declare function image_animation_t_get_prop_sequence(nativeObj);
declare function image_animation_t_get_prop_start_index(nativeObj);
declare function image_animation_t_get_prop_end_index(nativeObj);
declare function image_animation_t_get_prop_loop(nativeObj);
declare function image_animation_t_get_prop_auto_play(nativeObj);
declare function image_animation_t_get_prop_unload_after_paint(nativeObj);
declare function image_animation_t_get_prop_format(nativeObj);
declare function image_animation_t_get_prop_interval(nativeObj);
declare function image_animation_t_get_prop_delay(nativeObj);
declare function image_value_create(parent, x, y, w, h);
declare function image_value_set_image(widget, image);
declare function image_value_set_format(widget, format);
declare function image_value_set_value(widget, value);
declare function image_value_cast(widget);
declare function image_value_t_get_prop_image(nativeObj);
declare function image_value_t_get_prop_format(nativeObj);
declare function image_value_t_get_prop_value(nativeObj);
declare function dialog_client_create(parent, x, y, w, h);
declare function dialog_client_cast(widget);
declare function line_number_create(parent, x, y, w, h);
declare function line_number_set_top_margin(widget, top_margin);
declare function line_number_set_bottom_margin(widget, bottom_margin);
declare function line_number_set_line_height(widget, line_height);
declare function line_number_set_yoffset(widget, yoffset);
declare function line_number_cast(widget);
declare function mledit_create(parent, x, y, w, h);
declare function mledit_set_readonly(widget, readonly);
declare function mledit_set_focus(widget, focus);
declare function mledit_set_wrap_word(widget, wrap_word);
declare function mledit_set_max_lines(widget, max_lines);
declare function mledit_set_input_tips(widget, tips);
declare function mledit_cast(widget);
declare function mledit_t_get_prop_readonly(nativeObj);
declare function mledit_t_get_prop_top_margin(nativeObj);
declare function mledit_t_get_prop_bottom_margin(nativeObj);
declare function mledit_t_get_prop_left_margin(nativeObj);
declare function mledit_t_get_prop_right_margin(nativeObj);
declare function mledit_t_get_prop_tips(nativeObj);
declare function mledit_t_get_prop_wrap_word(nativeObj);
declare function mledit_t_get_prop_max_lines(nativeObj);
declare function tab_button_group_create(parent, x, y, w, h);
declare function tab_button_group_set_compact(widget, compact);
declare function tab_button_group_set_scrollable(widget, scrollable);
declare function tab_button_group_cast(widget);
declare function tab_button_group_t_get_prop_compact(nativeObj);
declare function tab_button_group_t_get_prop_scrollable(nativeObj);
declare function progress_circle_create(parent, x, y, w, h);
declare function progress_circle_cast(widget);
declare function progress_circle_set_value(widget, value);
declare function progress_circle_set_max(widget, max);
declare function progress_circle_set_line_width(widget, line_width);
declare function progress_circle_set_start_angle(widget, start_angle);
declare function progress_circle_set_unit(widget, unit);
declare function progress_circle_set_show_text(widget, show_text);
declare function progress_circle_set_counter_clock_wise(widget, counter_clock_wise);
declare function progress_circle_t_get_prop_value(nativeObj);
declare function progress_circle_t_get_prop_max(nativeObj);
declare function progress_circle_t_get_prop_start_angle(nativeObj);
declare function progress_circle_t_get_prop_line_width(nativeObj);
declare function progress_circle_t_get_prop_unit(nativeObj);
declare function progress_circle_t_get_prop_counter_clock_wise(nativeObj);
declare function progress_circle_t_get_prop_show_text(nativeObj);
declare function rich_text_create(parent, x, y, w, h);
declare function rich_text_set_text(widget, text);
declare function rich_text_cast(widget);
declare function rich_text_t_get_prop_line_gap(nativeObj);
declare function hscroll_label_create(parent, x, y, w, h);
declare function hscroll_label_set_lull(widget, lull);
declare function hscroll_label_set_duration(widget, duration);
declare function hscroll_label_set_only_focus(widget, only_focus);
declare function hscroll_label_set_loop(widget, loop);
declare function hscroll_label_set_yoyo(widget, yoyo);
declare function hscroll_label_set_ellipses(widget, ellipses);
declare function hscroll_label_set_xoffset(widget, xoffset);
declare function hscroll_label_start(widget);
declare function hscroll_label_stop(widget);
declare function hscroll_label_cast(widget);
declare function hscroll_label_t_get_prop_only_focus(nativeObj);
declare function hscroll_label_t_get_prop_loop(nativeObj);
declare function hscroll_label_t_get_prop_yoyo(nativeObj);
declare function hscroll_label_t_get_prop_ellipses(nativeObj);
declare function hscroll_label_t_get_prop_lull(nativeObj);
declare function hscroll_label_t_get_prop_duration(nativeObj);
declare function hscroll_label_t_get_prop_xoffset(nativeObj);
declare function hscroll_label_t_get_prop_text_w(nativeObj);
declare function list_item_create(parent, x, y, w, h);
declare function list_item_cast(widget);
declare function list_view_h_create(parent, x, y, w, h);
declare function list_view_h_set_item_width(widget, item_width);
declare function list_view_h_set_spacing(widget, spacing);
declare function list_view_h_cast(widget);
declare function list_view_h_t_get_prop_item_width(nativeObj);
declare function list_view_h_t_get_prop_spacing(nativeObj);
declare function list_view_create(parent, x, y, w, h);
declare function list_view_set_item_height(widget, item_height);
declare function list_view_set_default_item_height(widget, default_item_height);
declare function list_view_set_auto_hide_scroll_bar(widget, auto_hide_scroll_bar);
declare function list_view_cast(widget);
declare function list_view_t_get_prop_item_height(nativeObj);
declare function list_view_t_get_prop_default_item_height(nativeObj);
declare function list_view_t_get_prop_auto_hide_scroll_bar(nativeObj);
declare function scroll_bar_create(parent, x, y, w, h);
declare function scroll_bar_cast(widget);
declare function scroll_bar_create_mobile(parent, x, y, w, h);
declare function scroll_bar_create_desktop(parent, x, y, w, h);
declare function scroll_bar_set_params(widget, virtual_size, row);
declare function scroll_bar_scroll_to(widget, value, duration);
declare function scroll_bar_set_value(widget, value);
declare function scroll_bar_add_delta(widget, delta);
declare function scroll_bar_scroll_delta(widget, delta);
declare function scroll_bar_set_value_only(widget, value);
declare function scroll_bar_is_mobile(widget);
declare function scroll_bar_t_get_prop_virtual_size(nativeObj);
declare function scroll_bar_t_get_prop_value(nativeObj);
declare function scroll_bar_t_get_prop_row(nativeObj);
declare function scroll_bar_t_get_prop_animatable(nativeObj);
declare function scroll_view_create(parent, x, y, w, h);
declare function scroll_view_cast(widget);
declare function scroll_view_set_virtual_w(widget, w);
declare function scroll_view_set_virtual_h(widget, h);
declare function scroll_view_set_xslidable(widget, xslidable);
declare function scroll_view_set_yslidable(widget, yslidable);
declare function scroll_view_set_offset(widget, xoffset, yoffset);
declare function scroll_view_scroll_to(widget, xoffset_end, yoffset_end, duration);
declare function scroll_view_t_get_prop_virtual_w(nativeObj);
declare function scroll_view_t_get_prop_virtual_h(nativeObj);
declare function scroll_view_t_get_prop_xoffset(nativeObj);
declare function scroll_view_t_get_prop_yoffset(nativeObj);
declare function scroll_view_t_get_prop_xslidable(nativeObj);
declare function scroll_view_t_get_prop_yslidable(nativeObj);
declare function slide_menu_create(parent, x, y, w, h);
declare function slide_menu_cast(widget);
declare function slide_menu_set_value(widget, value);
declare function slide_menu_set_align_v(widget, align_v);
declare function slide_menu_set_min_scale(widget, min_scale);
declare function slide_menu_t_get_prop_value(nativeObj);
declare function slide_menu_t_get_prop_align_v(nativeObj);
declare function slide_menu_t_get_prop_min_scale(nativeObj);
declare function app_bar_create(parent, x, y, w, h);
declare function app_bar_cast(widget);
declare function button_group_create(parent, x, y, w, h);
declare function button_group_cast(widget);
declare function button_create(parent, x, y, w, h);
declare function button_cast(widget);
declare function button_set_repeat(widget, repeat);
declare function button_set_enable_long_press(widget, enable_long_press);
declare function button_t_get_prop_repeat(nativeObj);
declare function button_t_get_prop_enable_long_press(nativeObj);
declare function check_button_create(parent, x, y, w, h);
declare function check_button_create_radio(parent, x, y, w, h);
declare function check_button_set_value(widget, value);
declare function check_button_cast(widget);
declare function check_button_t_get_prop_value(nativeObj);
declare function color_tile_create(parent, x, y, w, h);
declare function color_tile_cast(widget);
declare function color_tile_set_bg_color(widget, color);
declare function color_tile_t_get_prop_bg_color(nativeObj);
declare function color_tile_t_get_prop_border_color(nativeObj);
declare function column_create(parent, x, y, w, h);
declare function column_cast(widget);
declare function combo_box_item_create(parent, x, y, w, h);
declare function combo_box_item_cast(widget);
declare function combo_box_item_set_checked(widget, checked);
declare function combo_box_item_set_value(widget, value);
declare function combo_box_item_t_get_prop_value(nativeObj);
declare function combo_box_item_t_get_prop_checked(nativeObj);
declare function combo_box_create(parent, x, y, w, h);
declare function combo_box_cast(widget);
declare function combo_box_set_open_window(widget, open_window);
declare function combo_box_reset_options(widget);
declare function combo_box_count_options(widget);
declare function combo_box_set_selected_index(widget, index);
declare function combo_box_set_value(widget, value);
declare function combo_box_append_option(widget, value, text);
declare function combo_box_set_options(widget, options);
declare function combo_box_get_value(widget);
declare function combo_box_get_text(widget);
declare function combo_box_t_get_prop_open_window(nativeObj);
declare function combo_box_t_get_prop_selected_index(nativeObj);
declare function combo_box_t_get_prop_value(nativeObj);
declare function combo_box_t_get_prop_options(nativeObj);
declare function timer_info_cast(timer);
declare function timer_info_t_get_prop_ctx(nativeObj);
declare function timer_info_t_get_prop_id(nativeObj);
declare function timer_info_t_get_prop_now(nativeObj);
declare function timer_info_t_get_prop_user_changed_time(nativeObj);
declare function object_default_create();
declare function object_default_unref(obj);
declare function object_default_clear_props(obj);
declare function object_default_t_get_prop_props_size(nativeObj);
declare function idle_info_cast(idle);
declare function idle_info_t_get_prop_ctx(nativeObj);
declare function idle_info_t_get_prop_id(nativeObj);
declare function image_create(parent, x, y, w, h);
declare function image_set_draw_type(widget, draw_type);
declare function image_cast(widget);
declare function image_t_get_prop_draw_type(nativeObj);
declare function combo_box_ex_create(parent, x, y, w, h);
declare function gif_image_create(parent, x, y, w, h);
declare function gif_image_cast(widget);
declare function svg_image_create(parent, x, y, w, h);
declare function svg_image_cast(widget);
declare function spin_box_create(parent, x, y, w, h);
declare function spin_box_cast(widget);
declare function system_bar_create(parent, x, y, w, h);
declare function system_bar_cast(widget);

class TGlobal {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static quit() {
   return tk_quit();
 }

 static getPointerX() {
   return tk_get_pointer_x();
 }

 static getPointerY() {
   return tk_get_pointer_y();
 }

 static isPointerPressed() {
   return tk_is_pointer_pressed();
 }

}

enum TBitmapFlag {
 NONE = BITMAP_FLAG_NONE(),
 OPAQUE = BITMAP_FLAG_OPAQUE(),
 IMMUTABLE = BITMAP_FLAG_IMMUTABLE(),
 TEXTURE = BITMAP_FLAG_TEXTURE(),
 CHANGED = BITMAP_FLAG_CHANGED(),
 PREMULTI_ALPHA = BITMAP_FLAG_PREMULTI_ALPHA(),
};

class TBitmap {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create() {
   return new TBitmap(bitmap_create());
 }

 static createEx(w, h, line_length, format) {
   return new TBitmap(bitmap_create_ex(w, h, line_length, format));
 }

 getBpp() {
   return bitmap_get_bpp(this.nativeObj);
 }

 destroy() {
   return bitmap_destroy(this.nativeObj);
 }

 get w() {
   return bitmap_t_get_prop_w(this.nativeObj);
 }

 get h() {
   return bitmap_t_get_prop_h(this.nativeObj);
 }

 get lineLength() {
   return bitmap_t_get_prop_line_length(this.nativeObj);
 }

 get flags() {
   return bitmap_t_get_prop_flags(this.nativeObj);
 }

 get format() {
   return bitmap_t_get_prop_format(this.nativeObj);
 }

 get name() {
   return bitmap_t_get_prop_name(this.nativeObj);
 }

}

enum TImageDrawType {
 DEFAULT = IMAGE_DRAW_DEFAULT(),
 CENTER = IMAGE_DRAW_CENTER(),
 ICON = IMAGE_DRAW_ICON(),
 SCALE = IMAGE_DRAW_SCALE(),
 SCALE_AUTO = IMAGE_DRAW_SCALE_AUTO(),
 SCALE_DOWN = IMAGE_DRAW_SCALE_DOWN(),
 SCALE_W = IMAGE_DRAW_SCALE_W(),
 SCALE_H = IMAGE_DRAW_SCALE_H(),
 REPEAT = IMAGE_DRAW_REPEAT(),
 REPEAT_X = IMAGE_DRAW_REPEAT_X(),
 REPEAT_Y = IMAGE_DRAW_REPEAT_Y(),
 PATCH9 = IMAGE_DRAW_PATCH9(),
 PATCH3_X = IMAGE_DRAW_PATCH3_X(),
 PATCH3_Y = IMAGE_DRAW_PATCH3_Y(),
 PATCH3_X_SCALE_Y = IMAGE_DRAW_PATCH3_X_SCALE_Y(),
 PATCH3_Y_SCALE_X = IMAGE_DRAW_PATCH3_Y_SCALE_X(),
};

class TCanvas {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 getWidth() {
   return canvas_get_width(this.nativeObj);
 }

 getHeight() {
   return canvas_get_height(this.nativeObj);
 }

 getClipRect(r) {
   return canvas_get_clip_rect(this.nativeObj, r ? r.nativeObj : null);
 }

 setClipRect(r) {
   return canvas_set_clip_rect(this.nativeObj, r ? r.nativeObj : null);
 }

 setClipRectEx(r, translate) {
   return canvas_set_clip_rect_ex(this.nativeObj, r ? r.nativeObj : null, translate);
 }

 setFillColor(color) {
   return canvas_set_fill_color_str(this.nativeObj, color);
 }

 setTextColor(color) {
   return canvas_set_text_color_str(this.nativeObj, color);
 }

 setStrokeColor(color) {
   return canvas_set_stroke_color_str(this.nativeObj, color);
 }

 setGlobalAlpha(alpha) {
   return canvas_set_global_alpha(this.nativeObj, alpha);
 }

 translate(dx, dy) {
   return canvas_translate(this.nativeObj, dx, dy);
 }

 untranslate(dx, dy) {
   return canvas_untranslate(this.nativeObj, dx, dy);
 }

 drawVline(x, y, h) {
   return canvas_draw_vline(this.nativeObj, x, y, h);
 }

 drawHline(x, y, w) {
   return canvas_draw_hline(this.nativeObj, x, y, w);
 }

 fillRect(x, y, w, h) {
   return canvas_fill_rect(this.nativeObj, x, y, w, h);
 }

 strokeRect(x, y, w, h) {
   return canvas_stroke_rect(this.nativeObj, x, y, w, h);
 }

 setFont(name, size) {
   return canvas_set_font(this.nativeObj, name, size);
 }

 measureText(str) {
   return canvas_measure_utf8(this.nativeObj, str);
 }

 drawText(str, x, y) {
   return canvas_draw_utf8(this.nativeObj, str, x, y);
 }

 drawTextInRect(str, r) {
   return canvas_draw_utf8_in_rect(this.nativeObj, str, r ? r.nativeObj : null);
 }

 drawIcon(img, cx, cy) {
   return canvas_draw_icon(this.nativeObj, img ? img.nativeObj : null, cx, cy);
 }

 drawImage(img, src, dst) {
   return canvas_draw_image(this.nativeObj, img ? img.nativeObj : null, src ? src.nativeObj : null, dst ? dst.nativeObj : null);
 }

 getVgcanvas() {
   return new TVgcanvas(canvas_get_vgcanvas(this.nativeObj));
 }

 static cast(c) {
   return new TCanvas(canvas_cast(c ? (c.nativeObj || c) : null));
 }

 reset() {
   return canvas_reset(this.nativeObj);
 }

 get ox() {
   return canvas_t_get_prop_ox(this.nativeObj);
 }

 get oy() {
   return canvas_t_get_prop_oy(this.nativeObj);
 }

}

enum TClipBoardDataType {
 NONE = CLIP_BOARD_DATA_TYPE_NONE(),
 TEXT = CLIP_BOARD_DATA_TYPE_TEXT(),
};

class TClipBoard {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static setText(text) {
   return clip_board_set_text(text);
 }

 static getText() {
   return clip_board_get_text();
 }

}

enum TEventType {
 POINTER_DOWN = EVT_POINTER_DOWN(),
 POINTER_DOWN_BEFORE_CHILDREN = EVT_POINTER_DOWN_BEFORE_CHILDREN(),
 POINTER_MOVE = EVT_POINTER_MOVE(),
 POINTER_MOVE_BEFORE_CHILDREN = EVT_POINTER_MOVE_BEFORE_CHILDREN(),
 POINTER_UP = EVT_POINTER_UP(),
 POINTER_UP_BEFORE_CHILDREN = EVT_POINTER_UP_BEFORE_CHILDREN(),
 WHEEL = EVT_WHEEL(),
 POINTER_DOWN_ABORT = EVT_POINTER_DOWN_ABORT(),
 CONTEXT_MENU = EVT_CONTEXT_MENU(),
 POINTER_ENTER = EVT_POINTER_ENTER(),
 POINTER_LEAVE = EVT_POINTER_LEAVE(),
 LONG_PRESS = EVT_LONG_PRESS(),
 CLICK = EVT_CLICK(),
 FOCUS = EVT_FOCUS(),
 BLUR = EVT_BLUR(),
 KEY_DOWN = EVT_KEY_DOWN(),
 KEY_DOWN_BEFORE_CHILDREN = EVT_KEY_DOWN_BEFORE_CHILDREN(),
 KEY_REPEAT = EVT_KEY_REPEAT(),
 KEY_UP = EVT_KEY_UP(),
 KEY_UP_BEFORE_CHILDREN = EVT_KEY_UP_BEFORE_CHILDREN(),
 WILL_MOVE = EVT_WILL_MOVE(),
 MOVE = EVT_MOVE(),
 WILL_RESIZE = EVT_WILL_RESIZE(),
 RESIZE = EVT_RESIZE(),
 WILL_MOVE_RESIZE = EVT_WILL_MOVE_RESIZE(),
 MOVE_RESIZE = EVT_MOVE_RESIZE(),
 VALUE_WILL_CHANGE = EVT_VALUE_WILL_CHANGE(),
 VALUE_CHANGED = EVT_VALUE_CHANGED(),
 VALUE_CHANGING = EVT_VALUE_CHANGING(),
 PAINT = EVT_PAINT(),
 BEFORE_PAINT = EVT_BEFORE_PAINT(),
 AFTER_PAINT = EVT_AFTER_PAINT(),
 PAINT_DONE = EVT_PAINT_DONE(),
 LOCALE_CHANGED = EVT_LOCALE_CHANGED(),
 ANIM_START = EVT_ANIM_START(),
 ANIM_STOP = EVT_ANIM_STOP(),
 ANIM_PAUSE = EVT_ANIM_PAUSE(),
 ANIM_ONCE = EVT_ANIM_ONCE(),
 ANIM_END = EVT_ANIM_END(),
 WINDOW_LOAD = EVT_WINDOW_LOAD(),
 WINDOW_WILL_OPEN = EVT_WINDOW_WILL_OPEN(),
 WINDOW_OPEN = EVT_WINDOW_OPEN(),
 WINDOW_TO_BACKGROUND = EVT_WINDOW_TO_BACKGROUND(),
 WINDOW_TO_FOREGROUND = EVT_WINDOW_TO_FOREGROUND(),
 WINDOW_CLOSE = EVT_WINDOW_CLOSE(),
 REQUEST_CLOSE_WINDOW = EVT_REQUEST_CLOSE_WINDOW(),
 TOP_WINDOW_CHANGED = EVT_TOP_WINDOW_CHANGED(),
 IM_COMMIT = EVT_IM_COMMIT(),
 IM_SHOW_CANDIDATES = EVT_IM_SHOW_CANDIDATES(),
 IM_ACTION = EVT_IM_ACTION(),
 IM_ACTION_INFO = EVT_IM_ACTION_INFO(),
 DRAG_START = EVT_DRAG_START(),
 DRAG = EVT_DRAG(),
 DRAG_END = EVT_DRAG_END(),
 SCREEN_SAVER = EVT_SCREEN_SAVER(),
 LOW_MEMORY = EVT_LOW_MEMORY(),
 OUT_OF_MEMORY = EVT_OUT_OF_MEMORY(),
 ORIENTATION_WILL_CHANGED = EVT_ORIENTATION_WILL_CHANGED(),
 ORIENTATION_CHANGED = EVT_ORIENTATION_CHANGED(),
 WIDGET_CREATED = EVT_WIDGET_CREATED(),
 REQ_START = EVT_REQ_START(),
 USER_START = EVT_USER_START(),
};

class TFontManager {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 unloadFont(name, size) {
   return font_manager_unload_font(this.nativeObj, name, size);
 }

}

enum TGlyphFormat {
 ALPHA = GLYPH_FMT_ALPHA(),
 MONO = GLYPH_FMT_MONO(),
 RGBA = GLYPH_FMT_RGBA(),
};

class TIdle {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static add(on_idle, ctx) {
   return idle_add(on_idle, ctx);
 }

 static remove(idle_id) {
   return idle_remove(idle_id);
 }

}

class TImageManager {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new TImageManager(image_manager());
 }

 getBitmap(name, image) {
   return image_manager_get_bitmap(this.nativeObj, name, image ? image.nativeObj : null);
 }

}

enum TInputType {
 TEXT = INPUT_TEXT(),
 INT = INPUT_INT(),
 UINT = INPUT_UINT(),
 HEX = INPUT_HEX(),
 FLOAT = INPUT_FLOAT(),
 UFLOAT = INPUT_UFLOAT(),
 EMAIL = INPUT_EMAIL(),
 PASSWORD = INPUT_PASSWORD(),
 PHONE = INPUT_PHONE(),
 CUSTOM = INPUT_CUSTOM(),
};

class TInputMethod {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 commitText(text) {
   return input_method_commit_text(this.nativeObj, text);
 }

 dispatchKey(key) {
   return input_method_dispatch_key(this.nativeObj, key);
 }

 static instance() {
   return new TInputMethod(input_method());
 }

}

enum TKeyCode {
 KEY_RETURN = TK_KEY_RETURN(),
 KEY_ESCAPE = TK_KEY_ESCAPE(),
 KEY_BACKSPACE = TK_KEY_BACKSPACE(),
 KEY_TAB = TK_KEY_TAB(),
 KEY_SPACE = TK_KEY_SPACE(),
 KEY_EXCLAIM = TK_KEY_EXCLAIM(),
 KEY_QUOTEDBL = TK_KEY_QUOTEDBL(),
 KEY_HASH = TK_KEY_HASH(),
 KEY_PERCENT = TK_KEY_PERCENT(),
 KEY_DOLLAR = TK_KEY_DOLLAR(),
 KEY_AMPERSAND = TK_KEY_AMPERSAND(),
 KEY_QUOTE = TK_KEY_QUOTE(),
 KEY_LEFTPAREN = TK_KEY_LEFTPAREN(),
 KEY_RIGHTPAREN = TK_KEY_RIGHTPAREN(),
 KEY_ASTERISK = TK_KEY_ASTERISK(),
 KEY_PLUS = TK_KEY_PLUS(),
 KEY_COMMA = TK_KEY_COMMA(),
 KEY_MINUS = TK_KEY_MINUS(),
 KEY_PERIOD = TK_KEY_PERIOD(),
 KEY_SLASH = TK_KEY_SLASH(),
 KEY_0 = TK_KEY_0(),
 KEY_1 = TK_KEY_1(),
 KEY_2 = TK_KEY_2(),
 KEY_3 = TK_KEY_3(),
 KEY_4 = TK_KEY_4(),
 KEY_5 = TK_KEY_5(),
 KEY_6 = TK_KEY_6(),
 KEY_7 = TK_KEY_7(),
 KEY_8 = TK_KEY_8(),
 KEY_9 = TK_KEY_9(),
 KEY_COLON = TK_KEY_COLON(),
 KEY_SEMICOLON = TK_KEY_SEMICOLON(),
 KEY_LESS = TK_KEY_LESS(),
 KEY_EQUAL = TK_KEY_EQUAL(),
 KEY_GREATER = TK_KEY_GREATER(),
 KEY_QUESTION = TK_KEY_QUESTION(),
 KEY_AT = TK_KEY_AT(),
 KEY_LEFTBRACKET = TK_KEY_LEFTBRACKET(),
 KEY_BACKSLASH = TK_KEY_BACKSLASH(),
 KEY_RIGHTBRACKET = TK_KEY_RIGHTBRACKET(),
 KEY_CARET = TK_KEY_CARET(),
 KEY_UNDERSCORE = TK_KEY_UNDERSCORE(),
 KEY_BACKQUOTE = TK_KEY_BACKQUOTE(),
 KEY_a = TK_KEY_a(),
 KEY_b = TK_KEY_b(),
 KEY_c = TK_KEY_c(),
 KEY_d = TK_KEY_d(),
 KEY_e = TK_KEY_e(),
 KEY_f = TK_KEY_f(),
 KEY_g = TK_KEY_g(),
 KEY_h = TK_KEY_h(),
 KEY_i = TK_KEY_i(),
 KEY_j = TK_KEY_j(),
 KEY_k = TK_KEY_k(),
 KEY_l = TK_KEY_l(),
 KEY_m = TK_KEY_m(),
 KEY_n = TK_KEY_n(),
 KEY_o = TK_KEY_o(),
 KEY_p = TK_KEY_p(),
 KEY_q = TK_KEY_q(),
 KEY_r = TK_KEY_r(),
 KEY_s = TK_KEY_s(),
 KEY_t = TK_KEY_t(),
 KEY_u = TK_KEY_u(),
 KEY_v = TK_KEY_v(),
 KEY_w = TK_KEY_w(),
 KEY_x = TK_KEY_x(),
 KEY_y = TK_KEY_y(),
 KEY_z = TK_KEY_z(),
 KEY_A = TK_KEY_A(),
 KEY_B = TK_KEY_B(),
 KEY_C = TK_KEY_C(),
 KEY_D = TK_KEY_D(),
 KEY_E = TK_KEY_E(),
 KEY_F = TK_KEY_F(),
 KEY_G = TK_KEY_G(),
 KEY_H = TK_KEY_H(),
 KEY_I = TK_KEY_I(),
 KEY_J = TK_KEY_J(),
 KEY_K = TK_KEY_K(),
 KEY_L = TK_KEY_L(),
 KEY_M = TK_KEY_M(),
 KEY_N = TK_KEY_N(),
 KEY_O = TK_KEY_O(),
 KEY_P = TK_KEY_P(),
 KEY_Q = TK_KEY_Q(),
 KEY_R = TK_KEY_R(),
 KEY_S = TK_KEY_S(),
 KEY_T = TK_KEY_T(),
 KEY_U = TK_KEY_U(),
 KEY_V = TK_KEY_V(),
 KEY_W = TK_KEY_W(),
 KEY_X = TK_KEY_X(),
 KEY_Y = TK_KEY_Y(),
 KEY_Z = TK_KEY_Z(),
 KEY_DOT = TK_KEY_DOT(),
 KEY_DELETE = TK_KEY_DELETE(),
 KEY_LEFTBRACE = TK_KEY_LEFTBRACE(),
 KEY_RIGHTBRACE = TK_KEY_RIGHTBRACE(),
};

class TLocaleInfo {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new TLocaleInfo(locale_info());
 }

 tr(text) {
   return locale_info_tr(this.nativeObj, text);
 }

 change(language, country) {
   return locale_info_change(this.nativeObj, language, country);
 }

 on(type, on_event, ctx) {
   return locale_info_on(this.nativeObj, type, on_event, ctx);
 }

 off(id) {
   return locale_info_off(this.nativeObj, id);
 }

}

enum TStyleId {
 _ID_BG_COLOR = STYLE_ID_BG_COLOR(),
 _ID_FG_COLOR = STYLE_ID_FG_COLOR(),
 _ID_MASK_COLOR = STYLE_ID_MASK_COLOR(),
 _ID_FONT_NAME = STYLE_ID_FONT_NAME(),
 _ID_FONT_SIZE = STYLE_ID_FONT_SIZE(),
 _ID_FONT_STYLE = STYLE_ID_FONT_STYLE(),
 _ID_TEXT_COLOR = STYLE_ID_TEXT_COLOR(),
 _ID_TIPS_TEXT_COLOR = STYLE_ID_TIPS_TEXT_COLOR(),
 _ID_TEXT_ALIGN_H = STYLE_ID_TEXT_ALIGN_H(),
 _ID_TEXT_ALIGN_V = STYLE_ID_TEXT_ALIGN_V(),
 _ID_BORDER_COLOR = STYLE_ID_BORDER_COLOR(),
 _ID_BORDER_WIDTH = STYLE_ID_BORDER_WIDTH(),
 _ID_BORDER = STYLE_ID_BORDER(),
 _ID_BG_IMAGE = STYLE_ID_BG_IMAGE(),
 _ID_BG_IMAGE_DRAW_TYPE = STYLE_ID_BG_IMAGE_DRAW_TYPE(),
 _ID_ICON = STYLE_ID_ICON(),
 _ID_FG_IMAGE = STYLE_ID_FG_IMAGE(),
 _ID_FG_IMAGE_DRAW_TYPE = STYLE_ID_FG_IMAGE_DRAW_TYPE(),
 _ID_SPACER = STYLE_ID_SPACER(),
 _ID_MARGIN = STYLE_ID_MARGIN(),
 _ID_MARGIN_LEFT = STYLE_ID_MARGIN_LEFT(),
 _ID_MARGIN_RIGHT = STYLE_ID_MARGIN_RIGHT(),
 _ID_MARGIN_TOP = STYLE_ID_MARGIN_TOP(),
 _ID_MARGIN_BOTTOM = STYLE_ID_MARGIN_BOTTOM(),
 _ID_ICON_AT = STYLE_ID_ICON_AT(),
 _ID_ACTIVE_ICON = STYLE_ID_ACTIVE_ICON(),
 _ID_X_OFFSET = STYLE_ID_X_OFFSET(),
 _ID_Y_OFFSET = STYLE_ID_Y_OFFSET(),
 _ID_SELECTED_BG_COLOR = STYLE_ID_SELECTED_BG_COLOR(),
 _ID_SELECTED_FG_COLOR = STYLE_ID_SELECTED_FG_COLOR(),
 _ID_SELECTED_TEXT_COLOR = STYLE_ID_SELECTED_TEXT_COLOR(),
 _ID_ROUND_RADIUS = STYLE_ID_ROUND_RADIUS(),
};

class TStyle {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 notifyWidgetStateChanged(widget) {
   return style_notify_widget_state_changed(this.nativeObj, widget ? widget.nativeObj : null);
 }

 isValid() {
   return style_is_valid(this.nativeObj);
 }

 getInt(name, defval) {
   return style_get_int(this.nativeObj, name, defval);
 }

 getStr(name, defval) {
   return style_get_str(this.nativeObj, name, defval);
 }

 set(state, name, value) {
   return style_set(this.nativeObj, state, name, value ? value.nativeObj : null);
 }

 isMutable() {
   return style_is_mutable(this.nativeObj);
 }

}

class TTheme {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new TTheme(theme());
 }

}

class TTimer {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static add(on_timer, ctx, duration) {
   return timer_add(on_timer, ctx, duration);
 }

 static remove(timer_id) {
   return timer_remove(timer_id);
 }

 static reset(timer_id) {
   return timer_reset(timer_id);
 }

 static modify(timer_id, duration) {
   return timer_modify(timer_id, duration);
 }

}

enum TAlignV {
 NONE = ALIGN_V_NONE(),
 MIDDLE = ALIGN_V_MIDDLE(),
 TOP = ALIGN_V_TOP(),
 BOTTOM = ALIGN_V_BOTTOM(),
};

enum TAlignH {
 NONE = ALIGN_H_NONE(),
 CENTER = ALIGN_H_CENTER(),
 LEFT = ALIGN_H_LEFT(),
 RIGHT = ALIGN_H_RIGHT(),
};

class TVgcanvas {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static cast(vg) {
   return new TVgcanvas(vgcanvas_cast(vg ? (vg.nativeObj || vg) : null));
 }

 flush() {
   return vgcanvas_flush(this.nativeObj);
 }

 beginPath() {
   return vgcanvas_begin_path(this.nativeObj);
 }

 moveTo(x, y) {
   return vgcanvas_move_to(this.nativeObj, x, y);
 }

 lineTo(x, y) {
   return vgcanvas_line_to(this.nativeObj, x, y);
 }

 quadTo(cpx, cpy, x, y) {
   return vgcanvas_quad_to(this.nativeObj, cpx, cpy, x, y);
 }

 bezierTo(cp1x, cp1y, cp2x, cp2y, x, y) {
   return vgcanvas_bezier_to(this.nativeObj, cp1x, cp1y, cp2x, cp2y, x, y);
 }

 arcTo(x1, y1, x2, y2, r) {
   return vgcanvas_arc_to(this.nativeObj, x1, y1, x2, y2, r);
 }

 arc(x, y, r, start_angle, end_angle, ccw) {
   return vgcanvas_arc(this.nativeObj, x, y, r, start_angle, end_angle, ccw);
 }

 isPointInPath(x, y) {
   return vgcanvas_is_point_in_path(this.nativeObj, x, y);
 }

 rect(x, y, w, h) {
   return vgcanvas_rect(this.nativeObj, x, y, w, h);
 }

 roundedRect(x, y, w, h, r) {
   return vgcanvas_rounded_rect(this.nativeObj, x, y, w, h, r);
 }

 ellipse(x, y, rx, ry) {
   return vgcanvas_ellipse(this.nativeObj, x, y, rx, ry);
 }

 closePath() {
   return vgcanvas_close_path(this.nativeObj);
 }

 rotate(rad) {
   return vgcanvas_rotate(this.nativeObj, rad);
 }

 scale(x, y) {
   return vgcanvas_scale(this.nativeObj, x, y);
 }

 translate(x, y) {
   return vgcanvas_translate(this.nativeObj, x, y);
 }

 transform(a, b, c, d, e, f) {
   return vgcanvas_transform(this.nativeObj, a, b, c, d, e, f);
 }

 setTransform(a, b, c, d, e, f) {
   return vgcanvas_set_transform(this.nativeObj, a, b, c, d, e, f);
 }

 clipRect(x, y, w, h) {
   return vgcanvas_clip_rect(this.nativeObj, x, y, w, h);
 }

 fill() {
   return vgcanvas_fill(this.nativeObj);
 }

 stroke() {
   return vgcanvas_stroke(this.nativeObj);
 }

 paint(stroke, img) {
   return vgcanvas_paint(this.nativeObj, stroke, img ? img.nativeObj : null);
 }

 setFont(font) {
   return vgcanvas_set_font(this.nativeObj, font);
 }

 setFontSize(font) {
   return vgcanvas_set_font_size(this.nativeObj, font);
 }

 setTextAlign(value) {
   return vgcanvas_set_text_align(this.nativeObj, value);
 }

 setTextBaseline(value) {
   return vgcanvas_set_text_baseline(this.nativeObj, value);
 }

 fillText(text, x, y, max_width) {
   return vgcanvas_fill_text(this.nativeObj, text, x, y, max_width);
 }

 measureText(text) {
   return vgcanvas_measure_text(this.nativeObj, text);
 }

 drawImage(img, sx, sy, sw, sh, dx, dy, dw, dh) {
   return vgcanvas_draw_image(this.nativeObj, img ? img.nativeObj : null, sx, sy, sw, sh, dx, dy, dw, dh);
 }

 drawIcon(img, sx, sy, sw, sh, dx, dy, dw, dh) {
   return vgcanvas_draw_icon(this.nativeObj, img ? img.nativeObj : null, sx, sy, sw, sh, dx, dy, dw, dh);
 }

 setAntialias(value) {
   return vgcanvas_set_antialias(this.nativeObj, value);
 }

 setGlobalAlpha(alpha) {
   return vgcanvas_set_global_alpha(this.nativeObj, alpha);
 }

 setLineWidth(value) {
   return vgcanvas_set_line_width(this.nativeObj, value);
 }

 setFillColor(color) {
   return vgcanvas_set_fill_color_str(this.nativeObj, color);
 }

 setStrokeColor(color) {
   return vgcanvas_set_stroke_color_str(this.nativeObj, color);
 }

 setLineCap(value) {
   return vgcanvas_set_line_cap(this.nativeObj, value);
 }

 setLineJoin(value) {
   return vgcanvas_set_line_join(this.nativeObj, value);
 }

 setMiterLimit(value) {
   return vgcanvas_set_miter_limit(this.nativeObj, value);
 }

 save() {
   return vgcanvas_save(this.nativeObj);
 }

 restore() {
   return vgcanvas_restore(this.nativeObj);
 }

 get w() {
   return vgcanvas_t_get_prop_w(this.nativeObj);
 }

 get h() {
   return vgcanvas_t_get_prop_h(this.nativeObj);
 }

 get ratio() {
   return vgcanvas_t_get_prop_ratio(this.nativeObj);
 }

 get antiAlias() {
   return vgcanvas_t_get_prop_anti_alias(this.nativeObj);
 }

 get lineWidth() {
   return vgcanvas_t_get_prop_line_width(this.nativeObj);
 }

 get globalAlpha() {
   return vgcanvas_t_get_prop_global_alpha(this.nativeObj);
 }

 get miterLimit() {
   return vgcanvas_t_get_prop_miter_limit(this.nativeObj);
 }

 get lineCap() {
   return vgcanvas_t_get_prop_line_cap(this.nativeObj);
 }

 get lineJoin() {
   return vgcanvas_t_get_prop_line_join(this.nativeObj);
 }

 get font() {
   return vgcanvas_t_get_prop_font(this.nativeObj);
 }

 get fontSize() {
   return vgcanvas_t_get_prop_font_size(this.nativeObj);
 }

 get textAlign() {
   return vgcanvas_t_get_prop_text_align(this.nativeObj);
 }

 get textBaseline() {
   return vgcanvas_t_get_prop_text_baseline(this.nativeObj);
 }

}

enum TBitmapFormat {
 NONE = BITMAP_FMT_NONE(),
 RGBA8888 = BITMAP_FMT_RGBA8888(),
 ABGR8888 = BITMAP_FMT_ABGR8888(),
 BGRA8888 = BITMAP_FMT_BGRA8888(),
 ARGB8888 = BITMAP_FMT_ARGB8888(),
 RGB565 = BITMAP_FMT_RGB565(),
 BGR565 = BITMAP_FMT_BGR565(),
 RGB888 = BITMAP_FMT_RGB888(),
 BGR888 = BITMAP_FMT_BGR888(),
 GRAY = BITMAP_FMT_GRAY(),
 MONO = BITMAP_FMT_MONO(),
};

enum TWidgetProp {
 X = WIDGET_PROP_X(),
 Y = WIDGET_PROP_Y(),
 W = WIDGET_PROP_W(),
 H = WIDGET_PROP_H(),
 CANVAS = WIDGET_PROP_CANVAS(),
 NATIVE_WINDOW = WIDGET_PROP_NATIVE_WINDOW(),
 HIGHLIGHT = WIDGET_PROP_HIGHLIGHT(),
 BAR_SIZE = WIDGET_PROP_BAR_SIZE(),
 OPACITY = WIDGET_PROP_OPACITY(),
 MIN_W = WIDGET_PROP_MIN_W(),
 MAX_W = WIDGET_PROP_MAX_W(),
 CHILDREN_LAYOUT = WIDGET_PROP_CHILDREN_LAYOUT(),
 LAYOUT = WIDGET_PROP_LAYOUT(),
 SELF_LAYOUT = WIDGET_PROP_SELF_LAYOUT(),
 LAYOUT_W = WIDGET_PROP_LAYOUT_W(),
 LAYOUT_H = WIDGET_PROP_LAYOUT_H(),
 VIRTUAL_W = WIDGET_PROP_VIRTUAL_W(),
 VIRTUAL_H = WIDGET_PROP_VIRTUAL_H(),
 NAME = WIDGET_PROP_NAME(),
 TYPE = WIDGET_PROP_TYPE(),
 CLOSABLE = WIDGET_PROP_CLOSABLE(),
 CURSOR = WIDGET_PROP_CURSOR(),
 VALUE = WIDGET_PROP_VALUE(),
 LENGTH = WIDGET_PROP_LENGTH(),
 TEXT = WIDGET_PROP_TEXT(),
 TR_TEXT = WIDGET_PROP_TR_TEXT(),
 STYLE = WIDGET_PROP_STYLE(),
 ENABLE = WIDGET_PROP_ENABLE(),
 FLOATING = WIDGET_PROP_FLOATING(),
 MARGIN = WIDGET_PROP_MARGIN(),
 SPACING = WIDGET_PROP_SPACING(),
 LEFT_MARGIN = WIDGET_PROP_LEFT_MARGIN(),
 RIGHT_MARGIN = WIDGET_PROP_RIGHT_MARGIN(),
 TOP_MARGIN = WIDGET_PROP_TOP_MARGIN(),
 BOTTOM_MARGIN = WIDGET_PROP_BOTTOM_MARGIN(),
 STEP = WIDGET_PROP_STEP(),
 VISIBLE = WIDGET_PROP_VISIBLE(),
 SENSITIVE = WIDGET_PROP_SENSITIVE(),
 ANIMATION = WIDGET_PROP_ANIMATION(),
 ANIM_HINT = WIDGET_PROP_ANIM_HINT(),
 FULLSCREEN = WIDGET_PROP_FULLSCREEN(),
 OPEN_ANIM_HINT = WIDGET_PROP_OPEN_ANIM_HINT(),
 CLOSE_ANIM_HINT = WIDGET_PROP_CLOSE_ANIM_HINT(),
 MIN = WIDGET_PROP_MIN(),
 TIPS = WIDGET_PROP_TIPS(),
 INPUT_TYPE = WIDGET_PROP_INPUT_TYPE(),
 READONLY = WIDGET_PROP_READONLY(),
 PASSWORD_VISIBLE = WIDGET_PROP_PASSWORD_VISIBLE(),
 ACTIVE = WIDGET_PROP_ACTIVE(),
 VERTICAL = WIDGET_PROP_VERTICAL(),
 SHOW_TEXT = WIDGET_PROP_SHOW_TEXT(),
 XOFFSET = WIDGET_PROP_XOFFSET(),
 YOFFSET = WIDGET_PROP_YOFFSET(),
 ALIGN_V = WIDGET_PROP_ALIGN_V(),
 ALIGN_H = WIDGET_PROP_ALIGN_H(),
 AUTO_PLAY = WIDGET_PROP_AUTO_PLAY(),
 LOOP = WIDGET_PROP_LOOP(),
 AUTO_FIX = WIDGET_PROP_AUTO_FIX(),
 X_MIN = WIDGET_PROP_X_MIN(),
 X_MAX = WIDGET_PROP_X_MAX(),
 Y_MIN = WIDGET_PROP_Y_MIN(),
 Y_MAX = WIDGET_PROP_Y_MAX(),
 MAX = WIDGET_PROP_MAX(),
 ROW = WIDGET_PROP_ROW(),
 STATE_FOR_STYLE = WIDGET_PROP_STATE_FOR_STYLE(),
 THEME = WIDGET_PROP_THEME(),
 STAGE = WIDGET_PROP_STAGE(),
 IMAGE_MANAGER = WIDGET_PROP_IMAGE_MANAGER(),
 ASSETS_MANAGER = WIDGET_PROP_ASSETS_MANAGER(),
 LOCALE_INFO = WIDGET_PROP_LOCALE_INFO(),
 FONT_MANAGER = WIDGET_PROP_FONT_MANAGER(),
 THEME_OBJ = WIDGET_PROP_THEME_OBJ(),
 DEFAULT_THEME_OBJ = WIDGET_PROP_DEFAULT_THEME_OBJ(),
 ITEM_WIDTH = WIDGET_PROP_ITEM_WIDTH(),
 ITEM_HEIGHT = WIDGET_PROP_ITEM_HEIGHT(),
 DEFAULT_ITEM_HEIGHT = WIDGET_PROP_DEFAULT_ITEM_HEIGHT(),
 XSLIDABLE = WIDGET_PROP_XSLIDABLE(),
 YSLIDABLE = WIDGET_PROP_YSLIDABLE(),
 REPEAT = WIDGET_PROP_REPEAT(),
 ENABLE_LONG_PRESS = WIDGET_PROP_ENABLE_LONG_PRESS(),
 ANIMATABLE = WIDGET_PROP_ANIMATABLE(),
 AUTO_HIDE_SCROLL_BAR = WIDGET_PROP_AUTO_HIDE_SCROLL_BAR(),
 IMAGE = WIDGET_PROP_IMAGE(),
 FORMAT = WIDGET_PROP_FORMAT(),
 DRAW_TYPE = WIDGET_PROP_DRAW_TYPE(),
 SELECTABLE = WIDGET_PROP_SELECTABLE(),
 CLICKABLE = WIDGET_PROP_CLICKABLE(),
 SCALE_X = WIDGET_PROP_SCALE_X(),
 SCALE_Y = WIDGET_PROP_SCALE_Y(),
 ANCHOR_X = WIDGET_PROP_ANCHOR_X(),
 ANCHOR_Y = WIDGET_PROP_ANCHOR_Y(),
 ROTATION = WIDGET_PROP_ROTATION(),
 COMPACT = WIDGET_PROP_COMPACT(),
 SCROLLABLE = WIDGET_PROP_SCROLLABLE(),
 ICON = WIDGET_PROP_ICON(),
 OPTIONS = WIDGET_PROP_OPTIONS(),
 SELECTED = WIDGET_PROP_SELECTED(),
 CHECKED = WIDGET_PROP_CHECKED(),
 ACTIVE_ICON = WIDGET_PROP_ACTIVE_ICON(),
 OPEN_WINDOW = WIDGET_PROP_OPEN_WINDOW(),
 SELECTED_INDEX = WIDGET_PROP_SELECTED_INDEX(),
 CLOSE_WHEN_CLICK = WIDGET_PROP_CLOSE_WHEN_CLICK(),
 CLOSE_WHEN_CLICK_OUTSIDE = WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE(),
 LINE_GAP = WIDGET_PROP_LINE_GAP(),
 BG_COLOR = WIDGET_PROP_BG_COLOR(),
 BORDER_COLOR = WIDGET_PROP_BORDER_COLOR(),
 DELAY = WIDGET_PROP_DELAY(),
 IS_KEYBOARD = WIDGET_PROP_IS_KEYBOARD(),
 FOCUSED = WIDGET_PROP_FOCUSED(),
 FOCUS = WIDGET_PROP_FOCUS(),
 FOCUSABLE = WIDGET_PROP_FOCUSABLE(),
 WITH_FOCUS_STATE = WIDGET_PROP_WITH_FOCUS_STATE(),
 MOVE_FOCUS_NEXT_KEY = WIDGET_PROP_MOVE_FOCUS_NEXT_KEY(),
 MOVE_FOCUS_PREV_KEY = WIDGET_PROP_MOVE_FOCUS_PREV_KEY(),
};

enum TWidgetType {
 NONE = WIDGET_TYPE_NONE(),
 WINDOW_MANAGER = WIDGET_TYPE_WINDOW_MANAGER(),
 NORMAL_WINDOW = WIDGET_TYPE_NORMAL_WINDOW(),
 OVERLAY = WIDGET_TYPE_OVERLAY(),
 TOOL_BAR = WIDGET_TYPE_TOOL_BAR(),
 DIALOG = WIDGET_TYPE_DIALOG(),
 POPUP = WIDGET_TYPE_POPUP(),
 SYSTEM_BAR = WIDGET_TYPE_SYSTEM_BAR(),
 SPRITE = WIDGET_TYPE_SPRITE(),
 KEYBOARD = WIDGET_TYPE_KEYBOARD(),
 DND = WIDGET_TYPE_DND(),
 LABEL = WIDGET_TYPE_LABEL(),
 BUTTON = WIDGET_TYPE_BUTTON(),
 IMAGE = WIDGET_TYPE_IMAGE(),
 EDIT = WIDGET_TYPE_EDIT(),
 PROGRESS_BAR = WIDGET_TYPE_PROGRESS_BAR(),
 GROUP_BOX = WIDGET_TYPE_GROUP_BOX(),
 CHECK_BUTTON = WIDGET_TYPE_CHECK_BUTTON(),
 RADIO_BUTTON = WIDGET_TYPE_RADIO_BUTTON(),
 DIALOG_TITLE = WIDGET_TYPE_DIALOG_TITLE(),
 DIALOG_CLIENT = WIDGET_TYPE_DIALOG_CLIENT(),
 SLIDER = WIDGET_TYPE_SLIDER(),
 VIEW = WIDGET_TYPE_VIEW(),
 COMBO_BOX = WIDGET_TYPE_COMBO_BOX(),
 COMBO_BOX_ITEM = WIDGET_TYPE_COMBO_BOX_ITEM(),
 SLIDE_VIEW = WIDGET_TYPE_SLIDE_VIEW(),
 SLIDE_INDICATOR = WIDGET_TYPE_SLIDE_INDICATOR(),
 SLIDE_INDICATOR_ARC = WIDGET_TYPE_SLIDE_INDICATOR_ARC(),
 PAGES = WIDGET_TYPE_PAGES(),
 TAB_BUTTON = WIDGET_TYPE_TAB_BUTTON(),
 TAB_CONTROL = WIDGET_TYPE_TAB_CONTROL(),
 TAB_BUTTON_GROUP = WIDGET_TYPE_TAB_BUTTON_GROUP(),
 BUTTON_GROUP = WIDGET_TYPE_BUTTON_GROUP(),
 CANDIDATES = WIDGET_TYPE_CANDIDATES(),
 SPIN_BOX = WIDGET_TYPE_SPIN_BOX(),
 DRAGGER = WIDGET_TYPE_DRAGGER(),
 SCROLL_BAR = WIDGET_TYPE_SCROLL_BAR(),
 SCROLL_BAR_DESKTOP = WIDGET_TYPE_SCROLL_BAR_DESKTOP(),
 SCROLL_BAR_MOBILE = WIDGET_TYPE_SCROLL_BAR_MOBILE(),
 SCROLL_VIEW = WIDGET_TYPE_SCROLL_VIEW(),
 LIST_VIEW = WIDGET_TYPE_LIST_VIEW(),
 LIST_VIEW_H = WIDGET_TYPE_LIST_VIEW_H(),
 LIST_ITEM = WIDGET_TYPE_LIST_ITEM(),
 COLOR_PICKER = WIDGET_TYPE_COLOR_PICKER(),
 COLOR_COMPONENT = WIDGET_TYPE_COLOR_COMPONENT(),
 COLOR_TILE = WIDGET_TYPE_COLOR_TILE(),
 RICH_TEXT = WIDGET_TYPE_RICH_TEXT(),
 APP_BAR = WIDGET_TYPE_APP_BAR(),
 GRID = WIDGET_TYPE_GRID(),
 GRID_ITEM = WIDGET_TYPE_GRID_ITEM(),
 ROW = WIDGET_TYPE_ROW(),
 COLUMN = WIDGET_TYPE_COLUMN(),
 CALIBRATION_WIN = WIDGET_TYPE_CALIBRATION_WIN(),
};

enum TWindowStage {
 NONE = WINDOW_STAGE_NONE(),
 CREATED = WINDOW_STAGE_CREATED(),
 OPENED = WINDOW_STAGE_OPENED(),
 CLOSED = WINDOW_STAGE_CLOSED(),
};

enum TWindowClosable {
 YES = WINDOW_CLOSABLE_YES(),
 NO = WINDOW_CLOSABLE_NO(),
 CONFIRM = WINDOW_CLOSABLE_CONFIRM(),
};

enum TWidgetState {
 STATE_NONE = WIDGET_STATE_NONE(),
 STATE_NORMAL = WIDGET_STATE_NORMAL(),
 STATE_PRESSED = WIDGET_STATE_PRESSED(),
 STATE_OVER = WIDGET_STATE_OVER(),
 STATE_DISABLE = WIDGET_STATE_DISABLE(),
 STATE_FOCUSED = WIDGET_STATE_FOCUSED(),
 STATE_CHECKED = WIDGET_STATE_CHECKED(),
 STATE_UNCHECKED = WIDGET_STATE_UNCHECKED(),
 STATE_EMPTY = WIDGET_STATE_EMPTY(),
 STATE_EMPTY_FOCUS = WIDGET_STATE_EMPTY_FOCUS(),
 STATE_ERROR = WIDGET_STATE_ERROR(),
 STATE_SELECTED = WIDGET_STATE_SELECTED(),
 STATE_NORMAL_OF_CHECKED = WIDGET_STATE_NORMAL_OF_CHECKED(),
 STATE_PRESSED_OF_CHECKED = WIDGET_STATE_PRESSED_OF_CHECKED(),
 STATE_OVER_OF_CHECKED = WIDGET_STATE_OVER_OF_CHECKED(),
 STATE_FOCUSED_OF_CHECKED = WIDGET_STATE_FOCUSED_OF_CHECKED(),
 STATE_NORMAL_OF_ACTIVE = WIDGET_STATE_NORMAL_OF_ACTIVE(),
 STATE_PRESSED_OF_ACTIVE = WIDGET_STATE_PRESSED_OF_ACTIVE(),
 STATE_OVER_OF_ACTIVE = WIDGET_STATE_OVER_OF_ACTIVE(),
 STATE_FOCUSED_OF_ACTIVE = WIDGET_STATE_FOCUSED_OF_ACTIVE(),
};

class TWidget {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 countChildren() {
   return widget_count_children(this.nativeObj);
 }

 getChild(index) {
   return new TWidget(widget_get_child(this.nativeObj, index));
 }

 indexOf() {
   return widget_index_of(this.nativeObj);
 }

 move(x, y) {
   return widget_move(this.nativeObj, x, y);
 }

 resize(w, h) {
   return widget_resize(this.nativeObj, w, h);
 }

 moveResize(x, y, w, h) {
   return widget_move_resize(this.nativeObj, x, y, w, h);
 }

 setValue(value) {
   return widget_set_value(this.nativeObj, value);
 }

 animateValueTo(value, duration) {
   return widget_animate_value_to(this.nativeObj, value, duration);
 }

 addValue(delta) {
   return widget_add_value(this.nativeObj, delta);
 }

 useStyle(style) {
   return widget_use_style(this.nativeObj, style);
 }

 setText(text) {
   return widget_set_text_utf8(this.nativeObj, text);
 }

 setTrText(text) {
   return widget_set_tr_text(this.nativeObj, text);
 }

 getValue() {
   return widget_get_value(this.nativeObj);
 }

 getText() {
   return widget_get_text(this.nativeObj);
 }

 setName(name) {
   return widget_set_name(this.nativeObj, name);
 }

 setCursor(cursor) {
   return widget_set_cursor(this.nativeObj, cursor);
 }

 setAnimation(animation) {
   return widget_set_animation(this.nativeObj, animation);
 }

 createAnimator(animation) {
   return widget_create_animator(this.nativeObj, animation);
 }

 startAnimator(name) {
   return widget_start_animator(this.nativeObj, name);
 }

 setAnimatorTimeScale(name, time_scale) {
   return widget_set_animator_time_scale(this.nativeObj, name, time_scale);
 }

 pauseAnimator(name) {
   return widget_pause_animator(this.nativeObj, name);
 }

 findAnimator(name) {
   return widget_find_animator(this.nativeObj, name);
 }

 stopAnimator(name) {
   return widget_stop_animator(this.nativeObj, name);
 }

 destroyAnimator(name) {
   return widget_destroy_animator(this.nativeObj, name);
 }

 setEnable(enable) {
   return widget_set_enable(this.nativeObj, enable);
 }

 setFloating(floating) {
   return widget_set_floating(this.nativeObj, floating);
 }

 setFocused(focused) {
   return widget_set_focused(this.nativeObj, focused);
 }

 child(name) {
   return new TWidget(widget_child(this.nativeObj, name));
 }

 lookup(name, recursive) {
   return new TWidget(widget_lookup(this.nativeObj, name, recursive));
 }

 lookupByType(type, recursive) {
   return new TWidget(widget_lookup_by_type(this.nativeObj, type, recursive));
 }

 setVisible(visible, recursive) {
   return widget_set_visible(this.nativeObj, visible, recursive);
 }

 setVisibleOnly(visible) {
   return widget_set_visible_only(this.nativeObj, visible);
 }

 setSensitive(sensitive) {
   return widget_set_sensitive(this.nativeObj, sensitive);
 }

 on(type, on_event, ctx) {
   return widget_on(this.nativeObj, type, on_event, ctx);
 }

 off(id) {
   return widget_off(this.nativeObj, id);
 }

 invalidateForce(r) {
   return widget_invalidate_force(this.nativeObj, r ? r.nativeObj : null);
 }

 setPropStr(name, v) {
   return widget_set_prop_str(this.nativeObj, name, v);
 }

 getPropStr(name, defval) {
   return widget_get_prop_str(this.nativeObj, name, defval);
 }

 setPropInt(name, v) {
   return widget_set_prop_int(this.nativeObj, name, v);
 }

 getPropInt(name, defval) {
   return widget_get_prop_int(this.nativeObj, name, defval);
 }

 setPropBool(name, v) {
   return widget_set_prop_bool(this.nativeObj, name, v);
 }

 getPropBool(name, defval) {
   return widget_get_prop_bool(this.nativeObj, name, defval);
 }

 isWindowOpened() {
   return widget_is_window_opened(this.nativeObj);
 }

 isWindow() {
   return widget_is_window(this.nativeObj);
 }

 isDesigningWindow() {
   return widget_is_designing_window(this.nativeObj);
 }

 isWindowManager() {
   return widget_is_window_manager(this.nativeObj);
 }

 foreach(visit, ctx) {
   return widget_foreach(this.nativeObj, visit, ctx);
 }

 getWindow() {
   return new TWidget(widget_get_window(this.nativeObj));
 }

 getWindowManager() {
   return new TWidget(widget_get_window_manager(this.nativeObj));
 }

 getType() {
   return widget_get_type(this.nativeObj);
 }

 clone(parent) {
   return new TWidget(widget_clone(this.nativeObj, parent ? parent.nativeObj : null));
 }

 equal(other) {
   return widget_equal(this.nativeObj, other ? other.nativeObj : null);
 }

 static cast(widget) {
   return new TWidget(widget_cast(widget ? (widget.nativeObj || widget) : null));
 }

 destroy() {
   return widget_destroy(this.nativeObj);
 }

 layout() {
   return widget_layout(this.nativeObj);
 }

 setSelfLayout(params) {
   return widget_set_self_layout(this.nativeObj, params);
 }

 setChildrenLayout(params) {
   return widget_set_children_layout(this.nativeObj, params);
 }

 setSelfLayoutParams(x, y, w, h) {
   return widget_set_self_layout_params(this.nativeObj, x, y, w, h);
 }

 setStyleInt(state_and_name, value) {
   return widget_set_style_int(this.nativeObj, state_and_name, value);
 }

 setStyleStr(state_and_name, value) {
   return widget_set_style_str(this.nativeObj, state_and_name, value);
 }

 setStyleColor(state_and_name, value) {
   return widget_set_style_color(this.nativeObj, state_and_name, value);
 }

 get x() {
   return widget_t_get_prop_x(this.nativeObj);
 }

 get y() {
   return widget_t_get_prop_y(this.nativeObj);
 }

 get w() {
   return widget_t_get_prop_w(this.nativeObj);
 }

 get h() {
   return widget_t_get_prop_h(this.nativeObj);
 }

 get name() {
   return widget_t_get_prop_name(this.nativeObj);
 }

 get trText() {
   return widget_t_get_prop_tr_text(this.nativeObj);
 }

 get style() {
   return widget_t_get_prop_style(this.nativeObj);
 }

 get animation() {
   return widget_t_get_prop_animation(this.nativeObj);
 }

 get enable() {
   return widget_t_get_prop_enable(this.nativeObj);
 }

 set visible(value) {
   widget_t_set_prop_visible(this.nativeObj, value);
 }

 get visible() {
   return widget_t_get_prop_visible(this.nativeObj);
 }

 set sensitive(value) {
   widget_t_set_prop_sensitive(this.nativeObj, value);
 }

 get sensitive() {
   return widget_t_get_prop_sensitive(this.nativeObj);
 }

 set focusable(value) {
   widget_t_set_prop_focusable(this.nativeObj, value);
 }

 get focusable() {
   return widget_t_get_prop_focusable(this.nativeObj);
 }

 set withFocusState(value) {
   widget_t_set_prop_with_focus_state(this.nativeObj, value);
 }

 get withFocusState() {
   return widget_t_get_prop_with_focus_state(this.nativeObj);
 }

 get floating() {
   return widget_t_get_prop_floating(this.nativeObj);
 }

}

class TAssetsManager {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static instance() {
   return new TAssetsManager(assets_manager());
 }

 ref(type, name) {
   return new TAssetInfo(assets_manager_ref(this.nativeObj, type, name));
 }

 unref(info) {
   return assets_manager_unref(this.nativeObj, info ? info.nativeObj : null);
 }

}

enum TAssetType {
 NONE = ASSET_TYPE_NONE(),
 FONT = ASSET_TYPE_FONT(),
 IMAGE = ASSET_TYPE_IMAGE(),
 STYLE = ASSET_TYPE_STYLE(),
 UI = ASSET_TYPE_UI(),
 XML = ASSET_TYPE_XML(),
 STRINGS = ASSET_TYPE_STRINGS(),
 SCRIPT = ASSET_TYPE_SCRIPT(),
 DATA = ASSET_TYPE_DATA(),
};

class TAssetInfo {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 get type() {
   return asset_info_t_get_prop_type(this.nativeObj);
 }

 get subtype() {
   return asset_info_t_get_prop_subtype(this.nativeObj);
 }

 get isInRom() {
   return asset_info_t_get_prop_is_in_rom(this.nativeObj);
 }

 get size() {
   return asset_info_t_get_prop_size(this.nativeObj);
 }

 get refcount() {
   return asset_info_t_get_prop_refcount(this.nativeObj);
 }

 get name() {
   return asset_info_t_get_prop_name(this.nativeObj);
 }

}

class TColor {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create(r, b, g, a) {
   return new TColor(color_create(r, b, g, a));
 }

 fromStr(str) {
   return new TColor(color_from_str(this.nativeObj, str));
 }

 r() {
   return color_r(this.nativeObj);
 }

 g() {
   return color_g(this.nativeObj);
 }

 b() {
   return color_b(this.nativeObj);
 }

 a() {
   return color_a(this.nativeObj);
 }

 static cast(color) {
   return new TColor(color_cast(color ? (color.nativeObj || color) : null));
 }

 destroy() {
   return color_destroy(this.nativeObj);
 }

 set color(value) {
   color_t_set_prop_color(this.nativeObj, value);
 }

 get color() {
   return color_t_get_prop_color(this.nativeObj);
 }

}

class TDateTime {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create() {
   return new TDateTime(date_time_create());
 }

 destroy() {
   return date_time_destroy(this.nativeObj);
 }

 get second() {
   return date_time_t_get_prop_second(this.nativeObj);
 }

 get minute() {
   return date_time_t_get_prop_minute(this.nativeObj);
 }

 get hour() {
   return date_time_t_get_prop_hour(this.nativeObj);
 }

 get day() {
   return date_time_t_get_prop_day(this.nativeObj);
 }

 get wday() {
   return date_time_t_get_prop_wday(this.nativeObj);
 }

 get month() {
   return date_time_t_get_prop_month(this.nativeObj);
 }

 get year() {
   return date_time_t_get_prop_year(this.nativeObj);
 }

}

class TEmitter {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create() {
   return new TEmitter(emitter_create());
 }

 dispatch(e) {
   return emitter_dispatch(this.nativeObj, e ? e.nativeObj : null);
 }

 dispatchSimpleEvent(type) {
   return emitter_dispatch_simple_event(this.nativeObj, type);
 }

 on(type, on_event, ctx) {
   return emitter_on(this.nativeObj, type, on_event, ctx);
 }

 off(id) {
   return emitter_off(this.nativeObj, id);
 }

 enable() {
   return emitter_enable(this.nativeObj);
 }

 disable() {
   return emitter_disable(this.nativeObj);
 }

 size() {
   return emitter_size(this.nativeObj);
 }

 destroy() {
   return emitter_destroy(this.nativeObj);
 }

 static cast(emitter) {
   return new TEmitter(emitter_cast(emitter ? (emitter.nativeObj || emitter) : null));
 }

}

enum TEventBaseType {
 NONE = EVT_NONE(),
 PROP_WILL_CHANGE = EVT_PROP_WILL_CHANGE(),
 PROP_CHANGED = EVT_PROP_CHANGED(),
 ITEMS_WILL_CHANGE = EVT_ITEMS_WILL_CHANGE(),
 ITEMS_CHANGED = EVT_ITEMS_CHANGED(),
 PROPS_CHANGED = EVT_PROPS_CHANGED(),
 DESTROY = EVT_DESTROY(),
};

class TEvent {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static cast(event) {
   return new TEvent(event_cast(event ? (event.nativeObj || event) : null));
 }

 static create(type, target) {
   return new TEvent(event_create(type, target));
 }

 destroy() {
   return event_destroy(this.nativeObj);
 }

 get type() {
   return event_t_get_prop_type(this.nativeObj);
 }

 get time() {
   return event_t_get_prop_time(this.nativeObj);
 }

 get target() {
   return event_t_get_prop_target(this.nativeObj);
 }

}

class TNamedValue {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create() {
   return new TNamedValue(named_value_create());
 }

 static cast(nv) {
   return new TNamedValue(named_value_cast(nv ? (nv.nativeObj || nv) : null));
 }

 setName(name) {
   return named_value_set_name(this.nativeObj, name);
 }

 setValue(value) {
   return named_value_set_value(this.nativeObj, value ? value.nativeObj : null);
 }

 getValue() {
   return new TValue(named_value_get_value(this.nativeObj));
 }

 destroy() {
   return named_value_destroy(this.nativeObj);
 }

 get name() {
   return named_value_t_get_prop_name(this.nativeObj);
 }

}

class TPoint {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

}

class TRect {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static create(x, y, w, h) {
   return new TRect(rect_create(x, y, w, h));
 }

 set(x, y, w, h) {
   return new TRect(rect_set(this.nativeObj, x, y, w, h));
 }

 static cast(rect) {
   return new TRect(rect_cast(rect ? (rect.nativeObj || rect) : null));
 }

 destroy() {
   return rect_destroy(this.nativeObj);
 }

 get x() {
   return rect_t_get_prop_x(this.nativeObj);
 }

 get y() {
   return rect_t_get_prop_y(this.nativeObj);
 }

 get w() {
   return rect_t_get_prop_w(this.nativeObj);
 }

 get h() {
   return rect_t_get_prop_h(this.nativeObj);
 }

}

class TTimeNow {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 static s() {
   return time_now_s();
 }

 static ms() {
   return time_now_ms();
 }

}

enum TRet {
 OK = RET_OK(),
 OOM = RET_OOM(),
 FAIL = RET_FAIL(),
 NOT_IMPL = RET_NOT_IMPL(),
 QUIT = RET_QUIT(),
 FOUND = RET_FOUND(),
 BUSY = RET_BUSY(),
 REMOVE = RET_REMOVE(),
 REPEAT = RET_REPEAT(),
 NOT_FOUND = RET_NOT_FOUND(),
 DONE = RET_DONE(),
 STOP = RET_STOP(),
 SKIP = RET_SKIP(),
 CONTINUE = RET_CONTINUE(),
 OBJECT_CHANGED = RET_OBJECT_CHANGED(),
 ITEMS_CHANGED = RET_ITEMS_CHANGED(),
 BAD_PARAMS = RET_BAD_PARAMS(),
};

enum TValueType {
 INVALID = VALUE_TYPE_INVALID(),
 BOOL = VALUE_TYPE_BOOL(),
 INT8 = VALUE_TYPE_INT8(),
 UINT8 = VALUE_TYPE_UINT8(),
 INT16 = VALUE_TYPE_INT16(),
 UINT16 = VALUE_TYPE_UINT16(),
 INT32 = VALUE_TYPE_INT32(),
 UINT32 = VALUE_TYPE_UINT32(),
 INT64 = VALUE_TYPE_INT64(),
 UINT64 = VALUE_TYPE_UINT64(),
 POINTER = VALUE_TYPE_POINTER(),
 FLOAT = VALUE_TYPE_FLOAT(),
 FLOAT32 = VALUE_TYPE_FLOAT32(),
 DOUBLE = VALUE_TYPE_DOUBLE(),
 STRING = VALUE_TYPE_STRING(),
 WSTRING = VALUE_TYPE_WSTRING(),
 OBJECT = VALUE_TYPE_OBJECT(),
};

class TValue {
 public nativeObj;
 constructor(nativeObj) {
   this.nativeObj = nativeObj;
 }

 setBool(value) {
   return new TValue(value_set_bool(this.nativeObj, value));
 }

 bool() {
   return value_bool(this.nativeObj);
 }

 setInt8(value) {
   return new TValue(value_set_int8(this.nativeObj, value));
 }

 int8() {
   return value_int8(this.nativeObj);
 }

 setUint8(value) {
   return new TValue(value_set_uint8(this.nativeObj, value));
 }

 uint8() {
   return value_uint8(this.nativeObj);
 }

 setInt16(value) {
   return new TValue(value_set_int16(this.nativeObj, value));
 }

 int16() {
   return value_int16(this.nativeObj);
 }

 setUint16(value) {
   return new TValue(value_set_uint16(this.nativeObj, value));
 }

 uint16() {
   return value_uint16(this.nativeObj);
 }

 setInt32(value) {
   return new TValue(value_set_int32(this.nativeObj, value));
 }

 int32() {
   return value_int32(this.nativeObj);
 }

 setUint32(value) {
   return new TValue(value_set_uint32(this.nativeObj, value));
 }

 setInt64(value) {
   return new TValue(value_set_int64(this.nativeObj, value));
 }

 int64() {
   return value_int64(this.nativeObj);
 }

 setUint64(value) {
   return new TValue(value_set_uint64(this.nativeObj, value));
 }

 uint64() {
   return value_uint64(this.nativeObj);
 }

 setFloat(value) {
   return new TValue(value_set_float(this.nativeObj, value));
 }

 float() {
   return value_float(this.nativeObj);
 }

 setFloat32(value) {
   return new TValue(value_set_float32(this.nativeObj, value));
 }

 float32() {
   return value_float32(this.nativeObj);
 }

 setDouble(value) {
   return new TValue(value_set_double(this.nativeObj, value));
 }

 double() {
   return value_double(this.nativeObj);
 }

 setStr(value) {
   return new TValue(value_dup_str(this.nativeObj, value));
 }

 str() {
   return value_str(this.nativeObj);
 }

 wstr() {
   return value_wstr(this.nativeObj);
 }

 isNull() {
   return value_is_null(this.nativeObj);
 }

 int() {
   return value_int(this.nativeObj);
 }

 setInt(value) {
   return new TValue(value_set_int(this.nativeObj, value));
 }

 setObject(value) {
   return new TValue(value_set_object(this.nativeObj, value ? value.nativeObj : null));
 }

 object() {
   return new TObject(value_object(this.nativeObj));
 }

 static create() {
   return new TValue(value_create());
 }

 destroy() {
   return value_destroy(this.nativeObj);
 }

 reset() {
   return value_reset(this.nativeObj);
 }

 static cast(value) {
   return new TValue(value_cast(value ? (value.nativeObj || value) : null));
 }

}

class TSlideIndicator extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TSlideIndicator(slide_indicator_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static createLinear(parent, x, y, w, h) {
   return new TSlideIndicator(slide_indicator_create_linear(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static createArc(parent, x, y, w, h) {
   return new TSlideIndicator(slide_indicator_create_arc(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TSlideIndicator(slide_indicator_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setValue(value) {
   return slide_indicator_set_value(this.nativeObj, value);
 }

 setMax(max) {
   return slide_indicator_set_max(this.nativeObj, max);
 }

 setDefaultPaint(default_paint) {
   return slide_indicator_set_default_paint(this.nativeObj, default_paint);
 }

 setAutoHide(auto_hide) {
   return slide_indicator_set_auto_hide(this.nativeObj, auto_hide);
 }

 setMargin(margin) {
   return slide_indicator_set_margin(this.nativeObj, margin);
 }

 setSpacing(spacing) {
   return slide_indicator_set_spacing(this.nativeObj, spacing);
 }

 setSize(size) {
   return slide_indicator_set_size(this.nativeObj, size);
 }

 setAnchor(anchor_x, anchor_y) {
   return slide_indicator_set_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 setIndicatedTarget(indicated_target) {
   return slide_indicator_set_indicated_target(this.nativeObj, indicated_target);
 }

 get value() {
   return slide_indicator_t_get_prop_value(this.nativeObj);
 }

 get max() {
   return slide_indicator_t_get_prop_max(this.nativeObj);
 }

 get defaultPaint() {
   return slide_indicator_t_get_prop_default_paint(this.nativeObj);
 }

 get autoHide() {
   return slide_indicator_t_get_prop_auto_hide(this.nativeObj);
 }

 get margin() {
   return slide_indicator_t_get_prop_margin(this.nativeObj);
 }

 get spacing() {
   return slide_indicator_t_get_prop_spacing(this.nativeObj);
 }

 get size() {
   return slide_indicator_t_get_prop_size(this.nativeObj);
 }

 get anchorX() {
   return slide_indicator_t_get_prop_anchor_x(this.nativeObj);
 }

 get anchorY() {
   return slide_indicator_t_get_prop_anchor_y(this.nativeObj);
 }

 get indicatedTarget() {
   return slide_indicator_t_get_prop_indicated_target(this.nativeObj);
 }

}

class TSlideView extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TSlideView(slide_view_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TSlideView(slide_view_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setAutoPlay(auto_play) {
   return slide_view_set_auto_play(this.nativeObj, auto_play);
 }

 setActive(index) {
   return slide_view_set_active(this.nativeObj, index);
 }

 setVertical(vertical) {
   return slide_view_set_vertical(this.nativeObj, vertical);
 }

 setAnimHint(anim_hint) {
   return slide_view_set_anim_hint(this.nativeObj, anim_hint);
 }

 setLoop(loop) {
   return slide_view_set_loop(this.nativeObj, loop);
 }

 get vertical() {
   return slide_view_t_get_prop_vertical(this.nativeObj);
 }

 get autoPlay() {
   return slide_view_t_get_prop_auto_play(this.nativeObj);
 }

 get loop() {
   return slide_view_t_get_prop_loop(this.nativeObj);
 }

 get animHint() {
   return slide_view_t_get_prop_anim_hint(this.nativeObj);
 }

}

class TSlider extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TSlider(slider_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TSlider(slider_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setValue(value) {
   return slider_set_value(this.nativeObj, value);
 }

 setMin(min) {
   return slider_set_min(this.nativeObj, min);
 }

 setMax(max) {
   return slider_set_max(this.nativeObj, max);
 }

 setStep(step) {
   return slider_set_step(this.nativeObj, step);
 }

 setBarSize(bar_size) {
   return slider_set_bar_size(this.nativeObj, bar_size);
 }

 setVertical(vertical) {
   return slider_set_vertical(this.nativeObj, vertical);
 }

 get value() {
   return slider_t_get_prop_value(this.nativeObj);
 }

 get min() {
   return slider_t_get_prop_min(this.nativeObj);
 }

 get max() {
   return slider_t_get_prop_max(this.nativeObj);
 }

 get step() {
   return slider_t_get_prop_step(this.nativeObj);
 }

 get vertical() {
   return slider_t_get_prop_vertical(this.nativeObj);
 }

 get barSize() {
   return slider_t_get_prop_bar_size(this.nativeObj);
 }

}

class TSwitch extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TSwitch(switch_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setValue(value) {
   return switch_set_value(this.nativeObj, value);
 }

 static cast(widget) {
   return new TSwitch(switch_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get value() {
   return switch_t_get_prop_value(this.nativeObj);
 }

 get maxXoffsetRatio() {
   return switch_t_get_prop_max_xoffset_ratio(this.nativeObj);
 }

}

class TTextSelector extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TTextSelector(text_selector_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TTextSelector(text_selector_cast(widget ? (widget.nativeObj || widget) : null));
 }

 resetOptions() {
   return text_selector_reset_options(this.nativeObj);
 }

 countOptions() {
   return text_selector_count_options(this.nativeObj);
 }

 appendOption(value, text) {
   return text_selector_append_option(this.nativeObj, value, text);
 }

 setOptions(options) {
   return text_selector_set_options(this.nativeObj, options);
 }

 setRangeOptions(start, nr, step) {
   return text_selector_set_range_options(this.nativeObj, start, nr, step);
 }

 getValue() {
   return text_selector_get_value(this.nativeObj);
 }

 setValue(value) {
   return text_selector_set_value(this.nativeObj, value);
 }

 getText() {
   return text_selector_get_text(this.nativeObj);
 }

 setText(text) {
   return text_selector_set_text(this.nativeObj, text);
 }

 setSelectedIndex(index) {
   return text_selector_set_selected_index(this.nativeObj, index);
 }

 setVisibleNr(visible_nr) {
   return text_selector_set_visible_nr(this.nativeObj, visible_nr);
 }

 get visibleNr() {
   return text_selector_t_get_prop_visible_nr(this.nativeObj);
 }

 get selectedIndex() {
   return text_selector_t_get_prop_selected_index(this.nativeObj);
 }

 get options() {
   return text_selector_t_get_prop_options(this.nativeObj);
 }

}

class TDigitClock extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TDigitClock(digit_clock_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TDigitClock(digit_clock_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setFormat(format) {
   return digit_clock_set_format(this.nativeObj, format);
 }

 get format() {
   return digit_clock_t_get_prop_format(this.nativeObj);
 }

}

class TTimeClock extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TTimeClock(time_clock_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TTimeClock(time_clock_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setHour(hour) {
   return time_clock_set_hour(this.nativeObj, hour);
 }

 setMinute(minute) {
   return time_clock_set_minute(this.nativeObj, minute);
 }

 setSecond(second) {
   return time_clock_set_second(this.nativeObj, second);
 }

 setHourImage(hour) {
   return time_clock_set_hour_image(this.nativeObj, hour);
 }

 setMinuteImage(minute_image) {
   return time_clock_set_minute_image(this.nativeObj, minute_image);
 }

 setSecondImage(second_image) {
   return time_clock_set_second_image(this.nativeObj, second_image);
 }

 setBgImage(bg_image) {
   return time_clock_set_bg_image(this.nativeObj, bg_image);
 }

 setImage(image) {
   return time_clock_set_image(this.nativeObj, image);
 }

 get hour() {
   return time_clock_t_get_prop_hour(this.nativeObj);
 }

 get minute() {
   return time_clock_t_get_prop_minute(this.nativeObj);
 }

 get second() {
   return time_clock_t_get_prop_second(this.nativeObj);
 }

 get image() {
   return time_clock_t_get_prop_image(this.nativeObj);
 }

 get bgImage() {
   return time_clock_t_get_prop_bg_image(this.nativeObj);
 }

 get hourImage() {
   return time_clock_t_get_prop_hour_image(this.nativeObj);
 }

 get minuteImage() {
   return time_clock_t_get_prop_minute_image(this.nativeObj);
 }

 get secondImage() {
   return time_clock_t_get_prop_second_image(this.nativeObj);
 }

}

class TKeyEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new TKeyEvent(key_event_cast(event ? (event.nativeObj || event) : null));
 }

 get key() {
   return key_event_t_get_prop_key(this.nativeObj);
 }

 get alt() {
   return key_event_t_get_prop_alt(this.nativeObj);
 }

 get lalt() {
   return key_event_t_get_prop_lalt(this.nativeObj);
 }

 get ralt() {
   return key_event_t_get_prop_ralt(this.nativeObj);
 }

 get ctrl() {
   return key_event_t_get_prop_ctrl(this.nativeObj);
 }

 get lctrl() {
   return key_event_t_get_prop_lctrl(this.nativeObj);
 }

 get rctrl() {
   return key_event_t_get_prop_rctrl(this.nativeObj);
 }

 get shift() {
   return key_event_t_get_prop_shift(this.nativeObj);
 }

 get lshift() {
   return key_event_t_get_prop_lshift(this.nativeObj);
 }

 get rshift() {
   return key_event_t_get_prop_rshift(this.nativeObj);
 }

 get cmd() {
   return key_event_t_get_prop_cmd(this.nativeObj);
 }

 get menu() {
   return key_event_t_get_prop_menu(this.nativeObj);
 }

 get capslock() {
   return key_event_t_get_prop_capslock(this.nativeObj);
 }

}

class TRow extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TRow(row_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TRow(row_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TProgressBar extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TProgressBar(progress_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TProgressBar(progress_bar_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setValue(value) {
   return progress_bar_set_value(this.nativeObj, value);
 }

 setVertical(vertical) {
   return progress_bar_set_vertical(this.nativeObj, vertical);
 }

 setShowText(show_text) {
   return progress_bar_set_show_text(this.nativeObj, show_text);
 }

 get value() {
   return progress_bar_t_get_prop_value(this.nativeObj);
 }

 get vertical() {
   return progress_bar_t_get_prop_vertical(this.nativeObj);
 }

 get showText() {
   return progress_bar_t_get_prop_show_text(this.nativeObj);
 }

}

class TPopup extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TPopup(popup_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TPopup(popup_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setCloseWhenClick(close_when_click) {
   return popup_set_close_when_click(this.nativeObj, close_when_click);
 }

 setCloseWhenClickOutside(close_when_click_outside) {
   return popup_set_close_when_click_outside(this.nativeObj, close_when_click_outside);
 }

 get closeWhenClick() {
   return popup_t_get_prop_close_when_click(this.nativeObj);
 }

 get closeWhenClickOutside() {
   return popup_t_get_prop_close_when_click_outside(this.nativeObj);
 }

}

class TPages extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TPages(pages_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TPages(pages_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setActive(index) {
   return pages_set_active(this.nativeObj, index);
 }

 setActiveByName(name) {
   return pages_set_active_by_name(this.nativeObj, name);
 }

 get active() {
   return pages_t_get_prop_active(this.nativeObj);
 }

}

class TOverlay extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TOverlay(overlay_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TOverlay(overlay_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TLabel extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TLabel(label_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setLength(length) {
   return label_set_length(this.nativeObj, length);
 }

 resizeToContent(min_w, max_w, min_h, max_h) {
   return label_resize_to_content(this.nativeObj, min_w, max_w, min_h, max_h);
 }

 static cast(widget) {
   return new TLabel(label_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get length() {
   return label_t_get_prop_length(this.nativeObj);
 }

}

class TGroupBox extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TGroupBox(group_box_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TGroupBox(group_box_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TPaintEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new TPaintEvent(paint_event_cast(event ? (event.nativeObj || event) : null));
 }

 get c() {
   return paint_event_t_get_prop_c(this.nativeObj);
 }

}

class TView extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TView(view_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TView(view_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TWindowEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new TWindowEvent(window_event_cast(event ? (event.nativeObj || event) : null));
 }

 get window() {
   return window_event_t_get_prop_window(this.nativeObj);
 }

}

class TImageBase extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 setImage(name) {
   return image_base_set_image(this.nativeObj, name);
 }

 setRotation(rotation) {
   return image_base_set_rotation(this.nativeObj, rotation);
 }

 setScale(scale_x, scale_y) {
   return image_base_set_scale(this.nativeObj, scale_x, scale_y);
 }

 setAnchor(anchor_x, anchor_y) {
   return image_base_set_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 setSelected(selected) {
   return image_base_set_selected(this.nativeObj, selected);
 }

 setSelectable(selectable) {
   return image_base_set_selectable(this.nativeObj, selectable);
 }

 setClickable(clickable) {
   return image_base_set_clickable(this.nativeObj, clickable);
 }

 static cast(widget) {
   return new TImageBase(image_base_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get image() {
   return image_base_t_get_prop_image(this.nativeObj);
 }

 get anchorX() {
   return image_base_t_get_prop_anchor_x(this.nativeObj);
 }

 get anchorY() {
   return image_base_t_get_prop_anchor_y(this.nativeObj);
 }

 get scaleX() {
   return image_base_t_get_prop_scale_x(this.nativeObj);
 }

 get scaleY() {
   return image_base_t_get_prop_scale_y(this.nativeObj);
 }

 get rotation() {
   return image_base_t_get_prop_rotation(this.nativeObj);
 }

 get clickable() {
   return image_base_t_get_prop_clickable(this.nativeObj);
 }

 get selectable() {
   return image_base_t_get_prop_selectable(this.nativeObj);
 }

 get selected() {
   return image_base_t_get_prop_selected(this.nativeObj);
 }

}

class TDialog extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TDialog(dialog_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static createSimple(parent, x, y, w, h) {
   return new TDialog(dialog_create_simple(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TDialog(dialog_cast(widget ? (widget.nativeObj || widget) : null));
 }

 getTitle() {
   return new TWidget(dialog_get_title(this.nativeObj));
 }

 getClient() {
   return new TWidget(dialog_get_client(this.nativeObj));
 }

 static open(name) {
   return new TDialog(dialog_open(name));
 }

 setTitle(title) {
   return dialog_set_title(this.nativeObj, title);
 }

 modal() {
   return dialog_modal(this.nativeObj);
 }

 quit(code) {
   return dialog_quit(this.nativeObj, code);
 }

 isQuited() {
   return dialog_is_quited(this.nativeObj);
 }

 isModal() {
   return dialog_is_modal(this.nativeObj);
 }

 static toast(text, duration) {
   return dialog_toast(text, duration);
 }

 static info(title, text) {
   return dialog_info(title, text);
 }

 static warn(title, text) {
   return dialog_warn(title, text);
 }

 static confirm(title, text) {
   return dialog_confirm(title, text);
 }

 get highlight() {
   return dialog_t_get_prop_highlight(this.nativeObj);
 }

}

class TWheelEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new TWheelEvent(wheel_event_cast(event ? (event.nativeObj || event) : null));
 }

 get dy() {
   return wheel_event_t_get_prop_dy(this.nativeObj);
 }

 get alt() {
   return wheel_event_t_get_prop_alt(this.nativeObj);
 }

 get ctrl() {
   return wheel_event_t_get_prop_ctrl(this.nativeObj);
 }

 get shift() {
   return wheel_event_t_get_prop_shift(this.nativeObj);
 }

}

class TOrientationEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new TOrientationEvent(orientation_event_cast(event ? (event.nativeObj || event) : null));
 }

 get orientation() {
   return orientation_event_t_get_prop_orientation(this.nativeObj);
 }

}

class TPointerEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new TPointerEvent(pointer_event_cast(event ? (event.nativeObj || event) : null));
 }

 get x() {
   return pointer_event_t_get_prop_x(this.nativeObj);
 }

 get y() {
   return pointer_event_t_get_prop_y(this.nativeObj);
 }

 get button() {
   return pointer_event_t_get_prop_button(this.nativeObj);
 }

 get pressed() {
   return pointer_event_t_get_prop_pressed(this.nativeObj);
 }

 get alt() {
   return pointer_event_t_get_prop_alt(this.nativeObj);
 }

 get ctrl() {
   return pointer_event_t_get_prop_ctrl(this.nativeObj);
 }

 get cmd() {
   return pointer_event_t_get_prop_cmd(this.nativeObj);
 }

 get menu() {
   return pointer_event_t_get_prop_menu(this.nativeObj);
 }

 get shift() {
   return pointer_event_t_get_prop_shift(this.nativeObj);
 }

}

class TWindowBase extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(widget) {
   return new TWindowBase(window_base_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get theme() {
   return window_base_t_get_prop_theme(this.nativeObj);
 }

 get closable() {
   return window_base_t_get_prop_closable(this.nativeObj);
 }

}

class TWindowManager extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static instance() {
   return new TWindowManager(window_manager());
 }

 static cast(widget) {
   return new TWindowManager(window_manager_cast(widget ? (widget.nativeObj || widget) : null));
 }

 getTopMainWindow() {
   return new TWidget(window_manager_get_top_main_window(this.nativeObj));
 }

 getTopWindow() {
   return new TWidget(window_manager_get_top_window(this.nativeObj));
 }

 getPrevWindow() {
   return new TWidget(window_manager_get_prev_window(this.nativeObj));
 }

 getPointerX() {
   return window_manager_get_pointer_x(this.nativeObj);
 }

 getPointerY() {
   return window_manager_get_pointer_y(this.nativeObj);
 }

 getPointerPressed() {
   return window_manager_get_pointer_pressed(this.nativeObj);
 }

 setShowFps(show_fps) {
   return window_manager_set_show_fps(this.nativeObj, show_fps);
 }

 setScreenSaverTime(screen_saver_time) {
   return window_manager_set_screen_saver_time(this.nativeObj, screen_saver_time);
 }

 setCursor(cursor) {
   return window_manager_set_cursor(this.nativeObj, cursor);
 }

 back() {
   return window_manager_back(this.nativeObj);
 }

 backToHome() {
   return window_manager_back_to_home(this.nativeObj);
 }

}

class TWindow extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TWindow(window_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setFullscreen(fullscreen) {
   return window_set_fullscreen(this.nativeObj, fullscreen);
 }

 static open(name) {
   return new TWindow(window_open(name));
 }

 static openAndClose(name, to_close) {
   return new TWindow(window_open_and_close(name, to_close ? to_close.nativeObj : null));
 }

 close() {
   return window_close(this.nativeObj);
 }

 closeForce() {
   return window_close_force(this.nativeObj);
 }

 static cast(widget) {
   return new TWindow(window_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get fullscreen() {
   return window_t_get_prop_fullscreen(this.nativeObj);
 }

}

class TCanvasWidget extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TCanvasWidget(canvas_widget_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TCanvasWidget(canvas_widget_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TPropChangeEvent extends TEvent {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(event) {
   return new TPropChangeEvent(prop_change_event_cast(event ? (event.nativeObj || event) : null));
 }

 get name() {
   return prop_change_event_t_get_prop_name(this.nativeObj);
 }

 get value() {
   return prop_change_event_t_get_prop_value(this.nativeObj);
 }

}

class TColorPicker extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TColorPicker(color_picker_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setColor(color) {
   return color_picker_set_color(this.nativeObj, color);
 }

 static cast(widget) {
   return new TColorPicker(color_picker_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get value() {
   return color_picker_t_get_prop_value(this.nativeObj);
 }

}

class TGrid extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TGrid(grid_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TGrid(grid_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TGridItem extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TGridItem(grid_item_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TGridItem(grid_item_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TEdit extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TEdit(edit_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TEdit(edit_cast(widget ? (widget.nativeObj || widget) : null));
 }

 getInt() {
   return edit_get_int(this.nativeObj);
 }

 getDouble() {
   return edit_get_double(this.nativeObj);
 }

 setInt(value) {
   return edit_set_int(this.nativeObj, value);
 }

 setDouble(value) {
   return edit_set_double(this.nativeObj, value);
 }

 setTextLimit(min, max) {
   return edit_set_text_limit(this.nativeObj, min, max);
 }

 setIntLimit(min, max, step) {
   return edit_set_int_limit(this.nativeObj, min, max, step);
 }

 setFloatLimit(min, max, step) {
   return edit_set_float_limit(this.nativeObj, min, max, step);
 }

 setReadonly(readonly) {
   return edit_set_readonly(this.nativeObj, readonly);
 }

 setAutoFix(auto_fix) {
   return edit_set_auto_fix(this.nativeObj, auto_fix);
 }

 setInputType(type) {
   return edit_set_input_type(this.nativeObj, type);
 }

 setInputTips(tips) {
   return edit_set_input_tips(this.nativeObj, tips);
 }

 setPasswordVisible(password_visible) {
   return edit_set_password_visible(this.nativeObj, password_visible);
 }

 setFocus(focus) {
   return edit_set_focus(this.nativeObj, focus);
 }

 get readonly() {
   return edit_t_get_prop_readonly(this.nativeObj);
 }

 get passwordVisible() {
   return edit_t_get_prop_password_visible(this.nativeObj);
 }

 get autoFix() {
   return edit_t_get_prop_auto_fix(this.nativeObj);
 }

 get topMargin() {
   return edit_t_get_prop_top_margin(this.nativeObj);
 }

 get bottomMargin() {
   return edit_t_get_prop_bottom_margin(this.nativeObj);
 }

 get leftMargin() {
   return edit_t_get_prop_left_margin(this.nativeObj);
 }

 get rightMargin() {
   return edit_t_get_prop_right_margin(this.nativeObj);
 }

 get tips() {
   return edit_t_get_prop_tips(this.nativeObj);
 }

}

class TTabControl extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TTabControl(tab_control_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TTabControl(tab_control_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TStyleMutable extends TStyle {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 getName() {
   return style_mutable_get_name(this.nativeObj);
 }

 setName(name) {
   return style_mutable_set_name(this.nativeObj, name);
 }

 setInt(state, name, val) {
   return style_mutable_set_int(this.nativeObj, state, name, val);
 }

 static cast(s) {
   return new TStyleMutable(style_mutable_cast(s ? (s.nativeObj || s) : null));
 }

 static create(widget, default_style) {
   return new TStyleMutable(style_mutable_create(widget ? widget.nativeObj : null, default_style ? default_style.nativeObj : null));
 }

 get name() {
   return style_mutable_t_get_prop_name(this.nativeObj);
 }

}

class TTabButton extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TTabButton(tab_button_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TTabButton(tab_button_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setValue(value) {
   return tab_button_set_value(this.nativeObj, value);
 }

 setIcon(name) {
   return tab_button_set_icon(this.nativeObj, name);
 }

 setActiveIcon(name) {
   return tab_button_set_active_icon(this.nativeObj, name);
 }

 get value() {
   return tab_button_t_get_prop_value(this.nativeObj);
 }

 get activeIcon() {
   return tab_button_t_get_prop_active_icon(this.nativeObj);
 }

 get icon() {
   return tab_button_t_get_prop_icon(this.nativeObj);
 }

}

class TDragger extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TDragger(dragger_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TDragger(dragger_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setRange(x_min, y_min, x_max, y_max) {
   return new TWidget(dragger_set_range(this.nativeObj, x_min, y_min, x_max, y_max));
 }

 get xMin() {
   return dragger_t_get_prop_x_min(this.nativeObj);
 }

 get yMin() {
   return dragger_t_get_prop_y_min(this.nativeObj);
 }

 get xMax() {
   return dragger_t_get_prop_x_max(this.nativeObj);
 }

 get yMax() {
   return dragger_t_get_prop_y_max(this.nativeObj);
 }

}

class TObject extends TEmitter {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 unref() {
   return object_unref(this.nativeObj);
 }

 static ref(obj) {
   return new TObject(object_ref(obj ? obj.nativeObj : null));
 }

 getType() {
   return object_get_type(this.nativeObj);
 }

 getDesc() {
   return object_get_desc(this.nativeObj);
 }

 getSize() {
   return object_get_size(this.nativeObj);
 }

 isCollection() {
   return object_is_collection(this.nativeObj);
 }

 setName(name) {
   return object_set_name(this.nativeObj, name);
 }

 compare(other) {
   return object_compare(this.nativeObj, other ? other.nativeObj : null);
 }

 getProp(name, v) {
   return object_get_prop(this.nativeObj, name, v ? v.nativeObj : null);
 }

 getPropStr(name) {
   return object_get_prop_str(this.nativeObj, name);
 }

 getPropPointer(name) {
   return object_get_prop_pointer(this.nativeObj, name);
 }

 getPropObject(name) {
   return new TObject(object_get_prop_object(this.nativeObj, name));
 }

 getPropInt(name, defval) {
   return object_get_prop_int(this.nativeObj, name, defval);
 }

 getPropBool(name, defval) {
   return object_get_prop_bool(this.nativeObj, name, defval);
 }

 getPropFloat(name, defval) {
   return object_get_prop_float(this.nativeObj, name, defval);
 }

 removeProp(name) {
   return object_remove_prop(this.nativeObj, name);
 }

 setProp(name, value) {
   return object_set_prop(this.nativeObj, name, value ? value.nativeObj : null);
 }

 setPropStr(name, value) {
   return object_set_prop_str(this.nativeObj, name, value);
 }

 setPropPointer(name, value) {
   return object_set_prop_pointer(this.nativeObj, name, value);
 }

 setPropObject(name, value) {
   return object_set_prop_object(this.nativeObj, name, value ? value.nativeObj : null);
 }

 setPropInt(name, value) {
   return object_set_prop_int(this.nativeObj, name, value);
 }

 setPropBool(name, value) {
   return object_set_prop_bool(this.nativeObj, name, value);
 }

 setPropFloat(name, value) {
   return object_set_prop_float(this.nativeObj, name, value);
 }

 copyProp(src, name) {
   return object_copy_prop(this.nativeObj, src ? src.nativeObj : null, name);
 }

 foreachProp(on_prop, ctx) {
   return object_foreach_prop(this.nativeObj, on_prop, ctx);
 }

 hasProp(name) {
   return object_has_prop(this.nativeObj, name);
 }

 eval(expr, v) {
   return object_eval(this.nativeObj, expr, v ? v.nativeObj : null);
 }

 canExec(name, args) {
   return object_can_exec(this.nativeObj, name, args);
 }

 exec(name, args) {
   return object_exec(this.nativeObj, name, args);
 }

 notifyChanged() {
   return object_notify_changed(this.nativeObj);
 }

 get refCount() {
   return object_t_get_prop_ref_count(this.nativeObj);
 }

 get name() {
   return object_t_get_prop_name(this.nativeObj);
 }

}

class TDialogTitle extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TDialogTitle(dialog_title_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TDialogTitle(dialog_title_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TGuagePointer extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TGuagePointer(guage_pointer_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TGuagePointer(guage_pointer_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setAngle(angle) {
   return guage_pointer_set_angle(this.nativeObj, angle);
 }

 setImage(image) {
   return guage_pointer_set_image(this.nativeObj, image);
 }

 setAnchor(anchor_x, anchor_y) {
   return guage_pointer_set_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 get angle() {
   return guage_pointer_t_get_prop_angle(this.nativeObj);
 }

 get image() {
   return guage_pointer_t_get_prop_image(this.nativeObj);
 }

 get anchorX() {
   return guage_pointer_t_get_prop_anchor_x(this.nativeObj);
 }

 get anchorY() {
   return guage_pointer_t_get_prop_anchor_y(this.nativeObj);
 }

}

class TGuage extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TGuage(guage_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TGuage(guage_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setImage(name) {
   return guage_set_image(this.nativeObj, name);
 }

 setDrawType(draw_type) {
   return guage_set_draw_type(this.nativeObj, draw_type);
 }

 get image() {
   return guage_t_get_prop_image(this.nativeObj);
 }

 get drawType() {
   return guage_t_get_prop_draw_type(this.nativeObj);
 }

}

class TImageAnimation extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TImageAnimation(image_animation_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setLoop(loop) {
   return image_animation_set_loop(this.nativeObj, loop);
 }

 setImage(image) {
   return image_animation_set_image(this.nativeObj, image);
 }

 setInterval(interval) {
   return image_animation_set_interval(this.nativeObj, interval);
 }

 setDelay(delay) {
   return image_animation_set_delay(this.nativeObj, delay);
 }

 setAutoPlay(auto_play) {
   return image_animation_set_auto_play(this.nativeObj, auto_play);
 }

 setSequence(sequence) {
   return image_animation_set_sequence(this.nativeObj, sequence);
 }

 setRangeSequence(start_index, end_index) {
   return image_animation_set_range_sequence(this.nativeObj, start_index, end_index);
 }

 play() {
   return image_animation_play(this.nativeObj);
 }

 stop() {
   return image_animation_stop(this.nativeObj);
 }

 pause() {
   return image_animation_pause(this.nativeObj);
 }

 setFormat(format) {
   return image_animation_set_format(this.nativeObj, format);
 }

 setUnloadAfterPaint(unload_after_paint) {
   return image_animation_set_unload_after_paint(this.nativeObj, unload_after_paint);
 }

 static cast(widget) {
   return new TImageAnimation(image_animation_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get image() {
   return image_animation_t_get_prop_image(this.nativeObj);
 }

 get sequence() {
   return image_animation_t_get_prop_sequence(this.nativeObj);
 }

 get startIndex() {
   return image_animation_t_get_prop_start_index(this.nativeObj);
 }

 get endIndex() {
   return image_animation_t_get_prop_end_index(this.nativeObj);
 }

 get loop() {
   return image_animation_t_get_prop_loop(this.nativeObj);
 }

 get autoPlay() {
   return image_animation_t_get_prop_auto_play(this.nativeObj);
 }

 get unloadAfterPaint() {
   return image_animation_t_get_prop_unload_after_paint(this.nativeObj);
 }

 get format() {
   return image_animation_t_get_prop_format(this.nativeObj);
 }

 get interval() {
   return image_animation_t_get_prop_interval(this.nativeObj);
 }

 get delay() {
   return image_animation_t_get_prop_delay(this.nativeObj);
 }

}

class TImageValue extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TImageValue(image_value_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setImage(image) {
   return image_value_set_image(this.nativeObj, image);
 }

 setFormat(format) {
   return image_value_set_format(this.nativeObj, format);
 }

 setValue(value) {
   return image_value_set_value(this.nativeObj, value);
 }

 static cast(widget) {
   return new TImageValue(image_value_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get image() {
   return image_value_t_get_prop_image(this.nativeObj);
 }

 get format() {
   return image_value_t_get_prop_format(this.nativeObj);
 }

 get value() {
   return image_value_t_get_prop_value(this.nativeObj);
 }

}

class TDialogClient extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TDialogClient(dialog_client_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TDialogClient(dialog_client_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TLineNumber extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TLineNumber(line_number_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setTopMargin(top_margin) {
   return line_number_set_top_margin(this.nativeObj, top_margin);
 }

 setBottomMargin(bottom_margin) {
   return line_number_set_bottom_margin(this.nativeObj, bottom_margin);
 }

 setLineHeight(line_height) {
   return line_number_set_line_height(this.nativeObj, line_height);
 }

 setYoffset(yoffset) {
   return line_number_set_yoffset(this.nativeObj, yoffset);
 }

 static cast(widget) {
   return new TLineNumber(line_number_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TMledit extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TMledit(mledit_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setReadonly(readonly) {
   return mledit_set_readonly(this.nativeObj, readonly);
 }

 setFocus(focus) {
   return mledit_set_focus(this.nativeObj, focus);
 }

 setWrapWord(wrap_word) {
   return mledit_set_wrap_word(this.nativeObj, wrap_word);
 }

 setMaxLines(max_lines) {
   return mledit_set_max_lines(this.nativeObj, max_lines);
 }

 setInputTips(tips) {
   return mledit_set_input_tips(this.nativeObj, tips);
 }

 static cast(widget) {
   return new TMledit(mledit_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get readonly() {
   return mledit_t_get_prop_readonly(this.nativeObj);
 }

 get topMargin() {
   return mledit_t_get_prop_top_margin(this.nativeObj);
 }

 get bottomMargin() {
   return mledit_t_get_prop_bottom_margin(this.nativeObj);
 }

 get leftMargin() {
   return mledit_t_get_prop_left_margin(this.nativeObj);
 }

 get rightMargin() {
   return mledit_t_get_prop_right_margin(this.nativeObj);
 }

 get tips() {
   return mledit_t_get_prop_tips(this.nativeObj);
 }

 get wrapWord() {
   return mledit_t_get_prop_wrap_word(this.nativeObj);
 }

 get maxLines() {
   return mledit_t_get_prop_max_lines(this.nativeObj);
 }

}

class TTabButtonGroup extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TTabButtonGroup(tab_button_group_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setCompact(compact) {
   return tab_button_group_set_compact(this.nativeObj, compact);
 }

 setScrollable(scrollable) {
   return tab_button_group_set_scrollable(this.nativeObj, scrollable);
 }

 static cast(widget) {
   return new TTabButtonGroup(tab_button_group_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get compact() {
   return tab_button_group_t_get_prop_compact(this.nativeObj);
 }

 get scrollable() {
   return tab_button_group_t_get_prop_scrollable(this.nativeObj);
 }

}

class TProgressCircle extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TProgressCircle(progress_circle_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TProgressCircle(progress_circle_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setValue(value) {
   return progress_circle_set_value(this.nativeObj, value);
 }

 setMax(max) {
   return progress_circle_set_max(this.nativeObj, max);
 }

 setLineWidth(line_width) {
   return progress_circle_set_line_width(this.nativeObj, line_width);
 }

 setStartAngle(start_angle) {
   return progress_circle_set_start_angle(this.nativeObj, start_angle);
 }

 setUnit(unit) {
   return progress_circle_set_unit(this.nativeObj, unit);
 }

 setShowText(show_text) {
   return progress_circle_set_show_text(this.nativeObj, show_text);
 }

 setCounterClockWise(counter_clock_wise) {
   return progress_circle_set_counter_clock_wise(this.nativeObj, counter_clock_wise);
 }

 get value() {
   return progress_circle_t_get_prop_value(this.nativeObj);
 }

 get max() {
   return progress_circle_t_get_prop_max(this.nativeObj);
 }

 get startAngle() {
   return progress_circle_t_get_prop_start_angle(this.nativeObj);
 }

 get lineWidth() {
   return progress_circle_t_get_prop_line_width(this.nativeObj);
 }

 get unit() {
   return progress_circle_t_get_prop_unit(this.nativeObj);
 }

 get counterClockWise() {
   return progress_circle_t_get_prop_counter_clock_wise(this.nativeObj);
 }

 get showText() {
   return progress_circle_t_get_prop_show_text(this.nativeObj);
 }

}

class TRichText extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TRichText(rich_text_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setText(text) {
   return rich_text_set_text(this.nativeObj, text);
 }

 static cast(widget) {
   return new TRichText(rich_text_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get lineGap() {
   return rich_text_t_get_prop_line_gap(this.nativeObj);
 }

}

class THscrollLabel extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new THscrollLabel(hscroll_label_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setLull(lull) {
   return hscroll_label_set_lull(this.nativeObj, lull);
 }

 setDuration(duration) {
   return hscroll_label_set_duration(this.nativeObj, duration);
 }

 setOnlyFocus(only_focus) {
   return hscroll_label_set_only_focus(this.nativeObj, only_focus);
 }

 setLoop(loop) {
   return hscroll_label_set_loop(this.nativeObj, loop);
 }

 setYoyo(yoyo) {
   return hscroll_label_set_yoyo(this.nativeObj, yoyo);
 }

 setEllipses(ellipses) {
   return hscroll_label_set_ellipses(this.nativeObj, ellipses);
 }

 setXoffset(xoffset) {
   return hscroll_label_set_xoffset(this.nativeObj, xoffset);
 }

 start() {
   return hscroll_label_start(this.nativeObj);
 }

 stop() {
   return hscroll_label_stop(this.nativeObj);
 }

 static cast(widget) {
   return new THscrollLabel(hscroll_label_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get onlyFocus() {
   return hscroll_label_t_get_prop_only_focus(this.nativeObj);
 }

 get loop() {
   return hscroll_label_t_get_prop_loop(this.nativeObj);
 }

 get yoyo() {
   return hscroll_label_t_get_prop_yoyo(this.nativeObj);
 }

 get ellipses() {
   return hscroll_label_t_get_prop_ellipses(this.nativeObj);
 }

 get lull() {
   return hscroll_label_t_get_prop_lull(this.nativeObj);
 }

 get duration() {
   return hscroll_label_t_get_prop_duration(this.nativeObj);
 }

 get xoffset() {
   return hscroll_label_t_get_prop_xoffset(this.nativeObj);
 }

 get textW() {
   return hscroll_label_t_get_prop_text_w(this.nativeObj);
 }

}

class TListItem extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TListItem(list_item_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TListItem(list_item_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TListViewH extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TListViewH(list_view_h_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setItemWidth(item_width) {
   return list_view_h_set_item_width(this.nativeObj, item_width);
 }

 setSpacing(spacing) {
   return list_view_h_set_spacing(this.nativeObj, spacing);
 }

 static cast(widget) {
   return new TListViewH(list_view_h_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get itemWidth() {
   return list_view_h_t_get_prop_item_width(this.nativeObj);
 }

 get spacing() {
   return list_view_h_t_get_prop_spacing(this.nativeObj);
 }

}

class TListView extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TListView(list_view_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setItemHeight(item_height) {
   return list_view_set_item_height(this.nativeObj, item_height);
 }

 setDefaultItemHeight(default_item_height) {
   return list_view_set_default_item_height(this.nativeObj, default_item_height);
 }

 setAutoHideScrollBar(auto_hide_scroll_bar) {
   return list_view_set_auto_hide_scroll_bar(this.nativeObj, auto_hide_scroll_bar);
 }

 static cast(widget) {
   return new TListView(list_view_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get itemHeight() {
   return list_view_t_get_prop_item_height(this.nativeObj);
 }

 get defaultItemHeight() {
   return list_view_t_get_prop_default_item_height(this.nativeObj);
 }

 get autoHideScrollBar() {
   return list_view_t_get_prop_auto_hide_scroll_bar(this.nativeObj);
 }

}

class TScrollBar extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TScrollBar(scroll_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TScrollBar(scroll_bar_cast(widget ? (widget.nativeObj || widget) : null));
 }

 static createMobile(parent, x, y, w, h) {
   return new TScrollBar(scroll_bar_create_mobile(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static createDesktop(parent, x, y, w, h) {
   return new TScrollBar(scroll_bar_create_desktop(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setParams(virtual_size, row) {
   return scroll_bar_set_params(this.nativeObj, virtual_size, row);
 }

 scrollTo(value, duration) {
   return scroll_bar_scroll_to(this.nativeObj, value, duration);
 }

 setValue(value) {
   return scroll_bar_set_value(this.nativeObj, value);
 }

 addDelta(delta) {
   return scroll_bar_add_delta(this.nativeObj, delta);
 }

 scrollDelta(delta) {
   return scroll_bar_scroll_delta(this.nativeObj, delta);
 }

 setValueOnly(value) {
   return scroll_bar_set_value_only(this.nativeObj, value);
 }

 isMobile() {
   return scroll_bar_is_mobile(this.nativeObj);
 }

 get virtualSize() {
   return scroll_bar_t_get_prop_virtual_size(this.nativeObj);
 }

 get value() {
   return scroll_bar_t_get_prop_value(this.nativeObj);
 }

 get row() {
   return scroll_bar_t_get_prop_row(this.nativeObj);
 }

 get animatable() {
   return scroll_bar_t_get_prop_animatable(this.nativeObj);
 }

}

class TScrollView extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TScrollView(scroll_view_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TScrollView(scroll_view_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setVirtualW(w) {
   return scroll_view_set_virtual_w(this.nativeObj, w);
 }

 setVirtualH(h) {
   return scroll_view_set_virtual_h(this.nativeObj, h);
 }

 setXslidable(xslidable) {
   return scroll_view_set_xslidable(this.nativeObj, xslidable);
 }

 setYslidable(yslidable) {
   return scroll_view_set_yslidable(this.nativeObj, yslidable);
 }

 setOffset(xoffset, yoffset) {
   return scroll_view_set_offset(this.nativeObj, xoffset, yoffset);
 }

 scrollTo(xoffset_end, yoffset_end, duration) {
   return scroll_view_scroll_to(this.nativeObj, xoffset_end, yoffset_end, duration);
 }

 get virtualW() {
   return scroll_view_t_get_prop_virtual_w(this.nativeObj);
 }

 get virtualH() {
   return scroll_view_t_get_prop_virtual_h(this.nativeObj);
 }

 get xoffset() {
   return scroll_view_t_get_prop_xoffset(this.nativeObj);
 }

 get yoffset() {
   return scroll_view_t_get_prop_yoffset(this.nativeObj);
 }

 get xslidable() {
   return scroll_view_t_get_prop_xslidable(this.nativeObj);
 }

 get yslidable() {
   return scroll_view_t_get_prop_yslidable(this.nativeObj);
 }

}

class TSlideMenu extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TSlideMenu(slide_menu_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TSlideMenu(slide_menu_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setValue(value) {
   return slide_menu_set_value(this.nativeObj, value);
 }

 setAlignV(align_v) {
   return slide_menu_set_align_v(this.nativeObj, align_v);
 }

 setMinScale(min_scale) {
   return slide_menu_set_min_scale(this.nativeObj, min_scale);
 }

 get value() {
   return slide_menu_t_get_prop_value(this.nativeObj);
 }

 get alignV() {
   return slide_menu_t_get_prop_align_v(this.nativeObj);
 }

 get minScale() {
   return slide_menu_t_get_prop_min_scale(this.nativeObj);
 }

}

class TAppBar extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TAppBar(app_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TAppBar(app_bar_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TButtonGroup extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TButtonGroup(button_group_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TButtonGroup(button_group_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TButton extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TButton(button_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TButton(button_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setRepeat(repeat) {
   return button_set_repeat(this.nativeObj, repeat);
 }

 setEnableLongPress(enable_long_press) {
   return button_set_enable_long_press(this.nativeObj, enable_long_press);
 }

 get repeat() {
   return button_t_get_prop_repeat(this.nativeObj);
 }

 get enableLongPress() {
   return button_t_get_prop_enable_long_press(this.nativeObj);
 }

}

class TCheckButton extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TCheckButton(check_button_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static createRadio(parent, x, y, w, h) {
   return new TCheckButton(check_button_create_radio(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setValue(value) {
   return check_button_set_value(this.nativeObj, value);
 }

 static cast(widget) {
   return new TCheckButton(check_button_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get value() {
   return check_button_t_get_prop_value(this.nativeObj);
 }

}

class TColorTile extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TColorTile(color_tile_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TColorTile(color_tile_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setBgColor(color) {
   return color_tile_set_bg_color(this.nativeObj, color);
 }

 get bgColor() {
   return color_tile_t_get_prop_bg_color(this.nativeObj);
 }

 get borderColor() {
   return color_tile_t_get_prop_border_color(this.nativeObj);
 }

}

class TColumn extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TColumn(column_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TColumn(column_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TComboBoxItem extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TComboBoxItem(combo_box_item_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TComboBoxItem(combo_box_item_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setChecked(checked) {
   return combo_box_item_set_checked(this.nativeObj, checked);
 }

 setValue(value) {
   return combo_box_item_set_value(this.nativeObj, value);
 }

 get value() {
   return combo_box_item_t_get_prop_value(this.nativeObj);
 }

 get checked() {
   return combo_box_item_t_get_prop_checked(this.nativeObj);
 }

}

class TComboBox extends TWidget {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TComboBox(combo_box_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TComboBox(combo_box_cast(widget ? (widget.nativeObj || widget) : null));
 }

 setOpenWindow(open_window) {
   return combo_box_set_open_window(this.nativeObj, open_window);
 }

 resetOptions() {
   return combo_box_reset_options(this.nativeObj);
 }

 countOptions() {
   return combo_box_count_options(this.nativeObj);
 }

 setSelectedIndex(index) {
   return combo_box_set_selected_index(this.nativeObj, index);
 }

 setValue(value) {
   return combo_box_set_value(this.nativeObj, value);
 }

 appendOption(value, text) {
   return combo_box_append_option(this.nativeObj, value, text);
 }

 setOptions(options) {
   return combo_box_set_options(this.nativeObj, options);
 }

 getValue() {
   return combo_box_get_value(this.nativeObj);
 }

 getText() {
   return combo_box_get_text(this.nativeObj);
 }

 get openWindow() {
   return combo_box_t_get_prop_open_window(this.nativeObj);
 }

 get selectedIndex() {
   return combo_box_t_get_prop_selected_index(this.nativeObj);
 }

 get value() {
   return combo_box_t_get_prop_value(this.nativeObj);
 }

 get options() {
   return combo_box_t_get_prop_options(this.nativeObj);
 }

}

class TTimerInfo extends TObject {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(timer) {
   return new TTimerInfo(timer_info_cast(timer ? (timer.nativeObj || timer) : null));
 }

 get ctx() {
   return timer_info_t_get_prop_ctx(this.nativeObj);
 }

 get id() {
   return timer_info_t_get_prop_id(this.nativeObj);
 }

 get now() {
   return timer_info_t_get_prop_now(this.nativeObj);
 }

 get userChangedTime() {
   return timer_info_t_get_prop_user_changed_time(this.nativeObj);
 }

}

class TWindowManagerSimple extends TWindowManager {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

}

class TObjectDefault extends TObject {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create() {
   return new TObjectDefault(object_default_create());
 }

 unref() {
   return object_default_unref(this.nativeObj);
 }

 clearProps() {
   return object_default_clear_props(this.nativeObj);
 }

 get propsSize() {
   return object_default_t_get_prop_props_size(this.nativeObj);
 }

}

class TIdleInfo extends TObject {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static cast(idle) {
   return new TIdleInfo(idle_info_cast(idle ? (idle.nativeObj || idle) : null));
 }

 get ctx() {
   return idle_info_t_get_prop_ctx(this.nativeObj);
 }

 get id() {
   return idle_info_t_get_prop_id(this.nativeObj);
 }

}

class TWindowManagerDefault extends TWindowManager {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

}

class TImage extends TImageBase {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TImage(image_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 setDrawType(draw_type) {
   return image_set_draw_type(this.nativeObj, draw_type);
 }

 static cast(widget) {
   return new TImage(image_cast(widget ? (widget.nativeObj || widget) : null));
 }

 get drawType() {
   return image_t_get_prop_draw_type(this.nativeObj);
 }

}

class TComboBoxEx extends TComboBox {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TComboBoxEx(combo_box_ex_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

}

class TGifImage extends TImageBase {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TGifImage(gif_image_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TGifImage(gif_image_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TSvgImage extends TImageBase {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TSvgImage(svg_image_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TSvgImage(svg_image_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TSpinBox extends TEdit {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TSpinBox(spin_box_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TSpinBox(spin_box_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

class TSystemBar extends TWindowBase {
 public nativeObj;
 constructor(nativeObj) {
   super(nativeObj);
 }

 static create(parent, x, y, w, h) {
   return new TSystemBar(system_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
 }

 static cast(widget) {
   return new TSystemBar(system_bar_cast(widget ? (widget.nativeObj || widget) : null));
 }

}

