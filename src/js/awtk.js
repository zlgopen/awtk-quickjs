var __extends = (this && this.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (b.hasOwnProperty(p)) d[p] = b[p]; };
        return extendStatics(d, b);
    }
    return function (d, b) {
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
if (this['console'] === undefined) {
    this.console = {};
    this.console.log = function (str) {
        print(str);
    };
}
var TGlobal = /** @class */ (function () {
    function TGlobal(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TGlobal.quit = function () {
        return tk_quit();
    };
    TGlobal.getPointerX = function () {
        return tk_get_pointer_x();
    };
    TGlobal.getPointerY = function () {
        return tk_get_pointer_y();
    };
    TGlobal.isPointerPressed = function () {
        return tk_is_pointer_pressed();
    };
    return TGlobal;
}());
var TBitmap = /** @class */ (function () {
    function TBitmap(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TBitmap.create = function () {
        return new TBitmap(bitmap_create());
    };
    TBitmap.createEx = function (w, h, line_length, format) {
        return new TBitmap(bitmap_create_ex(w, h, line_length, format));
    };
    TBitmap.prototype.getBpp = function () {
        return bitmap_get_bpp(this.nativeObj);
    };
    TBitmap.prototype.destroy = function () {
        return bitmap_destroy(this.nativeObj);
    };
    Object.defineProperty(TBitmap.prototype, "w", {
        get: function () {
            return bitmap_t_get_prop_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TBitmap.prototype, "h", {
        get: function () {
            return bitmap_t_get_prop_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TBitmap.prototype, "lineLength", {
        get: function () {
            return bitmap_t_get_prop_line_length(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TBitmap.prototype, "flags", {
        get: function () {
            return bitmap_t_get_prop_flags(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TBitmap.prototype, "format", {
        get: function () {
            return bitmap_t_get_prop_format(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TBitmap.prototype, "name", {
        get: function () {
            return bitmap_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TBitmap;
}());
var TImageDrawType;
(function (TImageDrawType) {
    TImageDrawType[TImageDrawType["DEFAULT"] = IMAGE_DRAW_DEFAULT()] = "DEFAULT";
    TImageDrawType[TImageDrawType["CENTER"] = IMAGE_DRAW_CENTER()] = "CENTER";
    TImageDrawType[TImageDrawType["ICON"] = IMAGE_DRAW_ICON()] = "ICON";
    TImageDrawType[TImageDrawType["SCALE"] = IMAGE_DRAW_SCALE()] = "SCALE";
    TImageDrawType[TImageDrawType["SCALE_AUTO"] = IMAGE_DRAW_SCALE_AUTO()] = "SCALE_AUTO";
    TImageDrawType[TImageDrawType["SCALE_DOWN"] = IMAGE_DRAW_SCALE_DOWN()] = "SCALE_DOWN";
    TImageDrawType[TImageDrawType["SCALE_W"] = IMAGE_DRAW_SCALE_W()] = "SCALE_W";
    TImageDrawType[TImageDrawType["SCALE_H"] = IMAGE_DRAW_SCALE_H()] = "SCALE_H";
    TImageDrawType[TImageDrawType["REPEAT"] = IMAGE_DRAW_REPEAT()] = "REPEAT";
    TImageDrawType[TImageDrawType["REPEAT_X"] = IMAGE_DRAW_REPEAT_X()] = "REPEAT_X";
    TImageDrawType[TImageDrawType["REPEAT_Y"] = IMAGE_DRAW_REPEAT_Y()] = "REPEAT_Y";
    TImageDrawType[TImageDrawType["REPEAT_Y_INVERSE"] = IMAGE_DRAW_REPEAT_Y_INVERSE()] = "REPEAT_Y_INVERSE";
    TImageDrawType[TImageDrawType["PATCH9"] = IMAGE_DRAW_PATCH9()] = "PATCH9";
    TImageDrawType[TImageDrawType["PATCH3_X"] = IMAGE_DRAW_PATCH3_X()] = "PATCH3_X";
    TImageDrawType[TImageDrawType["PATCH3_Y"] = IMAGE_DRAW_PATCH3_Y()] = "PATCH3_Y";
    TImageDrawType[TImageDrawType["PATCH3_X_SCALE_Y"] = IMAGE_DRAW_PATCH3_X_SCALE_Y()] = "PATCH3_X_SCALE_Y";
    TImageDrawType[TImageDrawType["PATCH3_Y_SCALE_X"] = IMAGE_DRAW_PATCH3_Y_SCALE_X()] = "PATCH3_Y_SCALE_X";
})(TImageDrawType || (TImageDrawType = {}));
;
var TCanvas = /** @class */ (function () {
    function TCanvas(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TCanvas.prototype.getWidth = function () {
        return canvas_get_width(this.nativeObj);
    };
    TCanvas.prototype.getHeight = function () {
        return canvas_get_height(this.nativeObj);
    };
    TCanvas.prototype.getClipRect = function (r) {
        return canvas_get_clip_rect(this.nativeObj, r ? r.nativeObj : null);
    };
    TCanvas.prototype.setClipRect = function (r) {
        return canvas_set_clip_rect(this.nativeObj, r ? r.nativeObj : null);
    };
    TCanvas.prototype.setClipRectEx = function (r, translate) {
        return canvas_set_clip_rect_ex(this.nativeObj, r ? r.nativeObj : null, translate);
    };
    TCanvas.prototype.setFillColor = function (color) {
        return canvas_set_fill_color_str(this.nativeObj, color);
    };
    TCanvas.prototype.setTextColor = function (color) {
        return canvas_set_text_color_str(this.nativeObj, color);
    };
    TCanvas.prototype.setStrokeColor = function (color) {
        return canvas_set_stroke_color_str(this.nativeObj, color);
    };
    TCanvas.prototype.setGlobalAlpha = function (alpha) {
        return canvas_set_global_alpha(this.nativeObj, alpha);
    };
    TCanvas.prototype.translate = function (dx, dy) {
        return canvas_translate(this.nativeObj, dx, dy);
    };
    TCanvas.prototype.untranslate = function (dx, dy) {
        return canvas_untranslate(this.nativeObj, dx, dy);
    };
    TCanvas.prototype.drawVline = function (x, y, h) {
        return canvas_draw_vline(this.nativeObj, x, y, h);
    };
    TCanvas.prototype.drawHline = function (x, y, w) {
        return canvas_draw_hline(this.nativeObj, x, y, w);
    };
    TCanvas.prototype.fillRect = function (x, y, w, h) {
        return canvas_fill_rect(this.nativeObj, x, y, w, h);
    };
    TCanvas.prototype.strokeRect = function (x, y, w, h) {
        return canvas_stroke_rect(this.nativeObj, x, y, w, h);
    };
    TCanvas.prototype.setFont = function (name, size) {
        return canvas_set_font(this.nativeObj, name, size);
    };
    TCanvas.prototype.measureText = function (str) {
        return canvas_measure_utf8(this.nativeObj, str);
    };
    TCanvas.prototype.drawText = function (str, x, y) {
        return canvas_draw_utf8(this.nativeObj, str, x, y);
    };
    TCanvas.prototype.drawTextInRect = function (str, r) {
        return canvas_draw_utf8_in_rect(this.nativeObj, str, r ? r.nativeObj : null);
    };
    TCanvas.prototype.drawIcon = function (img, cx, cy) {
        return canvas_draw_icon(this.nativeObj, img ? img.nativeObj : null, cx, cy);
    };
    TCanvas.prototype.drawImage = function (img, src, dst) {
        return canvas_draw_image(this.nativeObj, img ? img.nativeObj : null, src ? src.nativeObj : null, dst ? dst.nativeObj : null);
    };
    TCanvas.prototype.drawImageEx = function (img, draw_type, dst) {
        return canvas_draw_image_ex(this.nativeObj, img ? img.nativeObj : null, draw_type, dst ? dst.nativeObj : null);
    };
    TCanvas.prototype.getVgcanvas = function () {
        return new TVgcanvas(canvas_get_vgcanvas(this.nativeObj));
    };
    TCanvas.cast = function (c) {
        return new TCanvas(canvas_cast(c ? (c.nativeObj || c) : null));
    };
    TCanvas.prototype.reset = function () {
        return canvas_reset(this.nativeObj);
    };
    Object.defineProperty(TCanvas.prototype, "ox", {
        get: function () {
            return canvas_t_get_prop_ox(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TCanvas.prototype, "oy", {
        get: function () {
            return canvas_t_get_prop_oy(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TCanvas.prototype, "fontName", {
        get: function () {
            return canvas_t_get_prop_font_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TCanvas.prototype, "fontSize", {
        get: function () {
            return canvas_t_get_prop_font_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TCanvas.prototype, "globalAlpha", {
        get: function () {
            return canvas_t_get_prop_global_alpha(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TCanvas;
}());
var TClipBoardDataType;
(function (TClipBoardDataType) {
    TClipBoardDataType[TClipBoardDataType["NONE"] = CLIP_BOARD_DATA_TYPE_NONE()] = "NONE";
    TClipBoardDataType[TClipBoardDataType["TEXT"] = CLIP_BOARD_DATA_TYPE_TEXT()] = "TEXT";
})(TClipBoardDataType || (TClipBoardDataType = {}));
;
var TClipBoard = /** @class */ (function () {
    function TClipBoard(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TClipBoard.setText = function (text) {
        return clip_board_set_text(text);
    };
    TClipBoard.getText = function () {
        return clip_board_get_text();
    };
    return TClipBoard;
}());
var TDialogQuitCode;
(function (TDialogQuitCode) {
    TDialogQuitCode[TDialogQuitCode["NONE"] = DIALOG_QUIT_NONE()] = "NONE";
    TDialogQuitCode[TDialogQuitCode["OK"] = DIALOG_QUIT_OK()] = "OK";
    TDialogQuitCode[TDialogQuitCode["YES"] = DIALOG_QUIT_YES()] = "YES";
    TDialogQuitCode[TDialogQuitCode["CANCEL"] = DIALOG_QUIT_CANCEL()] = "CANCEL";
    TDialogQuitCode[TDialogQuitCode["NO"] = DIALOG_QUIT_NO()] = "NO";
    TDialogQuitCode[TDialogQuitCode["OTHER"] = DIALOG_QUIT_OTHER()] = "OTHER";
})(TDialogQuitCode || (TDialogQuitCode = {}));
;
var TEventType;
(function (TEventType) {
    TEventType[TEventType["POINTER_DOWN"] = EVT_POINTER_DOWN()] = "POINTER_DOWN";
    TEventType[TEventType["POINTER_DOWN_BEFORE_CHILDREN"] = EVT_POINTER_DOWN_BEFORE_CHILDREN()] = "POINTER_DOWN_BEFORE_CHILDREN";
    TEventType[TEventType["POINTER_MOVE"] = EVT_POINTER_MOVE()] = "POINTER_MOVE";
    TEventType[TEventType["POINTER_MOVE_BEFORE_CHILDREN"] = EVT_POINTER_MOVE_BEFORE_CHILDREN()] = "POINTER_MOVE_BEFORE_CHILDREN";
    TEventType[TEventType["POINTER_UP"] = EVT_POINTER_UP()] = "POINTER_UP";
    TEventType[TEventType["POINTER_UP_BEFORE_CHILDREN"] = EVT_POINTER_UP_BEFORE_CHILDREN()] = "POINTER_UP_BEFORE_CHILDREN";
    TEventType[TEventType["WHEEL"] = EVT_WHEEL()] = "WHEEL";
    TEventType[TEventType["WHEEL_BEFORE_CHILDREN"] = EVT_WHEEL_BEFORE_CHILDREN()] = "WHEEL_BEFORE_CHILDREN";
    TEventType[TEventType["POINTER_DOWN_ABORT"] = EVT_POINTER_DOWN_ABORT()] = "POINTER_DOWN_ABORT";
    TEventType[TEventType["CONTEXT_MENU"] = EVT_CONTEXT_MENU()] = "CONTEXT_MENU";
    TEventType[TEventType["POINTER_ENTER"] = EVT_POINTER_ENTER()] = "POINTER_ENTER";
    TEventType[TEventType["POINTER_LEAVE"] = EVT_POINTER_LEAVE()] = "POINTER_LEAVE";
    TEventType[TEventType["LONG_PRESS"] = EVT_LONG_PRESS()] = "LONG_PRESS";
    TEventType[TEventType["CLICK"] = EVT_CLICK()] = "CLICK";
    TEventType[TEventType["FOCUS"] = EVT_FOCUS()] = "FOCUS";
    TEventType[TEventType["BLUR"] = EVT_BLUR()] = "BLUR";
    TEventType[TEventType["KEY_DOWN"] = EVT_KEY_DOWN()] = "KEY_DOWN";
    TEventType[TEventType["KEY_DOWN_BEFORE_CHILDREN"] = EVT_KEY_DOWN_BEFORE_CHILDREN()] = "KEY_DOWN_BEFORE_CHILDREN";
    TEventType[TEventType["KEY_REPEAT"] = EVT_KEY_REPEAT()] = "KEY_REPEAT";
    TEventType[TEventType["KEY_UP"] = EVT_KEY_UP()] = "KEY_UP";
    TEventType[TEventType["KEY_UP_BEFORE_CHILDREN"] = EVT_KEY_UP_BEFORE_CHILDREN()] = "KEY_UP_BEFORE_CHILDREN";
    TEventType[TEventType["WILL_MOVE"] = EVT_WILL_MOVE()] = "WILL_MOVE";
    TEventType[TEventType["MOVE"] = EVT_MOVE()] = "MOVE";
    TEventType[TEventType["WILL_RESIZE"] = EVT_WILL_RESIZE()] = "WILL_RESIZE";
    TEventType[TEventType["RESIZE"] = EVT_RESIZE()] = "RESIZE";
    TEventType[TEventType["WILL_MOVE_RESIZE"] = EVT_WILL_MOVE_RESIZE()] = "WILL_MOVE_RESIZE";
    TEventType[TEventType["MOVE_RESIZE"] = EVT_MOVE_RESIZE()] = "MOVE_RESIZE";
    TEventType[TEventType["VALUE_WILL_CHANGE"] = EVT_VALUE_WILL_CHANGE()] = "VALUE_WILL_CHANGE";
    TEventType[TEventType["VALUE_CHANGED"] = EVT_VALUE_CHANGED()] = "VALUE_CHANGED";
    TEventType[TEventType["VALUE_CHANGING"] = EVT_VALUE_CHANGING()] = "VALUE_CHANGING";
    TEventType[TEventType["PAINT"] = EVT_PAINT()] = "PAINT";
    TEventType[TEventType["BEFORE_PAINT"] = EVT_BEFORE_PAINT()] = "BEFORE_PAINT";
    TEventType[TEventType["AFTER_PAINT"] = EVT_AFTER_PAINT()] = "AFTER_PAINT";
    TEventType[TEventType["PAINT_DONE"] = EVT_PAINT_DONE()] = "PAINT_DONE";
    TEventType[TEventType["LOCALE_CHANGED"] = EVT_LOCALE_CHANGED()] = "LOCALE_CHANGED";
    TEventType[TEventType["ANIM_START"] = EVT_ANIM_START()] = "ANIM_START";
    TEventType[TEventType["ANIM_STOP"] = EVT_ANIM_STOP()] = "ANIM_STOP";
    TEventType[TEventType["ANIM_PAUSE"] = EVT_ANIM_PAUSE()] = "ANIM_PAUSE";
    TEventType[TEventType["ANIM_ONCE"] = EVT_ANIM_ONCE()] = "ANIM_ONCE";
    TEventType[TEventType["ANIM_END"] = EVT_ANIM_END()] = "ANIM_END";
    TEventType[TEventType["WINDOW_LOAD"] = EVT_WINDOW_LOAD()] = "WINDOW_LOAD";
    TEventType[TEventType["WINDOW_WILL_OPEN"] = EVT_WINDOW_WILL_OPEN()] = "WINDOW_WILL_OPEN";
    TEventType[TEventType["WINDOW_OPEN"] = EVT_WINDOW_OPEN()] = "WINDOW_OPEN";
    TEventType[TEventType["WINDOW_TO_BACKGROUND"] = EVT_WINDOW_TO_BACKGROUND()] = "WINDOW_TO_BACKGROUND";
    TEventType[TEventType["WINDOW_TO_FOREGROUND"] = EVT_WINDOW_TO_FOREGROUND()] = "WINDOW_TO_FOREGROUND";
    TEventType[TEventType["WINDOW_CLOSE"] = EVT_WINDOW_CLOSE()] = "WINDOW_CLOSE";
    TEventType[TEventType["REQUEST_CLOSE_WINDOW"] = EVT_REQUEST_CLOSE_WINDOW()] = "REQUEST_CLOSE_WINDOW";
    TEventType[TEventType["TOP_WINDOW_CHANGED"] = EVT_TOP_WINDOW_CHANGED()] = "TOP_WINDOW_CHANGED";
    TEventType[TEventType["IM_COMMIT"] = EVT_IM_COMMIT()] = "IM_COMMIT";
    TEventType[TEventType["IM_SHOW_CANDIDATES"] = EVT_IM_SHOW_CANDIDATES()] = "IM_SHOW_CANDIDATES";
    TEventType[TEventType["IM_ACTION"] = EVT_IM_ACTION()] = "IM_ACTION";
    TEventType[TEventType["IM_ACTION_INFO"] = EVT_IM_ACTION_INFO()] = "IM_ACTION_INFO";
    TEventType[TEventType["DRAG_START"] = EVT_DRAG_START()] = "DRAG_START";
    TEventType[TEventType["DRAG"] = EVT_DRAG()] = "DRAG";
    TEventType[TEventType["DRAG_END"] = EVT_DRAG_END()] = "DRAG_END";
    TEventType[TEventType["SCREEN_SAVER"] = EVT_SCREEN_SAVER()] = "SCREEN_SAVER";
    TEventType[TEventType["LOW_MEMORY"] = EVT_LOW_MEMORY()] = "LOW_MEMORY";
    TEventType[TEventType["OUT_OF_MEMORY"] = EVT_OUT_OF_MEMORY()] = "OUT_OF_MEMORY";
    TEventType[TEventType["ORIENTATION_WILL_CHANGED"] = EVT_ORIENTATION_WILL_CHANGED()] = "ORIENTATION_WILL_CHANGED";
    TEventType[TEventType["ORIENTATION_CHANGED"] = EVT_ORIENTATION_CHANGED()] = "ORIENTATION_CHANGED";
    TEventType[TEventType["WIDGET_CREATED"] = EVT_WIDGET_CREATED()] = "WIDGET_CREATED";
    TEventType[TEventType["REQUEST_QUIT_APP"] = EVT_REQUEST_QUIT_APP()] = "REQUEST_QUIT_APP";
    TEventType[TEventType["THEME_CHANGED"] = EVT_THEME_CHANGED()] = "THEME_CHANGED";
    TEventType[TEventType["REQ_START"] = EVT_REQ_START()] = "REQ_START";
    TEventType[TEventType["USER_START"] = EVT_USER_START()] = "USER_START";
})(TEventType || (TEventType = {}));
;
var TFontManager = /** @class */ (function () {
    function TFontManager(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TFontManager.prototype.unloadFont = function (name, size) {
        return font_manager_unload_font(this.nativeObj, name, size);
    };
    TFontManager.prototype.unloadAll = function () {
        return font_manager_unload_all(this.nativeObj);
    };
    return TFontManager;
}());
var TGlyphFormat;
(function (TGlyphFormat) {
    TGlyphFormat[TGlyphFormat["ALPHA"] = GLYPH_FMT_ALPHA()] = "ALPHA";
    TGlyphFormat[TGlyphFormat["MONO"] = GLYPH_FMT_MONO()] = "MONO";
    TGlyphFormat[TGlyphFormat["RGBA"] = GLYPH_FMT_RGBA()] = "RGBA";
})(TGlyphFormat || (TGlyphFormat = {}));
;
var TIdle = /** @class */ (function () {
    function TIdle(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TIdle.add = function (on_idle, ctx) {
        return idle_add(on_idle, ctx);
    };
    TIdle.remove = function (idle_id) {
        return idle_remove(idle_id);
    };
    return TIdle;
}());
var TValue = /** @class */ (function () {
    function TValue(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TValue.prototype.setBool = function (value) {
        return new TValue(value_set_bool(this.nativeObj, value));
    };
    TValue.prototype.bool = function () {
        return value_bool(this.nativeObj);
    };
    TValue.prototype.setInt8 = function (value) {
        return new TValue(value_set_int8(this.nativeObj, value));
    };
    TValue.prototype.int8 = function () {
        return value_int8(this.nativeObj);
    };
    TValue.prototype.setUint8 = function (value) {
        return new TValue(value_set_uint8(this.nativeObj, value));
    };
    TValue.prototype.uint8 = function () {
        return value_uint8(this.nativeObj);
    };
    TValue.prototype.setInt16 = function (value) {
        return new TValue(value_set_int16(this.nativeObj, value));
    };
    TValue.prototype.int16 = function () {
        return value_int16(this.nativeObj);
    };
    TValue.prototype.setUint16 = function (value) {
        return new TValue(value_set_uint16(this.nativeObj, value));
    };
    TValue.prototype.uint16 = function () {
        return value_uint16(this.nativeObj);
    };
    TValue.prototype.setInt32 = function (value) {
        return new TValue(value_set_int32(this.nativeObj, value));
    };
    TValue.prototype.int32 = function () {
        return value_int32(this.nativeObj);
    };
    TValue.prototype.setUint32 = function (value) {
        return new TValue(value_set_uint32(this.nativeObj, value));
    };
    TValue.prototype.setInt64 = function (value) {
        return new TValue(value_set_int64(this.nativeObj, value));
    };
    TValue.prototype.int64 = function () {
        return value_int64(this.nativeObj);
    };
    TValue.prototype.setUint64 = function (value) {
        return new TValue(value_set_uint64(this.nativeObj, value));
    };
    TValue.prototype.uint64 = function () {
        return value_uint64(this.nativeObj);
    };
    TValue.prototype.setFloat = function (value) {
        return new TValue(value_set_float(this.nativeObj, value));
    };
    TValue.prototype.float = function () {
        return value_float(this.nativeObj);
    };
    TValue.prototype.setFloat32 = function (value) {
        return new TValue(value_set_float32(this.nativeObj, value));
    };
    TValue.prototype.float32 = function () {
        return value_float32(this.nativeObj);
    };
    TValue.prototype.setDouble = function (value) {
        return new TValue(value_set_double(this.nativeObj, value));
    };
    TValue.prototype.double = function () {
        return value_double(this.nativeObj);
    };
    TValue.prototype.setStr = function (value) {
        return new TValue(value_dup_str(this.nativeObj, value));
    };
    TValue.prototype.str = function () {
        return value_str(this.nativeObj);
    };
    TValue.prototype.wstr = function () {
        return value_wstr(this.nativeObj);
    };
    TValue.prototype.isNull = function () {
        return value_is_null(this.nativeObj);
    };
    TValue.prototype.int = function () {
        return value_int(this.nativeObj);
    };
    TValue.prototype.setInt = function (value) {
        return new TValue(value_set_int(this.nativeObj, value));
    };
    TValue.prototype.setObject = function (value) {
        return new TValue(value_set_object(this.nativeObj, value ? value.nativeObj : null));
    };
    TValue.prototype.object = function () {
        return new TObject(value_object(this.nativeObj));
    };
    TValue.prototype.setToken = function (value) {
        return new TValue(value_set_token(this.nativeObj, value));
    };
    TValue.prototype.token = function () {
        return value_token(this.nativeObj);
    };
    TValue.prototype.setSizedStr = function (str, size) {
        return new TValue(value_set_sized_str(this.nativeObj, str, size));
    };
    TValue.prototype.sizedStr = function () {
        return value_sized_str(this.nativeObj);
    };
    TValue.prototype.setBinaryData = function (value, size) {
        return new TValue(value_set_binary_data(this.nativeObj, value, size));
    };
    TValue.prototype.binaryData = function () {
        return value_binary_data(this.nativeObj);
    };
    TValue.prototype.setUbjson = function (value, size) {
        return new TValue(value_set_ubjson(this.nativeObj, value, size));
    };
    TValue.prototype.ubjson = function () {
        return value_ubjson(this.nativeObj);
    };
    TValue.create = function () {
        return new TValue(value_create());
    };
    TValue.prototype.destroy = function () {
        return value_destroy(this.nativeObj);
    };
    TValue.prototype.reset = function () {
        return value_reset(this.nativeObj);
    };
    TValue.cast = function (value) {
        return new TValue(value_cast(value ? (value.nativeObj || value) : null));
    };
    return TValue;
}());
var TImageManager = /** @class */ (function () {
    function TImageManager(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TImageManager.instance = function () {
        return new TImageManager(image_manager());
    };
    TImageManager.prototype.getBitmap = function (name, image) {
        return image_manager_get_bitmap(this.nativeObj, name, image ? image.nativeObj : null);
    };
    return TImageManager;
}());
var TInputType;
(function (TInputType) {
    TInputType[TInputType["TEXT"] = INPUT_TEXT()] = "TEXT";
    TInputType[TInputType["INT"] = INPUT_INT()] = "INT";
    TInputType[TInputType["UINT"] = INPUT_UINT()] = "UINT";
    TInputType[TInputType["HEX"] = INPUT_HEX()] = "HEX";
    TInputType[TInputType["FLOAT"] = INPUT_FLOAT()] = "FLOAT";
    TInputType[TInputType["UFLOAT"] = INPUT_UFLOAT()] = "UFLOAT";
    TInputType[TInputType["EMAIL"] = INPUT_EMAIL()] = "EMAIL";
    TInputType[TInputType["PASSWORD"] = INPUT_PASSWORD()] = "PASSWORD";
    TInputType[TInputType["PHONE"] = INPUT_PHONE()] = "PHONE";
    TInputType[TInputType["CUSTOM"] = INPUT_CUSTOM()] = "CUSTOM";
})(TInputType || (TInputType = {}));
;
var TValueType;
(function (TValueType) {
    TValueType[TValueType["INVALID"] = VALUE_TYPE_INVALID()] = "INVALID";
    TValueType[TValueType["BOOL"] = VALUE_TYPE_BOOL()] = "BOOL";
    TValueType[TValueType["INT8"] = VALUE_TYPE_INT8()] = "INT8";
    TValueType[TValueType["UINT8"] = VALUE_TYPE_UINT8()] = "UINT8";
    TValueType[TValueType["INT16"] = VALUE_TYPE_INT16()] = "INT16";
    TValueType[TValueType["UINT16"] = VALUE_TYPE_UINT16()] = "UINT16";
    TValueType[TValueType["INT32"] = VALUE_TYPE_INT32()] = "INT32";
    TValueType[TValueType["UINT32"] = VALUE_TYPE_UINT32()] = "UINT32";
    TValueType[TValueType["INT64"] = VALUE_TYPE_INT64()] = "INT64";
    TValueType[TValueType["UINT64"] = VALUE_TYPE_UINT64()] = "UINT64";
    TValueType[TValueType["POINTER"] = VALUE_TYPE_POINTER()] = "POINTER";
    TValueType[TValueType["FLOAT"] = VALUE_TYPE_FLOAT()] = "FLOAT";
    TValueType[TValueType["FLOAT32"] = VALUE_TYPE_FLOAT32()] = "FLOAT32";
    TValueType[TValueType["DOUBLE"] = VALUE_TYPE_DOUBLE()] = "DOUBLE";
    TValueType[TValueType["STRING"] = VALUE_TYPE_STRING()] = "STRING";
    TValueType[TValueType["WSTRING"] = VALUE_TYPE_WSTRING()] = "WSTRING";
    TValueType[TValueType["OBJECT"] = VALUE_TYPE_OBJECT()] = "OBJECT";
    TValueType[TValueType["SIZED_STRING"] = VALUE_TYPE_SIZED_STRING()] = "SIZED_STRING";
    TValueType[TValueType["BINARY"] = VALUE_TYPE_BINARY()] = "BINARY";
    TValueType[TValueType["UBJSON"] = VALUE_TYPE_UBJSON()] = "UBJSON";
    TValueType[TValueType["TOKEN"] = VALUE_TYPE_TOKEN()] = "TOKEN";
})(TValueType || (TValueType = {}));
;
var TInputMethod = /** @class */ (function () {
    function TInputMethod(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TInputMethod.prototype.commitText = function (text) {
        return input_method_commit_text(this.nativeObj, text);
    };
    TInputMethod.prototype.dispatchKey = function (key) {
        return input_method_dispatch_key(this.nativeObj, key);
    };
    TInputMethod.instance = function () {
        return new TInputMethod(input_method());
    };
    return TInputMethod;
}());
var TKeyCode;
(function (TKeyCode) {
    TKeyCode[TKeyCode["KEY_RETURN"] = TK_KEY_RETURN()] = "KEY_RETURN";
    TKeyCode[TKeyCode["KEY_ESCAPE"] = TK_KEY_ESCAPE()] = "KEY_ESCAPE";
    TKeyCode[TKeyCode["KEY_BACKSPACE"] = TK_KEY_BACKSPACE()] = "KEY_BACKSPACE";
    TKeyCode[TKeyCode["KEY_TAB"] = TK_KEY_TAB()] = "KEY_TAB";
    TKeyCode[TKeyCode["KEY_SPACE"] = TK_KEY_SPACE()] = "KEY_SPACE";
    TKeyCode[TKeyCode["KEY_EXCLAIM"] = TK_KEY_EXCLAIM()] = "KEY_EXCLAIM";
    TKeyCode[TKeyCode["KEY_QUOTEDBL"] = TK_KEY_QUOTEDBL()] = "KEY_QUOTEDBL";
    TKeyCode[TKeyCode["KEY_HASH"] = TK_KEY_HASH()] = "KEY_HASH";
    TKeyCode[TKeyCode["KEY_PERCENT"] = TK_KEY_PERCENT()] = "KEY_PERCENT";
    TKeyCode[TKeyCode["KEY_DOLLAR"] = TK_KEY_DOLLAR()] = "KEY_DOLLAR";
    TKeyCode[TKeyCode["KEY_AMPERSAND"] = TK_KEY_AMPERSAND()] = "KEY_AMPERSAND";
    TKeyCode[TKeyCode["KEY_QUOTE"] = TK_KEY_QUOTE()] = "KEY_QUOTE";
    TKeyCode[TKeyCode["KEY_LEFTPAREN"] = TK_KEY_LEFTPAREN()] = "KEY_LEFTPAREN";
    TKeyCode[TKeyCode["KEY_RIGHTPAREN"] = TK_KEY_RIGHTPAREN()] = "KEY_RIGHTPAREN";
    TKeyCode[TKeyCode["KEY_ASTERISK"] = TK_KEY_ASTERISK()] = "KEY_ASTERISK";
    TKeyCode[TKeyCode["KEY_PLUS"] = TK_KEY_PLUS()] = "KEY_PLUS";
    TKeyCode[TKeyCode["KEY_COMMA"] = TK_KEY_COMMA()] = "KEY_COMMA";
    TKeyCode[TKeyCode["KEY_MINUS"] = TK_KEY_MINUS()] = "KEY_MINUS";
    TKeyCode[TKeyCode["KEY_PERIOD"] = TK_KEY_PERIOD()] = "KEY_PERIOD";
    TKeyCode[TKeyCode["KEY_SLASH"] = TK_KEY_SLASH()] = "KEY_SLASH";
    TKeyCode[TKeyCode["KEY_0"] = TK_KEY_0()] = "KEY_0";
    TKeyCode[TKeyCode["KEY_1"] = TK_KEY_1()] = "KEY_1";
    TKeyCode[TKeyCode["KEY_2"] = TK_KEY_2()] = "KEY_2";
    TKeyCode[TKeyCode["KEY_3"] = TK_KEY_3()] = "KEY_3";
    TKeyCode[TKeyCode["KEY_4"] = TK_KEY_4()] = "KEY_4";
    TKeyCode[TKeyCode["KEY_5"] = TK_KEY_5()] = "KEY_5";
    TKeyCode[TKeyCode["KEY_6"] = TK_KEY_6()] = "KEY_6";
    TKeyCode[TKeyCode["KEY_7"] = TK_KEY_7()] = "KEY_7";
    TKeyCode[TKeyCode["KEY_8"] = TK_KEY_8()] = "KEY_8";
    TKeyCode[TKeyCode["KEY_9"] = TK_KEY_9()] = "KEY_9";
    TKeyCode[TKeyCode["KEY_COLON"] = TK_KEY_COLON()] = "KEY_COLON";
    TKeyCode[TKeyCode["KEY_SEMICOLON"] = TK_KEY_SEMICOLON()] = "KEY_SEMICOLON";
    TKeyCode[TKeyCode["KEY_LESS"] = TK_KEY_LESS()] = "KEY_LESS";
    TKeyCode[TKeyCode["KEY_EQUAL"] = TK_KEY_EQUAL()] = "KEY_EQUAL";
    TKeyCode[TKeyCode["KEY_GREATER"] = TK_KEY_GREATER()] = "KEY_GREATER";
    TKeyCode[TKeyCode["KEY_QUESTION"] = TK_KEY_QUESTION()] = "KEY_QUESTION";
    TKeyCode[TKeyCode["KEY_AT"] = TK_KEY_AT()] = "KEY_AT";
    TKeyCode[TKeyCode["KEY_LEFTBRACKET"] = TK_KEY_LEFTBRACKET()] = "KEY_LEFTBRACKET";
    TKeyCode[TKeyCode["KEY_BACKSLASH"] = TK_KEY_BACKSLASH()] = "KEY_BACKSLASH";
    TKeyCode[TKeyCode["KEY_RIGHTBRACKET"] = TK_KEY_RIGHTBRACKET()] = "KEY_RIGHTBRACKET";
    TKeyCode[TKeyCode["KEY_CARET"] = TK_KEY_CARET()] = "KEY_CARET";
    TKeyCode[TKeyCode["KEY_UNDERSCORE"] = TK_KEY_UNDERSCORE()] = "KEY_UNDERSCORE";
    TKeyCode[TKeyCode["KEY_BACKQUOTE"] = TK_KEY_BACKQUOTE()] = "KEY_BACKQUOTE";
    TKeyCode[TKeyCode["KEY_a"] = TK_KEY_a()] = "KEY_a";
    TKeyCode[TKeyCode["KEY_b"] = TK_KEY_b()] = "KEY_b";
    TKeyCode[TKeyCode["KEY_c"] = TK_KEY_c()] = "KEY_c";
    TKeyCode[TKeyCode["KEY_d"] = TK_KEY_d()] = "KEY_d";
    TKeyCode[TKeyCode["KEY_e"] = TK_KEY_e()] = "KEY_e";
    TKeyCode[TKeyCode["KEY_f"] = TK_KEY_f()] = "KEY_f";
    TKeyCode[TKeyCode["KEY_g"] = TK_KEY_g()] = "KEY_g";
    TKeyCode[TKeyCode["KEY_h"] = TK_KEY_h()] = "KEY_h";
    TKeyCode[TKeyCode["KEY_i"] = TK_KEY_i()] = "KEY_i";
    TKeyCode[TKeyCode["KEY_j"] = TK_KEY_j()] = "KEY_j";
    TKeyCode[TKeyCode["KEY_k"] = TK_KEY_k()] = "KEY_k";
    TKeyCode[TKeyCode["KEY_l"] = TK_KEY_l()] = "KEY_l";
    TKeyCode[TKeyCode["KEY_m"] = TK_KEY_m()] = "KEY_m";
    TKeyCode[TKeyCode["KEY_n"] = TK_KEY_n()] = "KEY_n";
    TKeyCode[TKeyCode["KEY_o"] = TK_KEY_o()] = "KEY_o";
    TKeyCode[TKeyCode["KEY_p"] = TK_KEY_p()] = "KEY_p";
    TKeyCode[TKeyCode["KEY_q"] = TK_KEY_q()] = "KEY_q";
    TKeyCode[TKeyCode["KEY_r"] = TK_KEY_r()] = "KEY_r";
    TKeyCode[TKeyCode["KEY_s"] = TK_KEY_s()] = "KEY_s";
    TKeyCode[TKeyCode["KEY_t"] = TK_KEY_t()] = "KEY_t";
    TKeyCode[TKeyCode["KEY_u"] = TK_KEY_u()] = "KEY_u";
    TKeyCode[TKeyCode["KEY_v"] = TK_KEY_v()] = "KEY_v";
    TKeyCode[TKeyCode["KEY_w"] = TK_KEY_w()] = "KEY_w";
    TKeyCode[TKeyCode["KEY_x"] = TK_KEY_x()] = "KEY_x";
    TKeyCode[TKeyCode["KEY_y"] = TK_KEY_y()] = "KEY_y";
    TKeyCode[TKeyCode["KEY_z"] = TK_KEY_z()] = "KEY_z";
    TKeyCode[TKeyCode["KEY_A"] = TK_KEY_A()] = "KEY_A";
    TKeyCode[TKeyCode["KEY_B"] = TK_KEY_B()] = "KEY_B";
    TKeyCode[TKeyCode["KEY_C"] = TK_KEY_C()] = "KEY_C";
    TKeyCode[TKeyCode["KEY_D"] = TK_KEY_D()] = "KEY_D";
    TKeyCode[TKeyCode["KEY_E"] = TK_KEY_E()] = "KEY_E";
    TKeyCode[TKeyCode["KEY_F"] = TK_KEY_F()] = "KEY_F";
    TKeyCode[TKeyCode["KEY_G"] = TK_KEY_G()] = "KEY_G";
    TKeyCode[TKeyCode["KEY_H"] = TK_KEY_H()] = "KEY_H";
    TKeyCode[TKeyCode["KEY_I"] = TK_KEY_I()] = "KEY_I";
    TKeyCode[TKeyCode["KEY_J"] = TK_KEY_J()] = "KEY_J";
    TKeyCode[TKeyCode["KEY_K"] = TK_KEY_K()] = "KEY_K";
    TKeyCode[TKeyCode["KEY_L"] = TK_KEY_L()] = "KEY_L";
    TKeyCode[TKeyCode["KEY_M"] = TK_KEY_M()] = "KEY_M";
    TKeyCode[TKeyCode["KEY_N"] = TK_KEY_N()] = "KEY_N";
    TKeyCode[TKeyCode["KEY_O"] = TK_KEY_O()] = "KEY_O";
    TKeyCode[TKeyCode["KEY_P"] = TK_KEY_P()] = "KEY_P";
    TKeyCode[TKeyCode["KEY_Q"] = TK_KEY_Q()] = "KEY_Q";
    TKeyCode[TKeyCode["KEY_R"] = TK_KEY_R()] = "KEY_R";
    TKeyCode[TKeyCode["KEY_S"] = TK_KEY_S()] = "KEY_S";
    TKeyCode[TKeyCode["KEY_T"] = TK_KEY_T()] = "KEY_T";
    TKeyCode[TKeyCode["KEY_U"] = TK_KEY_U()] = "KEY_U";
    TKeyCode[TKeyCode["KEY_V"] = TK_KEY_V()] = "KEY_V";
    TKeyCode[TKeyCode["KEY_W"] = TK_KEY_W()] = "KEY_W";
    TKeyCode[TKeyCode["KEY_X"] = TK_KEY_X()] = "KEY_X";
    TKeyCode[TKeyCode["KEY_Y"] = TK_KEY_Y()] = "KEY_Y";
    TKeyCode[TKeyCode["KEY_Z"] = TK_KEY_Z()] = "KEY_Z";
    TKeyCode[TKeyCode["KEY_DOT"] = TK_KEY_DOT()] = "KEY_DOT";
    TKeyCode[TKeyCode["KEY_DELETE"] = TK_KEY_DELETE()] = "KEY_DELETE";
    TKeyCode[TKeyCode["KEY_LEFTBRACE"] = TK_KEY_LEFTBRACE()] = "KEY_LEFTBRACE";
    TKeyCode[TKeyCode["KEY_RIGHTBRACE"] = TK_KEY_RIGHTBRACE()] = "KEY_RIGHTBRACE";
    TKeyCode[TKeyCode["KEY_LSHIFT"] = TK_KEY_LSHIFT()] = "KEY_LSHIFT";
    TKeyCode[TKeyCode["KEY_RSHIFT"] = TK_KEY_RSHIFT()] = "KEY_RSHIFT";
    TKeyCode[TKeyCode["KEY_LCTRL"] = TK_KEY_LCTRL()] = "KEY_LCTRL";
    TKeyCode[TKeyCode["KEY_RCTRL"] = TK_KEY_RCTRL()] = "KEY_RCTRL";
    TKeyCode[TKeyCode["KEY_LALT"] = TK_KEY_LALT()] = "KEY_LALT";
    TKeyCode[TKeyCode["KEY_RALT"] = TK_KEY_RALT()] = "KEY_RALT";
    TKeyCode[TKeyCode["KEY_CAPSLOCK"] = TK_KEY_CAPSLOCK()] = "KEY_CAPSLOCK";
    TKeyCode[TKeyCode["KEY_HOME"] = TK_KEY_HOME()] = "KEY_HOME";
    TKeyCode[TKeyCode["KEY_END"] = TK_KEY_END()] = "KEY_END";
    TKeyCode[TKeyCode["KEY_INSERT"] = TK_KEY_INSERT()] = "KEY_INSERT";
    TKeyCode[TKeyCode["KEY_UP"] = TK_KEY_UP()] = "KEY_UP";
    TKeyCode[TKeyCode["KEY_DOWN"] = TK_KEY_DOWN()] = "KEY_DOWN";
    TKeyCode[TKeyCode["KEY_LEFT"] = TK_KEY_LEFT()] = "KEY_LEFT";
    TKeyCode[TKeyCode["KEY_RIGHT"] = TK_KEY_RIGHT()] = "KEY_RIGHT";
    TKeyCode[TKeyCode["KEY_PAGEUP"] = TK_KEY_PAGEUP()] = "KEY_PAGEUP";
    TKeyCode[TKeyCode["KEY_PAGEDOWN"] = TK_KEY_PAGEDOWN()] = "KEY_PAGEDOWN";
    TKeyCode[TKeyCode["KEY_F1"] = TK_KEY_F1()] = "KEY_F1";
    TKeyCode[TKeyCode["KEY_F2"] = TK_KEY_F2()] = "KEY_F2";
    TKeyCode[TKeyCode["KEY_F3"] = TK_KEY_F3()] = "KEY_F3";
    TKeyCode[TKeyCode["KEY_F4"] = TK_KEY_F4()] = "KEY_F4";
    TKeyCode[TKeyCode["KEY_F5"] = TK_KEY_F5()] = "KEY_F5";
    TKeyCode[TKeyCode["KEY_F6"] = TK_KEY_F6()] = "KEY_F6";
    TKeyCode[TKeyCode["KEY_F7"] = TK_KEY_F7()] = "KEY_F7";
    TKeyCode[TKeyCode["KEY_F8"] = TK_KEY_F8()] = "KEY_F8";
    TKeyCode[TKeyCode["KEY_F9"] = TK_KEY_F9()] = "KEY_F9";
    TKeyCode[TKeyCode["KEY_F10"] = TK_KEY_F10()] = "KEY_F10";
    TKeyCode[TKeyCode["KEY_F11"] = TK_KEY_F11()] = "KEY_F11";
    TKeyCode[TKeyCode["KEY_F12"] = TK_KEY_F12()] = "KEY_F12";
    TKeyCode[TKeyCode["KEY_MENU"] = TK_KEY_MENU()] = "KEY_MENU";
    TKeyCode[TKeyCode["KEY_COMMAND"] = TK_KEY_COMMAND()] = "KEY_COMMAND";
    TKeyCode[TKeyCode["KEY_BACK"] = TK_KEY_BACK()] = "KEY_BACK";
    TKeyCode[TKeyCode["KEY_CANCEL"] = TK_KEY_CANCEL()] = "KEY_CANCEL";
})(TKeyCode || (TKeyCode = {}));
;
var TLocaleInfo = /** @class */ (function () {
    function TLocaleInfo(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TLocaleInfo.instance = function () {
        return new TLocaleInfo(locale_info());
    };
    TLocaleInfo.prototype.tr = function (text) {
        return locale_info_tr(this.nativeObj, text);
    };
    TLocaleInfo.prototype.change = function (language, country) {
        return locale_info_change(this.nativeObj, language, country);
    };
    TLocaleInfo.prototype.on = function (type, on_event, ctx) {
        return locale_info_on(this.nativeObj, type, on_event, ctx);
    };
    TLocaleInfo.prototype.off = function (id) {
        return locale_info_off(this.nativeObj, id);
    };
    return TLocaleInfo;
}());
var TStyleId;
(function (TStyleId) {
    TStyleId[TStyleId["_ID_BG_COLOR"] = STYLE_ID_BG_COLOR()] = "_ID_BG_COLOR";
    TStyleId[TStyleId["_ID_FG_COLOR"] = STYLE_ID_FG_COLOR()] = "_ID_FG_COLOR";
    TStyleId[TStyleId["_ID_MASK_COLOR"] = STYLE_ID_MASK_COLOR()] = "_ID_MASK_COLOR";
    TStyleId[TStyleId["_ID_FONT_NAME"] = STYLE_ID_FONT_NAME()] = "_ID_FONT_NAME";
    TStyleId[TStyleId["_ID_FONT_SIZE"] = STYLE_ID_FONT_SIZE()] = "_ID_FONT_SIZE";
    TStyleId[TStyleId["_ID_FONT_STYLE"] = STYLE_ID_FONT_STYLE()] = "_ID_FONT_STYLE";
    TStyleId[TStyleId["_ID_TEXT_COLOR"] = STYLE_ID_TEXT_COLOR()] = "_ID_TEXT_COLOR";
    TStyleId[TStyleId["_ID_TIPS_TEXT_COLOR"] = STYLE_ID_TIPS_TEXT_COLOR()] = "_ID_TIPS_TEXT_COLOR";
    TStyleId[TStyleId["_ID_TEXT_ALIGN_H"] = STYLE_ID_TEXT_ALIGN_H()] = "_ID_TEXT_ALIGN_H";
    TStyleId[TStyleId["_ID_TEXT_ALIGN_V"] = STYLE_ID_TEXT_ALIGN_V()] = "_ID_TEXT_ALIGN_V";
    TStyleId[TStyleId["_ID_BORDER_COLOR"] = STYLE_ID_BORDER_COLOR()] = "_ID_BORDER_COLOR";
    TStyleId[TStyleId["_ID_BORDER_WIDTH"] = STYLE_ID_BORDER_WIDTH()] = "_ID_BORDER_WIDTH";
    TStyleId[TStyleId["_ID_BORDER"] = STYLE_ID_BORDER()] = "_ID_BORDER";
    TStyleId[TStyleId["_ID_BG_IMAGE"] = STYLE_ID_BG_IMAGE()] = "_ID_BG_IMAGE";
    TStyleId[TStyleId["_ID_BG_IMAGE_DRAW_TYPE"] = STYLE_ID_BG_IMAGE_DRAW_TYPE()] = "_ID_BG_IMAGE_DRAW_TYPE";
    TStyleId[TStyleId["_ID_ICON"] = STYLE_ID_ICON()] = "_ID_ICON";
    TStyleId[TStyleId["_ID_FG_IMAGE"] = STYLE_ID_FG_IMAGE()] = "_ID_FG_IMAGE";
    TStyleId[TStyleId["_ID_FG_IMAGE_DRAW_TYPE"] = STYLE_ID_FG_IMAGE_DRAW_TYPE()] = "_ID_FG_IMAGE_DRAW_TYPE";
    TStyleId[TStyleId["_ID_SPACER"] = STYLE_ID_SPACER()] = "_ID_SPACER";
    TStyleId[TStyleId["_ID_MARGIN"] = STYLE_ID_MARGIN()] = "_ID_MARGIN";
    TStyleId[TStyleId["_ID_MARGIN_LEFT"] = STYLE_ID_MARGIN_LEFT()] = "_ID_MARGIN_LEFT";
    TStyleId[TStyleId["_ID_MARGIN_RIGHT"] = STYLE_ID_MARGIN_RIGHT()] = "_ID_MARGIN_RIGHT";
    TStyleId[TStyleId["_ID_MARGIN_TOP"] = STYLE_ID_MARGIN_TOP()] = "_ID_MARGIN_TOP";
    TStyleId[TStyleId["_ID_MARGIN_BOTTOM"] = STYLE_ID_MARGIN_BOTTOM()] = "_ID_MARGIN_BOTTOM";
    TStyleId[TStyleId["_ID_ICON_AT"] = STYLE_ID_ICON_AT()] = "_ID_ICON_AT";
    TStyleId[TStyleId["_ID_ACTIVE_ICON"] = STYLE_ID_ACTIVE_ICON()] = "_ID_ACTIVE_ICON";
    TStyleId[TStyleId["_ID_X_OFFSET"] = STYLE_ID_X_OFFSET()] = "_ID_X_OFFSET";
    TStyleId[TStyleId["_ID_Y_OFFSET"] = STYLE_ID_Y_OFFSET()] = "_ID_Y_OFFSET";
    TStyleId[TStyleId["_ID_SELECTED_BG_COLOR"] = STYLE_ID_SELECTED_BG_COLOR()] = "_ID_SELECTED_BG_COLOR";
    TStyleId[TStyleId["_ID_SELECTED_FG_COLOR"] = STYLE_ID_SELECTED_FG_COLOR()] = "_ID_SELECTED_FG_COLOR";
    TStyleId[TStyleId["_ID_SELECTED_TEXT_COLOR"] = STYLE_ID_SELECTED_TEXT_COLOR()] = "_ID_SELECTED_TEXT_COLOR";
    TStyleId[TStyleId["_ID_ROUND_RADIUS"] = STYLE_ID_ROUND_RADIUS()] = "_ID_ROUND_RADIUS";
})(TStyleId || (TStyleId = {}));
;
var TStyle = /** @class */ (function () {
    function TStyle(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TStyle.prototype.notifyWidgetStateChanged = function (widget) {
        return style_notify_widget_state_changed(this.nativeObj, widget ? widget.nativeObj : null);
    };
    TStyle.prototype.isValid = function () {
        return style_is_valid(this.nativeObj);
    };
    TStyle.prototype.getInt = function (name, defval) {
        return style_get_int(this.nativeObj, name, defval);
    };
    TStyle.prototype.getStr = function (name, defval) {
        return style_get_str(this.nativeObj, name, defval);
    };
    TStyle.prototype.set = function (state, name, value) {
        return style_set(this.nativeObj, state, name, value ? value.nativeObj : null);
    };
    TStyle.prototype.isMutable = function () {
        return style_is_mutable(this.nativeObj);
    };
    return TStyle;
}());
var TTheme = /** @class */ (function () {
    function TTheme(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TTheme.instance = function () {
        return new TTheme(theme());
    };
    return TTheme;
}());
var TTimer = /** @class */ (function () {
    function TTimer(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TTimer.add = function (on_timer, ctx, duration) {
        return timer_add(on_timer, ctx, duration);
    };
    TTimer.remove = function (timer_id) {
        return timer_remove(timer_id);
    };
    TTimer.reset = function (timer_id) {
        return timer_reset(timer_id);
    };
    TTimer.modify = function (timer_id, duration) {
        return timer_modify(timer_id, duration);
    };
    return TTimer;
}());
var TAlignV;
(function (TAlignV) {
    TAlignV[TAlignV["NONE"] = ALIGN_V_NONE()] = "NONE";
    TAlignV[TAlignV["MIDDLE"] = ALIGN_V_MIDDLE()] = "MIDDLE";
    TAlignV[TAlignV["TOP"] = ALIGN_V_TOP()] = "TOP";
    TAlignV[TAlignV["BOTTOM"] = ALIGN_V_BOTTOM()] = "BOTTOM";
})(TAlignV || (TAlignV = {}));
;
var TAlignH;
(function (TAlignH) {
    TAlignH[TAlignH["NONE"] = ALIGN_H_NONE()] = "NONE";
    TAlignH[TAlignH["CENTER"] = ALIGN_H_CENTER()] = "CENTER";
    TAlignH[TAlignH["LEFT"] = ALIGN_H_LEFT()] = "LEFT";
    TAlignH[TAlignH["RIGHT"] = ALIGN_H_RIGHT()] = "RIGHT";
})(TAlignH || (TAlignH = {}));
;
var TBitmapFormat;
(function (TBitmapFormat) {
    TBitmapFormat[TBitmapFormat["NONE"] = BITMAP_FMT_NONE()] = "NONE";
    TBitmapFormat[TBitmapFormat["RGBA8888"] = BITMAP_FMT_RGBA8888()] = "RGBA8888";
    TBitmapFormat[TBitmapFormat["ABGR8888"] = BITMAP_FMT_ABGR8888()] = "ABGR8888";
    TBitmapFormat[TBitmapFormat["BGRA8888"] = BITMAP_FMT_BGRA8888()] = "BGRA8888";
    TBitmapFormat[TBitmapFormat["ARGB8888"] = BITMAP_FMT_ARGB8888()] = "ARGB8888";
    TBitmapFormat[TBitmapFormat["RGB565"] = BITMAP_FMT_RGB565()] = "RGB565";
    TBitmapFormat[TBitmapFormat["BGR565"] = BITMAP_FMT_BGR565()] = "BGR565";
    TBitmapFormat[TBitmapFormat["RGB888"] = BITMAP_FMT_RGB888()] = "RGB888";
    TBitmapFormat[TBitmapFormat["BGR888"] = BITMAP_FMT_BGR888()] = "BGR888";
    TBitmapFormat[TBitmapFormat["GRAY"] = BITMAP_FMT_GRAY()] = "GRAY";
    TBitmapFormat[TBitmapFormat["MONO"] = BITMAP_FMT_MONO()] = "MONO";
})(TBitmapFormat || (TBitmapFormat = {}));
;
var TBitmapFlag;
(function (TBitmapFlag) {
    TBitmapFlag[TBitmapFlag["NONE"] = BITMAP_FLAG_NONE()] = "NONE";
    TBitmapFlag[TBitmapFlag["OPAQUE"] = BITMAP_FLAG_OPAQUE()] = "OPAQUE";
    TBitmapFlag[TBitmapFlag["IMMUTABLE"] = BITMAP_FLAG_IMMUTABLE()] = "IMMUTABLE";
    TBitmapFlag[TBitmapFlag["TEXTURE"] = BITMAP_FLAG_TEXTURE()] = "TEXTURE";
    TBitmapFlag[TBitmapFlag["CHANGED"] = BITMAP_FLAG_CHANGED()] = "CHANGED";
    TBitmapFlag[TBitmapFlag["PREMULTI_ALPHA"] = BITMAP_FLAG_PREMULTI_ALPHA()] = "PREMULTI_ALPHA";
})(TBitmapFlag || (TBitmapFlag = {}));
;
var TVgcanvas = /** @class */ (function () {
    function TVgcanvas(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TVgcanvas.cast = function (vg) {
        return new TVgcanvas(vgcanvas_cast(vg ? (vg.nativeObj || vg) : null));
    };
    TVgcanvas.prototype.flush = function () {
        return vgcanvas_flush(this.nativeObj);
    };
    TVgcanvas.prototype.beginPath = function () {
        return vgcanvas_begin_path(this.nativeObj);
    };
    TVgcanvas.prototype.moveTo = function (x, y) {
        return vgcanvas_move_to(this.nativeObj, x, y);
    };
    TVgcanvas.prototype.lineTo = function (x, y) {
        return vgcanvas_line_to(this.nativeObj, x, y);
    };
    TVgcanvas.prototype.quadTo = function (cpx, cpy, x, y) {
        return vgcanvas_quad_to(this.nativeObj, cpx, cpy, x, y);
    };
    TVgcanvas.prototype.bezierTo = function (cp1x, cp1y, cp2x, cp2y, x, y) {
        return vgcanvas_bezier_to(this.nativeObj, cp1x, cp1y, cp2x, cp2y, x, y);
    };
    TVgcanvas.prototype.arcTo = function (x1, y1, x2, y2, r) {
        return vgcanvas_arc_to(this.nativeObj, x1, y1, x2, y2, r);
    };
    TVgcanvas.prototype.arc = function (x, y, r, start_angle, end_angle, ccw) {
        return vgcanvas_arc(this.nativeObj, x, y, r, start_angle, end_angle, ccw);
    };
    TVgcanvas.prototype.isPointInPath = function (x, y) {
        return vgcanvas_is_point_in_path(this.nativeObj, x, y);
    };
    TVgcanvas.prototype.rect = function (x, y, w, h) {
        return vgcanvas_rect(this.nativeObj, x, y, w, h);
    };
    TVgcanvas.prototype.roundedRect = function (x, y, w, h, r) {
        return vgcanvas_rounded_rect(this.nativeObj, x, y, w, h, r);
    };
    TVgcanvas.prototype.ellipse = function (x, y, rx, ry) {
        return vgcanvas_ellipse(this.nativeObj, x, y, rx, ry);
    };
    TVgcanvas.prototype.closePath = function () {
        return vgcanvas_close_path(this.nativeObj);
    };
    TVgcanvas.prototype.rotate = function (rad) {
        return vgcanvas_rotate(this.nativeObj, rad);
    };
    TVgcanvas.prototype.scale = function (x, y) {
        return vgcanvas_scale(this.nativeObj, x, y);
    };
    TVgcanvas.prototype.translate = function (x, y) {
        return vgcanvas_translate(this.nativeObj, x, y);
    };
    TVgcanvas.prototype.transform = function (a, b, c, d, e, f) {
        return vgcanvas_transform(this.nativeObj, a, b, c, d, e, f);
    };
    TVgcanvas.prototype.setTransform = function (a, b, c, d, e, f) {
        return vgcanvas_set_transform(this.nativeObj, a, b, c, d, e, f);
    };
    TVgcanvas.prototype.clipRect = function (x, y, w, h) {
        return vgcanvas_clip_rect(this.nativeObj, x, y, w, h);
    };
    TVgcanvas.prototype.fill = function () {
        return vgcanvas_fill(this.nativeObj);
    };
    TVgcanvas.prototype.stroke = function () {
        return vgcanvas_stroke(this.nativeObj);
    };
    TVgcanvas.prototype.paint = function (stroke, img) {
        return vgcanvas_paint(this.nativeObj, stroke, img ? img.nativeObj : null);
    };
    TVgcanvas.prototype.setFont = function (font) {
        return vgcanvas_set_font(this.nativeObj, font);
    };
    TVgcanvas.prototype.setFontSize = function (font) {
        return vgcanvas_set_font_size(this.nativeObj, font);
    };
    TVgcanvas.prototype.setTextAlign = function (value) {
        return vgcanvas_set_text_align(this.nativeObj, value);
    };
    TVgcanvas.prototype.setTextBaseline = function (value) {
        return vgcanvas_set_text_baseline(this.nativeObj, value);
    };
    TVgcanvas.prototype.fillText = function (text, x, y, max_width) {
        return vgcanvas_fill_text(this.nativeObj, text, x, y, max_width);
    };
    TVgcanvas.prototype.measureText = function (text) {
        return vgcanvas_measure_text(this.nativeObj, text);
    };
    TVgcanvas.prototype.drawImage = function (img, sx, sy, sw, sh, dx, dy, dw, dh) {
        return vgcanvas_draw_image(this.nativeObj, img ? img.nativeObj : null, sx, sy, sw, sh, dx, dy, dw, dh);
    };
    TVgcanvas.prototype.drawIcon = function (img, sx, sy, sw, sh, dx, dy, dw, dh) {
        return vgcanvas_draw_icon(this.nativeObj, img ? img.nativeObj : null, sx, sy, sw, sh, dx, dy, dw, dh);
    };
    TVgcanvas.prototype.setAntialias = function (value) {
        return vgcanvas_set_antialias(this.nativeObj, value);
    };
    TVgcanvas.prototype.setGlobalAlpha = function (alpha) {
        return vgcanvas_set_global_alpha(this.nativeObj, alpha);
    };
    TVgcanvas.prototype.setLineWidth = function (value) {
        return vgcanvas_set_line_width(this.nativeObj, value);
    };
    TVgcanvas.prototype.setFillColor = function (color) {
        return vgcanvas_set_fill_color_str(this.nativeObj, color);
    };
    TVgcanvas.prototype.setStrokeColor = function (color) {
        return vgcanvas_set_stroke_color_str(this.nativeObj, color);
    };
    TVgcanvas.prototype.setLineCap = function (value) {
        return vgcanvas_set_line_cap(this.nativeObj, value);
    };
    TVgcanvas.prototype.setLineJoin = function (value) {
        return vgcanvas_set_line_join(this.nativeObj, value);
    };
    TVgcanvas.prototype.setMiterLimit = function (value) {
        return vgcanvas_set_miter_limit(this.nativeObj, value);
    };
    TVgcanvas.prototype.save = function () {
        return vgcanvas_save(this.nativeObj);
    };
    TVgcanvas.prototype.restore = function () {
        return vgcanvas_restore(this.nativeObj);
    };
    Object.defineProperty(TVgcanvas.prototype, "w", {
        get: function () {
            return vgcanvas_t_get_prop_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "h", {
        get: function () {
            return vgcanvas_t_get_prop_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "ratio", {
        get: function () {
            return vgcanvas_t_get_prop_ratio(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "antiAlias", {
        get: function () {
            return vgcanvas_t_get_prop_anti_alias(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "lineWidth", {
        get: function () {
            return vgcanvas_t_get_prop_line_width(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "globalAlpha", {
        get: function () {
            return vgcanvas_t_get_prop_global_alpha(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "miterLimit", {
        get: function () {
            return vgcanvas_t_get_prop_miter_limit(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "lineCap", {
        get: function () {
            return vgcanvas_t_get_prop_line_cap(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "lineJoin", {
        get: function () {
            return vgcanvas_t_get_prop_line_join(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "font", {
        get: function () {
            return vgcanvas_t_get_prop_font(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "fontSize", {
        get: function () {
            return vgcanvas_t_get_prop_font_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "textAlign", {
        get: function () {
            return vgcanvas_t_get_prop_text_align(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "textBaseline", {
        get: function () {
            return vgcanvas_t_get_prop_text_baseline(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TVgcanvas;
}());
var TWidgetProp;
(function (TWidgetProp) {
    TWidgetProp[TWidgetProp["EXEC"] = WIDGET_PROP_EXEC()] = "EXEC";
    TWidgetProp[TWidgetProp["X"] = WIDGET_PROP_X()] = "X";
    TWidgetProp[TWidgetProp["Y"] = WIDGET_PROP_Y()] = "Y";
    TWidgetProp[TWidgetProp["W"] = WIDGET_PROP_W()] = "W";
    TWidgetProp[TWidgetProp["H"] = WIDGET_PROP_H()] = "H";
    TWidgetProp[TWidgetProp["CANVAS"] = WIDGET_PROP_CANVAS()] = "CANVAS";
    TWidgetProp[TWidgetProp["LOCALIZE_OPTIONS"] = WIDGET_PROP_LOCALIZE_OPTIONS()] = "LOCALIZE_OPTIONS";
    TWidgetProp[TWidgetProp["NATIVE_WINDOW"] = WIDGET_PROP_NATIVE_WINDOW()] = "NATIVE_WINDOW";
    TWidgetProp[TWidgetProp["HIGHLIGHT"] = WIDGET_PROP_HIGHLIGHT()] = "HIGHLIGHT";
    TWidgetProp[TWidgetProp["BAR_SIZE"] = WIDGET_PROP_BAR_SIZE()] = "BAR_SIZE";
    TWidgetProp[TWidgetProp["OPACITY"] = WIDGET_PROP_OPACITY()] = "OPACITY";
    TWidgetProp[TWidgetProp["MIN_W"] = WIDGET_PROP_MIN_W()] = "MIN_W";
    TWidgetProp[TWidgetProp["MAX_W"] = WIDGET_PROP_MAX_W()] = "MAX_W";
    TWidgetProp[TWidgetProp["CHILDREN_LAYOUT"] = WIDGET_PROP_CHILDREN_LAYOUT()] = "CHILDREN_LAYOUT";
    TWidgetProp[TWidgetProp["LAYOUT"] = WIDGET_PROP_LAYOUT()] = "LAYOUT";
    TWidgetProp[TWidgetProp["SELF_LAYOUT"] = WIDGET_PROP_SELF_LAYOUT()] = "SELF_LAYOUT";
    TWidgetProp[TWidgetProp["LAYOUT_W"] = WIDGET_PROP_LAYOUT_W()] = "LAYOUT_W";
    TWidgetProp[TWidgetProp["LAYOUT_H"] = WIDGET_PROP_LAYOUT_H()] = "LAYOUT_H";
    TWidgetProp[TWidgetProp["VIRTUAL_W"] = WIDGET_PROP_VIRTUAL_W()] = "VIRTUAL_W";
    TWidgetProp[TWidgetProp["VIRTUAL_H"] = WIDGET_PROP_VIRTUAL_H()] = "VIRTUAL_H";
    TWidgetProp[TWidgetProp["NAME"] = WIDGET_PROP_NAME()] = "NAME";
    TWidgetProp[TWidgetProp["TYPE"] = WIDGET_PROP_TYPE()] = "TYPE";
    TWidgetProp[TWidgetProp["CLOSABLE"] = WIDGET_PROP_CLOSABLE()] = "CLOSABLE";
    TWidgetProp[TWidgetProp["CURSOR"] = WIDGET_PROP_CURSOR()] = "CURSOR";
    TWidgetProp[TWidgetProp["VALUE"] = WIDGET_PROP_VALUE()] = "VALUE";
    TWidgetProp[TWidgetProp["LENGTH"] = WIDGET_PROP_LENGTH()] = "LENGTH";
    TWidgetProp[TWidgetProp["TEXT"] = WIDGET_PROP_TEXT()] = "TEXT";
    TWidgetProp[TWidgetProp["TR_TEXT"] = WIDGET_PROP_TR_TEXT()] = "TR_TEXT";
    TWidgetProp[TWidgetProp["STYLE"] = WIDGET_PROP_STYLE()] = "STYLE";
    TWidgetProp[TWidgetProp["ENABLE"] = WIDGET_PROP_ENABLE()] = "ENABLE";
    TWidgetProp[TWidgetProp["FEEDBACK"] = WIDGET_PROP_FEEDBACK()] = "FEEDBACK";
    TWidgetProp[TWidgetProp["FLOATING"] = WIDGET_PROP_FLOATING()] = "FLOATING";
    TWidgetProp[TWidgetProp["MARGIN"] = WIDGET_PROP_MARGIN()] = "MARGIN";
    TWidgetProp[TWidgetProp["SPACING"] = WIDGET_PROP_SPACING()] = "SPACING";
    TWidgetProp[TWidgetProp["LEFT_MARGIN"] = WIDGET_PROP_LEFT_MARGIN()] = "LEFT_MARGIN";
    TWidgetProp[TWidgetProp["RIGHT_MARGIN"] = WIDGET_PROP_RIGHT_MARGIN()] = "RIGHT_MARGIN";
    TWidgetProp[TWidgetProp["TOP_MARGIN"] = WIDGET_PROP_TOP_MARGIN()] = "TOP_MARGIN";
    TWidgetProp[TWidgetProp["BOTTOM_MARGIN"] = WIDGET_PROP_BOTTOM_MARGIN()] = "BOTTOM_MARGIN";
    TWidgetProp[TWidgetProp["STEP"] = WIDGET_PROP_STEP()] = "STEP";
    TWidgetProp[TWidgetProp["VISIBLE"] = WIDGET_PROP_VISIBLE()] = "VISIBLE";
    TWidgetProp[TWidgetProp["SENSITIVE"] = WIDGET_PROP_SENSITIVE()] = "SENSITIVE";
    TWidgetProp[TWidgetProp["ANIMATION"] = WIDGET_PROP_ANIMATION()] = "ANIMATION";
    TWidgetProp[TWidgetProp["ANIM_HINT"] = WIDGET_PROP_ANIM_HINT()] = "ANIM_HINT";
    TWidgetProp[TWidgetProp["FULLSCREEN"] = WIDGET_PROP_FULLSCREEN()] = "FULLSCREEN";
    TWidgetProp[TWidgetProp["OPEN_ANIM_HINT"] = WIDGET_PROP_OPEN_ANIM_HINT()] = "OPEN_ANIM_HINT";
    TWidgetProp[TWidgetProp["CLOSE_ANIM_HINT"] = WIDGET_PROP_CLOSE_ANIM_HINT()] = "CLOSE_ANIM_HINT";
    TWidgetProp[TWidgetProp["MIN"] = WIDGET_PROP_MIN()] = "MIN";
    TWidgetProp[TWidgetProp["TIPS"] = WIDGET_PROP_TIPS()] = "TIPS";
    TWidgetProp[TWidgetProp["INPUT_TYPE"] = WIDGET_PROP_INPUT_TYPE()] = "INPUT_TYPE";
    TWidgetProp[TWidgetProp["READONLY"] = WIDGET_PROP_READONLY()] = "READONLY";
    TWidgetProp[TWidgetProp["PASSWORD_VISIBLE"] = WIDGET_PROP_PASSWORD_VISIBLE()] = "PASSWORD_VISIBLE";
    TWidgetProp[TWidgetProp["ACTIVE"] = WIDGET_PROP_ACTIVE()] = "ACTIVE";
    TWidgetProp[TWidgetProp["VERTICAL"] = WIDGET_PROP_VERTICAL()] = "VERTICAL";
    TWidgetProp[TWidgetProp["SHOW_TEXT"] = WIDGET_PROP_SHOW_TEXT()] = "SHOW_TEXT";
    TWidgetProp[TWidgetProp["XOFFSET"] = WIDGET_PROP_XOFFSET()] = "XOFFSET";
    TWidgetProp[TWidgetProp["YOFFSET"] = WIDGET_PROP_YOFFSET()] = "YOFFSET";
    TWidgetProp[TWidgetProp["ALIGN_V"] = WIDGET_PROP_ALIGN_V()] = "ALIGN_V";
    TWidgetProp[TWidgetProp["ALIGN_H"] = WIDGET_PROP_ALIGN_H()] = "ALIGN_H";
    TWidgetProp[TWidgetProp["AUTO_PLAY"] = WIDGET_PROP_AUTO_PLAY()] = "AUTO_PLAY";
    TWidgetProp[TWidgetProp["LOOP"] = WIDGET_PROP_LOOP()] = "LOOP";
    TWidgetProp[TWidgetProp["AUTO_FIX"] = WIDGET_PROP_AUTO_FIX()] = "AUTO_FIX";
    TWidgetProp[TWidgetProp["SELECT_NONE_WHEN_FOCUSED"] = WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED()] = "SELECT_NONE_WHEN_FOCUSED";
    TWidgetProp[TWidgetProp["OPEN_IM_WHEN_FOCUSED"] = WIDGET_PROP_OPEN_IM_WHEN_FOCUSED()] = "OPEN_IM_WHEN_FOCUSED";
    TWidgetProp[TWidgetProp["X_MIN"] = WIDGET_PROP_X_MIN()] = "X_MIN";
    TWidgetProp[TWidgetProp["X_MAX"] = WIDGET_PROP_X_MAX()] = "X_MAX";
    TWidgetProp[TWidgetProp["Y_MIN"] = WIDGET_PROP_Y_MIN()] = "Y_MIN";
    TWidgetProp[TWidgetProp["Y_MAX"] = WIDGET_PROP_Y_MAX()] = "Y_MAX";
    TWidgetProp[TWidgetProp["MAX"] = WIDGET_PROP_MAX()] = "MAX";
    TWidgetProp[TWidgetProp["GRAB_KEYS"] = WIDGET_PROP_GRAB_KEYS()] = "GRAB_KEYS";
    TWidgetProp[TWidgetProp["ROW"] = WIDGET_PROP_ROW()] = "ROW";
    TWidgetProp[TWidgetProp["STATE_FOR_STYLE"] = WIDGET_PROP_STATE_FOR_STYLE()] = "STATE_FOR_STYLE";
    TWidgetProp[TWidgetProp["THEME"] = WIDGET_PROP_THEME()] = "THEME";
    TWidgetProp[TWidgetProp["STAGE"] = WIDGET_PROP_STAGE()] = "STAGE";
    TWidgetProp[TWidgetProp["IMAGE_MANAGER"] = WIDGET_PROP_IMAGE_MANAGER()] = "IMAGE_MANAGER";
    TWidgetProp[TWidgetProp["ASSETS_MANAGER"] = WIDGET_PROP_ASSETS_MANAGER()] = "ASSETS_MANAGER";
    TWidgetProp[TWidgetProp["LOCALE_INFO"] = WIDGET_PROP_LOCALE_INFO()] = "LOCALE_INFO";
    TWidgetProp[TWidgetProp["FONT_MANAGER"] = WIDGET_PROP_FONT_MANAGER()] = "FONT_MANAGER";
    TWidgetProp[TWidgetProp["THEME_OBJ"] = WIDGET_PROP_THEME_OBJ()] = "THEME_OBJ";
    TWidgetProp[TWidgetProp["DEFAULT_THEME_OBJ"] = WIDGET_PROP_DEFAULT_THEME_OBJ()] = "DEFAULT_THEME_OBJ";
    TWidgetProp[TWidgetProp["ITEM_WIDTH"] = WIDGET_PROP_ITEM_WIDTH()] = "ITEM_WIDTH";
    TWidgetProp[TWidgetProp["ITEM_HEIGHT"] = WIDGET_PROP_ITEM_HEIGHT()] = "ITEM_HEIGHT";
    TWidgetProp[TWidgetProp["DEFAULT_ITEM_HEIGHT"] = WIDGET_PROP_DEFAULT_ITEM_HEIGHT()] = "DEFAULT_ITEM_HEIGHT";
    TWidgetProp[TWidgetProp["XSLIDABLE"] = WIDGET_PROP_XSLIDABLE()] = "XSLIDABLE";
    TWidgetProp[TWidgetProp["YSLIDABLE"] = WIDGET_PROP_YSLIDABLE()] = "YSLIDABLE";
    TWidgetProp[TWidgetProp["REPEAT"] = WIDGET_PROP_REPEAT()] = "REPEAT";
    TWidgetProp[TWidgetProp["ENABLE_LONG_PRESS"] = WIDGET_PROP_ENABLE_LONG_PRESS()] = "ENABLE_LONG_PRESS";
    TWidgetProp[TWidgetProp["ANIMATABLE"] = WIDGET_PROP_ANIMATABLE()] = "ANIMATABLE";
    TWidgetProp[TWidgetProp["AUTO_HIDE_SCROLL_BAR"] = WIDGET_PROP_AUTO_HIDE_SCROLL_BAR()] = "AUTO_HIDE_SCROLL_BAR";
    TWidgetProp[TWidgetProp["IMAGE"] = WIDGET_PROP_IMAGE()] = "IMAGE";
    TWidgetProp[TWidgetProp["FORMAT"] = WIDGET_PROP_FORMAT()] = "FORMAT";
    TWidgetProp[TWidgetProp["DRAW_TYPE"] = WIDGET_PROP_DRAW_TYPE()] = "DRAW_TYPE";
    TWidgetProp[TWidgetProp["SELECTABLE"] = WIDGET_PROP_SELECTABLE()] = "SELECTABLE";
    TWidgetProp[TWidgetProp["CLICKABLE"] = WIDGET_PROP_CLICKABLE()] = "CLICKABLE";
    TWidgetProp[TWidgetProp["SCALE_X"] = WIDGET_PROP_SCALE_X()] = "SCALE_X";
    TWidgetProp[TWidgetProp["SCALE_Y"] = WIDGET_PROP_SCALE_Y()] = "SCALE_Y";
    TWidgetProp[TWidgetProp["ANCHOR_X"] = WIDGET_PROP_ANCHOR_X()] = "ANCHOR_X";
    TWidgetProp[TWidgetProp["ANCHOR_Y"] = WIDGET_PROP_ANCHOR_Y()] = "ANCHOR_Y";
    TWidgetProp[TWidgetProp["ROTATION"] = WIDGET_PROP_ROTATION()] = "ROTATION";
    TWidgetProp[TWidgetProp["COMPACT"] = WIDGET_PROP_COMPACT()] = "COMPACT";
    TWidgetProp[TWidgetProp["SCROLLABLE"] = WIDGET_PROP_SCROLLABLE()] = "SCROLLABLE";
    TWidgetProp[TWidgetProp["ICON"] = WIDGET_PROP_ICON()] = "ICON";
    TWidgetProp[TWidgetProp["OPTIONS"] = WIDGET_PROP_OPTIONS()] = "OPTIONS";
    TWidgetProp[TWidgetProp["SELECTED"] = WIDGET_PROP_SELECTED()] = "SELECTED";
    TWidgetProp[TWidgetProp["CHECKED"] = WIDGET_PROP_CHECKED()] = "CHECKED";
    TWidgetProp[TWidgetProp["ACTIVE_ICON"] = WIDGET_PROP_ACTIVE_ICON()] = "ACTIVE_ICON";
    TWidgetProp[TWidgetProp["OPEN_WINDOW"] = WIDGET_PROP_OPEN_WINDOW()] = "OPEN_WINDOW";
    TWidgetProp[TWidgetProp["SELECTED_INDEX"] = WIDGET_PROP_SELECTED_INDEX()] = "SELECTED_INDEX";
    TWidgetProp[TWidgetProp["CLOSE_WHEN_CLICK"] = WIDGET_PROP_CLOSE_WHEN_CLICK()] = "CLOSE_WHEN_CLICK";
    TWidgetProp[TWidgetProp["CLOSE_WHEN_CLICK_OUTSIDE"] = WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE()] = "CLOSE_WHEN_CLICK_OUTSIDE";
    TWidgetProp[TWidgetProp["LINE_GAP"] = WIDGET_PROP_LINE_GAP()] = "LINE_GAP";
    TWidgetProp[TWidgetProp["BG_COLOR"] = WIDGET_PROP_BG_COLOR()] = "BG_COLOR";
    TWidgetProp[TWidgetProp["BORDER_COLOR"] = WIDGET_PROP_BORDER_COLOR()] = "BORDER_COLOR";
    TWidgetProp[TWidgetProp["DELAY"] = WIDGET_PROP_DELAY()] = "DELAY";
    TWidgetProp[TWidgetProp["IS_KEYBOARD"] = WIDGET_PROP_IS_KEYBOARD()] = "IS_KEYBOARD";
    TWidgetProp[TWidgetProp["FOCUSED"] = WIDGET_PROP_FOCUSED()] = "FOCUSED";
    TWidgetProp[TWidgetProp["FOCUS"] = WIDGET_PROP_FOCUS()] = "FOCUS";
    TWidgetProp[TWidgetProp["FOCUSABLE"] = WIDGET_PROP_FOCUSABLE()] = "FOCUSABLE";
    TWidgetProp[TWidgetProp["WITH_FOCUS_STATE"] = WIDGET_PROP_WITH_FOCUS_STATE()] = "WITH_FOCUS_STATE";
    TWidgetProp[TWidgetProp["MOVE_FOCUS_PREV_KEY"] = WIDGET_PROP_MOVE_FOCUS_PREV_KEY()] = "MOVE_FOCUS_PREV_KEY";
    TWidgetProp[TWidgetProp["MOVE_FOCUS_NEXT_KEY"] = WIDGET_PROP_MOVE_FOCUS_NEXT_KEY()] = "MOVE_FOCUS_NEXT_KEY";
    TWidgetProp[TWidgetProp["MOVE_FOCUS_UP_KEY"] = WIDGET_PROP_MOVE_FOCUS_UP_KEY()] = "MOVE_FOCUS_UP_KEY";
    TWidgetProp[TWidgetProp["MOVE_FOCUS_DOWN_KEY"] = WIDGET_PROP_MOVE_FOCUS_DOWN_KEY()] = "MOVE_FOCUS_DOWN_KEY";
    TWidgetProp[TWidgetProp["MOVE_FOCUS_LEFT_KEY"] = WIDGET_PROP_MOVE_FOCUS_LEFT_KEY()] = "MOVE_FOCUS_LEFT_KEY";
    TWidgetProp[TWidgetProp["MOVE_FOCUS_RIGHT_KEY"] = WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY()] = "MOVE_FOCUS_RIGHT_KEY";
})(TWidgetProp || (TWidgetProp = {}));
;
var TWidgetType;
(function (TWidgetType) {
    TWidgetType[TWidgetType["NONE"] = WIDGET_TYPE_NONE()] = "NONE";
    TWidgetType[TWidgetType["WINDOW_MANAGER"] = WIDGET_TYPE_WINDOW_MANAGER()] = "WINDOW_MANAGER";
    TWidgetType[TWidgetType["NORMAL_WINDOW"] = WIDGET_TYPE_NORMAL_WINDOW()] = "NORMAL_WINDOW";
    TWidgetType[TWidgetType["OVERLAY"] = WIDGET_TYPE_OVERLAY()] = "OVERLAY";
    TWidgetType[TWidgetType["TOOL_BAR"] = WIDGET_TYPE_TOOL_BAR()] = "TOOL_BAR";
    TWidgetType[TWidgetType["DIALOG"] = WIDGET_TYPE_DIALOG()] = "DIALOG";
    TWidgetType[TWidgetType["POPUP"] = WIDGET_TYPE_POPUP()] = "POPUP";
    TWidgetType[TWidgetType["SYSTEM_BAR"] = WIDGET_TYPE_SYSTEM_BAR()] = "SYSTEM_BAR";
    TWidgetType[TWidgetType["SYSTEM_BAR_BOTTOM"] = WIDGET_TYPE_SYSTEM_BAR_BOTTOM()] = "SYSTEM_BAR_BOTTOM";
    TWidgetType[TWidgetType["SPRITE"] = WIDGET_TYPE_SPRITE()] = "SPRITE";
    TWidgetType[TWidgetType["KEYBOARD"] = WIDGET_TYPE_KEYBOARD()] = "KEYBOARD";
    TWidgetType[TWidgetType["DND"] = WIDGET_TYPE_DND()] = "DND";
    TWidgetType[TWidgetType["LABEL"] = WIDGET_TYPE_LABEL()] = "LABEL";
    TWidgetType[TWidgetType["BUTTON"] = WIDGET_TYPE_BUTTON()] = "BUTTON";
    TWidgetType[TWidgetType["IMAGE"] = WIDGET_TYPE_IMAGE()] = "IMAGE";
    TWidgetType[TWidgetType["EDIT"] = WIDGET_TYPE_EDIT()] = "EDIT";
    TWidgetType[TWidgetType["PROGRESS_BAR"] = WIDGET_TYPE_PROGRESS_BAR()] = "PROGRESS_BAR";
    TWidgetType[TWidgetType["GROUP_BOX"] = WIDGET_TYPE_GROUP_BOX()] = "GROUP_BOX";
    TWidgetType[TWidgetType["CHECK_BUTTON"] = WIDGET_TYPE_CHECK_BUTTON()] = "CHECK_BUTTON";
    TWidgetType[TWidgetType["RADIO_BUTTON"] = WIDGET_TYPE_RADIO_BUTTON()] = "RADIO_BUTTON";
    TWidgetType[TWidgetType["DIALOG_TITLE"] = WIDGET_TYPE_DIALOG_TITLE()] = "DIALOG_TITLE";
    TWidgetType[TWidgetType["DIALOG_CLIENT"] = WIDGET_TYPE_DIALOG_CLIENT()] = "DIALOG_CLIENT";
    TWidgetType[TWidgetType["SLIDER"] = WIDGET_TYPE_SLIDER()] = "SLIDER";
    TWidgetType[TWidgetType["VIEW"] = WIDGET_TYPE_VIEW()] = "VIEW";
    TWidgetType[TWidgetType["COMBO_BOX"] = WIDGET_TYPE_COMBO_BOX()] = "COMBO_BOX";
    TWidgetType[TWidgetType["COMBO_BOX_ITEM"] = WIDGET_TYPE_COMBO_BOX_ITEM()] = "COMBO_BOX_ITEM";
    TWidgetType[TWidgetType["SLIDE_VIEW"] = WIDGET_TYPE_SLIDE_VIEW()] = "SLIDE_VIEW";
    TWidgetType[TWidgetType["SLIDE_INDICATOR"] = WIDGET_TYPE_SLIDE_INDICATOR()] = "SLIDE_INDICATOR";
    TWidgetType[TWidgetType["SLIDE_INDICATOR_ARC"] = WIDGET_TYPE_SLIDE_INDICATOR_ARC()] = "SLIDE_INDICATOR_ARC";
    TWidgetType[TWidgetType["PAGES"] = WIDGET_TYPE_PAGES()] = "PAGES";
    TWidgetType[TWidgetType["TAB_BUTTON"] = WIDGET_TYPE_TAB_BUTTON()] = "TAB_BUTTON";
    TWidgetType[TWidgetType["TAB_CONTROL"] = WIDGET_TYPE_TAB_CONTROL()] = "TAB_CONTROL";
    TWidgetType[TWidgetType["TAB_BUTTON_GROUP"] = WIDGET_TYPE_TAB_BUTTON_GROUP()] = "TAB_BUTTON_GROUP";
    TWidgetType[TWidgetType["BUTTON_GROUP"] = WIDGET_TYPE_BUTTON_GROUP()] = "BUTTON_GROUP";
    TWidgetType[TWidgetType["CANDIDATES"] = WIDGET_TYPE_CANDIDATES()] = "CANDIDATES";
    TWidgetType[TWidgetType["SPIN_BOX"] = WIDGET_TYPE_SPIN_BOX()] = "SPIN_BOX";
    TWidgetType[TWidgetType["DRAGGER"] = WIDGET_TYPE_DRAGGER()] = "DRAGGER";
    TWidgetType[TWidgetType["SCROLL_BAR"] = WIDGET_TYPE_SCROLL_BAR()] = "SCROLL_BAR";
    TWidgetType[TWidgetType["SCROLL_BAR_DESKTOP"] = WIDGET_TYPE_SCROLL_BAR_DESKTOP()] = "SCROLL_BAR_DESKTOP";
    TWidgetType[TWidgetType["SCROLL_BAR_MOBILE"] = WIDGET_TYPE_SCROLL_BAR_MOBILE()] = "SCROLL_BAR_MOBILE";
    TWidgetType[TWidgetType["SCROLL_VIEW"] = WIDGET_TYPE_SCROLL_VIEW()] = "SCROLL_VIEW";
    TWidgetType[TWidgetType["LIST_VIEW"] = WIDGET_TYPE_LIST_VIEW()] = "LIST_VIEW";
    TWidgetType[TWidgetType["LIST_VIEW_H"] = WIDGET_TYPE_LIST_VIEW_H()] = "LIST_VIEW_H";
    TWidgetType[TWidgetType["LIST_ITEM"] = WIDGET_TYPE_LIST_ITEM()] = "LIST_ITEM";
    TWidgetType[TWidgetType["COLOR_PICKER"] = WIDGET_TYPE_COLOR_PICKER()] = "COLOR_PICKER";
    TWidgetType[TWidgetType["COLOR_COMPONENT"] = WIDGET_TYPE_COLOR_COMPONENT()] = "COLOR_COMPONENT";
    TWidgetType[TWidgetType["COLOR_TILE"] = WIDGET_TYPE_COLOR_TILE()] = "COLOR_TILE";
    TWidgetType[TWidgetType["RICH_TEXT"] = WIDGET_TYPE_RICH_TEXT()] = "RICH_TEXT";
    TWidgetType[TWidgetType["APP_BAR"] = WIDGET_TYPE_APP_BAR()] = "APP_BAR";
    TWidgetType[TWidgetType["GRID"] = WIDGET_TYPE_GRID()] = "GRID";
    TWidgetType[TWidgetType["GRID_ITEM"] = WIDGET_TYPE_GRID_ITEM()] = "GRID_ITEM";
    TWidgetType[TWidgetType["ROW"] = WIDGET_TYPE_ROW()] = "ROW";
    TWidgetType[TWidgetType["COLUMN"] = WIDGET_TYPE_COLUMN()] = "COLUMN";
    TWidgetType[TWidgetType["CALIBRATION_WIN"] = WIDGET_TYPE_CALIBRATION_WIN()] = "CALIBRATION_WIN";
})(TWidgetType || (TWidgetType = {}));
;
var TWindowStage;
(function (TWindowStage) {
    TWindowStage[TWindowStage["NONE"] = WINDOW_STAGE_NONE()] = "NONE";
    TWindowStage[TWindowStage["CREATED"] = WINDOW_STAGE_CREATED()] = "CREATED";
    TWindowStage[TWindowStage["OPENED"] = WINDOW_STAGE_OPENED()] = "OPENED";
    TWindowStage[TWindowStage["CLOSED"] = WINDOW_STAGE_CLOSED()] = "CLOSED";
})(TWindowStage || (TWindowStage = {}));
;
var TWindowClosable;
(function (TWindowClosable) {
    TWindowClosable[TWindowClosable["YES"] = WINDOW_CLOSABLE_YES()] = "YES";
    TWindowClosable[TWindowClosable["NO"] = WINDOW_CLOSABLE_NO()] = "NO";
    TWindowClosable[TWindowClosable["CONFIRM"] = WINDOW_CLOSABLE_CONFIRM()] = "CONFIRM";
})(TWindowClosable || (TWindowClosable = {}));
;
var TWidgetState;
(function (TWidgetState) {
    TWidgetState[TWidgetState["STATE_NONE"] = WIDGET_STATE_NONE()] = "STATE_NONE";
    TWidgetState[TWidgetState["STATE_NORMAL"] = WIDGET_STATE_NORMAL()] = "STATE_NORMAL";
    TWidgetState[TWidgetState["STATE_PRESSED"] = WIDGET_STATE_PRESSED()] = "STATE_PRESSED";
    TWidgetState[TWidgetState["STATE_OVER"] = WIDGET_STATE_OVER()] = "STATE_OVER";
    TWidgetState[TWidgetState["STATE_DISABLE"] = WIDGET_STATE_DISABLE()] = "STATE_DISABLE";
    TWidgetState[TWidgetState["STATE_FOCUSED"] = WIDGET_STATE_FOCUSED()] = "STATE_FOCUSED";
    TWidgetState[TWidgetState["STATE_CHECKED"] = WIDGET_STATE_CHECKED()] = "STATE_CHECKED";
    TWidgetState[TWidgetState["STATE_UNCHECKED"] = WIDGET_STATE_UNCHECKED()] = "STATE_UNCHECKED";
    TWidgetState[TWidgetState["STATE_EMPTY"] = WIDGET_STATE_EMPTY()] = "STATE_EMPTY";
    TWidgetState[TWidgetState["STATE_EMPTY_FOCUS"] = WIDGET_STATE_EMPTY_FOCUS()] = "STATE_EMPTY_FOCUS";
    TWidgetState[TWidgetState["STATE_ERROR"] = WIDGET_STATE_ERROR()] = "STATE_ERROR";
    TWidgetState[TWidgetState["STATE_SELECTED"] = WIDGET_STATE_SELECTED()] = "STATE_SELECTED";
    TWidgetState[TWidgetState["STATE_NORMAL_OF_CHECKED"] = WIDGET_STATE_NORMAL_OF_CHECKED()] = "STATE_NORMAL_OF_CHECKED";
    TWidgetState[TWidgetState["STATE_PRESSED_OF_CHECKED"] = WIDGET_STATE_PRESSED_OF_CHECKED()] = "STATE_PRESSED_OF_CHECKED";
    TWidgetState[TWidgetState["STATE_OVER_OF_CHECKED"] = WIDGET_STATE_OVER_OF_CHECKED()] = "STATE_OVER_OF_CHECKED";
    TWidgetState[TWidgetState["STATE_FOCUSED_OF_CHECKED"] = WIDGET_STATE_FOCUSED_OF_CHECKED()] = "STATE_FOCUSED_OF_CHECKED";
    TWidgetState[TWidgetState["STATE_NORMAL_OF_ACTIVE"] = WIDGET_STATE_NORMAL_OF_ACTIVE()] = "STATE_NORMAL_OF_ACTIVE";
    TWidgetState[TWidgetState["STATE_PRESSED_OF_ACTIVE"] = WIDGET_STATE_PRESSED_OF_ACTIVE()] = "STATE_PRESSED_OF_ACTIVE";
    TWidgetState[TWidgetState["STATE_OVER_OF_ACTIVE"] = WIDGET_STATE_OVER_OF_ACTIVE()] = "STATE_OVER_OF_ACTIVE";
    TWidgetState[TWidgetState["STATE_FOCUSED_OF_ACTIVE"] = WIDGET_STATE_FOCUSED_OF_ACTIVE()] = "STATE_FOCUSED_OF_ACTIVE";
})(TWidgetState || (TWidgetState = {}));
;
var TWidget = /** @class */ (function () {
    function TWidget(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TWidget.prototype.countChildren = function () {
        return widget_count_children(this.nativeObj);
    };
    TWidget.prototype.getChild = function (index) {
        return new TWidget(widget_get_child(this.nativeObj, index));
    };
    TWidget.prototype.indexOf = function () {
        return widget_index_of(this.nativeObj);
    };
    TWidget.prototype.move = function (x, y) {
        return widget_move(this.nativeObj, x, y);
    };
    TWidget.prototype.resize = function (w, h) {
        return widget_resize(this.nativeObj, w, h);
    };
    TWidget.prototype.moveResize = function (x, y, w, h) {
        return widget_move_resize(this.nativeObj, x, y, w, h);
    };
    TWidget.prototype.setValue = function (value) {
        return widget_set_value(this.nativeObj, value);
    };
    TWidget.prototype.animateValueTo = function (value, duration) {
        return widget_animate_value_to(this.nativeObj, value, duration);
    };
    TWidget.prototype.addValue = function (delta) {
        return widget_add_value(this.nativeObj, delta);
    };
    TWidget.prototype.useStyle = function (style) {
        return widget_use_style(this.nativeObj, style);
    };
    TWidget.prototype.setText = function (text) {
        return widget_set_text_utf8(this.nativeObj, text);
    };
    TWidget.prototype.setTrText = function (text) {
        return widget_set_tr_text(this.nativeObj, text);
    };
    TWidget.prototype.getValue = function () {
        return widget_get_value(this.nativeObj);
    };
    TWidget.prototype.getText = function () {
        return widget_get_text(this.nativeObj);
    };
    TWidget.prototype.setName = function (name) {
        return widget_set_name(this.nativeObj, name);
    };
    TWidget.prototype.setTheme = function (name) {
        return widget_set_theme(this.nativeObj, name);
    };
    TWidget.prototype.setCursor = function (cursor) {
        return widget_set_cursor(this.nativeObj, cursor);
    };
    TWidget.prototype.setAnimation = function (animation) {
        return widget_set_animation(this.nativeObj, animation);
    };
    TWidget.prototype.createAnimator = function (animation) {
        return widget_create_animator(this.nativeObj, animation);
    };
    TWidget.prototype.startAnimator = function (name) {
        return widget_start_animator(this.nativeObj, name);
    };
    TWidget.prototype.setAnimatorTimeScale = function (name, time_scale) {
        return widget_set_animator_time_scale(this.nativeObj, name, time_scale);
    };
    TWidget.prototype.pauseAnimator = function (name) {
        return widget_pause_animator(this.nativeObj, name);
    };
    TWidget.prototype.stopAnimator = function (name) {
        return widget_stop_animator(this.nativeObj, name);
    };
    TWidget.prototype.destroyAnimator = function (name) {
        return widget_destroy_animator(this.nativeObj, name);
    };
    TWidget.prototype.setEnable = function (enable) {
        return widget_set_enable(this.nativeObj, enable);
    };
    TWidget.prototype.setFeedback = function (feedback) {
        return widget_set_feedback(this.nativeObj, feedback);
    };
    TWidget.prototype.setFloating = function (floating) {
        return widget_set_floating(this.nativeObj, floating);
    };
    TWidget.prototype.setFocused = function (focused) {
        return widget_set_focused(this.nativeObj, focused);
    };
    TWidget.prototype.child = function (name) {
        return new TWidget(widget_child(this.nativeObj, name));
    };
    TWidget.prototype.lookup = function (name, recursive) {
        return new TWidget(widget_lookup(this.nativeObj, name, recursive));
    };
    TWidget.prototype.lookupByType = function (type, recursive) {
        return new TWidget(widget_lookup_by_type(this.nativeObj, type, recursive));
    };
    TWidget.prototype.setVisible = function (visible, recursive) {
        return widget_set_visible(this.nativeObj, visible, recursive);
    };
    TWidget.prototype.setVisibleOnly = function (visible) {
        return widget_set_visible_only(this.nativeObj, visible);
    };
    TWidget.prototype.setSensitive = function (sensitive) {
        return widget_set_sensitive(this.nativeObj, sensitive);
    };
    TWidget.prototype.on = function (type, on_event, ctx) {
        return widget_on(this.nativeObj, type, on_event, ctx);
    };
    TWidget.prototype.onWithTag = function (type, on_event, ctx, tag) {
        return widget_on_with_tag(this.nativeObj, type, on_event, ctx, tag);
    };
    TWidget.prototype.off = function (id) {
        return widget_off(this.nativeObj, id);
    };
    TWidget.prototype.invalidateForce = function (r) {
        return widget_invalidate_force(this.nativeObj, r ? r.nativeObj : null);
    };
    TWidget.prototype.setPropStr = function (name, v) {
        return widget_set_prop_str(this.nativeObj, name, v);
    };
    TWidget.prototype.getPropStr = function (name, defval) {
        return widget_get_prop_str(this.nativeObj, name, defval);
    };
    TWidget.prototype.setPropInt = function (name, v) {
        return widget_set_prop_int(this.nativeObj, name, v);
    };
    TWidget.prototype.getPropInt = function (name, defval) {
        return widget_get_prop_int(this.nativeObj, name, defval);
    };
    TWidget.prototype.setPropBool = function (name, v) {
        return widget_set_prop_bool(this.nativeObj, name, v);
    };
    TWidget.prototype.getPropBool = function (name, defval) {
        return widget_get_prop_bool(this.nativeObj, name, defval);
    };
    TWidget.prototype.isWindowOpened = function () {
        return widget_is_window_opened(this.nativeObj);
    };
    TWidget.prototype.isWindow = function () {
        return widget_is_window(this.nativeObj);
    };
    TWidget.prototype.isDesigningWindow = function () {
        return widget_is_designing_window(this.nativeObj);
    };
    TWidget.prototype.isWindowManager = function () {
        return widget_is_window_manager(this.nativeObj);
    };
    TWidget.prototype.foreach = function (visit, ctx) {
        return widget_foreach(this.nativeObj, visit, ctx);
    };
    TWidget.prototype.getWindow = function () {
        return new TWidget(widget_get_window(this.nativeObj));
    };
    TWidget.prototype.getWindowManager = function () {
        return new TWidget(widget_get_window_manager(this.nativeObj));
    };
    TWidget.prototype.getType = function () {
        return widget_get_type(this.nativeObj);
    };
    TWidget.prototype.clone = function (parent) {
        return new TWidget(widget_clone(this.nativeObj, parent ? parent.nativeObj : null));
    };
    TWidget.prototype.equal = function (other) {
        return widget_equal(this.nativeObj, other ? other.nativeObj : null);
    };
    TWidget.cast = function (widget) {
        return new TWidget(widget_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TWidget.prototype.destroy = function () {
        return widget_destroy(this.nativeObj);
    };
    TWidget.prototype.unref = function () {
        return widget_unref(this.nativeObj);
    };
    TWidget.prototype.layout = function () {
        return widget_layout(this.nativeObj);
    };
    TWidget.prototype.setSelfLayout = function (params) {
        return widget_set_self_layout(this.nativeObj, params);
    };
    TWidget.prototype.setChildrenLayout = function (params) {
        return widget_set_children_layout(this.nativeObj, params);
    };
    TWidget.prototype.setSelfLayoutParams = function (x, y, w, h) {
        return widget_set_self_layout_params(this.nativeObj, x, y, w, h);
    };
    TWidget.prototype.setStyleInt = function (state_and_name, value) {
        return widget_set_style_int(this.nativeObj, state_and_name, value);
    };
    TWidget.prototype.setStyleStr = function (state_and_name, value) {
        return widget_set_style_str(this.nativeObj, state_and_name, value);
    };
    TWidget.prototype.setStyleColor = function (state_and_name, value) {
        return widget_set_style_color(this.nativeObj, state_and_name, value);
    };
    Object.defineProperty(TWidget.prototype, "x", {
        get: function () {
            return widget_t_get_prop_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "y", {
        get: function () {
            return widget_t_get_prop_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "w", {
        get: function () {
            return widget_t_get_prop_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "h", {
        get: function () {
            return widget_t_get_prop_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "name", {
        get: function () {
            return widget_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "trText", {
        get: function () {
            return widget_t_get_prop_tr_text(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "style", {
        get: function () {
            return widget_t_get_prop_style(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "animation", {
        get: function () {
            return widget_t_get_prop_animation(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "enable", {
        get: function () {
            return widget_t_get_prop_enable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "feedback", {
        get: function () {
            return widget_t_get_prop_feedback(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "visible", {
        get: function () {
            return widget_t_get_prop_visible(this.nativeObj);
        },
        set: function (value) {
            widget_t_set_prop_visible(this.nativeObj, value);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "sensitive", {
        get: function () {
            return widget_t_get_prop_sensitive(this.nativeObj);
        },
        set: function (value) {
            widget_t_set_prop_sensitive(this.nativeObj, value);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "focusable", {
        get: function () {
            return widget_t_get_prop_focusable(this.nativeObj);
        },
        set: function (value) {
            widget_t_set_prop_focusable(this.nativeObj, value);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "withFocusState", {
        get: function () {
            return widget_t_get_prop_with_focus_state(this.nativeObj);
        },
        set: function (value) {
            widget_t_set_prop_with_focus_state(this.nativeObj, value);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "floating", {
        get: function () {
            return widget_t_get_prop_floating(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TWidget;
}());
var TRet;
(function (TRet) {
    TRet[TRet["OK"] = RET_OK()] = "OK";
    TRet[TRet["OOM"] = RET_OOM()] = "OOM";
    TRet[TRet["FAIL"] = RET_FAIL()] = "FAIL";
    TRet[TRet["NOT_IMPL"] = RET_NOT_IMPL()] = "NOT_IMPL";
    TRet[TRet["QUIT"] = RET_QUIT()] = "QUIT";
    TRet[TRet["FOUND"] = RET_FOUND()] = "FOUND";
    TRet[TRet["BUSY"] = RET_BUSY()] = "BUSY";
    TRet[TRet["REMOVE"] = RET_REMOVE()] = "REMOVE";
    TRet[TRet["REPEAT"] = RET_REPEAT()] = "REPEAT";
    TRet[TRet["NOT_FOUND"] = RET_NOT_FOUND()] = "NOT_FOUND";
    TRet[TRet["DONE"] = RET_DONE()] = "DONE";
    TRet[TRet["STOP"] = RET_STOP()] = "STOP";
    TRet[TRet["SKIP"] = RET_SKIP()] = "SKIP";
    TRet[TRet["CONTINUE"] = RET_CONTINUE()] = "CONTINUE";
    TRet[TRet["OBJECT_CHANGED"] = RET_OBJECT_CHANGED()] = "OBJECT_CHANGED";
    TRet[TRet["ITEMS_CHANGED"] = RET_ITEMS_CHANGED()] = "ITEMS_CHANGED";
    TRet[TRet["BAD_PARAMS"] = RET_BAD_PARAMS()] = "BAD_PARAMS";
    TRet[TRet["TIMEOUT"] = RET_TIMEOUT()] = "TIMEOUT";
    TRet[TRet["CRC"] = RET_CRC()] = "CRC";
    TRet[TRet["IO"] = RET_IO()] = "IO";
    TRet[TRet["EOS"] = RET_EOS()] = "EOS";
})(TRet || (TRet = {}));
;
var TTimerManager = /** @class */ (function () {
    function TTimerManager(nativeObj) {
        this.nativeObj = nativeObj;
    }
    return TTimerManager;
}());
var TTimeNow = /** @class */ (function () {
    function TTimeNow(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TTimeNow.s = function () {
        return time_now_s();
    };
    TTimeNow.ms = function () {
        return time_now_ms();
    };
    return TTimeNow;
}());
var TRect = /** @class */ (function () {
    function TRect(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TRect.create = function (x, y, w, h) {
        return new TRect(rect_create(x, y, w, h));
    };
    TRect.prototype.set = function (x, y, w, h) {
        return new TRect(rect_set(this.nativeObj, x, y, w, h));
    };
    TRect.cast = function (rect) {
        return new TRect(rect_cast(rect ? (rect.nativeObj || rect) : null));
    };
    TRect.prototype.destroy = function () {
        return rect_destroy(this.nativeObj);
    };
    Object.defineProperty(TRect.prototype, "x", {
        get: function () {
            return rect_t_get_prop_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TRect.prototype, "y", {
        get: function () {
            return rect_t_get_prop_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TRect.prototype, "w", {
        get: function () {
            return rect_t_get_prop_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TRect.prototype, "h", {
        get: function () {
            return rect_t_get_prop_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TRect;
}());
var TPointf = /** @class */ (function () {
    function TPointf(nativeObj) {
        this.nativeObj = nativeObj;
    }
    return TPointf;
}());
var TPoint = /** @class */ (function () {
    function TPoint(nativeObj) {
        this.nativeObj = nativeObj;
    }
    return TPoint;
}());
var TPath = /** @class */ (function () {
    function TPath(nativeObj) {
        this.nativeObj = nativeObj;
    }
    return TPath;
}());
var TNamedValue = /** @class */ (function () {
    function TNamedValue(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TNamedValue.create = function () {
        return new TNamedValue(named_value_create());
    };
    TNamedValue.cast = function (nv) {
        return new TNamedValue(named_value_cast(nv ? (nv.nativeObj || nv) : null));
    };
    TNamedValue.prototype.setName = function (name) {
        return named_value_set_name(this.nativeObj, name);
    };
    TNamedValue.prototype.setValue = function (value) {
        return named_value_set_value(this.nativeObj, value ? value.nativeObj : null);
    };
    TNamedValue.prototype.getValue = function () {
        return new TValue(named_value_get_value(this.nativeObj));
    };
    TNamedValue.prototype.destroy = function () {
        return named_value_destroy(this.nativeObj);
    };
    Object.defineProperty(TNamedValue.prototype, "name", {
        get: function () {
            return named_value_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TNamedValue;
}());
var TMIME_TYPE;
(function (TMIME_TYPE) {
    TMIME_TYPE[TMIME_TYPE["APPLICATION_ENVOY"] = MIME_TYPE_APPLICATION_ENVOY()] = "APPLICATION_ENVOY";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_FRACTALS"] = MIME_TYPE_APPLICATION_FRACTALS()] = "APPLICATION_FRACTALS";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_FUTURESPLASH"] = MIME_TYPE_APPLICATION_FUTURESPLASH()] = "APPLICATION_FUTURESPLASH";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_HTA"] = MIME_TYPE_APPLICATION_HTA()] = "APPLICATION_HTA";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_JSON"] = MIME_TYPE_APPLICATION_JSON()] = "APPLICATION_JSON";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_UBJSON"] = MIME_TYPE_APPLICATION_UBJSON()] = "APPLICATION_UBJSON";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_MAC_BINHEX40"] = MIME_TYPE_APPLICATION_MAC_BINHEX40()] = "APPLICATION_MAC_BINHEX40";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_MSWORD"] = MIME_TYPE_APPLICATION_MSWORD()] = "APPLICATION_MSWORD";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_OCTET_STREAM"] = MIME_TYPE_APPLICATION_OCTET_STREAM()] = "APPLICATION_OCTET_STREAM";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_ODA"] = MIME_TYPE_APPLICATION_ODA()] = "APPLICATION_ODA";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_OLESCRIPT"] = MIME_TYPE_APPLICATION_OLESCRIPT()] = "APPLICATION_OLESCRIPT";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_PDF"] = MIME_TYPE_APPLICATION_PDF()] = "APPLICATION_PDF";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_PICS_RULES"] = MIME_TYPE_APPLICATION_PICS_RULES()] = "APPLICATION_PICS_RULES";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_PKCS10"] = MIME_TYPE_APPLICATION_PKCS10()] = "APPLICATION_PKCS10";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_PKIX_CRL"] = MIME_TYPE_APPLICATION_PKIX_CRL()] = "APPLICATION_PKIX_CRL";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_POSTSCRIPT"] = MIME_TYPE_APPLICATION_POSTSCRIPT()] = "APPLICATION_POSTSCRIPT";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_RTF"] = MIME_TYPE_APPLICATION_RTF()] = "APPLICATION_RTF";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_EXCEL"] = MIME_TYPE_APPLICATION_VND_MS_EXCEL()] = "APPLICATION_VND_MS_EXCEL";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_OUTLOOK"] = MIME_TYPE_APPLICATION_VND_MS_OUTLOOK()] = "APPLICATION_VND_MS_OUTLOOK";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_PKICERTSTORE"] = MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE()] = "APPLICATION_VND_MS_PKICERTSTORE";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_PKISECCAT"] = MIME_TYPE_APPLICATION_VND_MS_PKISECCAT()] = "APPLICATION_VND_MS_PKISECCAT";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_PKISTL"] = MIME_TYPE_APPLICATION_VND_MS_PKISTL()] = "APPLICATION_VND_MS_PKISTL";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_POWERPOINT"] = MIME_TYPE_APPLICATION_VND_MS_POWERPOINT()] = "APPLICATION_VND_MS_POWERPOINT";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_PROJECT"] = MIME_TYPE_APPLICATION_VND_MS_PROJECT()] = "APPLICATION_VND_MS_PROJECT";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_WORKS"] = MIME_TYPE_APPLICATION_VND_MS_WORKS()] = "APPLICATION_VND_MS_WORKS";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_WINHLP"] = MIME_TYPE_APPLICATION_WINHLP()] = "APPLICATION_WINHLP";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_BCPIO"] = MIME_TYPE_APPLICATION_X_BCPIO()] = "APPLICATION_X_BCPIO";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_CDF"] = MIME_TYPE_APPLICATION_X_CDF()] = "APPLICATION_X_CDF";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_COMPRESS"] = MIME_TYPE_APPLICATION_X_COMPRESS()] = "APPLICATION_X_COMPRESS";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_COMPRESSED"] = MIME_TYPE_APPLICATION_X_COMPRESSED()] = "APPLICATION_X_COMPRESSED";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_CPIO"] = MIME_TYPE_APPLICATION_X_CPIO()] = "APPLICATION_X_CPIO";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_CSH"] = MIME_TYPE_APPLICATION_X_CSH()] = "APPLICATION_X_CSH";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_DIRECTOR"] = MIME_TYPE_APPLICATION_X_DIRECTOR()] = "APPLICATION_X_DIRECTOR";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_DVI"] = MIME_TYPE_APPLICATION_X_DVI()] = "APPLICATION_X_DVI";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_GTAR"] = MIME_TYPE_APPLICATION_X_GTAR()] = "APPLICATION_X_GTAR";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_GZIP"] = MIME_TYPE_APPLICATION_X_GZIP()] = "APPLICATION_X_GZIP";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_HDF"] = MIME_TYPE_APPLICATION_X_HDF()] = "APPLICATION_X_HDF";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_IPHONE"] = MIME_TYPE_APPLICATION_X_IPHONE()] = "APPLICATION_X_IPHONE";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_JAVASCRIPT"] = MIME_TYPE_APPLICATION_X_JAVASCRIPT()] = "APPLICATION_X_JAVASCRIPT";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_LATEX"] = MIME_TYPE_APPLICATION_X_LATEX()] = "APPLICATION_X_LATEX";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSACCESS"] = MIME_TYPE_APPLICATION_X_MSACCESS()] = "APPLICATION_X_MSACCESS";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSCARDFILE"] = MIME_TYPE_APPLICATION_X_MSCARDFILE()] = "APPLICATION_X_MSCARDFILE";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSCLIP"] = MIME_TYPE_APPLICATION_X_MSCLIP()] = "APPLICATION_X_MSCLIP";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSDOWNLOAD"] = MIME_TYPE_APPLICATION_X_MSDOWNLOAD()] = "APPLICATION_X_MSDOWNLOAD";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSMEDIAVIEW"] = MIME_TYPE_APPLICATION_X_MSMEDIAVIEW()] = "APPLICATION_X_MSMEDIAVIEW";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSMETAFILE"] = MIME_TYPE_APPLICATION_X_MSMETAFILE()] = "APPLICATION_X_MSMETAFILE";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSMONEY"] = MIME_TYPE_APPLICATION_X_MSMONEY()] = "APPLICATION_X_MSMONEY";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSPUBLISHER"] = MIME_TYPE_APPLICATION_X_MSPUBLISHER()] = "APPLICATION_X_MSPUBLISHER";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSSCHEDULE"] = MIME_TYPE_APPLICATION_X_MSSCHEDULE()] = "APPLICATION_X_MSSCHEDULE";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSTERMINAL"] = MIME_TYPE_APPLICATION_X_MSTERMINAL()] = "APPLICATION_X_MSTERMINAL";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSWRITE"] = MIME_TYPE_APPLICATION_X_MSWRITE()] = "APPLICATION_X_MSWRITE";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_NETCDF"] = MIME_TYPE_APPLICATION_X_NETCDF()] = "APPLICATION_X_NETCDF";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_PERFMON"] = MIME_TYPE_APPLICATION_X_PERFMON()] = "APPLICATION_X_PERFMON";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_PKCS12"] = MIME_TYPE_APPLICATION_X_PKCS12()] = "APPLICATION_X_PKCS12";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_SH"] = MIME_TYPE_APPLICATION_X_SH()] = "APPLICATION_X_SH";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_SHAR"] = MIME_TYPE_APPLICATION_X_SHAR()] = "APPLICATION_X_SHAR";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_SHOCKWAVE_FLASH"] = MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH()] = "APPLICATION_X_SHOCKWAVE_FLASH";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_STUFFIT"] = MIME_TYPE_APPLICATION_X_STUFFIT()] = "APPLICATION_X_STUFFIT";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_SV4CPIO"] = MIME_TYPE_APPLICATION_X_SV4CPIO()] = "APPLICATION_X_SV4CPIO";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_SV4CRC"] = MIME_TYPE_APPLICATION_X_SV4CRC()] = "APPLICATION_X_SV4CRC";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_TAR"] = MIME_TYPE_APPLICATION_X_TAR()] = "APPLICATION_X_TAR";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_TCL"] = MIME_TYPE_APPLICATION_X_TCL()] = "APPLICATION_X_TCL";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_TEX"] = MIME_TYPE_APPLICATION_X_TEX()] = "APPLICATION_X_TEX";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_TEXINFO"] = MIME_TYPE_APPLICATION_X_TEXINFO()] = "APPLICATION_X_TEXINFO";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_TROFF"] = MIME_TYPE_APPLICATION_X_TROFF()] = "APPLICATION_X_TROFF";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_USTAR"] = MIME_TYPE_APPLICATION_X_USTAR()] = "APPLICATION_X_USTAR";
    TMIME_TYPE[TMIME_TYPE["APPLICATION_ZIP"] = MIME_TYPE_APPLICATION_ZIP()] = "APPLICATION_ZIP";
    TMIME_TYPE[TMIME_TYPE["AUDIO_BASIC"] = MIME_TYPE_AUDIO_BASIC()] = "AUDIO_BASIC";
    TMIME_TYPE[TMIME_TYPE["AUDIO_MID"] = MIME_TYPE_AUDIO_MID()] = "AUDIO_MID";
    TMIME_TYPE[TMIME_TYPE["AUDIO_MPEG"] = MIME_TYPE_AUDIO_MPEG()] = "AUDIO_MPEG";
    TMIME_TYPE[TMIME_TYPE["AUDIO_X_AIFF"] = MIME_TYPE_AUDIO_X_AIFF()] = "AUDIO_X_AIFF";
    TMIME_TYPE[TMIME_TYPE["AUDIO_X_MPEGURL"] = MIME_TYPE_AUDIO_X_MPEGURL()] = "AUDIO_X_MPEGURL";
    TMIME_TYPE[TMIME_TYPE["AUDIO_X_WAV"] = MIME_TYPE_AUDIO_X_WAV()] = "AUDIO_X_WAV";
    TMIME_TYPE[TMIME_TYPE["IMAGE_BMP"] = MIME_TYPE_IMAGE_BMP()] = "IMAGE_BMP";
    TMIME_TYPE[TMIME_TYPE["IMAGE_CIS_COD"] = MIME_TYPE_IMAGE_CIS_COD()] = "IMAGE_CIS_COD";
    TMIME_TYPE[TMIME_TYPE["IMAGE_GIF"] = MIME_TYPE_IMAGE_GIF()] = "IMAGE_GIF";
    TMIME_TYPE[TMIME_TYPE["IMAGE_IEF"] = MIME_TYPE_IMAGE_IEF()] = "IMAGE_IEF";
    TMIME_TYPE[TMIME_TYPE["IMAGE_JPEG"] = MIME_TYPE_IMAGE_JPEG()] = "IMAGE_JPEG";
    TMIME_TYPE[TMIME_TYPE["IMAGE_PIPEG"] = MIME_TYPE_IMAGE_PIPEG()] = "IMAGE_PIPEG";
    TMIME_TYPE[TMIME_TYPE["IMAGE_SVG_XML"] = MIME_TYPE_IMAGE_SVG_XML()] = "IMAGE_SVG_XML";
    TMIME_TYPE[TMIME_TYPE["IMAGE_TIFF"] = MIME_TYPE_IMAGE_TIFF()] = "IMAGE_TIFF";
    TMIME_TYPE[TMIME_TYPE["IMAGE_X_CMX"] = MIME_TYPE_IMAGE_X_CMX()] = "IMAGE_X_CMX";
    TMIME_TYPE[TMIME_TYPE["IMAGE_X_ICON"] = MIME_TYPE_IMAGE_X_ICON()] = "IMAGE_X_ICON";
    TMIME_TYPE[TMIME_TYPE["IMAGE_X_RGB"] = MIME_TYPE_IMAGE_X_RGB()] = "IMAGE_X_RGB";
    TMIME_TYPE[TMIME_TYPE["IMAGE_X_XBITMAP"] = MIME_TYPE_IMAGE_X_XBITMAP()] = "IMAGE_X_XBITMAP";
    TMIME_TYPE[TMIME_TYPE["IMAGE_X_XPIXMAP"] = MIME_TYPE_IMAGE_X_XPIXMAP()] = "IMAGE_X_XPIXMAP";
    TMIME_TYPE[TMIME_TYPE["IMAGE_X_XWINDOWDUMP"] = MIME_TYPE_IMAGE_X_XWINDOWDUMP()] = "IMAGE_X_XWINDOWDUMP";
    TMIME_TYPE[TMIME_TYPE["MESSAGE_RFC822"] = MIME_TYPE_MESSAGE_RFC822()] = "MESSAGE_RFC822";
    TMIME_TYPE[TMIME_TYPE["TEXT_CSS"] = MIME_TYPE_TEXT_CSS()] = "TEXT_CSS";
    TMIME_TYPE[TMIME_TYPE["TEXT_H323"] = MIME_TYPE_TEXT_H323()] = "TEXT_H323";
    TMIME_TYPE[TMIME_TYPE["TEXT_HTML"] = MIME_TYPE_TEXT_HTML()] = "TEXT_HTML";
    TMIME_TYPE[TMIME_TYPE["TEXT_IULS"] = MIME_TYPE_TEXT_IULS()] = "TEXT_IULS";
    TMIME_TYPE[TMIME_TYPE["TEXT_PLAIN"] = MIME_TYPE_TEXT_PLAIN()] = "TEXT_PLAIN";
    TMIME_TYPE[TMIME_TYPE["TEXT_RICHTEXT"] = MIME_TYPE_TEXT_RICHTEXT()] = "TEXT_RICHTEXT";
    TMIME_TYPE[TMIME_TYPE["TEXT_SCRIPTLET"] = MIME_TYPE_TEXT_SCRIPTLET()] = "TEXT_SCRIPTLET";
    TMIME_TYPE[TMIME_TYPE["TEXT_WEBVIEWHTML"] = MIME_TYPE_TEXT_WEBVIEWHTML()] = "TEXT_WEBVIEWHTML";
    TMIME_TYPE[TMIME_TYPE["TEXT_X_COMPONENT"] = MIME_TYPE_TEXT_X_COMPONENT()] = "TEXT_X_COMPONENT";
    TMIME_TYPE[TMIME_TYPE["TEXT_X_SETEXT"] = MIME_TYPE_TEXT_X_SETEXT()] = "TEXT_X_SETEXT";
    TMIME_TYPE[TMIME_TYPE["TEXT_X_VCARD"] = MIME_TYPE_TEXT_X_VCARD()] = "TEXT_X_VCARD";
    TMIME_TYPE[TMIME_TYPE["VIDEO_MPEG"] = MIME_TYPE_VIDEO_MPEG()] = "VIDEO_MPEG";
    TMIME_TYPE[TMIME_TYPE["VIDEO_QUICKTIME"] = MIME_TYPE_VIDEO_QUICKTIME()] = "VIDEO_QUICKTIME";
    TMIME_TYPE[TMIME_TYPE["VIDEO_X_MSVIDEO"] = MIME_TYPE_VIDEO_X_MSVIDEO()] = "VIDEO_X_MSVIDEO";
})(TMIME_TYPE || (TMIME_TYPE = {}));
;
var TIdleManager = /** @class */ (function () {
    function TIdleManager(nativeObj) {
        this.nativeObj = nativeObj;
    }
    return TIdleManager;
}());
var TIndicatorDefaultPaint;
(function (TIndicatorDefaultPaint) {
    TIndicatorDefaultPaint[TIndicatorDefaultPaint["AUTO"] = INDICATOR_DEFAULT_PAINT_AUTO()] = "AUTO";
    TIndicatorDefaultPaint[TIndicatorDefaultPaint["FILL_DOT"] = INDICATOR_DEFAULT_PAINT_FILL_DOT()] = "FILL_DOT";
    TIndicatorDefaultPaint[TIndicatorDefaultPaint["STROKE_DOT"] = INDICATOR_DEFAULT_PAINT_STROKE_DOT()] = "STROKE_DOT";
    TIndicatorDefaultPaint[TIndicatorDefaultPaint["FILL_RECT"] = INDICATOR_DEFAULT_PAINT_FILL_RECT()] = "FILL_RECT";
    TIndicatorDefaultPaint[TIndicatorDefaultPaint["STROKE_RECT"] = INDICATOR_DEFAULT_PAINT_STROKE_RECT()] = "STROKE_RECT";
})(TIndicatorDefaultPaint || (TIndicatorDefaultPaint = {}));
;
var TFsFile = /** @class */ (function () {
    function TFsFile(nativeObj) {
        this.nativeObj = nativeObj;
    }
    return TFsFile;
}());
var TEvent = /** @class */ (function () {
    function TEvent(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TEvent.cast = function (event) {
        return new TEvent(event_cast(event ? (event.nativeObj || event) : null));
    };
    TEvent.create = function (type, target) {
        return new TEvent(event_create(type, target));
    };
    TEvent.prototype.destroy = function () {
        return event_destroy(this.nativeObj);
    };
    Object.defineProperty(TEvent.prototype, "type", {
        get: function () {
            return event_t_get_prop_type(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEvent.prototype, "time", {
        get: function () {
            return event_t_get_prop_time(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEvent.prototype, "target", {
        get: function () {
            return event_t_get_prop_target(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TEvent;
}());
var TEventBaseType;
(function (TEventBaseType) {
    TEventBaseType[TEventBaseType["NONE"] = EVT_NONE()] = "NONE";
    TEventBaseType[TEventBaseType["PROP_WILL_CHANGE"] = EVT_PROP_WILL_CHANGE()] = "PROP_WILL_CHANGE";
    TEventBaseType[TEventBaseType["PROP_CHANGED"] = EVT_PROP_CHANGED()] = "PROP_CHANGED";
    TEventBaseType[TEventBaseType["ITEMS_WILL_CHANGE"] = EVT_ITEMS_WILL_CHANGE()] = "ITEMS_WILL_CHANGE";
    TEventBaseType[TEventBaseType["ITEMS_CHANGED"] = EVT_ITEMS_CHANGED()] = "ITEMS_CHANGED";
    TEventBaseType[TEventBaseType["PROPS_CHANGED"] = EVT_PROPS_CHANGED()] = "PROPS_CHANGED";
    TEventBaseType[TEventBaseType["PROGRESS"] = EVT_PROGRESS()] = "PROGRESS";
    TEventBaseType[TEventBaseType["DESTROY"] = EVT_DESTROY()] = "DESTROY";
})(TEventBaseType || (TEventBaseType = {}));
;
var TEmitter = /** @class */ (function () {
    function TEmitter(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TEmitter.create = function () {
        return new TEmitter(emitter_create());
    };
    TEmitter.prototype.dispatch = function (e) {
        return emitter_dispatch(this.nativeObj, e ? e.nativeObj : null);
    };
    TEmitter.prototype.dispatchSimpleEvent = function (type) {
        return emitter_dispatch_simple_event(this.nativeObj, type);
    };
    TEmitter.prototype.on = function (type, on_event, ctx) {
        return emitter_on(this.nativeObj, type, on_event, ctx);
    };
    TEmitter.prototype.onWithTag = function (type, on_event, ctx, tag) {
        return emitter_on_with_tag(this.nativeObj, type, on_event, ctx, tag);
    };
    TEmitter.prototype.off = function (id) {
        return emitter_off(this.nativeObj, id);
    };
    TEmitter.prototype.enable = function () {
        return emitter_enable(this.nativeObj);
    };
    TEmitter.prototype.disable = function () {
        return emitter_disable(this.nativeObj);
    };
    TEmitter.prototype.size = function () {
        return emitter_size(this.nativeObj);
    };
    TEmitter.prototype.destroy = function () {
        return emitter_destroy(this.nativeObj);
    };
    TEmitter.cast = function (emitter) {
        return new TEmitter(emitter_cast(emitter ? (emitter.nativeObj || emitter) : null));
    };
    return TEmitter;
}());
var TEasingType;
(function (TEasingType) {
    TEasingType[TEasingType["LINEAR"] = EASING_LINEAR()] = "LINEAR";
    TEasingType[TEasingType["QUADRATIC_IN"] = EASING_QUADRATIC_IN()] = "QUADRATIC_IN";
    TEasingType[TEasingType["QUADRATIC_OUT"] = EASING_QUADRATIC_OUT()] = "QUADRATIC_OUT";
    TEasingType[TEasingType["QUADRATIC_INOUT"] = EASING_QUADRATIC_INOUT()] = "QUADRATIC_INOUT";
    TEasingType[TEasingType["CUBIC_IN"] = EASING_CUBIC_IN()] = "CUBIC_IN";
    TEasingType[TEasingType["CUBIC_OUT"] = EASING_CUBIC_OUT()] = "CUBIC_OUT";
    TEasingType[TEasingType["SIN_IN"] = EASING_SIN_IN()] = "SIN_IN";
    TEasingType[TEasingType["SIN_OUT"] = EASING_SIN_OUT()] = "SIN_OUT";
    TEasingType[TEasingType["SIN_INOUT"] = EASING_SIN_INOUT()] = "SIN_INOUT";
    TEasingType[TEasingType["POW_IN"] = EASING_POW_IN()] = "POW_IN";
    TEasingType[TEasingType["POW_OUT"] = EASING_POW_OUT()] = "POW_OUT";
    TEasingType[TEasingType["POW_INOUT"] = EASING_POW_INOUT()] = "POW_INOUT";
    TEasingType[TEasingType["CIRCULAR_IN"] = EASING_CIRCULAR_IN()] = "CIRCULAR_IN";
    TEasingType[TEasingType["CIRCULAR_OUT"] = EASING_CIRCULAR_OUT()] = "CIRCULAR_OUT";
    TEasingType[TEasingType["CIRCULAR_INOUT"] = EASING_CIRCULAR_INOUT()] = "CIRCULAR_INOUT";
    TEasingType[TEasingType["ELASTIC_IN"] = EASING_ELASTIC_IN()] = "ELASTIC_IN";
    TEasingType[TEasingType["ELASTIC_OUT"] = EASING_ELASTIC_OUT()] = "ELASTIC_OUT";
    TEasingType[TEasingType["ELASTIC_INOUT"] = EASING_ELASTIC_INOUT()] = "ELASTIC_INOUT";
    TEasingType[TEasingType["BACK_IN"] = EASING_BACK_IN()] = "BACK_IN";
    TEasingType[TEasingType["BACK_OUT"] = EASING_BACK_OUT()] = "BACK_OUT";
    TEasingType[TEasingType["BACK_INOUT"] = EASING_BACK_INOUT()] = "BACK_INOUT";
    TEasingType[TEasingType["BOUNCE_IN"] = EASING_BOUNCE_IN()] = "BOUNCE_IN";
    TEasingType[TEasingType["BOUNCE_OUT"] = EASING_BOUNCE_OUT()] = "BOUNCE_OUT";
    TEasingType[TEasingType["BOUNCE_INOUT"] = EASING_BOUNCE_INOUT()] = "BOUNCE_INOUT";
})(TEasingType || (TEasingType = {}));
;
var TDateTime = /** @class */ (function () {
    function TDateTime(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TDateTime.create = function () {
        return new TDateTime(date_time_create());
    };
    TDateTime.prototype.set = function () {
        return date_time_set(this.nativeObj);
    };
    TDateTime.prototype.destroy = function () {
        return date_time_destroy(this.nativeObj);
    };
    Object.defineProperty(TDateTime.prototype, "second", {
        get: function () {
            return date_time_t_get_prop_second(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDateTime.prototype, "minute", {
        get: function () {
            return date_time_t_get_prop_minute(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDateTime.prototype, "hour", {
        get: function () {
            return date_time_t_get_prop_hour(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDateTime.prototype, "day", {
        get: function () {
            return date_time_t_get_prop_day(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDateTime.prototype, "wday", {
        get: function () {
            return date_time_t_get_prop_wday(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDateTime.prototype, "month", {
        get: function () {
            return date_time_t_get_prop_month(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDateTime.prototype, "year", {
        get: function () {
            return date_time_t_get_prop_year(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TDateTime;
}());
var TColor = /** @class */ (function () {
    function TColor(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TColor.create = function (r, b, g, a) {
        return new TColor(color_create(r, b, g, a));
    };
    TColor.prototype.fromStr = function (str) {
        return new TColor(color_from_str(this.nativeObj, str));
    };
    TColor.prototype.r = function () {
        return color_r(this.nativeObj);
    };
    TColor.prototype.g = function () {
        return color_g(this.nativeObj);
    };
    TColor.prototype.b = function () {
        return color_b(this.nativeObj);
    };
    TColor.prototype.a = function () {
        return color_a(this.nativeObj);
    };
    TColor.cast = function (color) {
        return new TColor(color_cast(color ? (color.nativeObj || color) : null));
    };
    TColor.prototype.destroy = function () {
        return color_destroy(this.nativeObj);
    };
    Object.defineProperty(TColor.prototype, "color", {
        get: function () {
            return color_t_get_prop_color(this.nativeObj);
        },
        set: function (value) {
            color_t_set_prop_color(this.nativeObj, value);
        },
        enumerable: true,
        configurable: true
    });
    return TColor;
}());
var TAssetInfo = /** @class */ (function () {
    function TAssetInfo(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Object.defineProperty(TAssetInfo.prototype, "type", {
        get: function () {
            return asset_info_t_get_prop_type(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TAssetInfo.prototype, "subtype", {
        get: function () {
            return asset_info_t_get_prop_subtype(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TAssetInfo.prototype, "isInRom", {
        get: function () {
            return asset_info_t_get_prop_is_in_rom(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TAssetInfo.prototype, "size", {
        get: function () {
            return asset_info_t_get_prop_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TAssetInfo.prototype, "refcount", {
        get: function () {
            return asset_info_t_get_prop_refcount(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TAssetInfo.prototype, "name", {
        get: function () {
            return asset_info_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TAssetInfo;
}());
var TAssetType;
(function (TAssetType) {
    TAssetType[TAssetType["NONE"] = ASSET_TYPE_NONE()] = "NONE";
    TAssetType[TAssetType["FONT"] = ASSET_TYPE_FONT()] = "FONT";
    TAssetType[TAssetType["IMAGE"] = ASSET_TYPE_IMAGE()] = "IMAGE";
    TAssetType[TAssetType["STYLE"] = ASSET_TYPE_STYLE()] = "STYLE";
    TAssetType[TAssetType["UI"] = ASSET_TYPE_UI()] = "UI";
    TAssetType[TAssetType["XML"] = ASSET_TYPE_XML()] = "XML";
    TAssetType[TAssetType["STRINGS"] = ASSET_TYPE_STRINGS()] = "STRINGS";
    TAssetType[TAssetType["SCRIPT"] = ASSET_TYPE_SCRIPT()] = "SCRIPT";
    TAssetType[TAssetType["DATA"] = ASSET_TYPE_DATA()] = "DATA";
})(TAssetType || (TAssetType = {}));
;
var TAssetsManager = /** @class */ (function () {
    function TAssetsManager(nativeObj) {
        this.nativeObj = nativeObj;
    }
    TAssetsManager.instance = function () {
        return new TAssetsManager(assets_manager());
    };
    TAssetsManager.prototype.ref = function (type, name) {
        return new TAssetInfo(assets_manager_ref(this.nativeObj, type, name));
    };
    TAssetsManager.prototype.unref = function (info) {
        return assets_manager_unref(this.nativeObj, info ? info.nativeObj : null);
    };
    return TAssetsManager;
}());
var TColorComponent = /** @class */ (function (_super) {
    __extends(TColorComponent, _super);
    function TColorComponent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TColorComponent.cast = function (widget) {
        return new TColorComponent(color_component_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TColorComponent;
}(TWidget));
var TTimeClock = /** @class */ (function (_super) {
    __extends(TTimeClock, _super);
    function TTimeClock(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TTimeClock.create = function (parent, x, y, w, h) {
        return new TTimeClock(time_clock_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TTimeClock.cast = function (widget) {
        return new TTimeClock(time_clock_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TTimeClock.prototype.setHour = function (hour) {
        return time_clock_set_hour(this.nativeObj, hour);
    };
    TTimeClock.prototype.setMinute = function (minute) {
        return time_clock_set_minute(this.nativeObj, minute);
    };
    TTimeClock.prototype.setSecond = function (second) {
        return time_clock_set_second(this.nativeObj, second);
    };
    TTimeClock.prototype.setHourImage = function (hour) {
        return time_clock_set_hour_image(this.nativeObj, hour);
    };
    TTimeClock.prototype.setMinuteImage = function (minute_image) {
        return time_clock_set_minute_image(this.nativeObj, minute_image);
    };
    TTimeClock.prototype.setSecondImage = function (second_image) {
        return time_clock_set_second_image(this.nativeObj, second_image);
    };
    TTimeClock.prototype.setBgImage = function (bg_image) {
        return time_clock_set_bg_image(this.nativeObj, bg_image);
    };
    TTimeClock.prototype.setImage = function (image) {
        return time_clock_set_image(this.nativeObj, image);
    };
    TTimeClock.prototype.setHourAnchor = function (anchor_x, anchor_y) {
        return time_clock_set_hour_anchor(this.nativeObj, anchor_x, anchor_y);
    };
    TTimeClock.prototype.setMinuteAnchor = function (anchor_x, anchor_y) {
        return time_clock_set_minute_anchor(this.nativeObj, anchor_x, anchor_y);
    };
    TTimeClock.prototype.setSecondAnchor = function (anchor_x, anchor_y) {
        return time_clock_set_second_anchor(this.nativeObj, anchor_x, anchor_y);
    };
    Object.defineProperty(TTimeClock.prototype, "hour", {
        get: function () {
            return time_clock_t_get_prop_hour(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "minute", {
        get: function () {
            return time_clock_t_get_prop_minute(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "second", {
        get: function () {
            return time_clock_t_get_prop_second(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "image", {
        get: function () {
            return time_clock_t_get_prop_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "bgImage", {
        get: function () {
            return time_clock_t_get_prop_bg_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "hourImage", {
        get: function () {
            return time_clock_t_get_prop_hour_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "minuteImage", {
        get: function () {
            return time_clock_t_get_prop_minute_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "secondImage", {
        get: function () {
            return time_clock_t_get_prop_second_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "hourAnchorX", {
        get: function () {
            return time_clock_t_get_prop_hour_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "hourAnchorY", {
        get: function () {
            return time_clock_t_get_prop_hour_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "minuteAnchorX", {
        get: function () {
            return time_clock_t_get_prop_minute_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "minuteAnchorY", {
        get: function () {
            return time_clock_t_get_prop_minute_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "secondAnchorX", {
        get: function () {
            return time_clock_t_get_prop_second_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "secondAnchorY", {
        get: function () {
            return time_clock_t_get_prop_second_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TTimeClock;
}(TWidget));
var TTextSelector = /** @class */ (function (_super) {
    __extends(TTextSelector, _super);
    function TTextSelector(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TTextSelector.create = function (parent, x, y, w, h) {
        return new TTextSelector(text_selector_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TTextSelector.cast = function (widget) {
        return new TTextSelector(text_selector_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TTextSelector.prototype.resetOptions = function () {
        return text_selector_reset_options(this.nativeObj);
    };
    TTextSelector.prototype.countOptions = function () {
        return text_selector_count_options(this.nativeObj);
    };
    TTextSelector.prototype.appendOption = function (value, text) {
        return text_selector_append_option(this.nativeObj, value, text);
    };
    TTextSelector.prototype.setOptions = function (options) {
        return text_selector_set_options(this.nativeObj, options);
    };
    TTextSelector.prototype.setRangeOptions = function (start, nr, step) {
        return text_selector_set_range_options(this.nativeObj, start, nr, step);
    };
    TTextSelector.prototype.getValue = function () {
        return text_selector_get_value(this.nativeObj);
    };
    TTextSelector.prototype.setValue = function (value) {
        return text_selector_set_value(this.nativeObj, value);
    };
    TTextSelector.prototype.getText = function () {
        return text_selector_get_text(this.nativeObj);
    };
    TTextSelector.prototype.setText = function (text) {
        return text_selector_set_text(this.nativeObj, text);
    };
    TTextSelector.prototype.setSelectedIndex = function (index) {
        return text_selector_set_selected_index(this.nativeObj, index);
    };
    TTextSelector.prototype.setVisibleNr = function (visible_nr) {
        return text_selector_set_visible_nr(this.nativeObj, visible_nr);
    };
    Object.defineProperty(TTextSelector.prototype, "visibleNr", {
        get: function () {
            return text_selector_t_get_prop_visible_nr(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTextSelector.prototype, "selectedIndex", {
        get: function () {
            return text_selector_t_get_prop_selected_index(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTextSelector.prototype, "options", {
        get: function () {
            return text_selector_t_get_prop_options(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TTextSelector;
}(TWidget));
var TSwitch = /** @class */ (function (_super) {
    __extends(TSwitch, _super);
    function TSwitch(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TSwitch.create = function (parent, x, y, w, h) {
        return new TSwitch(switch_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TSwitch.prototype.setValue = function (value) {
        return switch_set_value(this.nativeObj, value);
    };
    TSwitch.cast = function (widget) {
        return new TSwitch(switch_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TSwitch.prototype, "value", {
        get: function () {
            return switch_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSwitch.prototype, "maxXoffsetRatio", {
        get: function () {
            return switch_t_get_prop_max_xoffset_ratio(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TSwitch;
}(TWidget));
var TPropChangeEvent = /** @class */ (function (_super) {
    __extends(TPropChangeEvent, _super);
    function TPropChangeEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TPropChangeEvent.cast = function (event) {
        return new TPropChangeEvent(prop_change_event_cast(event ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TPropChangeEvent.prototype, "name", {
        get: function () {
            return prop_change_event_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPropChangeEvent.prototype, "value", {
        get: function () {
            return prop_change_event_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TPropChangeEvent;
}(TEvent));
var TProgressEvent = /** @class */ (function (_super) {
    __extends(TProgressEvent, _super);
    function TProgressEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TProgressEvent.cast = function (event) {
        return new TProgressEvent(progress_event_cast(event ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TProgressEvent.prototype, "percent", {
        get: function () {
            return progress_event_t_get_prop_percent(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TProgressEvent;
}(TEvent));
var TDialog = /** @class */ (function (_super) {
    __extends(TDialog, _super);
    function TDialog(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TDialog.create = function (parent, x, y, w, h) {
        return new TDialog(dialog_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TDialog.createSimple = function (parent, x, y, w, h) {
        return new TDialog(dialog_create_simple(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TDialog.cast = function (widget) {
        return new TDialog(dialog_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TDialog.prototype.getTitle = function () {
        return new TWidget(dialog_get_title(this.nativeObj));
    };
    TDialog.prototype.getClient = function () {
        return new TWidget(dialog_get_client(this.nativeObj));
    };
    TDialog.open = function (name) {
        return new TDialog(dialog_open(name));
    };
    TDialog.prototype.setTitle = function (title) {
        return dialog_set_title(this.nativeObj, title);
    };
    TDialog.prototype.modal = function () {
        return dialog_modal(this.nativeObj);
    };
    TDialog.prototype.quit = function (code) {
        return dialog_quit(this.nativeObj, code);
    };
    TDialog.prototype.isQuited = function () {
        return dialog_is_quited(this.nativeObj);
    };
    TDialog.prototype.isModal = function () {
        return dialog_is_modal(this.nativeObj);
    };
    TDialog.toast = function (text, duration) {
        return dialog_toast(text, duration);
    };
    TDialog.info = function (title, text) {
        return dialog_info(title, text);
    };
    TDialog.warn = function (title, text) {
        return dialog_warn(title, text);
    };
    TDialog.confirm = function (title, text) {
        return dialog_confirm(title, text);
    };
    Object.defineProperty(TDialog.prototype, "highlight", {
        get: function () {
            return dialog_t_get_prop_highlight(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TDialog;
}(TWidget));
var TSlideView = /** @class */ (function (_super) {
    __extends(TSlideView, _super);
    function TSlideView(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TSlideView.create = function (parent, x, y, w, h) {
        return new TSlideView(slide_view_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TSlideView.cast = function (widget) {
        return new TSlideView(slide_view_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TSlideView.prototype.setAutoPlay = function (auto_play) {
        return slide_view_set_auto_play(this.nativeObj, auto_play);
    };
    TSlideView.prototype.setActive = function (index) {
        return slide_view_set_active(this.nativeObj, index);
    };
    TSlideView.prototype.setVertical = function (vertical) {
        return slide_view_set_vertical(this.nativeObj, vertical);
    };
    TSlideView.prototype.setAnimHint = function (anim_hint) {
        return slide_view_set_anim_hint(this.nativeObj, anim_hint);
    };
    TSlideView.prototype.setLoop = function (loop) {
        return slide_view_set_loop(this.nativeObj, loop);
    };
    Object.defineProperty(TSlideView.prototype, "vertical", {
        get: function () {
            return slide_view_t_get_prop_vertical(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideView.prototype, "autoPlay", {
        get: function () {
            return slide_view_t_get_prop_auto_play(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideView.prototype, "loop", {
        get: function () {
            return slide_view_t_get_prop_loop(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideView.prototype, "animHint", {
        get: function () {
            return slide_view_t_get_prop_anim_hint(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TSlideView;
}(TWidget));
var TSlideIndicator = /** @class */ (function (_super) {
    __extends(TSlideIndicator, _super);
    function TSlideIndicator(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TSlideIndicator.create = function (parent, x, y, w, h) {
        return new TSlideIndicator(slide_indicator_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TSlideIndicator.createLinear = function (parent, x, y, w, h) {
        return new TSlideIndicator(slide_indicator_create_linear(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TSlideIndicator.createArc = function (parent, x, y, w, h) {
        return new TSlideIndicator(slide_indicator_create_arc(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TSlideIndicator.cast = function (widget) {
        return new TSlideIndicator(slide_indicator_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TSlideIndicator.prototype.setValue = function (value) {
        return slide_indicator_set_value(this.nativeObj, value);
    };
    TSlideIndicator.prototype.setMax = function (max) {
        return slide_indicator_set_max(this.nativeObj, max);
    };
    TSlideIndicator.prototype.setDefaultPaint = function (default_paint) {
        return slide_indicator_set_default_paint(this.nativeObj, default_paint);
    };
    TSlideIndicator.prototype.setAutoHide = function (auto_hide) {
        return slide_indicator_set_auto_hide(this.nativeObj, auto_hide);
    };
    TSlideIndicator.prototype.setMargin = function (margin) {
        return slide_indicator_set_margin(this.nativeObj, margin);
    };
    TSlideIndicator.prototype.setSpacing = function (spacing) {
        return slide_indicator_set_spacing(this.nativeObj, spacing);
    };
    TSlideIndicator.prototype.setSize = function (size) {
        return slide_indicator_set_size(this.nativeObj, size);
    };
    TSlideIndicator.prototype.setAnchor = function (anchor_x, anchor_y) {
        return slide_indicator_set_anchor(this.nativeObj, anchor_x, anchor_y);
    };
    TSlideIndicator.prototype.setIndicatedTarget = function (indicated_target) {
        return slide_indicator_set_indicated_target(this.nativeObj, indicated_target);
    };
    Object.defineProperty(TSlideIndicator.prototype, "value", {
        get: function () {
            return slide_indicator_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "max", {
        get: function () {
            return slide_indicator_t_get_prop_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "defaultPaint", {
        get: function () {
            return slide_indicator_t_get_prop_default_paint(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "autoHide", {
        get: function () {
            return slide_indicator_t_get_prop_auto_hide(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "margin", {
        get: function () {
            return slide_indicator_t_get_prop_margin(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "spacing", {
        get: function () {
            return slide_indicator_t_get_prop_spacing(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "size", {
        get: function () {
            return slide_indicator_t_get_prop_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "anchorX", {
        get: function () {
            return slide_indicator_t_get_prop_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "anchorY", {
        get: function () {
            return slide_indicator_t_get_prop_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "indicatedTarget", {
        get: function () {
            return slide_indicator_t_get_prop_indicated_target(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TSlideIndicator;
}(TWidget));
var TSlideMenu = /** @class */ (function (_super) {
    __extends(TSlideMenu, _super);
    function TSlideMenu(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TSlideMenu.create = function (parent, x, y, w, h) {
        return new TSlideMenu(slide_menu_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TSlideMenu.cast = function (widget) {
        return new TSlideMenu(slide_menu_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TSlideMenu.prototype.setValue = function (value) {
        return slide_menu_set_value(this.nativeObj, value);
    };
    TSlideMenu.prototype.setAlignV = function (align_v) {
        return slide_menu_set_align_v(this.nativeObj, align_v);
    };
    TSlideMenu.prototype.setMinScale = function (min_scale) {
        return slide_menu_set_min_scale(this.nativeObj, min_scale);
    };
    Object.defineProperty(TSlideMenu.prototype, "value", {
        get: function () {
            return slide_menu_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideMenu.prototype, "alignV", {
        get: function () {
            return slide_menu_t_get_prop_align_v(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideMenu.prototype, "minScale", {
        get: function () {
            return slide_menu_t_get_prop_min_scale(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TSlideMenu;
}(TWidget));
var TScrollView = /** @class */ (function (_super) {
    __extends(TScrollView, _super);
    function TScrollView(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TScrollView.create = function (parent, x, y, w, h) {
        return new TScrollView(scroll_view_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TScrollView.cast = function (widget) {
        return new TScrollView(scroll_view_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TScrollView.prototype.setVirtualW = function (w) {
        return scroll_view_set_virtual_w(this.nativeObj, w);
    };
    TScrollView.prototype.setVirtualH = function (h) {
        return scroll_view_set_virtual_h(this.nativeObj, h);
    };
    TScrollView.prototype.setXslidable = function (xslidable) {
        return scroll_view_set_xslidable(this.nativeObj, xslidable);
    };
    TScrollView.prototype.setYslidable = function (yslidable) {
        return scroll_view_set_yslidable(this.nativeObj, yslidable);
    };
    TScrollView.prototype.setOffset = function (xoffset, yoffset) {
        return scroll_view_set_offset(this.nativeObj, xoffset, yoffset);
    };
    TScrollView.prototype.scrollTo = function (xoffset_end, yoffset_end, duration) {
        return scroll_view_scroll_to(this.nativeObj, xoffset_end, yoffset_end, duration);
    };
    TScrollView.prototype.scrollDeltaTo = function (xoffset_delta, yoffset_delta, duration) {
        return scroll_view_scroll_delta_to(this.nativeObj, xoffset_delta, yoffset_delta, duration);
    };
    Object.defineProperty(TScrollView.prototype, "virtualW", {
        get: function () {
            return scroll_view_t_get_prop_virtual_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollView.prototype, "virtualH", {
        get: function () {
            return scroll_view_t_get_prop_virtual_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollView.prototype, "xoffset", {
        get: function () {
            return scroll_view_t_get_prop_xoffset(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollView.prototype, "yoffset", {
        get: function () {
            return scroll_view_t_get_prop_yoffset(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollView.prototype, "xslidable", {
        get: function () {
            return scroll_view_t_get_prop_xslidable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollView.prototype, "yslidable", {
        get: function () {
            return scroll_view_t_get_prop_yslidable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TScrollView;
}(TWidget));
var TScrollBar = /** @class */ (function (_super) {
    __extends(TScrollBar, _super);
    function TScrollBar(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TScrollBar.create = function (parent, x, y, w, h) {
        return new TScrollBar(scroll_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TScrollBar.cast = function (widget) {
        return new TScrollBar(scroll_bar_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TScrollBar.createMobile = function (parent, x, y, w, h) {
        return new TScrollBar(scroll_bar_create_mobile(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TScrollBar.createDesktop = function (parent, x, y, w, h) {
        return new TScrollBar(scroll_bar_create_desktop(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TScrollBar.prototype.setParams = function (virtual_size, row) {
        return scroll_bar_set_params(this.nativeObj, virtual_size, row);
    };
    TScrollBar.prototype.scrollTo = function (value, duration) {
        return scroll_bar_scroll_to(this.nativeObj, value, duration);
    };
    TScrollBar.prototype.setValue = function (value) {
        return scroll_bar_set_value(this.nativeObj, value);
    };
    TScrollBar.prototype.addDelta = function (delta) {
        return scroll_bar_add_delta(this.nativeObj, delta);
    };
    TScrollBar.prototype.scrollDelta = function (delta) {
        return scroll_bar_scroll_delta(this.nativeObj, delta);
    };
    TScrollBar.prototype.setValueOnly = function (value) {
        return scroll_bar_set_value_only(this.nativeObj, value);
    };
    TScrollBar.prototype.isMobile = function () {
        return scroll_bar_is_mobile(this.nativeObj);
    };
    Object.defineProperty(TScrollBar.prototype, "virtualSize", {
        get: function () {
            return scroll_bar_t_get_prop_virtual_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollBar.prototype, "value", {
        get: function () {
            return scroll_bar_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollBar.prototype, "row", {
        get: function () {
            return scroll_bar_t_get_prop_row(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollBar.prototype, "animatable", {
        get: function () {
            return scroll_bar_t_get_prop_animatable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TScrollBar;
}(TWidget));
var TView = /** @class */ (function (_super) {
    __extends(TView, _super);
    function TView(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TView.create = function (parent, x, y, w, h) {
        return new TView(view_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TView.cast = function (widget) {
        return new TView(view_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TView;
}(TWidget));
var TListView = /** @class */ (function (_super) {
    __extends(TListView, _super);
    function TListView(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TListView.create = function (parent, x, y, w, h) {
        return new TListView(list_view_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TListView.prototype.setItemHeight = function (item_height) {
        return list_view_set_item_height(this.nativeObj, item_height);
    };
    TListView.prototype.setDefaultItemHeight = function (default_item_height) {
        return list_view_set_default_item_height(this.nativeObj, default_item_height);
    };
    TListView.prototype.setAutoHideScrollBar = function (auto_hide_scroll_bar) {
        return list_view_set_auto_hide_scroll_bar(this.nativeObj, auto_hide_scroll_bar);
    };
    TListView.cast = function (widget) {
        return new TListView(list_view_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TListView.prototype, "itemHeight", {
        get: function () {
            return list_view_t_get_prop_item_height(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TListView.prototype, "defaultItemHeight", {
        get: function () {
            return list_view_t_get_prop_default_item_height(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TListView.prototype, "autoHideScrollBar", {
        get: function () {
            return list_view_t_get_prop_auto_hide_scroll_bar(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TListView;
}(TWidget));
var TListViewH = /** @class */ (function (_super) {
    __extends(TListViewH, _super);
    function TListViewH(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TListViewH.create = function (parent, x, y, w, h) {
        return new TListViewH(list_view_h_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TListViewH.prototype.setItemWidth = function (item_width) {
        return list_view_h_set_item_width(this.nativeObj, item_width);
    };
    TListViewH.prototype.setSpacing = function (spacing) {
        return list_view_h_set_spacing(this.nativeObj, spacing);
    };
    TListViewH.cast = function (widget) {
        return new TListViewH(list_view_h_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TListViewH.prototype, "itemWidth", {
        get: function () {
            return list_view_h_t_get_prop_item_width(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TListViewH.prototype, "spacing", {
        get: function () {
            return list_view_h_t_get_prop_spacing(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TListViewH;
}(TWidget));
var TTabControl = /** @class */ (function (_super) {
    __extends(TTabControl, _super);
    function TTabControl(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TTabControl.create = function (parent, x, y, w, h) {
        return new TTabControl(tab_control_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TTabControl.cast = function (widget) {
        return new TTabControl(tab_control_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TTabControl;
}(TWidget));
var TTabButton = /** @class */ (function (_super) {
    __extends(TTabButton, _super);
    function TTabButton(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TTabButton.create = function (parent, x, y, w, h) {
        return new TTabButton(tab_button_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TTabButton.cast = function (widget) {
        return new TTabButton(tab_button_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TTabButton.prototype.setValue = function (value) {
        return tab_button_set_value(this.nativeObj, value);
    };
    TTabButton.prototype.setIcon = function (name) {
        return tab_button_set_icon(this.nativeObj, name);
    };
    TTabButton.prototype.setActiveIcon = function (name) {
        return tab_button_set_active_icon(this.nativeObj, name);
    };
    Object.defineProperty(TTabButton.prototype, "value", {
        get: function () {
            return tab_button_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTabButton.prototype, "activeIcon", {
        get: function () {
            return tab_button_t_get_prop_active_icon(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTabButton.prototype, "icon", {
        get: function () {
            return tab_button_t_get_prop_icon(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TTabButton;
}(TWidget));
var TListItem = /** @class */ (function (_super) {
    __extends(TListItem, _super);
    function TListItem(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TListItem.create = function (parent, x, y, w, h) {
        return new TListItem(list_item_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TListItem.cast = function (widget) {
        return new TListItem(list_item_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TListItem;
}(TWidget));
var THscrollLabel = /** @class */ (function (_super) {
    __extends(THscrollLabel, _super);
    function THscrollLabel(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    THscrollLabel.create = function (parent, x, y, w, h) {
        return new THscrollLabel(hscroll_label_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    THscrollLabel.prototype.setLull = function (lull) {
        return hscroll_label_set_lull(this.nativeObj, lull);
    };
    THscrollLabel.prototype.setDuration = function (duration) {
        return hscroll_label_set_duration(this.nativeObj, duration);
    };
    THscrollLabel.prototype.setOnlyFocus = function (only_focus) {
        return hscroll_label_set_only_focus(this.nativeObj, only_focus);
    };
    THscrollLabel.prototype.setOnlyParentFocus = function (only_parent_focus) {
        return hscroll_label_set_only_parent_focus(this.nativeObj, only_parent_focus);
    };
    THscrollLabel.prototype.setLoop = function (loop) {
        return hscroll_label_set_loop(this.nativeObj, loop);
    };
    THscrollLabel.prototype.setYoyo = function (yoyo) {
        return hscroll_label_set_yoyo(this.nativeObj, yoyo);
    };
    THscrollLabel.prototype.setEllipses = function (ellipses) {
        return hscroll_label_set_ellipses(this.nativeObj, ellipses);
    };
    THscrollLabel.prototype.setXoffset = function (xoffset) {
        return hscroll_label_set_xoffset(this.nativeObj, xoffset);
    };
    THscrollLabel.prototype.start = function () {
        return hscroll_label_start(this.nativeObj);
    };
    THscrollLabel.prototype.stop = function () {
        return hscroll_label_stop(this.nativeObj);
    };
    THscrollLabel.cast = function (widget) {
        return new THscrollLabel(hscroll_label_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(THscrollLabel.prototype, "onlyFocus", {
        get: function () {
            return hscroll_label_t_get_prop_only_focus(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "onlyParentFocus", {
        get: function () {
            return hscroll_label_t_get_prop_only_parent_focus(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "loop", {
        get: function () {
            return hscroll_label_t_get_prop_loop(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "yoyo", {
        get: function () {
            return hscroll_label_t_get_prop_yoyo(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "ellipses", {
        get: function () {
            return hscroll_label_t_get_prop_ellipses(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "lull", {
        get: function () {
            return hscroll_label_t_get_prop_lull(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "duration", {
        get: function () {
            return hscroll_label_t_get_prop_duration(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "xoffset", {
        get: function () {
            return hscroll_label_t_get_prop_xoffset(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "textW", {
        get: function () {
            return hscroll_label_t_get_prop_text_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return THscrollLabel;
}(TWidget));
var TRichText = /** @class */ (function (_super) {
    __extends(TRichText, _super);
    function TRichText(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TRichText.create = function (parent, x, y, w, h) {
        return new TRichText(rich_text_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TRichText.prototype.setText = function (text) {
        return rich_text_set_text(this.nativeObj, text);
    };
    TRichText.cast = function (widget) {
        return new TRichText(rich_text_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TRichText.prototype, "lineGap", {
        get: function () {
            return rich_text_t_get_prop_line_gap(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TRichText;
}(TWidget));
var TProgressCircle = /** @class */ (function (_super) {
    __extends(TProgressCircle, _super);
    function TProgressCircle(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TProgressCircle.create = function (parent, x, y, w, h) {
        return new TProgressCircle(progress_circle_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TProgressCircle.cast = function (widget) {
        return new TProgressCircle(progress_circle_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TProgressCircle.prototype.setValue = function (value) {
        return progress_circle_set_value(this.nativeObj, value);
    };
    TProgressCircle.prototype.setMax = function (max) {
        return progress_circle_set_max(this.nativeObj, max);
    };
    TProgressCircle.prototype.setLineWidth = function (line_width) {
        return progress_circle_set_line_width(this.nativeObj, line_width);
    };
    TProgressCircle.prototype.setStartAngle = function (start_angle) {
        return progress_circle_set_start_angle(this.nativeObj, start_angle);
    };
    TProgressCircle.prototype.setUnit = function (unit) {
        return progress_circle_set_unit(this.nativeObj, unit);
    };
    TProgressCircle.prototype.setShowText = function (show_text) {
        return progress_circle_set_show_text(this.nativeObj, show_text);
    };
    TProgressCircle.prototype.setCounterClockWise = function (counter_clock_wise) {
        return progress_circle_set_counter_clock_wise(this.nativeObj, counter_clock_wise);
    };
    Object.defineProperty(TProgressCircle.prototype, "value", {
        get: function () {
            return progress_circle_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressCircle.prototype, "max", {
        get: function () {
            return progress_circle_t_get_prop_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressCircle.prototype, "startAngle", {
        get: function () {
            return progress_circle_t_get_prop_start_angle(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressCircle.prototype, "lineWidth", {
        get: function () {
            return progress_circle_t_get_prop_line_width(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressCircle.prototype, "unit", {
        get: function () {
            return progress_circle_t_get_prop_unit(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressCircle.prototype, "counterClockWise", {
        get: function () {
            return progress_circle_t_get_prop_counter_clock_wise(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressCircle.prototype, "showText", {
        get: function () {
            return progress_circle_t_get_prop_show_text(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TProgressCircle;
}(TWidget));
var TTabButtonGroup = /** @class */ (function (_super) {
    __extends(TTabButtonGroup, _super);
    function TTabButtonGroup(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TTabButtonGroup.create = function (parent, x, y, w, h) {
        return new TTabButtonGroup(tab_button_group_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TTabButtonGroup.prototype.setCompact = function (compact) {
        return tab_button_group_set_compact(this.nativeObj, compact);
    };
    TTabButtonGroup.prototype.setScrollable = function (scrollable) {
        return tab_button_group_set_scrollable(this.nativeObj, scrollable);
    };
    TTabButtonGroup.cast = function (widget) {
        return new TTabButtonGroup(tab_button_group_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TTabButtonGroup.prototype, "compact", {
        get: function () {
            return tab_button_group_t_get_prop_compact(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTabButtonGroup.prototype, "scrollable", {
        get: function () {
            return tab_button_group_t_get_prop_scrollable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TTabButtonGroup;
}(TWidget));
var TMledit = /** @class */ (function (_super) {
    __extends(TMledit, _super);
    function TMledit(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TMledit.create = function (parent, x, y, w, h) {
        return new TMledit(mledit_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TMledit.prototype.setReadonly = function (readonly) {
        return mledit_set_readonly(this.nativeObj, readonly);
    };
    TMledit.prototype.setFocus = function (focus) {
        return mledit_set_focus(this.nativeObj, focus);
    };
    TMledit.prototype.setWrapWord = function (wrap_word) {
        return mledit_set_wrap_word(this.nativeObj, wrap_word);
    };
    TMledit.prototype.setMaxLines = function (max_lines) {
        return mledit_set_max_lines(this.nativeObj, max_lines);
    };
    TMledit.prototype.setInputTips = function (tips) {
        return mledit_set_input_tips(this.nativeObj, tips);
    };
    TMledit.prototype.setCursor = function (cursor) {
        return mledit_set_cursor(this.nativeObj, cursor);
    };
    TMledit.prototype.setScrollLine = function (scroll_line) {
        return mledit_set_scroll_line(this.nativeObj, scroll_line);
    };
    TMledit.cast = function (widget) {
        return new TMledit(mledit_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TMledit.prototype, "readonly", {
        get: function () {
            return mledit_t_get_prop_readonly(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TMledit.prototype, "tips", {
        get: function () {
            return mledit_t_get_prop_tips(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TMledit.prototype, "wrapWord", {
        get: function () {
            return mledit_t_get_prop_wrap_word(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TMledit.prototype, "maxLines", {
        get: function () {
            return mledit_t_get_prop_max_lines(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TMledit.prototype, "scrollLine", {
        get: function () {
            return mledit_t_get_prop_scroll_line(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TMledit;
}(TWidget));
var TSlider = /** @class */ (function (_super) {
    __extends(TSlider, _super);
    function TSlider(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TSlider.create = function (parent, x, y, w, h) {
        return new TSlider(slider_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TSlider.cast = function (widget) {
        return new TSlider(slider_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TSlider.prototype.setValue = function (value) {
        return slider_set_value(this.nativeObj, value);
    };
    TSlider.prototype.setMin = function (min) {
        return slider_set_min(this.nativeObj, min);
    };
    TSlider.prototype.setMax = function (max) {
        return slider_set_max(this.nativeObj, max);
    };
    TSlider.prototype.setStep = function (step) {
        return slider_set_step(this.nativeObj, step);
    };
    TSlider.prototype.setBarSize = function (bar_size) {
        return slider_set_bar_size(this.nativeObj, bar_size);
    };
    TSlider.prototype.setVertical = function (vertical) {
        return slider_set_vertical(this.nativeObj, vertical);
    };
    Object.defineProperty(TSlider.prototype, "value", {
        get: function () {
            return slider_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlider.prototype, "min", {
        get: function () {
            return slider_t_get_prop_min(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlider.prototype, "max", {
        get: function () {
            return slider_t_get_prop_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlider.prototype, "step", {
        get: function () {
            return slider_t_get_prop_step(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlider.prototype, "vertical", {
        get: function () {
            return slider_t_get_prop_vertical(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlider.prototype, "barSize", {
        get: function () {
            return slider_t_get_prop_bar_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TSlider;
}(TWidget));
var TRow = /** @class */ (function (_super) {
    __extends(TRow, _super);
    function TRow(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TRow.create = function (parent, x, y, w, h) {
        return new TRow(row_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TRow.cast = function (widget) {
        return new TRow(row_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TRow;
}(TWidget));
var TObject = /** @class */ (function (_super) {
    __extends(TObject, _super);
    function TObject(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TObject.prototype.unref = function () {
        return object_unref(this.nativeObj);
    };
    TObject.ref = function (obj) {
        return new TObject(object_ref(obj ? obj.nativeObj : null));
    };
    TObject.prototype.getType = function () {
        return object_get_type(this.nativeObj);
    };
    TObject.prototype.getDesc = function () {
        return object_get_desc(this.nativeObj);
    };
    TObject.prototype.getSize = function () {
        return object_get_size(this.nativeObj);
    };
    TObject.prototype.isCollection = function () {
        return object_is_collection(this.nativeObj);
    };
    TObject.prototype.setName = function (name) {
        return object_set_name(this.nativeObj, name);
    };
    TObject.prototype.compare = function (other) {
        return object_compare(this.nativeObj, other ? other.nativeObj : null);
    };
    TObject.prototype.getProp = function (name, v) {
        return object_get_prop(this.nativeObj, name, v ? v.nativeObj : null);
    };
    TObject.prototype.getPropStr = function (name) {
        return object_get_prop_str(this.nativeObj, name);
    };
    TObject.prototype.getPropPointer = function (name) {
        return object_get_prop_pointer(this.nativeObj, name);
    };
    TObject.prototype.getPropObject = function (name) {
        return new TObject(object_get_prop_object(this.nativeObj, name));
    };
    TObject.prototype.getPropInt = function (name, defval) {
        return object_get_prop_int(this.nativeObj, name, defval);
    };
    TObject.prototype.getPropBool = function (name, defval) {
        return object_get_prop_bool(this.nativeObj, name, defval);
    };
    TObject.prototype.getPropFloat = function (name, defval) {
        return object_get_prop_float(this.nativeObj, name, defval);
    };
    TObject.prototype.removeProp = function (name) {
        return object_remove_prop(this.nativeObj, name);
    };
    TObject.prototype.setProp = function (name, value) {
        return object_set_prop(this.nativeObj, name, value ? value.nativeObj : null);
    };
    TObject.prototype.setPropStr = function (name, value) {
        return object_set_prop_str(this.nativeObj, name, value);
    };
    TObject.prototype.setPropPointer = function (name, value) {
        return object_set_prop_pointer(this.nativeObj, name, value);
    };
    TObject.prototype.setPropObject = function (name, value) {
        return object_set_prop_object(this.nativeObj, name, value ? value.nativeObj : null);
    };
    TObject.prototype.setPropInt = function (name, value) {
        return object_set_prop_int(this.nativeObj, name, value);
    };
    TObject.prototype.setPropBool = function (name, value) {
        return object_set_prop_bool(this.nativeObj, name, value);
    };
    TObject.prototype.setPropFloat = function (name, value) {
        return object_set_prop_float(this.nativeObj, name, value);
    };
    TObject.prototype.copyProp = function (src, name) {
        return object_copy_prop(this.nativeObj, src ? src.nativeObj : null, name);
    };
    TObject.prototype.foreachProp = function (on_prop, ctx) {
        return object_foreach_prop(this.nativeObj, on_prop, ctx);
    };
    TObject.prototype.hasProp = function (name) {
        return object_has_prop(this.nativeObj, name);
    };
    TObject.prototype.eval = function (expr, v) {
        return object_eval(this.nativeObj, expr, v ? v.nativeObj : null);
    };
    TObject.prototype.canExec = function (name, args) {
        return object_can_exec(this.nativeObj, name, args);
    };
    TObject.prototype.exec = function (name, args) {
        return object_exec(this.nativeObj, name, args);
    };
    TObject.prototype.notifyChanged = function () {
        return object_notify_changed(this.nativeObj);
    };
    TObject.prototype.getPropStrByPath = function (path) {
        return object_get_prop_str_by_path(this.nativeObj, path);
    };
    TObject.prototype.getPropPointerByPath = function (path) {
        return object_get_prop_pointer_by_path(this.nativeObj, path);
    };
    TObject.prototype.getPropObjectByPath = function (path) {
        return new TObject(object_get_prop_object_by_path(this.nativeObj, path));
    };
    TObject.prototype.getPropIntByPath = function (path, defval) {
        return object_get_prop_int_by_path(this.nativeObj, path, defval);
    };
    TObject.prototype.getPropBoolByPath = function (path, defval) {
        return object_get_prop_bool_by_path(this.nativeObj, path, defval);
    };
    TObject.prototype.getPropFloatByPath = function (path, defval) {
        return object_get_prop_float_by_path(this.nativeObj, path, defval);
    };
    Object.defineProperty(TObject.prototype, "refCount", {
        get: function () {
            return object_t_get_prop_ref_count(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TObject.prototype, "name", {
        get: function () {
            return object_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TObject;
}(TEmitter));
var TProgressBar = /** @class */ (function (_super) {
    __extends(TProgressBar, _super);
    function TProgressBar(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TProgressBar.create = function (parent, x, y, w, h) {
        return new TProgressBar(progress_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TProgressBar.cast = function (widget) {
        return new TProgressBar(progress_bar_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TProgressBar.prototype.setValue = function (value) {
        return progress_bar_set_value(this.nativeObj, value);
    };
    TProgressBar.prototype.setMax = function (max) {
        return progress_bar_set_max(this.nativeObj, max);
    };
    TProgressBar.prototype.setVertical = function (vertical) {
        return progress_bar_set_vertical(this.nativeObj, vertical);
    };
    TProgressBar.prototype.setShowText = function (show_text) {
        return progress_bar_set_show_text(this.nativeObj, show_text);
    };
    TProgressBar.prototype.getPercent = function () {
        return progress_bar_get_percent(this.nativeObj);
    };
    Object.defineProperty(TProgressBar.prototype, "value", {
        get: function () {
            return progress_bar_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressBar.prototype, "max", {
        get: function () {
            return progress_bar_t_get_prop_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressBar.prototype, "vertical", {
        get: function () {
            return progress_bar_t_get_prop_vertical(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressBar.prototype, "showText", {
        get: function () {
            return progress_bar_t_get_prop_show_text(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TProgressBar;
}(TWidget));
var TLineNumber = /** @class */ (function (_super) {
    __extends(TLineNumber, _super);
    function TLineNumber(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TLineNumber.create = function (parent, x, y, w, h) {
        return new TLineNumber(line_number_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TLineNumber.prototype.setTopMargin = function (top_margin) {
        return line_number_set_top_margin(this.nativeObj, top_margin);
    };
    TLineNumber.prototype.setBottomMargin = function (bottom_margin) {
        return line_number_set_bottom_margin(this.nativeObj, bottom_margin);
    };
    TLineNumber.prototype.setLineHeight = function (line_height) {
        return line_number_set_line_height(this.nativeObj, line_height);
    };
    TLineNumber.prototype.setYoffset = function (yoffset) {
        return line_number_set_yoffset(this.nativeObj, yoffset);
    };
    TLineNumber.cast = function (widget) {
        return new TLineNumber(line_number_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TLineNumber;
}(TWidget));
var TKeyboard = /** @class */ (function (_super) {
    __extends(TKeyboard, _super);
    function TKeyboard(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TKeyboard.create = function (parent, x, y, w, h) {
        return new TKeyboard(keyboard_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TKeyboard.cast = function (widget) {
        return new TKeyboard(keyboard_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TKeyboard;
}(TWidget));
var TImageValue = /** @class */ (function (_super) {
    __extends(TImageValue, _super);
    function TImageValue(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TImageValue.create = function (parent, x, y, w, h) {
        return new TImageValue(image_value_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TImageValue.prototype.setImage = function (image) {
        return image_value_set_image(this.nativeObj, image);
    };
    TImageValue.prototype.setFormat = function (format) {
        return image_value_set_format(this.nativeObj, format);
    };
    TImageValue.prototype.setValue = function (value) {
        return image_value_set_value(this.nativeObj, value);
    };
    TImageValue.cast = function (widget) {
        return new TImageValue(image_value_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TImageValue.prototype, "image", {
        get: function () {
            return image_value_t_get_prop_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageValue.prototype, "format", {
        get: function () {
            return image_value_t_get_prop_format(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageValue.prototype, "value", {
        get: function () {
            return image_value_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TImageValue;
}(TWidget));
var TImageAnimation = /** @class */ (function (_super) {
    __extends(TImageAnimation, _super);
    function TImageAnimation(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TImageAnimation.create = function (parent, x, y, w, h) {
        return new TImageAnimation(image_animation_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TImageAnimation.prototype.setLoop = function (loop) {
        return image_animation_set_loop(this.nativeObj, loop);
    };
    TImageAnimation.prototype.setImage = function (image) {
        return image_animation_set_image(this.nativeObj, image);
    };
    TImageAnimation.prototype.setInterval = function (interval) {
        return image_animation_set_interval(this.nativeObj, interval);
    };
    TImageAnimation.prototype.setDelay = function (delay) {
        return image_animation_set_delay(this.nativeObj, delay);
    };
    TImageAnimation.prototype.setAutoPlay = function (auto_play) {
        return image_animation_set_auto_play(this.nativeObj, auto_play);
    };
    TImageAnimation.prototype.setSequence = function (sequence) {
        return image_animation_set_sequence(this.nativeObj, sequence);
    };
    TImageAnimation.prototype.setRangeSequence = function (start_index, end_index) {
        return image_animation_set_range_sequence(this.nativeObj, start_index, end_index);
    };
    TImageAnimation.prototype.play = function () {
        return image_animation_play(this.nativeObj);
    };
    TImageAnimation.prototype.stop = function () {
        return image_animation_stop(this.nativeObj);
    };
    TImageAnimation.prototype.pause = function () {
        return image_animation_pause(this.nativeObj);
    };
    TImageAnimation.prototype.next = function () {
        return image_animation_next(this.nativeObj);
    };
    TImageAnimation.prototype.setFormat = function (format) {
        return image_animation_set_format(this.nativeObj, format);
    };
    TImageAnimation.prototype.setUnloadAfterPaint = function (unload_after_paint) {
        return image_animation_set_unload_after_paint(this.nativeObj, unload_after_paint);
    };
    TImageAnimation.cast = function (widget) {
        return new TImageAnimation(image_animation_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TImageAnimation.prototype, "image", {
        get: function () {
            return image_animation_t_get_prop_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "sequence", {
        get: function () {
            return image_animation_t_get_prop_sequence(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "startIndex", {
        get: function () {
            return image_animation_t_get_prop_start_index(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "endIndex", {
        get: function () {
            return image_animation_t_get_prop_end_index(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "loop", {
        get: function () {
            return image_animation_t_get_prop_loop(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "autoPlay", {
        get: function () {
            return image_animation_t_get_prop_auto_play(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "unloadAfterPaint", {
        get: function () {
            return image_animation_t_get_prop_unload_after_paint(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "format", {
        get: function () {
            return image_animation_t_get_prop_format(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "interval", {
        get: function () {
            return image_animation_t_get_prop_interval(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "delay", {
        get: function () {
            return image_animation_t_get_prop_delay(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TImageAnimation;
}(TWidget));
var TGuage = /** @class */ (function (_super) {
    __extends(TGuage, _super);
    function TGuage(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TGuage.create = function (parent, x, y, w, h) {
        return new TGuage(guage_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TGuage.cast = function (widget) {
        return new TGuage(guage_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TGuage.prototype.setImage = function (name) {
        return guage_set_image(this.nativeObj, name);
    };
    TGuage.prototype.setDrawType = function (draw_type) {
        return guage_set_draw_type(this.nativeObj, draw_type);
    };
    Object.defineProperty(TGuage.prototype, "image", {
        get: function () {
            return guage_t_get_prop_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TGuage.prototype, "drawType", {
        get: function () {
            return guage_t_get_prop_draw_type(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TGuage;
}(TWidget));
var TGuagePointer = /** @class */ (function (_super) {
    __extends(TGuagePointer, _super);
    function TGuagePointer(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TGuagePointer.create = function (parent, x, y, w, h) {
        return new TGuagePointer(guage_pointer_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TGuagePointer.cast = function (widget) {
        return new TGuagePointer(guage_pointer_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TGuagePointer.prototype.setAngle = function (angle) {
        return guage_pointer_set_angle(this.nativeObj, angle);
    };
    TGuagePointer.prototype.setImage = function (image) {
        return guage_pointer_set_image(this.nativeObj, image);
    };
    TGuagePointer.prototype.setAnchor = function (anchor_x, anchor_y) {
        return guage_pointer_set_anchor(this.nativeObj, anchor_x, anchor_y);
    };
    Object.defineProperty(TGuagePointer.prototype, "angle", {
        get: function () {
            return guage_pointer_t_get_prop_angle(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TGuagePointer.prototype, "image", {
        get: function () {
            return guage_pointer_t_get_prop_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TGuagePointer.prototype, "anchorX", {
        get: function () {
            return guage_pointer_t_get_prop_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TGuagePointer.prototype, "anchorY", {
        get: function () {
            return guage_pointer_t_get_prop_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TGuagePointer;
}(TWidget));
var TPopup = /** @class */ (function (_super) {
    __extends(TPopup, _super);
    function TPopup(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TPopup.create = function (parent, x, y, w, h) {
        return new TPopup(popup_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TPopup.cast = function (widget) {
        return new TPopup(popup_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TPopup.prototype.setCloseWhenClick = function (close_when_click) {
        return popup_set_close_when_click(this.nativeObj, close_when_click);
    };
    TPopup.prototype.setCloseWhenClickOutside = function (close_when_click_outside) {
        return popup_set_close_when_click_outside(this.nativeObj, close_when_click_outside);
    };
    Object.defineProperty(TPopup.prototype, "closeWhenClick", {
        get: function () {
            return popup_t_get_prop_close_when_click(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPopup.prototype, "closeWhenClickOutside", {
        get: function () {
            return popup_t_get_prop_close_when_click_outside(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TPopup;
}(TWidget));
var TDraggable = /** @class */ (function (_super) {
    __extends(TDraggable, _super);
    function TDraggable(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TDraggable.create = function (parent, x, y, w, h) {
        return new TDraggable(draggable_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TDraggable.cast = function (widget) {
        return new TDraggable(draggable_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TDraggable.prototype.setTop = function (top) {
        return draggable_set_top(this.nativeObj, top);
    };
    TDraggable.prototype.setBottom = function (bottom) {
        return draggable_set_bottom(this.nativeObj, bottom);
    };
    TDraggable.prototype.setLeft = function (left) {
        return draggable_set_left(this.nativeObj, left);
    };
    TDraggable.prototype.setRight = function (right) {
        return draggable_set_right(this.nativeObj, right);
    };
    TDraggable.prototype.setVerticalOnly = function (vertical_only) {
        return draggable_set_vertical_only(this.nativeObj, vertical_only);
    };
    TDraggable.prototype.setHorizontalOnly = function (horizontal_only) {
        return draggable_set_horizontal_only(this.nativeObj, horizontal_only);
    };
    TDraggable.prototype.setDragWindow = function (drag_window) {
        return draggable_set_drag_window(this.nativeObj, drag_window);
    };
    Object.defineProperty(TDraggable.prototype, "top", {
        get: function () {
            return draggable_t_get_prop_top(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDraggable.prototype, "bottom", {
        get: function () {
            return draggable_t_get_prop_bottom(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDraggable.prototype, "left", {
        get: function () {
            return draggable_t_get_prop_left(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDraggable.prototype, "right", {
        get: function () {
            return draggable_t_get_prop_right(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDraggable.prototype, "verticalOnly", {
        get: function () {
            return draggable_t_get_prop_vertical_only(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDraggable.prototype, "horizontalOnly", {
        get: function () {
            return draggable_t_get_prop_horizontal_only(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDraggable.prototype, "dragWindow", {
        get: function () {
            return draggable_t_get_prop_drag_window(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TDraggable;
}(TWidget));
var TPages = /** @class */ (function (_super) {
    __extends(TPages, _super);
    function TPages(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TPages.create = function (parent, x, y, w, h) {
        return new TPages(pages_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TPages.cast = function (widget) {
        return new TPages(pages_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TPages.prototype.setActive = function (index) {
        return pages_set_active(this.nativeObj, index);
    };
    TPages.prototype.setActiveByName = function (name) {
        return pages_set_active_by_name(this.nativeObj, name);
    };
    Object.defineProperty(TPages.prototype, "active", {
        get: function () {
            return pages_t_get_prop_active(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TPages;
}(TWidget));
var TColorPicker = /** @class */ (function (_super) {
    __extends(TColorPicker, _super);
    function TColorPicker(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TColorPicker.create = function (parent, x, y, w, h) {
        return new TColorPicker(color_picker_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TColorPicker.prototype.setColor = function (color) {
        return color_picker_set_color(this.nativeObj, color);
    };
    TColorPicker.cast = function (widget) {
        return new TColorPicker(color_picker_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TColorPicker.prototype, "value", {
        get: function () {
            return color_picker_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TColorPicker;
}(TWidget));
var TCanvasWidget = /** @class */ (function (_super) {
    __extends(TCanvasWidget, _super);
    function TCanvasWidget(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TCanvasWidget.create = function (parent, x, y, w, h) {
        return new TCanvasWidget(canvas_widget_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TCanvasWidget.cast = function (widget) {
        return new TCanvasWidget(canvas_widget_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TCanvasWidget;
}(TWidget));
var TOverlay = /** @class */ (function (_super) {
    __extends(TOverlay, _super);
    function TOverlay(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TOverlay.create = function (parent, x, y, w, h) {
        return new TOverlay(overlay_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TOverlay.cast = function (widget) {
        return new TOverlay(overlay_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TOverlay;
}(TWidget));
var TWindow = /** @class */ (function (_super) {
    __extends(TWindow, _super);
    function TWindow(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TWindow.create = function (parent, x, y, w, h) {
        return new TWindow(window_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TWindow.prototype.setFullscreen = function (fullscreen) {
        return window_set_fullscreen(this.nativeObj, fullscreen);
    };
    TWindow.open = function (name) {
        return new TWindow(window_open(name));
    };
    TWindow.openAndClose = function (name, to_close) {
        return new TWindow(window_open_and_close(name, to_close ? to_close.nativeObj : null));
    };
    TWindow.prototype.close = function () {
        return window_close(this.nativeObj);
    };
    TWindow.prototype.closeForce = function () {
        return window_close_force(this.nativeObj);
    };
    TWindow.cast = function (widget) {
        return new TWindow(window_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TWindow.prototype, "fullscreen", {
        get: function () {
            return window_t_get_prop_fullscreen(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TWindow;
}(TWidget));
var TWindowManager = /** @class */ (function (_super) {
    __extends(TWindowManager, _super);
    function TWindowManager(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TWindowManager.instance = function () {
        return new TWindowManager(window_manager());
    };
    TWindowManager.cast = function (widget) {
        return new TWindowManager(window_manager_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TWindowManager.prototype.getTopMainWindow = function () {
        return new TWidget(window_manager_get_top_main_window(this.nativeObj));
    };
    TWindowManager.prototype.getTopWindow = function () {
        return new TWidget(window_manager_get_top_window(this.nativeObj));
    };
    TWindowManager.prototype.getPrevWindow = function () {
        return new TWidget(window_manager_get_prev_window(this.nativeObj));
    };
    TWindowManager.prototype.getPointerX = function () {
        return window_manager_get_pointer_x(this.nativeObj);
    };
    TWindowManager.prototype.getPointerY = function () {
        return window_manager_get_pointer_y(this.nativeObj);
    };
    TWindowManager.prototype.getPointerPressed = function () {
        return window_manager_get_pointer_pressed(this.nativeObj);
    };
    TWindowManager.prototype.setShowFps = function (show_fps) {
        return window_manager_set_show_fps(this.nativeObj, show_fps);
    };
    TWindowManager.prototype.setScreenSaverTime = function (screen_saver_time) {
        return window_manager_set_screen_saver_time(this.nativeObj, screen_saver_time);
    };
    TWindowManager.prototype.setCursor = function (cursor) {
        return window_manager_set_cursor(this.nativeObj, cursor);
    };
    TWindowManager.prototype.back = function () {
        return window_manager_back(this.nativeObj);
    };
    TWindowManager.prototype.backToHome = function () {
        return window_manager_back_to_home(this.nativeObj);
    };
    return TWindowManager;
}(TWidget));
var TWindowBase = /** @class */ (function (_super) {
    __extends(TWindowBase, _super);
    function TWindowBase(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TWindowBase.cast = function (widget) {
        return new TWindowBase(window_base_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TWindowBase.prototype, "theme", {
        get: function () {
            return window_base_t_get_prop_theme(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWindowBase.prototype, "closable", {
        get: function () {
            return window_base_t_get_prop_closable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TWindowBase;
}(TWidget));
var TLabel = /** @class */ (function (_super) {
    __extends(TLabel, _super);
    function TLabel(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TLabel.create = function (parent, x, y, w, h) {
        return new TLabel(label_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TLabel.prototype.setLength = function (length) {
        return label_set_length(this.nativeObj, length);
    };
    TLabel.prototype.resizeToContent = function (min_w, max_w, min_h, max_h) {
        return label_resize_to_content(this.nativeObj, min_w, max_w, min_h, max_h);
    };
    TLabel.cast = function (widget) {
        return new TLabel(label_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TLabel.prototype, "length", {
        get: function () {
            return label_t_get_prop_length(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TLabel;
}(TWidget));
var TStyleMutable = /** @class */ (function (_super) {
    __extends(TStyleMutable, _super);
    function TStyleMutable(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TStyleMutable.prototype.getName = function () {
        return style_mutable_get_name(this.nativeObj);
    };
    TStyleMutable.prototype.setName = function (name) {
        return style_mutable_set_name(this.nativeObj, name);
    };
    TStyleMutable.prototype.setInt = function (state, name, val) {
        return style_mutable_set_int(this.nativeObj, state, name, val);
    };
    TStyleMutable.cast = function (s) {
        return new TStyleMutable(style_mutable_cast(s ? (s.nativeObj || s) : null));
    };
    TStyleMutable.create = function (widget, default_style) {
        return new TStyleMutable(style_mutable_create(widget ? widget.nativeObj : null, default_style ? default_style.nativeObj : null));
    };
    Object.defineProperty(TStyleMutable.prototype, "name", {
        get: function () {
            return style_mutable_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TStyleMutable;
}(TStyle));
var TGroupBox = /** @class */ (function (_super) {
    __extends(TGroupBox, _super);
    function TGroupBox(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TGroupBox.create = function (parent, x, y, w, h) {
        return new TGroupBox(group_box_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TGroupBox.cast = function (widget) {
        return new TGroupBox(group_box_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TGroupBox;
}(TWidget));
var TImageBase = /** @class */ (function (_super) {
    __extends(TImageBase, _super);
    function TImageBase(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TImageBase.prototype.setImage = function (name) {
        return image_base_set_image(this.nativeObj, name);
    };
    TImageBase.prototype.setRotation = function (rotation) {
        return image_base_set_rotation(this.nativeObj, rotation);
    };
    TImageBase.prototype.setScale = function (scale_x, scale_y) {
        return image_base_set_scale(this.nativeObj, scale_x, scale_y);
    };
    TImageBase.prototype.setAnchor = function (anchor_x, anchor_y) {
        return image_base_set_anchor(this.nativeObj, anchor_x, anchor_y);
    };
    TImageBase.prototype.setSelected = function (selected) {
        return image_base_set_selected(this.nativeObj, selected);
    };
    TImageBase.prototype.setSelectable = function (selectable) {
        return image_base_set_selectable(this.nativeObj, selectable);
    };
    TImageBase.prototype.setClickable = function (clickable) {
        return image_base_set_clickable(this.nativeObj, clickable);
    };
    TImageBase.cast = function (widget) {
        return new TImageBase(image_base_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TImageBase.prototype, "image", {
        get: function () {
            return image_base_t_get_prop_image(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "anchorX", {
        get: function () {
            return image_base_t_get_prop_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "anchorY", {
        get: function () {
            return image_base_t_get_prop_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "scaleX", {
        get: function () {
            return image_base_t_get_prop_scale_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "scaleY", {
        get: function () {
            return image_base_t_get_prop_scale_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "rotation", {
        get: function () {
            return image_base_t_get_prop_rotation(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "clickable", {
        get: function () {
            return image_base_t_get_prop_clickable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "selectable", {
        get: function () {
            return image_base_t_get_prop_selectable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "selected", {
        get: function () {
            return image_base_t_get_prop_selected(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TImageBase;
}(TWidget));
var TWindowEvent = /** @class */ (function (_super) {
    __extends(TWindowEvent, _super);
    function TWindowEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TWindowEvent.cast = function (event) {
        return new TWindowEvent(window_event_cast(event ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TWindowEvent.prototype, "window", {
        get: function () {
            return window_event_t_get_prop_window(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TWindowEvent;
}(TEvent));
var TPaintEvent = /** @class */ (function (_super) {
    __extends(TPaintEvent, _super);
    function TPaintEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TPaintEvent.cast = function (event) {
        return new TPaintEvent(paint_event_cast(event ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TPaintEvent.prototype, "c", {
        get: function () {
            return paint_event_t_get_prop_c(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TPaintEvent;
}(TEvent));
var TKeyEvent = /** @class */ (function (_super) {
    __extends(TKeyEvent, _super);
    function TKeyEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TKeyEvent.cast = function (event) {
        return new TKeyEvent(key_event_cast(event ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TKeyEvent.prototype, "key", {
        get: function () {
            return key_event_t_get_prop_key(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "alt", {
        get: function () {
            return key_event_t_get_prop_alt(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "lalt", {
        get: function () {
            return key_event_t_get_prop_lalt(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "ralt", {
        get: function () {
            return key_event_t_get_prop_ralt(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "ctrl", {
        get: function () {
            return key_event_t_get_prop_ctrl(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "lctrl", {
        get: function () {
            return key_event_t_get_prop_lctrl(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "rctrl", {
        get: function () {
            return key_event_t_get_prop_rctrl(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "shift", {
        get: function () {
            return key_event_t_get_prop_shift(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "lshift", {
        get: function () {
            return key_event_t_get_prop_lshift(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "rshift", {
        get: function () {
            return key_event_t_get_prop_rshift(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "cmd", {
        get: function () {
            return key_event_t_get_prop_cmd(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "menu", {
        get: function () {
            return key_event_t_get_prop_menu(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "capslock", {
        get: function () {
            return key_event_t_get_prop_capslock(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TKeyEvent;
}(TEvent));
var TPointerEvent = /** @class */ (function (_super) {
    __extends(TPointerEvent, _super);
    function TPointerEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TPointerEvent.cast = function (event) {
        return new TPointerEvent(pointer_event_cast(event ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TPointerEvent.prototype, "x", {
        get: function () {
            return pointer_event_t_get_prop_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "y", {
        get: function () {
            return pointer_event_t_get_prop_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "button", {
        get: function () {
            return pointer_event_t_get_prop_button(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "pressed", {
        get: function () {
            return pointer_event_t_get_prop_pressed(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "alt", {
        get: function () {
            return pointer_event_t_get_prop_alt(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "ctrl", {
        get: function () {
            return pointer_event_t_get_prop_ctrl(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "cmd", {
        get: function () {
            return pointer_event_t_get_prop_cmd(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "menu", {
        get: function () {
            return pointer_event_t_get_prop_menu(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "shift", {
        get: function () {
            return pointer_event_t_get_prop_shift(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TPointerEvent;
}(TEvent));
var TOrientationEvent = /** @class */ (function (_super) {
    __extends(TOrientationEvent, _super);
    function TOrientationEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TOrientationEvent.cast = function (event) {
        return new TOrientationEvent(orientation_event_cast(event ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TOrientationEvent.prototype, "orientation", {
        get: function () {
            return orientation_event_t_get_prop_orientation(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TOrientationEvent;
}(TEvent));
var TWheelEvent = /** @class */ (function (_super) {
    __extends(TWheelEvent, _super);
    function TWheelEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TWheelEvent.cast = function (event) {
        return new TWheelEvent(wheel_event_cast(event ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TWheelEvent.prototype, "dy", {
        get: function () {
            return wheel_event_t_get_prop_dy(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWheelEvent.prototype, "alt", {
        get: function () {
            return wheel_event_t_get_prop_alt(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWheelEvent.prototype, "ctrl", {
        get: function () {
            return wheel_event_t_get_prop_ctrl(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWheelEvent.prototype, "shift", {
        get: function () {
            return wheel_event_t_get_prop_shift(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TWheelEvent;
}(TEvent));
var TAppBar = /** @class */ (function (_super) {
    __extends(TAppBar, _super);
    function TAppBar(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TAppBar.create = function (parent, x, y, w, h) {
        return new TAppBar(app_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TAppBar.cast = function (widget) {
        return new TAppBar(app_bar_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TAppBar;
}(TWidget));
var TButtonGroup = /** @class */ (function (_super) {
    __extends(TButtonGroup, _super);
    function TButtonGroup(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TButtonGroup.create = function (parent, x, y, w, h) {
        return new TButtonGroup(button_group_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TButtonGroup.cast = function (widget) {
        return new TButtonGroup(button_group_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TButtonGroup;
}(TWidget));
var TButton = /** @class */ (function (_super) {
    __extends(TButton, _super);
    function TButton(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TButton.create = function (parent, x, y, w, h) {
        return new TButton(button_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TButton.cast = function (widget) {
        return new TButton(button_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TButton.prototype.setRepeat = function (repeat) {
        return button_set_repeat(this.nativeObj, repeat);
    };
    TButton.prototype.setEnableLongPress = function (enable_long_press) {
        return button_set_enable_long_press(this.nativeObj, enable_long_press);
    };
    Object.defineProperty(TButton.prototype, "repeat", {
        get: function () {
            return button_t_get_prop_repeat(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TButton.prototype, "enableLongPress", {
        get: function () {
            return button_t_get_prop_enable_long_press(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TButton;
}(TWidget));
var TCheckButton = /** @class */ (function (_super) {
    __extends(TCheckButton, _super);
    function TCheckButton(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TCheckButton.create = function (parent, x, y, w, h) {
        return new TCheckButton(check_button_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TCheckButton.createRadio = function (parent, x, y, w, h) {
        return new TCheckButton(check_button_create_radio(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TCheckButton.prototype.setValue = function (value) {
        return check_button_set_value(this.nativeObj, value);
    };
    TCheckButton.cast = function (widget) {
        return new TCheckButton(check_button_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TCheckButton.prototype, "value", {
        get: function () {
            return check_button_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TCheckButton;
}(TWidget));
var TColorTile = /** @class */ (function (_super) {
    __extends(TColorTile, _super);
    function TColorTile(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TColorTile.create = function (parent, x, y, w, h) {
        return new TColorTile(color_tile_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TColorTile.cast = function (widget) {
        return new TColorTile(color_tile_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TColorTile.prototype.setBgColor = function (color) {
        return color_tile_set_bg_color(this.nativeObj, color);
    };
    Object.defineProperty(TColorTile.prototype, "bgColor", {
        get: function () {
            return color_tile_t_get_prop_bg_color(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TColorTile.prototype, "borderColor", {
        get: function () {
            return color_tile_t_get_prop_border_color(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TColorTile;
}(TWidget));
var TColumn = /** @class */ (function (_super) {
    __extends(TColumn, _super);
    function TColumn(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TColumn.create = function (parent, x, y, w, h) {
        return new TColumn(column_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TColumn.cast = function (widget) {
        return new TColumn(column_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TColumn;
}(TWidget));
var TComboBoxItem = /** @class */ (function (_super) {
    __extends(TComboBoxItem, _super);
    function TComboBoxItem(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TComboBoxItem.create = function (parent, x, y, w, h) {
        return new TComboBoxItem(combo_box_item_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TComboBoxItem.cast = function (widget) {
        return new TComboBoxItem(combo_box_item_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TComboBoxItem.prototype.setChecked = function (checked) {
        return combo_box_item_set_checked(this.nativeObj, checked);
    };
    TComboBoxItem.prototype.setValue = function (value) {
        return combo_box_item_set_value(this.nativeObj, value);
    };
    Object.defineProperty(TComboBoxItem.prototype, "value", {
        get: function () {
            return combo_box_item_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TComboBoxItem.prototype, "checked", {
        get: function () {
            return combo_box_item_t_get_prop_checked(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TComboBoxItem;
}(TWidget));
var TComboBox = /** @class */ (function (_super) {
    __extends(TComboBox, _super);
    function TComboBox(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TComboBox.create = function (parent, x, y, w, h) {
        return new TComboBox(combo_box_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TComboBox.cast = function (widget) {
        return new TComboBox(combo_box_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TComboBox.prototype.setOpenWindow = function (open_window) {
        return combo_box_set_open_window(this.nativeObj, open_window);
    };
    TComboBox.prototype.resetOptions = function () {
        return combo_box_reset_options(this.nativeObj);
    };
    TComboBox.prototype.countOptions = function () {
        return combo_box_count_options(this.nativeObj);
    };
    TComboBox.prototype.setSelectedIndex = function (index) {
        return combo_box_set_selected_index(this.nativeObj, index);
    };
    TComboBox.prototype.setLocalizeOptions = function (localize_options) {
        return combo_box_set_localize_options(this.nativeObj, localize_options);
    };
    TComboBox.prototype.setValue = function (value) {
        return combo_box_set_value(this.nativeObj, value);
    };
    TComboBox.prototype.setItemHeight = function (item_height) {
        return combo_box_set_item_height(this.nativeObj, item_height);
    };
    TComboBox.prototype.appendOption = function (value, text) {
        return combo_box_append_option(this.nativeObj, value, text);
    };
    TComboBox.prototype.setOptions = function (options) {
        return combo_box_set_options(this.nativeObj, options);
    };
    TComboBox.prototype.getValue = function () {
        return combo_box_get_value(this.nativeObj);
    };
    TComboBox.prototype.getText = function () {
        return combo_box_get_text(this.nativeObj);
    };
    Object.defineProperty(TComboBox.prototype, "openWindow", {
        get: function () {
            return combo_box_t_get_prop_open_window(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TComboBox.prototype, "selectedIndex", {
        get: function () {
            return combo_box_t_get_prop_selected_index(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TComboBox.prototype, "value", {
        get: function () {
            return combo_box_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TComboBox.prototype, "localizeOptions", {
        get: function () {
            return combo_box_t_get_prop_localize_options(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TComboBox.prototype, "options", {
        get: function () {
            return combo_box_t_get_prop_options(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TComboBox.prototype, "itemHeight", {
        get: function () {
            return combo_box_t_get_prop_item_height(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TComboBox;
}(TWidget));
var TDialogClient = /** @class */ (function (_super) {
    __extends(TDialogClient, _super);
    function TDialogClient(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TDialogClient.create = function (parent, x, y, w, h) {
        return new TDialogClient(dialog_client_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TDialogClient.cast = function (widget) {
        return new TDialogClient(dialog_client_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TDialogClient;
}(TWidget));
var TDialogTitle = /** @class */ (function (_super) {
    __extends(TDialogTitle, _super);
    function TDialogTitle(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TDialogTitle.create = function (parent, x, y, w, h) {
        return new TDialogTitle(dialog_title_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TDialogTitle.cast = function (widget) {
        return new TDialogTitle(dialog_title_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TDialogTitle;
}(TWidget));
var TDigitClock = /** @class */ (function (_super) {
    __extends(TDigitClock, _super);
    function TDigitClock(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TDigitClock.create = function (parent, x, y, w, h) {
        return new TDigitClock(digit_clock_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TDigitClock.cast = function (widget) {
        return new TDigitClock(digit_clock_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TDigitClock.prototype.setFormat = function (format) {
        return digit_clock_set_format(this.nativeObj, format);
    };
    Object.defineProperty(TDigitClock.prototype, "format", {
        get: function () {
            return digit_clock_t_get_prop_format(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TDigitClock;
}(TWidget));
var TDragger = /** @class */ (function (_super) {
    __extends(TDragger, _super);
    function TDragger(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TDragger.create = function (parent, x, y, w, h) {
        return new TDragger(dragger_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TDragger.cast = function (widget) {
        return new TDragger(dragger_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TDragger.prototype.setRange = function (x_min, y_min, x_max, y_max) {
        return new TWidget(dragger_set_range(this.nativeObj, x_min, y_min, x_max, y_max));
    };
    Object.defineProperty(TDragger.prototype, "xMin", {
        get: function () {
            return dragger_t_get_prop_x_min(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDragger.prototype, "yMin", {
        get: function () {
            return dragger_t_get_prop_y_min(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDragger.prototype, "xMax", {
        get: function () {
            return dragger_t_get_prop_x_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDragger.prototype, "yMax", {
        get: function () {
            return dragger_t_get_prop_y_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TDragger;
}(TWidget));
var TEdit = /** @class */ (function (_super) {
    __extends(TEdit, _super);
    function TEdit(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TEdit.create = function (parent, x, y, w, h) {
        return new TEdit(edit_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TEdit.cast = function (widget) {
        return new TEdit(edit_cast(widget ? (widget.nativeObj || widget) : null));
    };
    TEdit.prototype.getInt = function () {
        return edit_get_int(this.nativeObj);
    };
    TEdit.prototype.getDouble = function () {
        return edit_get_double(this.nativeObj);
    };
    TEdit.prototype.setInt = function (value) {
        return edit_set_int(this.nativeObj, value);
    };
    TEdit.prototype.setDouble = function (value) {
        return edit_set_double(this.nativeObj, value);
    };
    TEdit.prototype.setTextLimit = function (min, max) {
        return edit_set_text_limit(this.nativeObj, min, max);
    };
    TEdit.prototype.setIntLimit = function (min, max, step) {
        return edit_set_int_limit(this.nativeObj, min, max, step);
    };
    TEdit.prototype.setFloatLimit = function (min, max, step) {
        return edit_set_float_limit(this.nativeObj, min, max, step);
    };
    TEdit.prototype.setReadonly = function (readonly) {
        return edit_set_readonly(this.nativeObj, readonly);
    };
    TEdit.prototype.setAutoFix = function (auto_fix) {
        return edit_set_auto_fix(this.nativeObj, auto_fix);
    };
    TEdit.prototype.setSelectNoneWhenFocused = function (select_none_when_focused) {
        return edit_set_select_none_when_focused(this.nativeObj, select_none_when_focused);
    };
    TEdit.prototype.setOpenImWhenFocused = function (open_im_when_focused) {
        return edit_set_open_im_when_focused(this.nativeObj, open_im_when_focused);
    };
    TEdit.prototype.setInputType = function (type) {
        return edit_set_input_type(this.nativeObj, type);
    };
    TEdit.prototype.setInputTips = function (tips) {
        return edit_set_input_tips(this.nativeObj, tips);
    };
    TEdit.prototype.setPasswordVisible = function (password_visible) {
        return edit_set_password_visible(this.nativeObj, password_visible);
    };
    TEdit.prototype.setFocus = function (focus) {
        return edit_set_focus(this.nativeObj, focus);
    };
    TEdit.prototype.setCursor = function (cursor) {
        return edit_set_cursor(this.nativeObj, cursor);
    };
    Object.defineProperty(TEdit.prototype, "readonly", {
        get: function () {
            return edit_t_get_prop_readonly(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "passwordVisible", {
        get: function () {
            return edit_t_get_prop_password_visible(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "autoFix", {
        get: function () {
            return edit_t_get_prop_auto_fix(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "selectNoneWhenFocused", {
        get: function () {
            return edit_t_get_prop_select_none_when_focused(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "openImWhenFocused", {
        get: function () {
            return edit_t_get_prop_open_im_when_focused(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "tips", {
        get: function () {
            return edit_t_get_prop_tips(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "inputType", {
        get: function () {
            return edit_t_get_prop_input_type(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "min", {
        get: function () {
            return edit_t_get_prop_min(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "max", {
        get: function () {
            return edit_t_get_prop_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "step", {
        get: function () {
            return edit_t_get_prop_step(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TEdit;
}(TWidget));
var TGridItem = /** @class */ (function (_super) {
    __extends(TGridItem, _super);
    function TGridItem(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TGridItem.create = function (parent, x, y, w, h) {
        return new TGridItem(grid_item_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TGridItem.cast = function (widget) {
        return new TGridItem(grid_item_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TGridItem;
}(TWidget));
var TGrid = /** @class */ (function (_super) {
    __extends(TGrid, _super);
    function TGrid(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TGrid.create = function (parent, x, y, w, h) {
        return new TGrid(grid_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TGrid.cast = function (widget) {
        return new TGrid(grid_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TGrid;
}(TWidget));
var TSpinBox = /** @class */ (function (_super) {
    __extends(TSpinBox, _super);
    function TSpinBox(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TSpinBox.create = function (parent, x, y, w, h) {
        return new TSpinBox(spin_box_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TSpinBox.cast = function (widget) {
        return new TSpinBox(spin_box_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TSpinBox;
}(TEdit));
var TTimerInfo = /** @class */ (function (_super) {
    __extends(TTimerInfo, _super);
    function TTimerInfo(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TTimerInfo.cast = function (timer) {
        return new TTimerInfo(timer_info_cast(timer ? (timer.nativeObj || timer) : null));
    };
    Object.defineProperty(TTimerInfo.prototype, "ctx", {
        get: function () {
            return timer_info_t_get_prop_ctx(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimerInfo.prototype, "id", {
        get: function () {
            return timer_info_t_get_prop_id(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimerInfo.prototype, "now", {
        get: function () {
            return timer_info_t_get_prop_now(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TTimerInfo;
}(TObject));
var TComboBoxEx = /** @class */ (function (_super) {
    __extends(TComboBoxEx, _super);
    function TComboBoxEx(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TComboBoxEx.create = function (parent, x, y, w, h) {
        return new TComboBoxEx(combo_box_ex_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    return TComboBoxEx;
}(TComboBox));
var TGifImage = /** @class */ (function (_super) {
    __extends(TGifImage, _super);
    function TGifImage(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TGifImage.create = function (parent, x, y, w, h) {
        return new TGifImage(gif_image_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TGifImage.cast = function (widget) {
        return new TGifImage(gif_image_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TGifImage;
}(TImageBase));
var TObjectDefault = /** @class */ (function (_super) {
    __extends(TObjectDefault, _super);
    function TObjectDefault(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TObjectDefault.create = function () {
        return new TObjectDefault(object_default_create());
    };
    TObjectDefault.prototype.unref = function () {
        return object_default_unref(this.nativeObj);
    };
    TObjectDefault.prototype.clearProps = function () {
        return object_default_clear_props(this.nativeObj);
    };
    Object.defineProperty(TObjectDefault.prototype, "propsSize", {
        get: function () {
            return object_default_t_get_prop_props_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TObjectDefault;
}(TObject));
var TObjectArray = /** @class */ (function (_super) {
    __extends(TObjectArray, _super);
    function TObjectArray(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TObjectArray.create = function () {
        return new TObjectArray(object_array_create());
    };
    TObjectArray.prototype.unref = function () {
        return object_array_unref(this.nativeObj);
    };
    TObjectArray.prototype.clearProps = function () {
        return object_array_clear_props(this.nativeObj);
    };
    Object.defineProperty(TObjectArray.prototype, "propsSize", {
        get: function () {
            return object_array_t_get_prop_props_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TObjectArray;
}(TObject));
var TImage = /** @class */ (function (_super) {
    __extends(TImage, _super);
    function TImage(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TImage.create = function (parent, x, y, w, h) {
        return new TImage(image_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TImage.prototype.setDrawType = function (draw_type) {
        return image_set_draw_type(this.nativeObj, draw_type);
    };
    TImage.cast = function (widget) {
        return new TImage(image_cast(widget ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TImage.prototype, "drawType", {
        get: function () {
            return image_t_get_prop_draw_type(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TImage;
}(TImageBase));
var TSystemBar = /** @class */ (function (_super) {
    __extends(TSystemBar, _super);
    function TSystemBar(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TSystemBar.create = function (parent, x, y, w, h) {
        return new TSystemBar(system_bar_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TSystemBar.cast = function (widget) {
        return new TSystemBar(system_bar_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TSystemBar;
}(TWindowBase));
var TMutableImage = /** @class */ (function (_super) {
    __extends(TMutableImage, _super);
    function TMutableImage(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    return TMutableImage;
}(TImageBase));
var TIdleInfo = /** @class */ (function (_super) {
    __extends(TIdleInfo, _super);
    function TIdleInfo(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TIdleInfo.cast = function (idle) {
        return new TIdleInfo(idle_info_cast(idle ? (idle.nativeObj || idle) : null));
    };
    Object.defineProperty(TIdleInfo.prototype, "ctx", {
        get: function () {
            return idle_info_t_get_prop_ctx(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TIdleInfo.prototype, "id", {
        get: function () {
            return idle_info_t_get_prop_id(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TIdleInfo;
}(TObject));
var TSvgImage = /** @class */ (function (_super) {
    __extends(TSvgImage, _super);
    function TSvgImage(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    TSvgImage.create = function (parent, x, y, w, h) {
        return new TSvgImage(svg_image_create(parent ? parent.nativeObj : null, x, y, w, h));
    };
    TSvgImage.prototype.setImage = function (name) {
        return svg_image_set_image(this.nativeObj, name);
    };
    TSvgImage.cast = function (widget) {
        return new TSvgImage(svg_image_cast(widget ? (widget.nativeObj || widget) : null));
    };
    return TSvgImage;
}(TImageBase));
var TWindowManagerDefault = /** @class */ (function (_super) {
    __extends(TWindowManagerDefault, _super);
    function TWindowManagerDefault(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    return TWindowManagerDefault;
}(TWindowManager));
var TWindowManagerSimple = /** @class */ (function (_super) {
    __extends(TWindowManagerSimple, _super);
    function TWindowManagerSimple(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    return TWindowManagerSimple;
}(TWindowManager));
//# sourceMappingURL=awtk.js.map