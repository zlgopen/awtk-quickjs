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
/**
 * 事件基类。
 *
 */
var TEvent = /** @class */ (function () {
    function TEvent(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 转换为event对象。
     *
     *> 供脚本语言使用
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    TEvent.cast = function (event) {
        return new TEvent(event_cast(event != null ? (event.nativeObj || event) : null));
    };
    /**
     * 创建event对象。
     *
     *主要给脚本语言使用。
     *
     * @param type 事件类型。
     *
     * @returns 返回事件对象。
     */
    TEvent.create = function (type) {
        return new TEvent(event_create(type));
    };
    /**
     * 销毁事件对象。
     *
     *主要给脚本语言使用。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEvent.prototype.destroy = function () {
        return event_destroy(this != null ? (this.nativeObj || this) : null);
    };
    Object.defineProperty(TEvent.prototype, "type", {
        /**
         * 类型。
         *
         */
        get: function () {
            return event_t_get_prop_type(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEvent.prototype, "time", {
        /**
         * 事件发生的时间。
         *
         */
        get: function () {
            return event_t_get_prop_time(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEvent.prototype, "target", {
        /**
         * 事件发生的目标对象。
         *
         */
        get: function () {
            return event_t_get_prop_target(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TEvent;
}());
;
/**
 * 矩形。包括一个x坐标、y坐标、宽度和高度。
 *
 */
var TRect = /** @class */ (function () {
    function TRect(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 创建rect对象。
     *
     *> 主要供脚本语言使用。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param w 宽度。
     * @param h 高度。
     *
     * @returns rect对象。
     */
    TRect.create = function (x, y, w, h) {
        return new TRect(rect_create(x, y, w, h));
    };
    /**
     * 设置rect对象的xywh。
     *
     *> 主要供脚本语言使用。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param w 宽度。
     * @param h 高度。
     *
     * @returns rect对象。
     */
    TRect.prototype.set = function (x, y, w, h) {
        return new TRect(rect_set(this != null ? (this.nativeObj || this) : null, x, y, w, h));
    };
    /**
     * 转换为rect对象。
     *
     *> 供脚本语言使用。
     *
     * @param rect rect对象。
     *
     * @returns rect对象。
     */
    TRect.cast = function (rect) {
        return new TRect(rect_cast(rect != null ? (rect.nativeObj || rect) : null));
    };
    /**
     * 销毁rect对象。
     *
     *> 主要供脚本语言使用。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TRect.prototype.destroy = function () {
        return rect_destroy(this != null ? (this.nativeObj || this) : null);
    };
    Object.defineProperty(TRect.prototype, "x", {
        /**
         * x坐标。
         *
         */
        get: function () {
            return rect_t_get_prop_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TRect.prototype, "y", {
        /**
         * y坐标。
         *
         */
        get: function () {
            return rect_t_get_prop_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TRect.prototype, "w", {
        /**
         * 宽度。
         *
         */
        get: function () {
            return rect_t_get_prop_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TRect.prototype, "h", {
        /**
         * 高度。
         *
         */
        get: function () {
            return rect_t_get_prop_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TRect;
}());
;
/**
 * 点(浮点数)。包括一个x坐标和一个y坐标。
 *
 */
var TPointf = /** @class */ (function () {
    function TPointf(nativeObj) {
        this.nativeObj = nativeObj;
    }
    return TPointf;
}());
;
/**
 * 点。包括一个x坐标和一个y坐标。
 *
 */
var TPoint = /** @class */ (function () {
    function TPoint(nativeObj) {
        this.nativeObj = nativeObj;
    }
    return TPoint;
}());
;
/**
 * 事件分发器, 用于实现观察者模式。
 *
 */
var TEmitter = /** @class */ (function () {
    function TEmitter(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 创建emitter对象。
     *
     *
     * @returns 对象。
     */
    TEmitter.create = function () {
        return new TEmitter(emitter_create());
    };
    /**
     * 分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
     *禁用状态下，本函数不做任何事情。
     *
     * @param e 事件对象。
     *
     * @returns 如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。
     */
    TEmitter.prototype.dispatch = function (e) {
        return emitter_dispatch(this != null ? (this.nativeObj || this) : null, e != null ? (e.nativeObj || e) : null);
    };
    /**
     * 分发事件。
     *> 对emitter_dispatch的包装，分发一个简单的事件。
     *如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。
     *
     * @param type 事件类型。
     *
     * @returns
     */
    TEmitter.prototype.dispatchSimpleEvent = function (type) {
        return emitter_dispatch_simple_event(this != null ? (this.nativeObj || this) : null, type);
    };
    /**
     * 注册指定事件的处理函数。
     *
     * @param type 事件类型。
     * @param on_event 事件处理函数。
     * @param ctx 事件处理函数上下文。
     *
     * @returns 返回id，用于emitter_off。
     */
    TEmitter.prototype.on = function (type, on_event, ctx) {
        return emitter_on(this != null ? (this.nativeObj || this) : null, type, on_event, ctx);
    };
    /**
     * 注销指定事件的处理函数。
     *
     * @param id emitter_on返回的ID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEmitter.prototype.off = function (id) {
        return emitter_off(this != null ? (this.nativeObj || this) : null, id);
    };
    /**
     * 启用。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEmitter.prototype.enable = function () {
        return emitter_enable(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 禁用。
     *
     *禁用后emitter_dispatch无效，但可以注册和注销。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEmitter.prototype.disable = function () {
        return emitter_disable(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取注册的回调函数个数，主要用于辅助测试。
     *
     *
     * @returns 回调函数个数。
     */
    TEmitter.prototype.size = function () {
        return emitter_size(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 销毁。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEmitter.prototype.destroy = function () {
        return emitter_destroy(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 转换为emitter对象(供脚本语言使用)。
     *
     *主要给脚本语言使用。
     *
     * @param emitter emitter对象。
     *
     * @returns 对象。
     */
    TEmitter.cast = function (emitter) {
        return new TEmitter(emitter_cast(emitter != null ? (emitter.nativeObj || emitter) : null));
    };
    return TEmitter;
}());
;
/**
 * 位图。
 *
 */
var TBitmap = /** @class */ (function () {
    function TBitmap(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 创建图片对象(一般供脚本语言中使用)。
     *
     *
     * @returns 返回bitmap对象。
     */
    TBitmap.create = function () {
        return new TBitmap(bitmap_create());
    };
    /**
     * 创建图片对象。
     *
     * @param w 宽度。
     * @param h 高度。
     * @param line_length line_length。
     * @param format 格式。
     *
     * @returns 返回bitmap对象。
     */
    TBitmap.createEx = function (w, h, line_length, format) {
        return new TBitmap(bitmap_create_ex(w, h, line_length, format));
    };
    /**
     * 获取图片一个像素占用的字节数。
     *
     *
     * @returns 返回一个像素占用的字节数。
     */
    TBitmap.prototype.getBpp = function () {
        return bitmap_get_bpp(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 销毁图片。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TBitmap.prototype.destroy = function () {
        return bitmap_destroy(this != null ? (this.nativeObj || this) : null);
    };
    Object.defineProperty(TBitmap.prototype, "w", {
        /**
         * 宽度。
         *
         */
        get: function () {
            return bitmap_t_get_prop_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TBitmap.prototype, "h", {
        /**
         * 高度。
         *
         */
        get: function () {
            return bitmap_t_get_prop_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TBitmap.prototype, "lineLength", {
        /**
         * 每一行实际占用的内存(也称为stride或pitch)，一般情况下为w*bpp。
         *
         */
        get: function () {
            return bitmap_t_get_prop_line_length(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TBitmap.prototype, "flags", {
        /**
         * 标志。请参考{bitmap_flag_t}。
         *
         */
        get: function () {
            return bitmap_t_get_prop_flags(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TBitmap.prototype, "format", {
        /**
         * 格式。请参考{bitmap_format_t}。
         *
         */
        get: function () {
            return bitmap_t_get_prop_format(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TBitmap.prototype, "name", {
        /**
         * 名称。
         *
         */
        get: function () {
            return bitmap_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TBitmap;
}());
;
/**
 * 一个通用数据类型，用来存放整数、浮点数、字符串和其它对象。
 *
 *在C/C++中，一般不需动态创建对象，直接声明并初始化即可。如：
 *
 *
 *> 在脚本语言中，需要动态创建对象。
 *
 */
var TValue = /** @class */ (function () {
    function TValue(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 设置类型为bool的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setBool = function (value) {
        return new TValue(value_set_bool(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 获取类型为bool的值。
     *
     *
     * @returns 值。
     */
    TValue.prototype.bool = function () {
        return value_bool(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置类型为int8的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setInt8 = function (value) {
        return new TValue(value_set_int8(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 获取类型为int8的值。
     *
     *
     * @returns 值。
     */
    TValue.prototype.int8 = function () {
        return value_int8(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置类型为uint8的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setUint8 = function (value) {
        return new TValue(value_set_uint8(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 获取类型为uint8的值。
     *
     *
     * @returns 值。
     */
    TValue.prototype.uint8 = function () {
        return value_uint8(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置类型为int16的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setInt16 = function (value) {
        return new TValue(value_set_int16(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 获取类型为int16的值。
     *
     *
     * @returns 值。
     */
    TValue.prototype.int16 = function () {
        return value_int16(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置类型为uint16的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setUint16 = function (value) {
        return new TValue(value_set_uint16(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 获取类型为uint16的值。
     *
     *
     * @returns 值。
     */
    TValue.prototype.uint16 = function () {
        return value_uint16(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置类型为int32的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setInt32 = function (value) {
        return new TValue(value_set_int32(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 获取类型为int32的值。
     *
     *
     * @returns 值。
     */
    TValue.prototype.int32 = function () {
        return value_int32(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置类型为uint32的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setUint32 = function (value) {
        return new TValue(value_set_uint32(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 设置类型为int64的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setInt64 = function (value) {
        return new TValue(value_set_int64(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 获取类型为int64的值。
     *
     *
     * @returns 值。
     */
    TValue.prototype.int64 = function () {
        return value_int64(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置类型为uint64的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setUint64 = function (value) {
        return new TValue(value_set_uint64(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 获取类型为uint64的值。
     *
     *
     * @returns 值。
     */
    TValue.prototype.uint64 = function () {
        return value_uint64(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置类型为float\_t的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setFloat = function (value) {
        return new TValue(value_set_float(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 获取类型为float的值。
     *
     *
     * @returns 值。
     */
    TValue.prototype.float32 = function () {
        return value_float32(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置类型为double的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setFloat64 = function (value) {
        return new TValue(value_set_double(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 获取类型为double的值。
     *
     *
     * @returns 值。
     */
    TValue.prototype.float64 = function () {
        return value_double(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置类型为字符串的值(并拷贝字符串)。
     *
     *> 供脚本语言使用。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setStr = function (value) {
        return new TValue(value_dup_str(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 获取类型为字符串的值。
     *
     *
     * @returns 值。
     */
    TValue.prototype.str = function () {
        return value_str(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 判断value是否为空值。
     *
     *
     * @returns 为空值返回TRUE，否则返回FALSE。
     */
    TValue.prototype.isNull = function () {
        return value_is_null(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置类型为int的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setInt = function (value) {
        return new TValue(value_set_int(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 设置类型为object的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setObject = function (value) {
        return new TValue(value_set_object(this != null ? (this.nativeObj || this) : null, value != null ? (value.nativeObj || value) : null));
    };
    /**
     * 转换为object的值。
     *
     *
     * @returns 值。
     */
    TValue.prototype.object = function () {
        return new TObject(value_object(this != null ? (this.nativeObj || this) : null));
    };
    /**
     * 设置类型为token的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    TValue.prototype.setToken = function (value) {
        return new TValue(value_set_token(this != null ? (this.nativeObj || this) : null, value));
    };
    /**
     * 获取token的值。
     *
     *
     * @returns 值。
     */
    TValue.prototype.token = function () {
        return value_token(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 创建value对象。
     *
     *
     * @returns 对象。
     */
    TValue.create = function () {
        return new TValue(value_create());
    };
    /**
     * 销毁value对象。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TValue.prototype.destroy = function () {
        return value_destroy(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 重置value对象。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TValue.prototype.reset = function () {
        return value_reset(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 转换为value对象。
     *
     *> 供脚本语言使用
     *
     * @param value value对象。
     *
     * @returns 对象。
     */
    TValue.cast = function (value) {
        return new TValue(value_cast(value != null ? (value.nativeObj || value) : null));
    };
    return TValue;
}());
;
/**
 * 对象接口。
 *
 */
var TObject = /** @class */ (function (_super) {
    __extends(TObject, _super);
    function TObject(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 引用计数减1。引用计数为0时，销毁对象。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.unref = function () {
        return object_unref(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 引用计数加1。
     *
     * @param obj object对象。
     *
     * @returns 返回object对象。
     */
    TObject.ref = function (obj) {
        return new TObject(object_ref(obj != null ? (obj.nativeObj || obj) : null));
    };
    /**
     * 获取对象的类型名称。
     *
     *
     * @returns 返回对象的类型名称。
     */
    TObject.prototype.getType = function () {
        return object_get_type(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取对象的描述信息。
     *
     *
     * @returns 返回对象的描述信息。
     */
    TObject.prototype.getDesc = function () {
        return object_get_desc(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取对象占用内存的大小。
     *
     *
     * @returns 返回对象占用内存的大小。
     */
    TObject.prototype.getSize = function () {
        return object_get_size(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 判断对象是否是集合。
     *
     *
     * @returns 返回TRUE表示是集合，否则不是。
     */
    TObject.prototype.isCollection = function () {
        return object_is_collection(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置对象的名称。
     *
     * @param name 对象的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.setName = function (name) {
        return object_set_name(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 比较两个对象。
     *
     * @param other 比较的object对象。
     *
     * @returns 返回比较结果。
     */
    TObject.prototype.compare = function (other) {
        return object_compare(this != null ? (this.nativeObj || this) : null, other != null ? (other.nativeObj || other) : null);
    };
    /**
     * 获取指定属性的值。
     *
     * @param name 属性的名称。
     * @param v 返回属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.getProp = function (name, v) {
        return object_get_prop(this != null ? (this.nativeObj || this) : null, name, v != null ? (v.nativeObj || v) : null);
    };
    /**
     * 获取指定属性的字符串类型的值。
     *
     * @param name 属性的名称。
     *
     * @returns 返回指定属性的字符串类型的值。
     */
    TObject.prototype.getPropStr = function (name) {
        return object_get_prop_str(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 获取指定属性的指针类型的值。
     *
     * @param name 属性的名称。
     *
     * @returns 返回指定属性的指针类型的值。
     */
    TObject.prototype.getPropPointer = function (name) {
        return object_get_prop_pointer(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 获取指定属性的object类型的值。
     *
     * @param name 属性的名称。
     *
     * @returns 返回指定属性的object类型的值。
     */
    TObject.prototype.getPropObject = function (name) {
        return new TObject(object_get_prop_object(this != null ? (this.nativeObj || this) : null, name));
    };
    /**
     * 获取指定属性的整数类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的整数类型的值。
     */
    TObject.prototype.getPropInt = function (name, defval) {
        return object_get_prop_int(this != null ? (this.nativeObj || this) : null, name, defval);
    };
    /**
     * 获取指定属性的bool类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的bool类型的值。
     */
    TObject.prototype.getPropBool = function (name, defval) {
        return object_get_prop_bool(this != null ? (this.nativeObj || this) : null, name, defval);
    };
    /**
     * 获取指定属性的浮点数类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的浮点数类型的值。
     */
    TObject.prototype.getPropFloat = function (name, defval) {
        return object_get_prop_float(this != null ? (this.nativeObj || this) : null, name, defval);
    };
    /**
     * 删除指定属性。
     *
     * @param name 属性的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.removeProp = function (name) {
        return object_remove_prop(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 设置指定属性的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.setProp = function (name, value) {
        return object_set_prop(this != null ? (this.nativeObj || this) : null, name, value != null ? (value.nativeObj || value) : null);
    };
    /**
     * 设置指定属性的字符串类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.setPropStr = function (name, value) {
        return object_set_prop_str(this != null ? (this.nativeObj || this) : null, name, value);
    };
    /**
     * 设置指定属性的object类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.setPropObject = function (name, value) {
        return object_set_prop_object(this != null ? (this.nativeObj || this) : null, name, value != null ? (value.nativeObj || value) : null);
    };
    /**
     * 设置指定属性的整数类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.setPropInt = function (name, value) {
        return object_set_prop_int(this != null ? (this.nativeObj || this) : null, name, value);
    };
    /**
     * 设置指定属性的bool类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.setPropBool = function (name, value) {
        return object_set_prop_bool(this != null ? (this.nativeObj || this) : null, name, value);
    };
    /**
     * 设置指定属性的浮点数类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.setPropFloat = function (name, value) {
        return object_set_prop_float(this != null ? (this.nativeObj || this) : null, name, value);
    };
    /**
     * 拷贝指定的属性。
     *
     * @param src 源对象。
     * @param name 属性的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.copyProp = function (src, name) {
        return object_copy_prop(this != null ? (this.nativeObj || this) : null, src != null ? (src.nativeObj || src) : null, name);
    };
    /**
     * 检查是否存在指定的属性。
     *
     * @param name 属性的名称。
     *
     * @returns 返回TRUE表示存在，否则表示不存在。
     */
    TObject.prototype.hasProp = function (name) {
        return object_has_prop(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 计算一个表达式，表达式中引用的变量从prop中获取。
     *
     * @param expr 表达式。
     * @param v 返回计算结果。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.eval = function (expr, v) {
        return object_eval(this != null ? (this.nativeObj || this) : null, expr, v != null ? (v.nativeObj || v) : null);
    };
    /**
     * 检查是否可以执行指定的命令。
     *
     * @param name 命令的名称。
     * @param args 命令的参数。
     *
     * @returns 返回TRUE表示可以执行，否则表示不可以执行。
     */
    TObject.prototype.canExec = function (name, args) {
        return object_can_exec(this != null ? (this.nativeObj || this) : null, name, args);
    };
    /**
     * 执行指定的命令。
     *
     * @param name 命令的名称。
     * @param args 命令的参数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.execute = function (name, args) {
        return object_exec(this != null ? (this.nativeObj || this) : null, name, args);
    };
    /**
     * 触发EVT_PROPS_CHANGED事件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObject.prototype.notifyChanged = function () {
        return object_notify_changed(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取指定属性的字符串类型的值。
     *
     * @param path 属性的path。
     *
     * @returns 返回指定属性的字符串类型的值。
     */
    TObject.prototype.getPropStrByPath = function (path) {
        return object_get_prop_str_by_path(this != null ? (this.nativeObj || this) : null, path);
    };
    /**
     * 获取指定属性的指针类型的值。
     *
     * @param path 属性的path。
     *
     * @returns 返回指定属性的指针类型的值。
     */
    TObject.prototype.getPropPointerByPath = function (path) {
        return object_get_prop_pointer_by_path(this != null ? (this.nativeObj || this) : null, path);
    };
    /**
     * 获取指定属性的object类型的值。
     *
     * @param path 属性的path。
     *
     * @returns 返回指定属性的object类型的值。
     */
    TObject.prototype.getPropObjectByPath = function (path) {
        return new TObject(object_get_prop_object_by_path(this != null ? (this.nativeObj || this) : null, path));
    };
    /**
     * 获取指定属性的整数类型的值。
     *
     * @param path 属性的path。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的整数类型的值。
     */
    TObject.prototype.getPropIntByPath = function (path, defval) {
        return object_get_prop_int_by_path(this != null ? (this.nativeObj || this) : null, path, defval);
    };
    /**
     * 获取指定属性的bool类型的值。
     *
     * @param path 属性的path。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的bool类型的值。
     */
    TObject.prototype.getPropBoolByPath = function (path, defval) {
        return object_get_prop_bool_by_path(this != null ? (this.nativeObj || this) : null, path, defval);
    };
    /**
     * 获取指定属性的浮点数类型的值。
     *
     * @param path 属性的path。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的浮点数类型的值。
     */
    TObject.prototype.getPropFloatByPath = function (path, defval) {
        return object_get_prop_float_by_path(this != null ? (this.nativeObj || this) : null, path, defval);
    };
    Object.defineProperty(TObject.prototype, "refCount", {
        /**
         * 引用计数。
         *
         */
        get: function () {
            return object_t_get_prop_ref_count(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TObject.prototype, "name", {
        /**
         * 对象的名称。
         *
         */
        get: function () {
            return object_t_get_prop_name(this.nativeObj);
        },
        set: function (v) {
            this.setName(v);
        },
        enumerable: true,
        configurable: true
    });
    return TObject;
}(TEmitter));
;
/**
 * TK全局对象。
 *
 */
var TGlobal = /** @class */ (function () {
    function TGlobal() {
    }
    /**
     * 初始化TK。
     *
     * @param w LCD宽度。
     * @param h LCD高度。
     * @param app_type 应用程序的类型。
     * @param app_name 应用程序的名称(必须为常量字符串)。
     * @param app_root 应用程序的根目录，用于定位资源文件(必须为常量字符串)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TGlobal.init = function (w, h, app_type, app_name, app_root) {
        return tk_init(w, h, app_type, app_name, app_root);
    };
    /**
     * 进入TK事件主循环。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TGlobal.run = function () {
        return tk_run();
    };
    /**
     * 退出TK事件主循环。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TGlobal.quit = function () {
        return tk_quit();
    };
    /**
     * 获取全局指针的X坐标。
     *
     *
     * @returns 返回全局指针的X坐标。
     */
    TGlobal.getPointerX = function () {
        return tk_get_pointer_x();
    };
    /**
     * 获取全局指针的Y坐标。
     *
     *
     * @returns 返回全局指针的X坐标。
     */
    TGlobal.getPointerY = function () {
        return tk_get_pointer_y();
    };
    /**
     * 获取全局指针是否按下。
     *
     *
     * @returns 返回全局指针是否按下。
     */
    TGlobal.isPointerPressed = function () {
        return tk_is_pointer_pressed();
    };
    return TGlobal;
}());
;
/**
 * 对话框退出码。
 *
 *> 一般用作dialog_quit函数的参数。
 *
 */
var TDialogQuitCode;
(function (TDialogQuitCode) {
    /**
     * 对话框被强行关闭或不关心关闭原因。
     *
     */
    TDialogQuitCode[TDialogQuitCode["NONE"] = DIALOG_QUIT_NONE()] = "NONE";
    /**
     * 点击“OK”按钮关闭。
     *
     */
    TDialogQuitCode[TDialogQuitCode["OK"] = DIALOG_QUIT_OK()] = "OK";
    /**
     * 点击“YES”按钮关闭。
     *
     */
    TDialogQuitCode[TDialogQuitCode["YES"] = DIALOG_QUIT_YES()] = "YES";
    /**
     * 点击“CANCEL”按钮关闭。
     *
     */
    TDialogQuitCode[TDialogQuitCode["CANCEL"] = DIALOG_QUIT_CANCEL()] = "CANCEL";
    /**
     * 点击“NO”按钮关闭。
     *
     */
    TDialogQuitCode[TDialogQuitCode["NO"] = DIALOG_QUIT_NO()] = "NO";
    /**
     * 点击其它按钮关闭。
     *
     */
    TDialogQuitCode[TDialogQuitCode["OTHER"] = DIALOG_QUIT_OTHER()] = "OTHER";
})(TDialogQuitCode || (TDialogQuitCode = {}));
;
/**
 * 类型常量定义。
 *
 */
var TEventType;
(function (TEventType) {
    /**
     * 指针按下事件名(pointer_event_t)。
     *
     */
    TEventType[TEventType["POINTER_DOWN"] = EVT_POINTER_DOWN()] = "POINTER_DOWN";
    /**
     * 指针按下事件名，在子控件处理之前触发(pointer_event_t)。
     *
     */
    TEventType[TEventType["POINTER_DOWN_BEFORE_CHILDREN"] = EVT_POINTER_DOWN_BEFORE_CHILDREN()] = "POINTER_DOWN_BEFORE_CHILDREN";
    /**
     * 指针移动事件名(pointer_event_t)。
     *
     */
    TEventType[TEventType["POINTER_MOVE"] = EVT_POINTER_MOVE()] = "POINTER_MOVE";
    /**
     * 指针移动事件名，在子控件处理之前触发(pointer_event_t)。
     *
     */
    TEventType[TEventType["POINTER_MOVE_BEFORE_CHILDREN"] = EVT_POINTER_MOVE_BEFORE_CHILDREN()] = "POINTER_MOVE_BEFORE_CHILDREN";
    /**
     * 指针抬起事件名(pointer_event_t)。
     *
     */
    TEventType[TEventType["POINTER_UP"] = EVT_POINTER_UP()] = "POINTER_UP";
    /**
     * 指针抬起事件名，在子控件处理之前触发(pointer_event_t)。
     *
     */
    TEventType[TEventType["POINTER_UP_BEFORE_CHILDREN"] = EVT_POINTER_UP_BEFORE_CHILDREN()] = "POINTER_UP_BEFORE_CHILDREN";
    /**
     * 滚轮事件名(pointer_event_t)。
     *
     */
    TEventType[TEventType["WHEEL"] = EVT_WHEEL()] = "WHEEL";
    /**
     * 鼠标滚轮事件名，在子控件处理之前触发(key_event_t)。
     *
     */
    TEventType[TEventType["WHEEL_BEFORE_CHILDREN"] = EVT_WHEEL_BEFORE_CHILDREN()] = "WHEEL_BEFORE_CHILDREN";
    /**
     * 取消前一个指针按下事件名(pointer_event_t)。
     *
     */
    TEventType[TEventType["POINTER_DOWN_ABORT"] = EVT_POINTER_DOWN_ABORT()] = "POINTER_DOWN_ABORT";
    /**
     * 右键/长按弹出上下文菜单的事件名(pointer_event_t)。
     *
     */
    TEventType[TEventType["CONTEXT_MENU"] = EVT_CONTEXT_MENU()] = "CONTEXT_MENU";
    /**
     * 指针进入事件名(pointer_event_t)。
     *
     */
    TEventType[TEventType["POINTER_ENTER"] = EVT_POINTER_ENTER()] = "POINTER_ENTER";
    /**
     * 指针离开事件名(pointer_event_t)。
     *
     */
    TEventType[TEventType["POINTER_LEAVE"] = EVT_POINTER_LEAVE()] = "POINTER_LEAVE";
    /**
     * 长按事件名(pointer_event_t)。
     *
     */
    TEventType[TEventType["LONG_PRESS"] = EVT_LONG_PRESS()] = "LONG_PRESS";
    /**
     * 点击事件名(pointer_event_t)。
     *
     */
    TEventType[TEventType["CLICK"] = EVT_CLICK()] = "CLICK";
    /**
     * 得到焦点事件名(event_t)。
     *
     */
    TEventType[TEventType["FOCUS"] = EVT_FOCUS()] = "FOCUS";
    /**
     * 失去焦点事件名(event_t)。
     *
     */
    TEventType[TEventType["BLUR"] = EVT_BLUR()] = "BLUR";
    /**
     * 键按下事件名(key_event_t)。
     *
     */
    TEventType[TEventType["KEY_DOWN"] = EVT_KEY_DOWN()] = "KEY_DOWN";
    /**
     * 键按下事件名，在子控件处理之前触发(key_event_t)。
     *
     */
    TEventType[TEventType["KEY_DOWN_BEFORE_CHILDREN"] = EVT_KEY_DOWN_BEFORE_CHILDREN()] = "KEY_DOWN_BEFORE_CHILDREN";
    /**
     * 按键repeat事件名(key_event_t)。
     *
     */
    TEventType[TEventType["KEY_REPEAT"] = EVT_KEY_REPEAT()] = "KEY_REPEAT";
    /**
     * 键抬起事件名(key_event_t)。
     *
     */
    TEventType[TEventType["KEY_UP"] = EVT_KEY_UP()] = "KEY_UP";
    /**
     * 键抬起事件名，在子控件处理之前触发(key_event_t)。
     *
     */
    TEventType[TEventType["KEY_UP_BEFORE_CHILDREN"] = EVT_KEY_UP_BEFORE_CHILDREN()] = "KEY_UP_BEFORE_CHILDREN";
    /**
     * 即将移动Widget的事件名(event_t)。
     *
     */
    TEventType[TEventType["WILL_MOVE"] = EVT_WILL_MOVE()] = "WILL_MOVE";
    /**
     * 移动Widget的事件名(event_t)。
     *
     */
    TEventType[TEventType["MOVE"] = EVT_MOVE()] = "MOVE";
    /**
     * 即将调整Widget大小的事件名(event_t)。
     *
     */
    TEventType[TEventType["WILL_RESIZE"] = EVT_WILL_RESIZE()] = "WILL_RESIZE";
    /**
     * 调整Widget大小的事件名(event_t)。
     *
     */
    TEventType[TEventType["RESIZE"] = EVT_RESIZE()] = "RESIZE";
    /**
     * 即将调整Widget大小/位置的事件名(event_t)。
     *
     */
    TEventType[TEventType["WILL_MOVE_RESIZE"] = EVT_WILL_MOVE_RESIZE()] = "WILL_MOVE_RESIZE";
    /**
     * 调整Widget大小/位置的事件名(event_t)。
     *
     */
    TEventType[TEventType["MOVE_RESIZE"] = EVT_MOVE_RESIZE()] = "MOVE_RESIZE";
    /**
     * 控件的值即将改变的事件名(event_t)。
     *
     */
    TEventType[TEventType["VALUE_WILL_CHANGE"] = EVT_VALUE_WILL_CHANGE()] = "VALUE_WILL_CHANGE";
    /**
     * 控件的值改变的事件名(event_t)。
     *
     */
    TEventType[TEventType["VALUE_CHANGED"] = EVT_VALUE_CHANGED()] = "VALUE_CHANGED";
    /**
     * 控件的值持续改变(如编辑器正在编辑)的事件名(event_t)。
     *
     */
    TEventType[TEventType["VALUE_CHANGING"] = EVT_VALUE_CHANGING()] = "VALUE_CHANGING";
    /**
     * 绘制的事件名(paint_event_t)。
     *
     */
    TEventType[TEventType["PAINT"] = EVT_PAINT()] = "PAINT";
    /**
     * 即将绘制的事件名(paint_event_t)。
     *
     */
    TEventType[TEventType["BEFORE_PAINT"] = EVT_BEFORE_PAINT()] = "BEFORE_PAINT";
    /**
     * 绘制完成的事件名(paint_event_t)。
     *
     */
    TEventType[TEventType["AFTER_PAINT"] = EVT_AFTER_PAINT()] = "AFTER_PAINT";
    /**
     * 绘制完成(canvas状态已经恢复)的事件名(paint_event_t)。
     *
     */
    TEventType[TEventType["PAINT_DONE"] = EVT_PAINT_DONE()] = "PAINT_DONE";
    /**
     * locale改变的事件(event_t)。
     *
     */
    TEventType[TEventType["LOCALE_CHANGED"] = EVT_LOCALE_CHANGED()] = "LOCALE_CHANGED";
    /**
     * 控件动画开始事件(event_t)。
     *
     */
    TEventType[TEventType["ANIM_START"] = EVT_ANIM_START()] = "ANIM_START";
    /**
     * 控件动画被主动停止的事件(event_t)。
     *
     */
    TEventType[TEventType["ANIM_STOP"] = EVT_ANIM_STOP()] = "ANIM_STOP";
    /**
     * 控件动画被暂停的事件(event_t)。
     *
     */
    TEventType[TEventType["ANIM_PAUSE"] = EVT_ANIM_PAUSE()] = "ANIM_PAUSE";
    /**
     * 控件动画yoyo/repeat时，完成一次的事件(event_t)。
     *
     */
    TEventType[TEventType["ANIM_ONCE"] = EVT_ANIM_ONCE()] = "ANIM_ONCE";
    /**
     * 控件动画完成事件(event_t)。
     *
     */
    TEventType[TEventType["ANIM_END"] = EVT_ANIM_END()] = "ANIM_END";
    /**
     * 窗口加载完成事件(event_t)。
     *
     */
    TEventType[TEventType["WINDOW_LOAD"] = EVT_WINDOW_LOAD()] = "WINDOW_LOAD";
    /**
     * 控件加载完成事件(event_t)。
     *
     */
    TEventType[TEventType["WIDGET_LOAD"] = EVT_WIDGET_LOAD()] = "WIDGET_LOAD";
    /**
     * 窗口即将打开事件(event_t)。
     *如果有窗口动画，在窗口动画开始前触发。如果没有窗口动画，在窗口被加载后的下一次循环中触发。
     *
     */
    TEventType[TEventType["WINDOW_WILL_OPEN"] = EVT_WINDOW_WILL_OPEN()] = "WINDOW_WILL_OPEN";
    /**
     * 窗口打开事件(event_t)。
     *如果有窗口动画，在窗口动画完成时触发。如果没有窗口动画，在窗口被加载后的下一次循环中触发。
     *
     */
    TEventType[TEventType["WINDOW_OPEN"] = EVT_WINDOW_OPEN()] = "WINDOW_OPEN";
    /**
     * 窗口被切换到后台事件(event_t)。
     *打开新窗口时，当前窗口被切换到后台时，对当前窗口触发本事件。
     *
     */
    TEventType[TEventType["WINDOW_TO_BACKGROUND"] = EVT_WINDOW_TO_BACKGROUND()] = "WINDOW_TO_BACKGROUND";
    /**
     * 窗口被切换到前台事件(event_t)。
     *关闭当前窗口时，前一个窗口被切换到前台时，对前一个窗口触发本事件。
     *
     */
    TEventType[TEventType["WINDOW_TO_FOREGROUND"] = EVT_WINDOW_TO_FOREGROUND()] = "WINDOW_TO_FOREGROUND";
    /**
     * 窗口关闭事件。
     *
     */
    TEventType[TEventType["WINDOW_CLOSE"] = EVT_WINDOW_CLOSE()] = "WINDOW_CLOSE";
    /**
     * 请求关闭窗口的事件(event_t)。
     *
     */
    TEventType[TEventType["REQUEST_CLOSE_WINDOW"] = EVT_REQUEST_CLOSE_WINDOW()] = "REQUEST_CLOSE_WINDOW";
    /**
     * 顶层窗口改变的事件(window_event_t)。
     *
     */
    TEventType[TEventType["TOP_WINDOW_CHANGED"] = EVT_TOP_WINDOW_CHANGED()] = "TOP_WINDOW_CHANGED";
    /**
     * 输入法提交输入的文本事件(im_commit_event_t)。
     *
     */
    TEventType[TEventType["IM_COMMIT"] = EVT_IM_COMMIT()] = "IM_COMMIT";
    /**
     * 输入法请求显示候选字事件(im_candidates_event_t)。
     *
     */
    TEventType[TEventType["IM_SHOW_CANDIDATES"] = EVT_IM_SHOW_CANDIDATES()] = "IM_SHOW_CANDIDATES";
    /**
     * 软键盘Action点击事件(event_t)。
     *
     */
    TEventType[TEventType["IM_ACTION"] = EVT_IM_ACTION()] = "IM_ACTION";
    /**
     * 请求更新软键盘上的Action按钮的信息(im_action_button_info_event_t)。
     *
     */
    TEventType[TEventType["IM_ACTION_INFO"] = EVT_IM_ACTION_INFO()] = "IM_ACTION_INFO";
    /**
     * 开始拖动(event_t)。
     *
     */
    TEventType[TEventType["DRAG_START"] = EVT_DRAG_START()] = "DRAG_START";
    /**
     * 拖动(event_t)。
     *
     */
    TEventType[TEventType["DRAG"] = EVT_DRAG()] = "DRAG";
    /**
     * 结束拖动(event_t)。
     *
     */
    TEventType[TEventType["DRAG_END"] = EVT_DRAG_END()] = "DRAG_END";
    /**
     * 在指定的时间内(WITH_SCREEN_SAVER_TIME)，没有用户输入事件，由窗口管理器触发。
     *
     */
    TEventType[TEventType["SCREEN_SAVER"] = EVT_SCREEN_SAVER()] = "SCREEN_SAVER";
    /**
     * 内存不足(event_t)。
     *
     */
    TEventType[TEventType["LOW_MEMORY"] = EVT_LOW_MEMORY()] = "LOW_MEMORY";
    /**
     * 内存耗尽(event_t)。
     *
     */
    TEventType[TEventType["OUT_OF_MEMORY"] = EVT_OUT_OF_MEMORY()] = "OUT_OF_MEMORY";
    /**
     * 屏幕即将旋转(event_t)。
     *
     */
    TEventType[TEventType["ORIENTATION_WILL_CHANGED"] = EVT_ORIENTATION_WILL_CHANGED()] = "ORIENTATION_WILL_CHANGED";
    /**
     * 屏幕旋转(event_t)。
     *
     */
    TEventType[TEventType["ORIENTATION_CHANGED"] = EVT_ORIENTATION_CHANGED()] = "ORIENTATION_CHANGED";
    /**
     * 控件创建事件(event_t)。
     *
     */
    TEventType[TEventType["WIDGET_CREATED"] = EVT_WIDGET_CREATED()] = "WIDGET_CREATED";
    /**
     * 请求退出应用程序事件。
     *点击原生窗口关闭按钮时，通过窗口管理器触发，注册该事件并返回RET_STOP，可以阻止窗口关闭。
     *
     */
    TEventType[TEventType["REQUEST_QUIT_APP"] = EVT_REQUEST_QUIT_APP()] = "REQUEST_QUIT_APP";
    /**
     * 主题变化(event_t)。
     *
     */
    TEventType[TEventType["THEME_CHANGED"] = EVT_THEME_CHANGED()] = "THEME_CHANGED";
    /**
     * 控件加载新的子控件(event_t)。
     *
     */
    TEventType[TEventType["WIDGET_ADD_CHILD"] = EVT_WIDGET_ADD_CHILD()] = "WIDGET_ADD_CHILD";
    /**
     * 控件移除子控件(event_t)。
     *
     */
    TEventType[TEventType["WIDGET_REMOVE_CHILD"] = EVT_WIDGET_REMOVE_CHILD()] = "WIDGET_REMOVE_CHILD";
    /**
     * event queue其它请求编号起始值。
     *
     */
    TEventType[TEventType["REQ_START"] = EVT_REQ_START()] = "REQ_START";
    /**
     * 用户定义事件起始值。
     *
     */
    TEventType[TEventType["USER_START"] = EVT_USER_START()] = "USER_START";
    /**
     * 无效事件名称。
     *
     */
    TEventType[TEventType["NONE"] = EVT_NONE()] = "NONE";
    /**
     * 对象的属性即将改变的事件名(prop_change_event_t)。
     *
     */
    TEventType[TEventType["PROP_WILL_CHANGE"] = EVT_PROP_WILL_CHANGE()] = "PROP_WILL_CHANGE";
    /**
     * 对象的属性改变的事件名(prop_change_event_t)。
     *
     */
    TEventType[TEventType["PROP_CHANGED"] = EVT_PROP_CHANGED()] = "PROP_CHANGED";
    /**
     * 即将增加和删除集合中的项目(event_t)。
     *
     */
    TEventType[TEventType["ITEMS_WILL_CHANGE"] = EVT_ITEMS_WILL_CHANGE()] = "ITEMS_WILL_CHANGE";
    /**
     * 完成增加和删除集合中的项目(event_t)。
     *
     */
    TEventType[TEventType["ITEMS_CHANGED"] = EVT_ITEMS_CHANGED()] = "ITEMS_CHANGED";
    /**
     * 对象的属性改变的事件名(props_event_t)。
     *
     */
    TEventType[TEventType["PROPS_CHANGED"] = EVT_PROPS_CHANGED()] = "PROPS_CHANGED";
    /**
     * 进度状态(progress_event_t)。
     *
     */
    TEventType[TEventType["PROGRESS"] = EVT_PROGRESS()] = "PROGRESS";
    /**
     * 对象销毁事件名(event_t)。
     *
     */
    TEventType[TEventType["DESTROY"] = EVT_DESTROY()] = "DESTROY";
})(TEventType || (TEventType = {}));
;
/**
 * 字体管理器，负责字体的加载和缓存管理。
 *(如果使用nanovg，字体由nanovg内部管理)
 *
 */
var TFontManager = /** @class */ (function () {
    function TFontManager(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 卸载指定的字体。
     *
     * @param name 字体名，为NULL时使用缺省字体。
     * @param size 字体的大小(矢量字体指定为0即可)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TFontManager.prototype.unloadFont = function (name, size) {
        return font_manager_unload_font(this != null ? (this.nativeObj || this) : null, name, size);
    };
    /**
     * 卸载全部字体。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TFontManager.prototype.unloadAll = function () {
        return font_manager_unload_all(this != null ? (this.nativeObj || this) : null);
    };
    return TFontManager;
}());
;
/**
 * 字模格式常量定义。
 *
 */
var TGlyphFormat;
(function (TGlyphFormat) {
    /**
     * 每个像素占用1个字节(缺省)。
     *
     */
    TGlyphFormat[TGlyphFormat["ALPHA"] = GLYPH_FMT_ALPHA()] = "ALPHA";
    /**
     * 每个像素占用1个比特。
     *
     */
    TGlyphFormat[TGlyphFormat["MONO"] = GLYPH_FMT_MONO()] = "MONO";
    /**
     * 每个像素占用4个字节。
     *
     */
    TGlyphFormat[TGlyphFormat["RGBA"] = GLYPH_FMT_RGBA()] = "RGBA";
})(TGlyphFormat || (TGlyphFormat = {}));
;
/**
 * idle可以看作是duration为0的定时器。
 *
 *> idle可以用来实现一些异步处理。
 *
 *示例：
 *
 *
 *> 在非GUI线程请用idle\_queue。
 *
 */
var TIdle = /** @class */ (function () {
    function TIdle() {
    }
    /**
     * 增加一个idle。
     *
     * @param on_idle idle回调函数，回调函数返回RET_REPEAT，则下次继续执行，否则自动移出。
     * @param ctx idle回调函数的上下文。
     *
     * @returns 返回idle的ID，0表示失败。
     */
    TIdle.add = function (on_idle, ctx) {
        return idle_add(on_idle, ctx);
    };
    /**
     * 删除指定的idle。
     *
     * @param idle_id idleID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TIdle.remove = function (idle_id) {
        return idle_remove(idle_id);
    };
    return TIdle;
}());
;
/**
 * 图片管理器。负责加载，解码和缓存图片。
 *
 */
var TImageManager = /** @class */ (function () {
    function TImageManager(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 获取缺省的图片管理器。
     *
     *
     * @returns 返回图片管理器对象。
     */
    TImageManager.instance = function () {
        return new TImageManager(image_manager());
    };
    /**
     * 获取指定的图片。
     *先从缓存查找，如果没找到，再加载并缓存。
     *
     * @param name 图片名称。
     * @param image 用于返回图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageManager.prototype.getBitmap = function (name, image) {
        return image_manager_get_bitmap(this != null ? (this.nativeObj || this) : null, name, image != null ? (image.nativeObj || image) : null);
    };
    return TImageManager;
}());
;
/**
 * 输入类型常量定义。
 *
 */
var TInputType;
(function (TInputType) {
    /**
     * 文本。
     *
     */
    TInputType[TInputType["TEXT"] = INPUT_TEXT()] = "TEXT";
    /**
     * 整数。
     *
     */
    TInputType[TInputType["INT"] = INPUT_INT()] = "INT";
    /**
     * 非负整数。
     *
     */
    TInputType[TInputType["UINT"] = INPUT_UINT()] = "UINT";
    /**
     * 16进制整数。
     *
     */
    TInputType[TInputType["HEX"] = INPUT_HEX()] = "HEX";
    /**
     * 浮点数。
     *
     */
    TInputType[TInputType["FLOAT"] = INPUT_FLOAT()] = "FLOAT";
    /**
     * 非负浮点数。
     *
     */
    TInputType[TInputType["UFLOAT"] = INPUT_UFLOAT()] = "UFLOAT";
    /**
     * 邮件地址。
     *
     */
    TInputType[TInputType["EMAIL"] = INPUT_EMAIL()] = "EMAIL";
    /**
     * 密码。
     *
     */
    TInputType[TInputType["PASSWORD"] = INPUT_PASSWORD()] = "PASSWORD";
    /**
     * 电话号码。
     *
     */
    TInputType[TInputType["PHONE"] = INPUT_PHONE()] = "PHONE";
    /**
     * 使用自定义的软键盘(如计算器等应用不希望弹出系统软键盘)。
     *
     */
    TInputType[TInputType["CUSTOM"] = INPUT_CUSTOM()] = "CUSTOM";
    /**
     * 使用自定义的密码软键盘。
     *
     */
    TInputType[TInputType["CUSTOM_PASSWORD"] = INPUT_CUSTOM_PASSWORD()] = "CUSTOM_PASSWORD";
})(TInputType || (TInputType = {}));
;
/**
 * 类型常量定义。
 *
 */
var TValueType;
(function (TValueType) {
    /**
     * 无效类型。
     *
     */
    TValueType[TValueType["INVALID"] = VALUE_TYPE_INVALID()] = "INVALID";
    /**
     * BOOL类型。
     *
     */
    TValueType[TValueType["BOOL"] = VALUE_TYPE_BOOL()] = "BOOL";
    /**
     * int8_t类型。
     *
     */
    TValueType[TValueType["INT8"] = VALUE_TYPE_INT8()] = "INT8";
    /**
     * uint8_t类型。
     *
     */
    TValueType[TValueType["UINT8"] = VALUE_TYPE_UINT8()] = "UINT8";
    /**
     * int16_t类型。
     *
     */
    TValueType[TValueType["INT16"] = VALUE_TYPE_INT16()] = "INT16";
    /**
     * uint16_t类型。
     *
     */
    TValueType[TValueType["UINT16"] = VALUE_TYPE_UINT16()] = "UINT16";
    /**
     * int32_t类型。
     *
     */
    TValueType[TValueType["INT32"] = VALUE_TYPE_INT32()] = "INT32";
    /**
     * uint32_t类型。
     *
     */
    TValueType[TValueType["UINT32"] = VALUE_TYPE_UINT32()] = "UINT32";
    /**
     * int64_t类型。
     *
     */
    TValueType[TValueType["INT64"] = VALUE_TYPE_INT64()] = "INT64";
    /**
     * uint64_t类型。
     *
     */
    TValueType[TValueType["UINT64"] = VALUE_TYPE_UINT64()] = "UINT64";
    /**
     * void*类型。
     *
     */
    TValueType[TValueType["POINTER"] = VALUE_TYPE_POINTER()] = "POINTER";
    /**
     * float_t类型。
     *
     */
    TValueType[TValueType["FLOAT"] = VALUE_TYPE_FLOAT()] = "FLOAT";
    /**
     * float类型。
     *
     */
    TValueType[TValueType["FLOAT32"] = VALUE_TYPE_FLOAT32()] = "FLOAT32";
    /**
     * double类型。
     *
     */
    TValueType[TValueType["DOUBLE"] = VALUE_TYPE_DOUBLE()] = "DOUBLE";
    /**
     * char*类型。
     *
     */
    TValueType[TValueType["STRING"] = VALUE_TYPE_STRING()] = "STRING";
    /**
     * wchar_t*类型。
     *
     */
    TValueType[TValueType["WSTRING"] = VALUE_TYPE_WSTRING()] = "WSTRING";
    /**
     * object_t*类型。
     *
     */
    TValueType[TValueType["OBJECT"] = VALUE_TYPE_OBJECT()] = "OBJECT";
    /**
     * 带长度的字符串。
     *
     */
    TValueType[TValueType["SIZED_STRING"] = VALUE_TYPE_SIZED_STRING()] = "SIZED_STRING";
    /**
     * 二进制数据。
     *
     */
    TValueType[TValueType["BINARY"] = VALUE_TYPE_BINARY()] = "BINARY";
    /**
     * 二进制数据(UBJSON)。
     *
     */
    TValueType[TValueType["UBJSON"] = VALUE_TYPE_UBJSON()] = "UBJSON";
    /**
     * 特殊用途。
     *
     */
    TValueType[TValueType["TOKEN"] = VALUE_TYPE_TOKEN()] = "TOKEN";
})(TValueType || (TValueType = {}));
;
/**
 * 输入法接口。
 *
 *常见的实现方式有以下几种：
 *
 ** 空实现。用于不需要输入法的嵌入式平台。
 *
 ** 缺省实现。用于需要输入法的嵌入式平台。
 *
 ** 基于SDL实现的平台原生输入法。用于桌面系统和手机系统。
 *
 *
 *
 *> 输入类型请参考：[input\_type](input_type_t.md)
 *
 */
var TInputMethod = /** @class */ (function () {
    function TInputMethod(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 提交输入文本。
     *
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TInputMethod.prototype.commitText = function (text) {
        return input_method_commit_text(this != null ? (this.nativeObj || this) : null, text);
    };
    /**
     * 提交按键。
     *
     * @param key 键值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TInputMethod.prototype.dispatchKey = function (key) {
        return input_method_dispatch_key(this != null ? (this.nativeObj || this) : null, key);
    };
    /**
     * 获取全局输入法对象。
     *
     *
     * @returns 成功返回输入法对象，失败返回NULL。
     */
    TInputMethod.instance = function () {
        return new TInputMethod(input_method());
    };
    return TInputMethod;
}());
;
/**
 * key code。
 *
 */
var TKeyCode;
(function (TKeyCode) {
    /**
     * TK_KEY_RETURN
     *
     */
    TKeyCode[TKeyCode["KEY_RETURN"] = TK_KEY_RETURN()] = "KEY_RETURN";
    /**
     * TK_KEY_ESCAPE
     *
     */
    TKeyCode[TKeyCode["KEY_ESCAPE"] = TK_KEY_ESCAPE()] = "KEY_ESCAPE";
    /**
     * TK_KEY_BACKSPACE
     *
     */
    TKeyCode[TKeyCode["KEY_BACKSPACE"] = TK_KEY_BACKSPACE()] = "KEY_BACKSPACE";
    /**
     * TK_KEY_TAB
     *
     */
    TKeyCode[TKeyCode["KEY_TAB"] = TK_KEY_TAB()] = "KEY_TAB";
    /**
     * TK_KEY_SPACE
     *
     */
    TKeyCode[TKeyCode["KEY_SPACE"] = TK_KEY_SPACE()] = "KEY_SPACE";
    /**
     * TK_KEY_EXCLAIM
     *
     */
    TKeyCode[TKeyCode["KEY_EXCLAIM"] = TK_KEY_EXCLAIM()] = "KEY_EXCLAIM";
    /**
     * TK_KEY_QUOTEDBL
     *
     */
    TKeyCode[TKeyCode["KEY_QUOTEDBL"] = TK_KEY_QUOTEDBL()] = "KEY_QUOTEDBL";
    /**
     * TK_KEY_HASH
     *
     */
    TKeyCode[TKeyCode["KEY_HASH"] = TK_KEY_HASH()] = "KEY_HASH";
    /**
     * TK_KEY_PERCENT
     *
     */
    TKeyCode[TKeyCode["KEY_PERCENT"] = TK_KEY_PERCENT()] = "KEY_PERCENT";
    /**
     * TK_KEY_DOLLAR
     *
     */
    TKeyCode[TKeyCode["KEY_DOLLAR"] = TK_KEY_DOLLAR()] = "KEY_DOLLAR";
    /**
     * TK_KEY_AMPERSAND
     *
     */
    TKeyCode[TKeyCode["KEY_AMPERSAND"] = TK_KEY_AMPERSAND()] = "KEY_AMPERSAND";
    /**
     * TK_KEY_QUOTE
     *
     */
    TKeyCode[TKeyCode["KEY_QUOTE"] = TK_KEY_QUOTE()] = "KEY_QUOTE";
    /**
     * TK_KEY_LEFTPAREN
     *
     */
    TKeyCode[TKeyCode["KEY_LEFTPAREN"] = TK_KEY_LEFTPAREN()] = "KEY_LEFTPAREN";
    /**
     * TK_KEY_RIGHTPAREN
     *
     */
    TKeyCode[TKeyCode["KEY_RIGHTPAREN"] = TK_KEY_RIGHTPAREN()] = "KEY_RIGHTPAREN";
    /**
     * TK_KEY_ASTERISK
     *
     */
    TKeyCode[TKeyCode["KEY_ASTERISK"] = TK_KEY_ASTERISK()] = "KEY_ASTERISK";
    /**
     * TK_KEY_PLUS
     *
     */
    TKeyCode[TKeyCode["KEY_PLUS"] = TK_KEY_PLUS()] = "KEY_PLUS";
    /**
     * TK_KEY_COMMA
     *
     */
    TKeyCode[TKeyCode["KEY_COMMA"] = TK_KEY_COMMA()] = "KEY_COMMA";
    /**
     * TK_KEY_MINUS
     *
     */
    TKeyCode[TKeyCode["KEY_MINUS"] = TK_KEY_MINUS()] = "KEY_MINUS";
    /**
     * TK_KEY_PERIOD
     *
     */
    TKeyCode[TKeyCode["KEY_PERIOD"] = TK_KEY_PERIOD()] = "KEY_PERIOD";
    /**
     * TK_KEY_SLASH
     *
     */
    TKeyCode[TKeyCode["KEY_SLASH"] = TK_KEY_SLASH()] = "KEY_SLASH";
    /**
     * TK_KEY_0
     *
     */
    TKeyCode[TKeyCode["KEY_0"] = TK_KEY_0()] = "KEY_0";
    /**
     * TK_KEY_1
     *
     */
    TKeyCode[TKeyCode["KEY_1"] = TK_KEY_1()] = "KEY_1";
    /**
     * TK_KEY_2
     *
     */
    TKeyCode[TKeyCode["KEY_2"] = TK_KEY_2()] = "KEY_2";
    /**
     * TK_KEY_3
     *
     */
    TKeyCode[TKeyCode["KEY_3"] = TK_KEY_3()] = "KEY_3";
    /**
     * TK_KEY_4
     *
     */
    TKeyCode[TKeyCode["KEY_4"] = TK_KEY_4()] = "KEY_4";
    /**
     * TK_KEY_5
     *
     */
    TKeyCode[TKeyCode["KEY_5"] = TK_KEY_5()] = "KEY_5";
    /**
     * TK_KEY_6
     *
     */
    TKeyCode[TKeyCode["KEY_6"] = TK_KEY_6()] = "KEY_6";
    /**
     * TK_KEY_7
     *
     */
    TKeyCode[TKeyCode["KEY_7"] = TK_KEY_7()] = "KEY_7";
    /**
     * TK_KEY_8
     *
     */
    TKeyCode[TKeyCode["KEY_8"] = TK_KEY_8()] = "KEY_8";
    /**
     * TK_KEY_9
     *
     */
    TKeyCode[TKeyCode["KEY_9"] = TK_KEY_9()] = "KEY_9";
    /**
     * TK_KEY_COLON
     *
     */
    TKeyCode[TKeyCode["KEY_COLON"] = TK_KEY_COLON()] = "KEY_COLON";
    /**
     * TK_KEY_SEMICOLON
     *
     */
    TKeyCode[TKeyCode["KEY_SEMICOLON"] = TK_KEY_SEMICOLON()] = "KEY_SEMICOLON";
    /**
     * TK_KEY_LESS
     *
     */
    TKeyCode[TKeyCode["KEY_LESS"] = TK_KEY_LESS()] = "KEY_LESS";
    /**
     * TK_KEY_EQUAL
     *
     */
    TKeyCode[TKeyCode["KEY_EQUAL"] = TK_KEY_EQUAL()] = "KEY_EQUAL";
    /**
     * TK_KEY_GREATER
     *
     */
    TKeyCode[TKeyCode["KEY_GREATER"] = TK_KEY_GREATER()] = "KEY_GREATER";
    /**
     * TK_KEY_QUESTION
     *
     */
    TKeyCode[TKeyCode["KEY_QUESTION"] = TK_KEY_QUESTION()] = "KEY_QUESTION";
    /**
     * TK_KEY_AT
     *
     */
    TKeyCode[TKeyCode["KEY_AT"] = TK_KEY_AT()] = "KEY_AT";
    /**
     * TK_KEY_LEFTBRACKET
     *
     */
    TKeyCode[TKeyCode["KEY_LEFTBRACKET"] = TK_KEY_LEFTBRACKET()] = "KEY_LEFTBRACKET";
    /**
     * TK_KEY_BACKSLASH
     *
     */
    TKeyCode[TKeyCode["KEY_BACKSLASH"] = TK_KEY_BACKSLASH()] = "KEY_BACKSLASH";
    /**
     * TK_KEY_RIGHTBRACKET
     *
     */
    TKeyCode[TKeyCode["KEY_RIGHTBRACKET"] = TK_KEY_RIGHTBRACKET()] = "KEY_RIGHTBRACKET";
    /**
     * TK_KEY_CARET
     *
     */
    TKeyCode[TKeyCode["KEY_CARET"] = TK_KEY_CARET()] = "KEY_CARET";
    /**
     * TK_KEY_UNDERSCORE
     *
     */
    TKeyCode[TKeyCode["KEY_UNDERSCORE"] = TK_KEY_UNDERSCORE()] = "KEY_UNDERSCORE";
    /**
     * TK_KEY_BACKQUOTE
     *
     */
    TKeyCode[TKeyCode["KEY_BACKQUOTE"] = TK_KEY_BACKQUOTE()] = "KEY_BACKQUOTE";
    /**
     * TK_KEY_a
     *
     */
    TKeyCode[TKeyCode["KEY_a"] = TK_KEY_a()] = "KEY_a";
    /**
     * TK_KEY_b
     *
     */
    TKeyCode[TKeyCode["KEY_b"] = TK_KEY_b()] = "KEY_b";
    /**
     * TK_KEY_c
     *
     */
    TKeyCode[TKeyCode["KEY_c"] = TK_KEY_c()] = "KEY_c";
    /**
     * TK_KEY_d
     *
     */
    TKeyCode[TKeyCode["KEY_d"] = TK_KEY_d()] = "KEY_d";
    /**
     * TK_KEY_e
     *
     */
    TKeyCode[TKeyCode["KEY_e"] = TK_KEY_e()] = "KEY_e";
    /**
     * TK_KEY_f
     *
     */
    TKeyCode[TKeyCode["KEY_f"] = TK_KEY_f()] = "KEY_f";
    /**
     * TK_KEY_g
     *
     */
    TKeyCode[TKeyCode["KEY_g"] = TK_KEY_g()] = "KEY_g";
    /**
     * TK_KEY_h
     *
     */
    TKeyCode[TKeyCode["KEY_h"] = TK_KEY_h()] = "KEY_h";
    /**
     * TK_KEY_i
     *
     */
    TKeyCode[TKeyCode["KEY_i"] = TK_KEY_i()] = "KEY_i";
    /**
     * TK_KEY_j
     *
     */
    TKeyCode[TKeyCode["KEY_j"] = TK_KEY_j()] = "KEY_j";
    /**
     * TK_KEY_k
     *
     */
    TKeyCode[TKeyCode["KEY_k"] = TK_KEY_k()] = "KEY_k";
    /**
     * TK_KEY_l
     *
     */
    TKeyCode[TKeyCode["KEY_l"] = TK_KEY_l()] = "KEY_l";
    /**
     * TK_KEY_m
     *
     */
    TKeyCode[TKeyCode["KEY_m"] = TK_KEY_m()] = "KEY_m";
    /**
     * TK_KEY_n
     *
     */
    TKeyCode[TKeyCode["KEY_n"] = TK_KEY_n()] = "KEY_n";
    /**
     * TK_KEY_o
     *
     */
    TKeyCode[TKeyCode["KEY_o"] = TK_KEY_o()] = "KEY_o";
    /**
     * TK_KEY_p
     *
     */
    TKeyCode[TKeyCode["KEY_p"] = TK_KEY_p()] = "KEY_p";
    /**
     * TK_KEY_q
     *
     */
    TKeyCode[TKeyCode["KEY_q"] = TK_KEY_q()] = "KEY_q";
    /**
     * TK_KEY_r
     *
     */
    TKeyCode[TKeyCode["KEY_r"] = TK_KEY_r()] = "KEY_r";
    /**
     * TK_KEY_s
     *
     */
    TKeyCode[TKeyCode["KEY_s"] = TK_KEY_s()] = "KEY_s";
    /**
     * TK_KEY_t
     *
     */
    TKeyCode[TKeyCode["KEY_t"] = TK_KEY_t()] = "KEY_t";
    /**
     * TK_KEY_u
     *
     */
    TKeyCode[TKeyCode["KEY_u"] = TK_KEY_u()] = "KEY_u";
    /**
     * TK_KEY_v
     *
     */
    TKeyCode[TKeyCode["KEY_v"] = TK_KEY_v()] = "KEY_v";
    /**
     * TK_KEY_w
     *
     */
    TKeyCode[TKeyCode["KEY_w"] = TK_KEY_w()] = "KEY_w";
    /**
     * TK_KEY_x
     *
     */
    TKeyCode[TKeyCode["KEY_x"] = TK_KEY_x()] = "KEY_x";
    /**
     * TK_KEY_y
     *
     */
    TKeyCode[TKeyCode["KEY_y"] = TK_KEY_y()] = "KEY_y";
    /**
     * TK_KEY_z
     *
     */
    TKeyCode[TKeyCode["KEY_z"] = TK_KEY_z()] = "KEY_z";
    /**
     * TK_KEY_A
     *
     */
    TKeyCode[TKeyCode["KEY_A"] = TK_KEY_A()] = "KEY_A";
    /**
     * TK_KEY_B
     *
     */
    TKeyCode[TKeyCode["KEY_B"] = TK_KEY_B()] = "KEY_B";
    /**
     * TK_KEY_C
     *
     */
    TKeyCode[TKeyCode["KEY_C"] = TK_KEY_C()] = "KEY_C";
    /**
     * TK_KEY_D
     *
     */
    TKeyCode[TKeyCode["KEY_D"] = TK_KEY_D()] = "KEY_D";
    /**
     * TK_KEY_E
     *
     */
    TKeyCode[TKeyCode["KEY_E"] = TK_KEY_E()] = "KEY_E";
    /**
     * TK_KEY_F
     *
     */
    TKeyCode[TKeyCode["KEY_F"] = TK_KEY_F()] = "KEY_F";
    /**
     * TK_KEY_G
     *
     */
    TKeyCode[TKeyCode["KEY_G"] = TK_KEY_G()] = "KEY_G";
    /**
     * TK_KEY_H
     *
     */
    TKeyCode[TKeyCode["KEY_H"] = TK_KEY_H()] = "KEY_H";
    /**
     * TK_KEY_I
     *
     */
    TKeyCode[TKeyCode["KEY_I"] = TK_KEY_I()] = "KEY_I";
    /**
     * TK_KEY_J
     *
     */
    TKeyCode[TKeyCode["KEY_J"] = TK_KEY_J()] = "KEY_J";
    /**
     * TK_KEY_K
     *
     */
    TKeyCode[TKeyCode["KEY_K"] = TK_KEY_K()] = "KEY_K";
    /**
     * TK_KEY_L
     *
     */
    TKeyCode[TKeyCode["KEY_L"] = TK_KEY_L()] = "KEY_L";
    /**
     * TK_KEY_M
     *
     */
    TKeyCode[TKeyCode["KEY_M"] = TK_KEY_M()] = "KEY_M";
    /**
     * TK_KEY_N
     *
     */
    TKeyCode[TKeyCode["KEY_N"] = TK_KEY_N()] = "KEY_N";
    /**
     * TK_KEY_O
     *
     */
    TKeyCode[TKeyCode["KEY_O"] = TK_KEY_O()] = "KEY_O";
    /**
     * TK_KEY_P
     *
     */
    TKeyCode[TKeyCode["KEY_P"] = TK_KEY_P()] = "KEY_P";
    /**
     * TK_KEY_Q
     *
     */
    TKeyCode[TKeyCode["KEY_Q"] = TK_KEY_Q()] = "KEY_Q";
    /**
     * TK_KEY_R
     *
     */
    TKeyCode[TKeyCode["KEY_R"] = TK_KEY_R()] = "KEY_R";
    /**
     * TK_KEY_S
     *
     */
    TKeyCode[TKeyCode["KEY_S"] = TK_KEY_S()] = "KEY_S";
    /**
     * TK_KEY_T
     *
     */
    TKeyCode[TKeyCode["KEY_T"] = TK_KEY_T()] = "KEY_T";
    /**
     * TK_KEY_U
     *
     */
    TKeyCode[TKeyCode["KEY_U"] = TK_KEY_U()] = "KEY_U";
    /**
     * TK_KEY_V
     *
     */
    TKeyCode[TKeyCode["KEY_V"] = TK_KEY_V()] = "KEY_V";
    /**
     * TK_KEY_W
     *
     */
    TKeyCode[TKeyCode["KEY_W"] = TK_KEY_W()] = "KEY_W";
    /**
     * TK_KEY_X
     *
     */
    TKeyCode[TKeyCode["KEY_X"] = TK_KEY_X()] = "KEY_X";
    /**
     * TK_KEY_Y
     *
     */
    TKeyCode[TKeyCode["KEY_Y"] = TK_KEY_Y()] = "KEY_Y";
    /**
     * TK_KEY_Z
     *
     */
    TKeyCode[TKeyCode["KEY_Z"] = TK_KEY_Z()] = "KEY_Z";
    /**
     * TK_KEY_DOT
     *
     */
    TKeyCode[TKeyCode["KEY_DOT"] = TK_KEY_DOT()] = "KEY_DOT";
    /**
     * TK_KEY_DELETE
     *
     */
    TKeyCode[TKeyCode["KEY_DELETE"] = TK_KEY_DELETE()] = "KEY_DELETE";
    /**
     * TK_KEY_LEFTBRACE
     *
     */
    TKeyCode[TKeyCode["KEY_LEFTBRACE"] = TK_KEY_LEFTBRACE()] = "KEY_LEFTBRACE";
    /**
     * TK_KEY_RIGHTBRACE
     *
     */
    TKeyCode[TKeyCode["KEY_RIGHTBRACE"] = TK_KEY_RIGHTBRACE()] = "KEY_RIGHTBRACE";
    /**
     * TK_KEY_LSHIFT
     *
     */
    TKeyCode[TKeyCode["KEY_LSHIFT"] = TK_KEY_LSHIFT()] = "KEY_LSHIFT";
    /**
     * TK_KEY_RSHIFT
     *
     */
    TKeyCode[TKeyCode["KEY_RSHIFT"] = TK_KEY_RSHIFT()] = "KEY_RSHIFT";
    /**
     * TK_KEY_LCTRL
     *
     */
    TKeyCode[TKeyCode["KEY_LCTRL"] = TK_KEY_LCTRL()] = "KEY_LCTRL";
    /**
     * TK_KEY_RCTRL
     *
     */
    TKeyCode[TKeyCode["KEY_RCTRL"] = TK_KEY_RCTRL()] = "KEY_RCTRL";
    /**
     * TK_KEY_LALT
     *
     */
    TKeyCode[TKeyCode["KEY_LALT"] = TK_KEY_LALT()] = "KEY_LALT";
    /**
     * TK_KEY_RALT
     *
     */
    TKeyCode[TKeyCode["KEY_RALT"] = TK_KEY_RALT()] = "KEY_RALT";
    /**
     * TK_KEY_CAPSLOCK
     *
     */
    TKeyCode[TKeyCode["KEY_CAPSLOCK"] = TK_KEY_CAPSLOCK()] = "KEY_CAPSLOCK";
    /**
     * TK_KEY_HOME
     *
     */
    TKeyCode[TKeyCode["KEY_HOME"] = TK_KEY_HOME()] = "KEY_HOME";
    /**
     * TK_KEY_END
     *
     */
    TKeyCode[TKeyCode["KEY_END"] = TK_KEY_END()] = "KEY_END";
    /**
     * TK_KEY_INSERT
     *
     */
    TKeyCode[TKeyCode["KEY_INSERT"] = TK_KEY_INSERT()] = "KEY_INSERT";
    /**
     * TK_KEY_UP
     *
     */
    TKeyCode[TKeyCode["KEY_UP"] = TK_KEY_UP()] = "KEY_UP";
    /**
     * TK_KEY_DOWN
     *
     */
    TKeyCode[TKeyCode["KEY_DOWN"] = TK_KEY_DOWN()] = "KEY_DOWN";
    /**
     * TK_KEY_LEFT
     *
     */
    TKeyCode[TKeyCode["KEY_LEFT"] = TK_KEY_LEFT()] = "KEY_LEFT";
    /**
     * TK_KEY_RIGHT
     *
     */
    TKeyCode[TKeyCode["KEY_RIGHT"] = TK_KEY_RIGHT()] = "KEY_RIGHT";
    /**
     * TK_KEY_PAGEUP
     *
     */
    TKeyCode[TKeyCode["KEY_PAGEUP"] = TK_KEY_PAGEUP()] = "KEY_PAGEUP";
    /**
     * TK_KEY_PAGEDOWN
     *
     */
    TKeyCode[TKeyCode["KEY_PAGEDOWN"] = TK_KEY_PAGEDOWN()] = "KEY_PAGEDOWN";
    /**
     * TK_KEY_F1
     *
     */
    TKeyCode[TKeyCode["KEY_F1"] = TK_KEY_F1()] = "KEY_F1";
    /**
     * TK_KEY_F2
     *
     */
    TKeyCode[TKeyCode["KEY_F2"] = TK_KEY_F2()] = "KEY_F2";
    /**
     * TK_KEY_F3
     *
     */
    TKeyCode[TKeyCode["KEY_F3"] = TK_KEY_F3()] = "KEY_F3";
    /**
     * TK_KEY_F4
     *
     */
    TKeyCode[TKeyCode["KEY_F4"] = TK_KEY_F4()] = "KEY_F4";
    /**
     * TK_KEY_F5
     *
     */
    TKeyCode[TKeyCode["KEY_F5"] = TK_KEY_F5()] = "KEY_F5";
    /**
     * TK_KEY_F6
     *
     */
    TKeyCode[TKeyCode["KEY_F6"] = TK_KEY_F6()] = "KEY_F6";
    /**
     * TK_KEY_F7
     *
     */
    TKeyCode[TKeyCode["KEY_F7"] = TK_KEY_F7()] = "KEY_F7";
    /**
     * TK_KEY_F8
     *
     */
    TKeyCode[TKeyCode["KEY_F8"] = TK_KEY_F8()] = "KEY_F8";
    /**
     * TK_KEY_F9
     *
     */
    TKeyCode[TKeyCode["KEY_F9"] = TK_KEY_F9()] = "KEY_F9";
    /**
     * TK_KEY_F10
     *
     */
    TKeyCode[TKeyCode["KEY_F10"] = TK_KEY_F10()] = "KEY_F10";
    /**
     * TK_KEY_F11
     *
     */
    TKeyCode[TKeyCode["KEY_F11"] = TK_KEY_F11()] = "KEY_F11";
    /**
     * TK_KEY_F12
     *
     */
    TKeyCode[TKeyCode["KEY_F12"] = TK_KEY_F12()] = "KEY_F12";
    /**
     * TK_KEY_MENU
     *
     */
    TKeyCode[TKeyCode["KEY_MENU"] = TK_KEY_MENU()] = "KEY_MENU";
    /**
     * TK_KEY_COMMAND
     *
     */
    TKeyCode[TKeyCode["KEY_COMMAND"] = TK_KEY_COMMAND()] = "KEY_COMMAND";
    /**
     * TK_KEY_BACK
     *
     */
    TKeyCode[TKeyCode["KEY_BACK"] = TK_KEY_BACK()] = "KEY_BACK";
    /**
     * TK_KEY_CANCEL
     *
     */
    TKeyCode[TKeyCode["KEY_CANCEL"] = TK_KEY_CANCEL()] = "KEY_CANCEL";
})(TKeyCode || (TKeyCode = {}));
;
/**
 * 本地化信息。提供字符串翻译数据管理，当前语言改变的事件通知等等。
 *
 */
var TLocaleInfo = /** @class */ (function () {
    function TLocaleInfo(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 获取缺省locale_info。
     *
     *
     * @returns 返回locale_info对象。
     */
    TLocaleInfo.instance = function () {
        return new TLocaleInfo(locale_info());
    };
    /**
     * 翻译字符串。
     *
     * @param text 待翻译的文本。
     *
     * @returns 返回翻译之后的字符串。
     */
    TLocaleInfo.prototype.tr = function (text) {
        return locale_info_tr(this != null ? (this.nativeObj || this) : null, text);
    };
    /**
     * 设置当前的国家和语言。
     *
     * @param language 语言。
     * @param country 国家或地区。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TLocaleInfo.prototype.change = function (language, country) {
        return locale_info_change(this != null ? (this.nativeObj || this) : null, language, country);
    };
    /**
     * 注销指定事件的处理函数。
     *
     * @param id locale_info_on返回的ID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TLocaleInfo.prototype.off = function (id) {
        return locale_info_off(this != null ? (this.nativeObj || this) : null, id);
    };
    return TLocaleInfo;
}());
;
/**
 * style常量定义。
 *
 */
var TStyleId;
(function (TStyleId) {
    /**
     * 背景颜色。
     *
     */
    TStyleId[TStyleId["_ID_BG_COLOR"] = STYLE_ID_BG_COLOR()] = "_ID_BG_COLOR";
    /**
     * 前景颜色。
     *
     */
    TStyleId[TStyleId["_ID_FG_COLOR"] = STYLE_ID_FG_COLOR()] = "_ID_FG_COLOR";
    /**
     * 蒙版颜色。
     *
     */
    TStyleId[TStyleId["_ID_MASK_COLOR"] = STYLE_ID_MASK_COLOR()] = "_ID_MASK_COLOR";
    /**
     * 字体名称。
     *
     */
    TStyleId[TStyleId["_ID_FONT_NAME"] = STYLE_ID_FONT_NAME()] = "_ID_FONT_NAME";
    /**
     * 字体大小。
     *
     */
    TStyleId[TStyleId["_ID_FONT_SIZE"] = STYLE_ID_FONT_SIZE()] = "_ID_FONT_SIZE";
    /**
     * 字体风格(粗体、斜体等)。
     *
     */
    TStyleId[TStyleId["_ID_FONT_STYLE"] = STYLE_ID_FONT_STYLE()] = "_ID_FONT_STYLE";
    /**
     * 文本颜色。
     *
     */
    TStyleId[TStyleId["_ID_TEXT_COLOR"] = STYLE_ID_TEXT_COLOR()] = "_ID_TEXT_COLOR";
    /**
     * 提示文本颜色。
     *
     */
    TStyleId[TStyleId["_ID_TIPS_TEXT_COLOR"] = STYLE_ID_TIPS_TEXT_COLOR()] = "_ID_TIPS_TEXT_COLOR";
    /**
     * 文本水平对齐的方式。
     *
     */
    TStyleId[TStyleId["_ID_TEXT_ALIGN_H"] = STYLE_ID_TEXT_ALIGN_H()] = "_ID_TEXT_ALIGN_H";
    /**
     * 文本垂直对齐的方式。
     *
     */
    TStyleId[TStyleId["_ID_TEXT_ALIGN_V"] = STYLE_ID_TEXT_ALIGN_V()] = "_ID_TEXT_ALIGN_V";
    /**
     * 边框颜色。
     *
     */
    TStyleId[TStyleId["_ID_BORDER_COLOR"] = STYLE_ID_BORDER_COLOR()] = "_ID_BORDER_COLOR";
    /**
     * 边框线宽。
     *
     */
    TStyleId[TStyleId["_ID_BORDER_WIDTH"] = STYLE_ID_BORDER_WIDTH()] = "_ID_BORDER_WIDTH";
    /**
     * 边框类型。
     *
     */
    TStyleId[TStyleId["_ID_BORDER"] = STYLE_ID_BORDER()] = "_ID_BORDER";
    /**
     * 图片的名称。
     *
     */
    TStyleId[TStyleId["_ID_BG_IMAGE"] = STYLE_ID_BG_IMAGE()] = "_ID_BG_IMAGE";
    /**
     * 图片的显示方式。
     *
     */
    TStyleId[TStyleId["_ID_BG_IMAGE_DRAW_TYPE"] = STYLE_ID_BG_IMAGE_DRAW_TYPE()] = "_ID_BG_IMAGE_DRAW_TYPE";
    /**
     * 图标的名称。
     *
     */
    TStyleId[TStyleId["_ID_ICON"] = STYLE_ID_ICON()] = "_ID_ICON";
    /**
     * 图片的名称。
     *
     */
    TStyleId[TStyleId["_ID_FG_IMAGE"] = STYLE_ID_FG_IMAGE()] = "_ID_FG_IMAGE";
    /**
     * 图片的显示方式。
     *
     */
    TStyleId[TStyleId["_ID_FG_IMAGE_DRAW_TYPE"] = STYLE_ID_FG_IMAGE_DRAW_TYPE()] = "_ID_FG_IMAGE_DRAW_TYPE";
    /**
     * 间距。
     *
     */
    TStyleId[TStyleId["_ID_SPACER"] = STYLE_ID_SPACER()] = "_ID_SPACER";
    /**
     * 边距。
     *
     */
    TStyleId[TStyleId["_ID_MARGIN"] = STYLE_ID_MARGIN()] = "_ID_MARGIN";
    /**
     * 左边距。
     *
     */
    TStyleId[TStyleId["_ID_MARGIN_LEFT"] = STYLE_ID_MARGIN_LEFT()] = "_ID_MARGIN_LEFT";
    /**
     * 右边距。
     *
     */
    TStyleId[TStyleId["_ID_MARGIN_RIGHT"] = STYLE_ID_MARGIN_RIGHT()] = "_ID_MARGIN_RIGHT";
    /**
     * 顶边距。
     *
     */
    TStyleId[TStyleId["_ID_MARGIN_TOP"] = STYLE_ID_MARGIN_TOP()] = "_ID_MARGIN_TOP";
    /**
     * 底边距。
     *
     */
    TStyleId[TStyleId["_ID_MARGIN_BOTTOM"] = STYLE_ID_MARGIN_BOTTOM()] = "_ID_MARGIN_BOTTOM";
    /**
     * 图标的位置。
     *
     */
    TStyleId[TStyleId["_ID_ICON_AT"] = STYLE_ID_ICON_AT()] = "_ID_ICON_AT";
    /**
     * Active图标的名称。
     *
     */
    TStyleId[TStyleId["_ID_ACTIVE_ICON"] = STYLE_ID_ACTIVE_ICON()] = "_ID_ACTIVE_ICON";
    /**
     * X方向的偏移，方便实现按下的效果。
     *
     */
    TStyleId[TStyleId["_ID_X_OFFSET"] = STYLE_ID_X_OFFSET()] = "_ID_X_OFFSET";
    /**
     * Y方向的偏移，方便实现按下的效果。
     *
     */
    TStyleId[TStyleId["_ID_Y_OFFSET"] = STYLE_ID_Y_OFFSET()] = "_ID_Y_OFFSET";
    /**
     * 编辑器中选中区域的背景颜色。
     *
     */
    TStyleId[TStyleId["_ID_SELECTED_BG_COLOR"] = STYLE_ID_SELECTED_BG_COLOR()] = "_ID_SELECTED_BG_COLOR";
    /**
     * 编辑器中选中区域的前景颜色。
     *
     */
    TStyleId[TStyleId["_ID_SELECTED_FG_COLOR"] = STYLE_ID_SELECTED_FG_COLOR()] = "_ID_SELECTED_FG_COLOR";
    /**
     * 编辑器中选中区域的文本颜色。
     *
     */
    TStyleId[TStyleId["_ID_SELECTED_TEXT_COLOR"] = STYLE_ID_SELECTED_TEXT_COLOR()] = "_ID_SELECTED_TEXT_COLOR";
    /**
     * 圆角半径(仅在WITH_VGCANVAS定义时生效)。
     *
     */
    TStyleId[TStyleId["_ID_ROUND_RADIUS"] = STYLE_ID_ROUND_RADIUS()] = "_ID_ROUND_RADIUS";
    /**
     * 子控件布局参数。
     *
     */
    TStyleId[TStyleId["_ID_CHILDREN_LAYOUT"] = STYLE_ID_CHILDREN_LAYOUT()] = "_ID_CHILDREN_LAYOUT";
    /**
     * 控件布局参数。
     *
     */
    TStyleId[TStyleId["_ID_SELF_LAYOUT"] = STYLE_ID_SELF_LAYOUT()] = "_ID_SELF_LAYOUT";
})(TStyleId || (TStyleId = {}));
;
/**
 * 控件风格。
 *
 *widget从style对象中，获取诸如字体、颜色和图片相关的参数，根据这些参数来绘制界面。
 *
 *
 *属性名称的请参考[style\_id](style_id_t.md)
 *
 */
var TStyle = /** @class */ (function () {
    function TStyle(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * widget状态改变时，通知style更新数据。
     *
     * @param widget 控件对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TStyle.prototype.notifyWidgetStateChanged = function (widget) {
        return style_notify_widget_state_changed(this != null ? (this.nativeObj || this) : null, widget != null ? (widget.nativeObj || widget) : null);
    };
    /**
     * 检查style对象是否有效
     *
     *
     * @returns 返回是否有效。
     */
    TStyle.prototype.isValid = function () {
        return style_is_valid(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取指定name的整数格式的值。
     *
     * @param name 属性名。
     * @param defval 缺省值。
     *
     * @returns 返回整数格式的值。
     */
    TStyle.prototype.getInt = function (name, defval) {
        return style_get_int(this != null ? (this.nativeObj || this) : null, name, defval);
    };
    /**
     * 获取指定name的字符串格式的值。
     *
     * @param name 属性名。
     * @param defval 缺省值。
     *
     * @returns 返回字符串格式的值。
     */
    TStyle.prototype.getStr = function (name, defval) {
        return style_get_str(this != null ? (this.nativeObj || this) : null, name, defval);
    };
    /**
     * 设置指定状态的指定属性的值(仅仅对mutable的style有效)。
     *
     * @param state 状态。
     * @param name 属性名。
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TStyle.prototype.set = function (state, name, value) {
        return style_set(this != null ? (this.nativeObj || this) : null, state, name, value != null ? (value.nativeObj || value) : null);
    };
    /**
     * 检查style是否是mutable的。
     *
     *
     * @returns 返回TRUE表示是，否则表示不是。
     */
    TStyle.prototype.isMutable = function () {
        return style_is_mutable(this != null ? (this.nativeObj || this) : null);
    };
    return TStyle;
}());
;
/**
 * 主题。
 *
 *负责管理缺省的主题数据，方便实现style\_const。
 *
 */
var TTheme = /** @class */ (function () {
    function TTheme(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 获取缺省的主题对象。
     *
     *
     * @returns 返回主题对象。
     */
    TTheme.instance = function () {
        return new TTheme(theme());
    };
    return TTheme;
}());
;
/**
 * 定时器系统。
 *
 *> 本定时器精度较低，最高精度为1000/FPS，如果需要高精度的定时器，请用OS提供的定时器。
 *
 *示例：
 *
 *> 在非GUI线程请用timer\_queue。
 *
 */
var TTimer = /** @class */ (function () {
    function TTimer() {
    }
    /**
     * 增加一个timer。
     *
     * @param on_timer timer回调函数。
     * @param ctx timer回调函数的上下文。
     * @param duration 时间。
     *
     * @returns 返回timer的ID，TK_INVALID_ID表示失败。
     */
    TTimer.add = function (on_timer, ctx, duration) {
        return timer_add(on_timer, ctx, duration);
    };
    /**
     * 删除指定的timer。
     *
     * @param timer_id timerID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimer.remove = function (timer_id) {
        return timer_remove(timer_id);
    };
    /**
     * 重置指定的timer，重置之后定时器重新开始计时。
     *
     * @param timer_id timerID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimer.reset = function (timer_id) {
        return timer_reset(timer_id);
    };
    /**
     * 修改指定的timer的duration，修改之后定时器重新开始计时。
     *
     * @param timer_id timerID。
     * @param duration 新的时间。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimer.modify = function (timer_id, duration) {
        return timer_modify(timer_id, duration);
    };
    return TTimer;
}());
;
/**
 * 垂直对齐的常量定义。
 *
 */
var TAlignV;
(function (TAlignV) {
    /**
     * 无效对齐方式。
     *
     */
    TAlignV[TAlignV["NONE"] = ALIGN_V_NONE()] = "NONE";
    /**
     * 居中对齐。
     *
     */
    TAlignV[TAlignV["MIDDLE"] = ALIGN_V_MIDDLE()] = "MIDDLE";
    /**
     * 顶部对齐。
     *
     */
    TAlignV[TAlignV["TOP"] = ALIGN_V_TOP()] = "TOP";
    /**
     * 底部对齐。
     *
     */
    TAlignV[TAlignV["BOTTOM"] = ALIGN_V_BOTTOM()] = "BOTTOM";
})(TAlignV || (TAlignV = {}));
;
/**
 * 水平对齐的常量定义。
 *
 */
var TAlignH;
(function (TAlignH) {
    /**
     * 无效对齐方式。
     *
     */
    TAlignH[TAlignH["NONE"] = ALIGN_H_NONE()] = "NONE";
    /**
     * 居中对齐。
     *
     */
    TAlignH[TAlignH["CENTER"] = ALIGN_H_CENTER()] = "CENTER";
    /**
     * 左边对齐。
     *
     */
    TAlignH[TAlignH["LEFT"] = ALIGN_H_LEFT()] = "LEFT";
    /**
     * 右边对齐。
     *
     */
    TAlignH[TAlignH["RIGHT"] = ALIGN_H_RIGHT()] = "RIGHT";
})(TAlignH || (TAlignH = {}));
;
/**
 * 应用程序类型。
 *
 */
var TAppType;
(function (TAppType) {
    /**
     * 嵌入式或移动APP
     *
     */
    TAppType[TAppType["MOBILE"] = APP_MOBILE()] = "MOBILE";
    /**
     * 模拟器。
     *
     */
    TAppType[TAppType["SIMULATOR"] = APP_SIMULATOR()] = "SIMULATOR";
    /**
     * 桌面应用程序。
     *
     */
    TAppType[TAppType["DESKTOP"] = APP_DESKTOP()] = "DESKTOP";
})(TAppType || (TAppType = {}));
;
/**
 * 位图格式常量定义。
 *
 */
var TBitmapFormat;
(function (TBitmapFormat) {
    /**
     * 无效格式。
     *
     */
    TBitmapFormat[TBitmapFormat["NONE"] = BITMAP_FMT_NONE()] = "NONE";
    /**
     * 一个像素占用4个字节，RGBA占一个字节，按内存地址递增。
     *
     */
    TBitmapFormat[TBitmapFormat["RGBA8888"] = BITMAP_FMT_RGBA8888()] = "RGBA8888";
    /**
     * 一个像素占用4个字节，ABGR占一个字节，按内存地址递增。
     *
     */
    TBitmapFormat[TBitmapFormat["ABGR8888"] = BITMAP_FMT_ABGR8888()] = "ABGR8888";
    /**
     * 一个像素占用4个字节，BGRA占一个字节，按内存地址递增。
     *
     */
    TBitmapFormat[TBitmapFormat["BGRA8888"] = BITMAP_FMT_BGRA8888()] = "BGRA8888";
    /**
     * 一个像素占用4个字节，ARGB占一个字节，按内存地址递增。
     *
     */
    TBitmapFormat[TBitmapFormat["ARGB8888"] = BITMAP_FMT_ARGB8888()] = "ARGB8888";
    /**
     * 一个像素占用2个字节，RGB分别占用5,6,5位, 按内存地址递增。
     *
     */
    TBitmapFormat[TBitmapFormat["RGB565"] = BITMAP_FMT_RGB565()] = "RGB565";
    /**
     * 一个像素占用2个字节，BGR分别占用5,6,5位, 按内存地址递增。
     *
     */
    TBitmapFormat[TBitmapFormat["BGR565"] = BITMAP_FMT_BGR565()] = "BGR565";
    /**
     * 一个像素占用3个字节，RGB占一个字节，按内存地址递增。
     *
     */
    TBitmapFormat[TBitmapFormat["RGB888"] = BITMAP_FMT_RGB888()] = "RGB888";
    /**
     * 一个像素占用3个字节，RGB占一个字节，按内存地址递增。
     *
     */
    TBitmapFormat[TBitmapFormat["BGR888"] = BITMAP_FMT_BGR888()] = "BGR888";
    /**
     * 一个像素占用1个字节。
     *
     */
    TBitmapFormat[TBitmapFormat["GRAY"] = BITMAP_FMT_GRAY()] = "GRAY";
    /**
     * 一个像素占用1比特。
     *
     */
    TBitmapFormat[TBitmapFormat["MONO"] = BITMAP_FMT_MONO()] = "MONO";
})(TBitmapFormat || (TBitmapFormat = {}));
;
/**
 * 位图标志常量定义。
 *
 */
var TBitmapFlag;
(function (TBitmapFlag) {
    /**
     * 无特殊标志。
     *
     */
    TBitmapFlag[TBitmapFlag["NONE"] = BITMAP_FLAG_NONE()] = "NONE";
    /**
     * 不透明图片。
     *
     */
    TBitmapFlag[TBitmapFlag["OPAQUE"] = BITMAP_FLAG_OPAQUE()] = "OPAQUE";
    /**
     * 图片内容不会变化。
     *
     */
    TBitmapFlag[TBitmapFlag["IMMUTABLE"] = BITMAP_FLAG_IMMUTABLE()] = "IMMUTABLE";
    /**
     * OpenGL Texture, bitmap的id是有效的texture id。
     *
     */
    TBitmapFlag[TBitmapFlag["TEXTURE"] = BITMAP_FLAG_TEXTURE()] = "TEXTURE";
    /**
     * 如果是MUTABLE的图片，更新时需要设置此标志，底层可能会做特殊处理，比如更新图片到GPU。
     *
     */
    TBitmapFlag[TBitmapFlag["CHANGED"] = BITMAP_FLAG_CHANGED()] = "CHANGED";
    /**
     * 预乘alpha。
     *
     */
    TBitmapFlag[TBitmapFlag["PREMULTI_ALPHA"] = BITMAP_FLAG_PREMULTI_ALPHA()] = "PREMULTI_ALPHA";
})(TBitmapFlag || (TBitmapFlag = {}));
;
/**
 * 矢量图画布抽象基类。
 *
 *具体实现时可以使用agg，nanovg, cairo和skia等方式。
 *
 *cairo和skia体积太大，不适合嵌入式平台，但在PC平台也是一种选择。
 *
 *目前我们只提供了基于nanovg的实现，支持软件渲染和硬件渲染。
 *
 *我们对nanovg进行了一些改进:
 *
 ** 可以用agg/agge实现软件渲染(暂时不支持文本绘制)。
 *
 ** 可以用bgfx使用DirectX(Windows平台)和Metal(iOS)平台硬件加速。
 *
 *
 *
 *示例：
 *
 *
 *>请参考：https://www.w3schools.com/tags/ref_canvas.asp
 *
 */
var TVgcanvas = /** @class */ (function () {
    function TVgcanvas(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 转换为vgcanvas对象(供脚本语言使用)。
     *
     * @param vg vgcanvas对象。
     *
     * @returns vgcanvas对象。
     */
    TVgcanvas.cast = function (vg) {
        return new TVgcanvas(vgcanvas_cast(vg != null ? (vg.nativeObj || vg) : null));
    };
    /**
     * flush
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.flush = function () {
        return vgcanvas_flush(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 清除之前的路径，并重新开始一条路径。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.beginPath = function () {
        return vgcanvas_begin_path(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 移动当前点到指定点。
     *
     * @param x x坐标。
     * @param y y坐标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.moveTo = function (x, y) {
        return vgcanvas_move_to(this != null ? (this.nativeObj || this) : null, x, y);
    };
    /**
     * 生成一条线段(从当前点到目标点)。
     *
     * @param x x坐标。
     * @param y y坐标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.lineTo = function (x, y) {
        return vgcanvas_line_to(this != null ? (this.nativeObj || this) : null, x, y);
    };
    /**
     * 生成一条二次贝塞尔曲线。
     *
     * @param cpx 控制点x坐标。
     * @param cpy 控制点y坐标。
     * @param x x坐标。
     * @param y y坐标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.quadTo = function (cpx, cpy, x, y) {
        return vgcanvas_quad_to(this != null ? (this.nativeObj || this) : null, cpx, cpy, x, y);
    };
    /**
     * 生成一条三次贝塞尔曲线。
     *
     * @param cp1x 控制点1x坐标。
     * @param cp1y 控制点1y坐标。
     * @param cp2x 控制点2x坐标。
     * @param cp2y 控制点3y坐标。
     * @param x x坐标。
     * @param y y坐标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.bezierTo = function (cp1x, cp1y, cp2x, cp2y, x, y) {
        return vgcanvas_bezier_to(this != null ? (this.nativeObj || this) : null, cp1x, cp1y, cp2x, cp2y, x, y);
    };
    /**
     * 生成一条圆弧路径到指定点。
     *
     * @param x1 起始点x坐标。
     * @param y1 起始点y坐标。
     * @param x2 结束点x坐标。
     * @param y2 结束点y坐标。
     * @param r 半径。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.arcTo = function (x1, y1, x2, y2, r) {
        return vgcanvas_arc_to(this != null ? (this.nativeObj || this) : null, x1, y1, x2, y2, r);
    };
    /**
     * 生成一条圆弧。
     *
     * @param x 原点x坐标。
     * @param y 原点y坐标。
     * @param r 半径。
     * @param start_angle 起始角度。
     * @param end_angle 结束角度。
     * @param ccw 是否逆时针。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.arc = function (x, y, r, start_angle, end_angle, ccw) {
        return vgcanvas_arc(this != null ? (this.nativeObj || this) : null, x, y, r, start_angle, end_angle, ccw);
    };
    /**
     * 检查点是否在当前路径中。
     *
     * @param x x坐标。
     * @param y y坐标。
     *
     * @returns 返回TRUE表示在，否则表示不在。
     */
    TVgcanvas.prototype.isPointInPath = function (x, y) {
        return vgcanvas_is_point_in_path(this != null ? (this.nativeObj || this) : null, x, y);
    };
    /**
     * 生成一个矩形路径。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param w 宽度。
     * @param h 高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.rect = function (x, y, w, h) {
        return vgcanvas_rect(this != null ? (this.nativeObj || this) : null, x, y, w, h);
    };
    /**
     * 生成一个圆角矩形路径。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param w 宽度。
     * @param h 高度。
     * @param r 圆角半径。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.roundedRect = function (x, y, w, h, r) {
        return vgcanvas_rounded_rect(this != null ? (this.nativeObj || this) : null, x, y, w, h, r);
    };
    /**
     * 生成一个椭圆路径。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param rx 圆角半径。
     * @param ry 圆角半径。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.ellipse = function (x, y, rx, ry) {
        return vgcanvas_ellipse(this != null ? (this.nativeObj || this) : null, x, y, rx, ry);
    };
    /**
     * 闭合路径。
     *
     *>闭合路径是指把起点和终点连接起来，形成一个封闭的多边形。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.closePath = function () {
        return vgcanvas_close_path(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 旋转。
     *
     * @param rad 角度
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.rotate = function (rad) {
        return vgcanvas_rotate(this != null ? (this.nativeObj || this) : null, rad);
    };
    /**
     * 缩放。
     *
     * @param x x方向缩放比例。
     * @param y y方向缩放比例。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.scale = function (x, y) {
        return vgcanvas_scale(this != null ? (this.nativeObj || this) : null, x, y);
    };
    /**
     * 平移。
     *
     * @param x x方向偏移。
     * @param y y方向偏移。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.translate = function (x, y) {
        return vgcanvas_translate(this != null ? (this.nativeObj || this) : null, x, y);
    };
    /**
     * 变换矩阵。
     *
     * @param a a
     * @param b b
     * @param c c
     * @param d d
     * @param e e
     * @param f f
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.transform = function (a, b, c, d, e, f) {
        return vgcanvas_transform(this != null ? (this.nativeObj || this) : null, a, b, c, d, e, f);
    };
    /**
     * 设置变换矩阵。
     *
     * @param a a
     * @param b b
     * @param c c
     * @param d d
     * @param e e
     * @param f f
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.setTransform = function (a, b, c, d, e, f) {
        return vgcanvas_set_transform(this != null ? (this.nativeObj || this) : null, a, b, c, d, e, f);
    };
    /**
     * 矩形裁剪。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param w 宽度。
     * @param h 高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.clipRect = function (x, y, w, h) {
        return vgcanvas_clip_rect(this != null ? (this.nativeObj || this) : null, x, y, w, h);
    };
    /**
     * 填充多边形。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.fill = function () {
        return vgcanvas_fill(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 画线。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.stroke = function () {
        return vgcanvas_stroke(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 用图片填充/画多边形(可能存在可移植性问题，除非必要请勿使用)。
     *多边形的顶点必须在图片范围内，可以通过矩阵变化画到不同的位置。
     *
     * @param stroke TRUE表示画线FALSE表示填充。
     * @param img 图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.paint = function (stroke, img) {
        return vgcanvas_paint(this != null ? (this.nativeObj || this) : null, stroke, img != null ? (img.nativeObj || img) : null);
    };
    /**
     * 设置字体的名称。
     *
     * @param font 字体名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.setFont = function (font) {
        return vgcanvas_set_font(this != null ? (this.nativeObj || this) : null, font);
    };
    /**
     * 设置字体的大小。
     *
     * @param font 字体大小。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.setFontSize = function (font) {
        return vgcanvas_set_font_size(this != null ? (this.nativeObj || this) : null, font);
    };
    /**
     * 设置文本水平对齐的方式。
     *
     * @param value 取值：left|center|right，必须为常量字符串。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.setTextAlign = function (value) {
        return vgcanvas_set_text_align(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置文本垂直对齐的方式。
     *
     * @param value 取值：top|middle|bottom，必须为常量字符串。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.setTextBaseline = function (value) {
        return vgcanvas_set_text_baseline(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 绘制文本。
     *
     * @param text text
     * @param x x坐标。
     * @param y y坐标。
     * @param max_width 最大宽度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.fillText = function (text, x, y, max_width) {
        return vgcanvas_fill_text(this != null ? (this.nativeObj || this) : null, text, x, y, max_width);
    };
    /**
     * 测量文本的宽度。
     *
     * @param text text
     *
     * @returns 返回text的宽度。
     */
    TVgcanvas.prototype.measureText = function (text) {
        return vgcanvas_measure_text(this != null ? (this.nativeObj || this) : null, text);
    };
    /**
     * 绘制图片。
     *
     * @param img 图片。
     * @param sx sx
     * @param sy sy
     * @param sw sw
     * @param sh sh
     * @param dx dx
     * @param dy dy
     * @param dw dw
     * @param dh dh
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.drawImage = function (img, sx, sy, sw, sh, dx, dy, dw, dh) {
        return vgcanvas_draw_image(this != null ? (this.nativeObj || this) : null, img != null ? (img.nativeObj || img) : null, sx, sy, sw, sh, dx, dy, dw, dh);
    };
    /**
     * 绘制图标。
     *
     *绘制图标时会根据屏幕密度进行自动缩放，而绘制普通图片时不会。
     *
     * @param img 图片。
     * @param sx sx
     * @param sy sy
     * @param sw sw
     * @param sh sh
     * @param dx dx
     * @param dy dy
     * @param dw dw
     * @param dh dh
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.drawIcon = function (img, sx, sy, sw, sh, dx, dy, dw, dh) {
        return vgcanvas_draw_icon(this != null ? (this.nativeObj || this) : null, img != null ? (img.nativeObj || img) : null, sx, sy, sw, sh, dx, dy, dw, dh);
    };
    /**
     * 设置是否启用反走样。
     *
     * @param value 是否启用反走样。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.setAntialias = function (value) {
        return vgcanvas_set_antialias(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置全局透明度。
     *
     * @param alpha global alpha。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.setGlobalAlpha = function (alpha) {
        return vgcanvas_set_global_alpha(this != null ? (this.nativeObj || this) : null, alpha);
    };
    /**
     * 设置线条的宽度。
     *
     * @param value 线宽。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.setLineWidth = function (value) {
        return vgcanvas_set_line_width(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置填充颜色。
     *
     * @param color 颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.setFillColor = function (color) {
        return vgcanvas_set_fill_color_str(this != null ? (this.nativeObj || this) : null, color);
    };
    /**
     * 设置线条颜色。
     *
     * @param color 颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.setStrokeColor = function (color) {
        return vgcanvas_set_stroke_color_str(this != null ? (this.nativeObj || this) : null, color);
    };
    /**
     * 设置line cap。
     *
     * @param value 取值：butt|round|square，必须为常量字符串。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.setLineCap = function (value) {
        return vgcanvas_set_line_cap(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置line join。
     *
     * @param value 取值：bevel|round|miter，必须为常量字符串。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.setLineJoin = function (value) {
        return vgcanvas_set_line_join(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置miter limit。
     *
     * @param value miter limit
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.setMiterLimit = function (value) {
        return vgcanvas_set_miter_limit(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 保存当前的状态。如颜色和矩阵等信息。
     *
     *> save/restore必须配套使用，否则可能导致状态混乱。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.save = function () {
        return vgcanvas_save(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 恢复上次save的状态。
     *
     *> save/restore必须配套使用，否则可能导致状态混乱。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TVgcanvas.prototype.restore = function () {
        return vgcanvas_restore(this != null ? (this.nativeObj || this) : null);
    };
    Object.defineProperty(TVgcanvas.prototype, "w", {
        /**
         * canvas的宽度
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "h", {
        /**
         * canvas的高度
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "stride", {
        /**
         * 一行占的字节
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_stride(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "ratio", {
        /**
         * 显示比例。
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_ratio(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "antiAlias", {
        /**
         * 是否启用反走样功能。
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_anti_alias(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "lineWidth", {
        /**
         * 线宽。
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_line_width(this.nativeObj);
        },
        set: function (v) {
            this.setLineWidth(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "globalAlpha", {
        /**
         * 全局alpha。
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_global_alpha(this.nativeObj);
        },
        set: function (v) {
            this.setGlobalAlpha(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "miterLimit", {
        /**
         * miter\_limit。
         *@see http://www.w3school.com.cn/tags/canvas_miterlimit.asp
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_miter_limit(this.nativeObj);
        },
        set: function (v) {
            this.setMiterLimit(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "lineCap", {
        /**
         * line\_cap。
         *@see http://www.w3school.com.cn/tags/canvas_linecap.asp
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_line_cap(this.nativeObj);
        },
        set: function (v) {
            this.setLineCap(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "lineJoin", {
        /**
         * line\_join。
         *@see http://www.w3school.com.cn/tags/canvas_linejoin.asp
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_line_join(this.nativeObj);
        },
        set: function (v) {
            this.setLineJoin(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "font", {
        /**
         * 字体。
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_font(this.nativeObj);
        },
        set: function (v) {
            this.setFont(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "fontSize", {
        /**
         * 字体大小。
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_font_size(this.nativeObj);
        },
        set: function (v) {
            this.setFontSize(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "textAlign", {
        /**
         * 文本对齐方式。
         *
         *@see http://www.w3school.com.cn/tags/canvas_textalign.asp
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_text_align(this.nativeObj);
        },
        set: function (v) {
            this.setTextAlign(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TVgcanvas.prototype, "textBaseline", {
        /**
         * 文本基线。
         *
         *@see http://www.w3school.com.cn/tags/canvas_textbaseline.asp
         *
         */
        get: function () {
            return vgcanvas_t_get_prop_text_baseline(this.nativeObj);
        },
        set: function (v) {
            this.setTextBaseline(v);
        },
        enumerable: true,
        configurable: true
    });
    return TVgcanvas;
}());
;
/**
 * 控件的属性。
 *
 */
var TWidgetProp;
(function (TWidgetProp) {
    /**
     * 用于执行某些特殊的命令（比如控制动画的启停），主要是方便MVVM通过属性来控制动画。
     *
     */
    TWidgetProp[TWidgetProp["EXEC"] = WIDGET_PROP_EXEC()] = "EXEC";
    /**
     * X坐标。
     *
     */
    TWidgetProp[TWidgetProp["X"] = WIDGET_PROP_X()] = "X";
    /**
     * Y坐标。
     *
     */
    TWidgetProp[TWidgetProp["Y"] = WIDGET_PROP_Y()] = "Y";
    /**
     * 宽度。
     *
     */
    TWidgetProp[TWidgetProp["W"] = WIDGET_PROP_W()] = "W";
    /**
     * 高度。
     *
     */
    TWidgetProp[TWidgetProp["H"] = WIDGET_PROP_H()] = "H";
    /**
     * Canvas。
     *
     */
    TWidgetProp[TWidgetProp["CANVAS"] = WIDGET_PROP_CANVAS()] = "CANVAS";
    /**
     * Canvas。
     *
     */
    TWidgetProp[TWidgetProp["LOCALIZE_OPTIONS"] = WIDGET_PROP_LOCALIZE_OPTIONS()] = "LOCALIZE_OPTIONS";
    /**
     * Native Window。
     *
     */
    TWidgetProp[TWidgetProp["NATIVE_WINDOW"] = WIDGET_PROP_NATIVE_WINDOW()] = "NATIVE_WINDOW";
    /**
     * dialog highlight。
     *
     */
    TWidgetProp[TWidgetProp["HIGHLIGHT"] = WIDGET_PROP_HIGHLIGHT()] = "HIGHLIGHT";
    /**
     * slider中的bar的的宽度或高度。
     *
     */
    TWidgetProp[TWidgetProp["BAR_SIZE"] = WIDGET_PROP_BAR_SIZE()] = "BAR_SIZE";
    /**
     * 不透明度。
     *
     */
    TWidgetProp[TWidgetProp["OPACITY"] = WIDGET_PROP_OPACITY()] = "OPACITY";
    /**
     * 最小宽度。
     *
     */
    TWidgetProp[TWidgetProp["MIN_W"] = WIDGET_PROP_MIN_W()] = "MIN_W";
    /**
     * 最大宽度。
     *
     */
    TWidgetProp[TWidgetProp["MAX_W"] = WIDGET_PROP_MAX_W()] = "MAX_W";
    /**
     * 子控件布局参数。
     *
     */
    TWidgetProp[TWidgetProp["CHILDREN_LAYOUT"] = WIDGET_PROP_CHILDREN_LAYOUT()] = "CHILDREN_LAYOUT";
    /**
     * 子控件布局参数(过时)。
     *
     */
    TWidgetProp[TWidgetProp["LAYOUT"] = WIDGET_PROP_LAYOUT()] = "LAYOUT";
    /**
     * 控件布局参数。
     *
     */
    TWidgetProp[TWidgetProp["SELF_LAYOUT"] = WIDGET_PROP_SELF_LAYOUT()] = "SELF_LAYOUT";
    /**
     * layout宽度。
     *
     */
    TWidgetProp[TWidgetProp["LAYOUT_W"] = WIDGET_PROP_LAYOUT_W()] = "LAYOUT_W";
    /**
     * layout高度。
     *
     */
    TWidgetProp[TWidgetProp["LAYOUT_H"] = WIDGET_PROP_LAYOUT_H()] = "LAYOUT_H";
    /**
     * 虚拟宽度。
     *
     */
    TWidgetProp[TWidgetProp["VIRTUAL_W"] = WIDGET_PROP_VIRTUAL_W()] = "VIRTUAL_W";
    /**
     * 虚拟高度。
     *
     */
    TWidgetProp[TWidgetProp["VIRTUAL_H"] = WIDGET_PROP_VIRTUAL_H()] = "VIRTUAL_H";
    /**
     * 名称。
     *
     */
    TWidgetProp[TWidgetProp["NAME"] = WIDGET_PROP_NAME()] = "NAME";
    /**
     * 类型。
     *
     */
    TWidgetProp[TWidgetProp["TYPE"] = WIDGET_PROP_TYPE()] = "TYPE";
    /**
     * 是否可以关闭。
     *
     */
    TWidgetProp[TWidgetProp["CLOSABLE"] = WIDGET_PROP_CLOSABLE()] = "CLOSABLE";
    /**
     * 鼠标指针。
     *
     */
    TWidgetProp[TWidgetProp["CURSOR"] = WIDGET_PROP_CURSOR()] = "CURSOR";
    /**
     * 值。
     *
     */
    TWidgetProp[TWidgetProp["VALUE"] = WIDGET_PROP_VALUE()] = "VALUE";
    /**
     * 长度。
     *
     */
    TWidgetProp[TWidgetProp["LENGTH"] = WIDGET_PROP_LENGTH()] = "LENGTH";
    /**
     * 文本。
     *
     */
    TWidgetProp[TWidgetProp["TEXT"] = WIDGET_PROP_TEXT()] = "TEXT";
    /**
     * 待翻译文本。
     *
     */
    TWidgetProp[TWidgetProp["TR_TEXT"] = WIDGET_PROP_TR_TEXT()] = "TR_TEXT";
    /**
     * style。
     *
     */
    TWidgetProp[TWidgetProp["STYLE"] = WIDGET_PROP_STYLE()] = "STYLE";
    /**
     * 是否启用。
     *
     */
    TWidgetProp[TWidgetProp["ENABLE"] = WIDGET_PROP_ENABLE()] = "ENABLE";
    /**
     * 是否启用按键音等反馈。
     *
     */
    TWidgetProp[TWidgetProp["FEEDBACK"] = WIDGET_PROP_FEEDBACK()] = "FEEDBACK";
    /**
     * 是否启用floating布局。
     *
     */
    TWidgetProp[TWidgetProp["FLOATING"] = WIDGET_PROP_FLOATING()] = "FLOATING";
    /**
     * 边距。
     *
     */
    TWidgetProp[TWidgetProp["MARGIN"] = WIDGET_PROP_MARGIN()] = "MARGIN";
    /**
     * 间距。
     *
     */
    TWidgetProp[TWidgetProp["SPACING"] = WIDGET_PROP_SPACING()] = "SPACING";
    /**
     * 左边距。
     *
     */
    TWidgetProp[TWidgetProp["LEFT_MARGIN"] = WIDGET_PROP_LEFT_MARGIN()] = "LEFT_MARGIN";
    /**
     * 右边距。
     *
     */
    TWidgetProp[TWidgetProp["RIGHT_MARGIN"] = WIDGET_PROP_RIGHT_MARGIN()] = "RIGHT_MARGIN";
    /**
     * 顶边距。
     *
     */
    TWidgetProp[TWidgetProp["TOP_MARGIN"] = WIDGET_PROP_TOP_MARGIN()] = "TOP_MARGIN";
    /**
     * 底边距。
     *
     */
    TWidgetProp[TWidgetProp["BOTTOM_MARGIN"] = WIDGET_PROP_BOTTOM_MARGIN()] = "BOTTOM_MARGIN";
    /**
     * 步长。
     *
     */
    TWidgetProp[TWidgetProp["STEP"] = WIDGET_PROP_STEP()] = "STEP";
    /**
     * 是否可见。
     *
     */
    TWidgetProp[TWidgetProp["VISIBLE"] = WIDGET_PROP_VISIBLE()] = "VISIBLE";
    /**
     * 是否接受用户事件。
     *
     */
    TWidgetProp[TWidgetProp["SENSITIVE"] = WIDGET_PROP_SENSITIVE()] = "SENSITIVE";
    /**
     * 控件动画。
     *
     */
    TWidgetProp[TWidgetProp["ANIMATION"] = WIDGET_PROP_ANIMATION()] = "ANIMATION";
    /**
     * 窗口动画。
     *
     */
    TWidgetProp[TWidgetProp["ANIM_HINT"] = WIDGET_PROP_ANIM_HINT()] = "ANIM_HINT";
    /**
     * 窗口设置为全部大小。
     *
     */
    TWidgetProp[TWidgetProp["FULLSCREEN"] = WIDGET_PROP_FULLSCREEN()] = "FULLSCREEN";
    /**
     * 打开窗口动画。
     *
     */
    TWidgetProp[TWidgetProp["OPEN_ANIM_HINT"] = WIDGET_PROP_OPEN_ANIM_HINT()] = "OPEN_ANIM_HINT";
    /**
     * 关闭窗口动画。
     *
     */
    TWidgetProp[TWidgetProp["CLOSE_ANIM_HINT"] = WIDGET_PROP_CLOSE_ANIM_HINT()] = "CLOSE_ANIM_HINT";
    /**
     * 最小值。
     *
     */
    TWidgetProp[TWidgetProp["MIN"] = WIDGET_PROP_MIN()] = "MIN";
    /**
     * 提示信息。
     *
     */
    TWidgetProp[TWidgetProp["TIPS"] = WIDGET_PROP_TIPS()] = "TIPS";
    /**
     * 输入类型。
     *
     */
    TWidgetProp[TWidgetProp["INPUT_TYPE"] = WIDGET_PROP_INPUT_TYPE()] = "INPUT_TYPE";
    /**
     * 只读模式。
     *
     */
    TWidgetProp[TWidgetProp["READONLY"] = WIDGET_PROP_READONLY()] = "READONLY";
    /**
     * 密码是否可见。
     *
     */
    TWidgetProp[TWidgetProp["PASSWORD_VISIBLE"] = WIDGET_PROP_PASSWORD_VISIBLE()] = "PASSWORD_VISIBLE";
    /**
     * 是否处于active状态。
     *
     */
    TWidgetProp[TWidgetProp["ACTIVE"] = WIDGET_PROP_ACTIVE()] = "ACTIVE";
    /**
     * 是否为垂直模式。
     *
     */
    TWidgetProp[TWidgetProp["VERTICAL"] = WIDGET_PROP_VERTICAL()] = "VERTICAL";
    /**
     * 是否显示文本。
     *
     */
    TWidgetProp[TWidgetProp["SHOW_TEXT"] = WIDGET_PROP_SHOW_TEXT()] = "SHOW_TEXT";
    /**
     * X方向的偏移。
     *
     */
    TWidgetProp[TWidgetProp["XOFFSET"] = WIDGET_PROP_XOFFSET()] = "XOFFSET";
    /**
     * Y方向的偏移。
     *
     */
    TWidgetProp[TWidgetProp["YOFFSET"] = WIDGET_PROP_YOFFSET()] = "YOFFSET";
    /**
     * 垂直对齐模式。
     *
     */
    TWidgetProp[TWidgetProp["ALIGN_V"] = WIDGET_PROP_ALIGN_V()] = "ALIGN_V";
    /**
     * 水平对齐模式。
     *
     */
    TWidgetProp[TWidgetProp["ALIGN_H"] = WIDGET_PROP_ALIGN_H()] = "ALIGN_H";
    /**
     * 是否自动播放或指定播放的时间。
     *
     */
    TWidgetProp[TWidgetProp["AUTO_PLAY"] = WIDGET_PROP_AUTO_PLAY()] = "AUTO_PLAY";
    /**
     * 是否循环播放或循环播放的次数。
     *
     */
    TWidgetProp[TWidgetProp["LOOP"] = WIDGET_PROP_LOOP()] = "LOOP";
    /**
     * 是否启用自动更正功能。
     *
     */
    TWidgetProp[TWidgetProp["AUTO_FIX"] = WIDGET_PROP_AUTO_FIX()] = "AUTO_FIX";
    /**
     * 编辑器在获得焦点时是否不选中文本。
     *
     */
    TWidgetProp[TWidgetProp["SELECT_NONE_WHEN_FOCUSED"] = WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED()] = "SELECT_NONE_WHEN_FOCUSED";
    /**
     * 编辑器在获得焦点时是否打开输入法。
     *
     */
    TWidgetProp[TWidgetProp["OPEN_IM_WHEN_FOCUSED"] = WIDGET_PROP_OPEN_IM_WHEN_FOCUSED()] = "OPEN_IM_WHEN_FOCUSED";
    /**
     * X最小值。
     *
     */
    TWidgetProp[TWidgetProp["X_MIN"] = WIDGET_PROP_X_MIN()] = "X_MIN";
    /**
     * X最大值。
     *
     */
    TWidgetProp[TWidgetProp["X_MAX"] = WIDGET_PROP_X_MAX()] = "X_MAX";
    /**
     * Y最小值。
     *
     */
    TWidgetProp[TWidgetProp["Y_MIN"] = WIDGET_PROP_Y_MIN()] = "Y_MIN";
    /**
     * Y最大值。
     *
     */
    TWidgetProp[TWidgetProp["Y_MAX"] = WIDGET_PROP_Y_MAX()] = "Y_MAX";
    /**
     * 最大值。
     *
     */
    TWidgetProp[TWidgetProp["MAX"] = WIDGET_PROP_MAX()] = "MAX";
    /**
     * 让窗口管理器直接把按键发给自己。
     *
     */
    TWidgetProp[TWidgetProp["GRAB_KEYS"] = WIDGET_PROP_GRAB_KEYS()] = "GRAB_KEYS";
    /**
     * 行数或每行的高度。
     *
     */
    TWidgetProp[TWidgetProp["ROW"] = WIDGET_PROP_ROW()] = "ROW";
    /**
     * 控件状态。
     *
     */
    TWidgetProp[TWidgetProp["STATE_FOR_STYLE"] = WIDGET_PROP_STATE_FOR_STYLE()] = "STATE_FOR_STYLE";
    /**
     * 窗口主题名称。
     *
     */
    TWidgetProp[TWidgetProp["THEME"] = WIDGET_PROP_THEME()] = "THEME";
    /**
     * window stage
     *
     */
    TWidgetProp[TWidgetProp["STAGE"] = WIDGET_PROP_STAGE()] = "STAGE";
    /**
     * 图片管理器。
     *
     */
    TWidgetProp[TWidgetProp["IMAGE_MANAGER"] = WIDGET_PROP_IMAGE_MANAGER()] = "IMAGE_MANAGER";
    /**
     * 资源管理器。
     *
     */
    TWidgetProp[TWidgetProp["ASSETS_MANAGER"] = WIDGET_PROP_ASSETS_MANAGER()] = "ASSETS_MANAGER";
    /**
     * locale_info。
     *
     */
    TWidgetProp[TWidgetProp["LOCALE_INFO"] = WIDGET_PROP_LOCALE_INFO()] = "LOCALE_INFO";
    /**
     * 字体管理器。
     *
     */
    TWidgetProp[TWidgetProp["FONT_MANAGER"] = WIDGET_PROP_FONT_MANAGER()] = "FONT_MANAGER";
    /**
     * 窗口的主题对象。
     *
     */
    TWidgetProp[TWidgetProp["THEME_OBJ"] = WIDGET_PROP_THEME_OBJ()] = "THEME_OBJ";
    /**
     * 缺省的主题对象。
     *
     */
    TWidgetProp[TWidgetProp["DEFAULT_THEME_OBJ"] = WIDGET_PROP_DEFAULT_THEME_OBJ()] = "DEFAULT_THEME_OBJ";
    /**
     * 项的宽度。
     *
     */
    TWidgetProp[TWidgetProp["ITEM_WIDTH"] = WIDGET_PROP_ITEM_WIDTH()] = "ITEM_WIDTH";
    /**
     * 项的高度。
     *
     */
    TWidgetProp[TWidgetProp["ITEM_HEIGHT"] = WIDGET_PROP_ITEM_HEIGHT()] = "ITEM_HEIGHT";
    /**
     * 项的缺省高度。
     *
     */
    TWidgetProp[TWidgetProp["DEFAULT_ITEM_HEIGHT"] = WIDGET_PROP_DEFAULT_ITEM_HEIGHT()] = "DEFAULT_ITEM_HEIGHT";
    /**
     * X方向是否可拖动。
     *
     */
    TWidgetProp[TWidgetProp["XSLIDABLE"] = WIDGET_PROP_XSLIDABLE()] = "XSLIDABLE";
    /**
     * Y方向是否可拖动。
     *
     */
    TWidgetProp[TWidgetProp["YSLIDABLE"] = WIDGET_PROP_YSLIDABLE()] = "YSLIDABLE";
    /**
     * 重复次数。
     *
     */
    TWidgetProp[TWidgetProp["REPEAT"] = WIDGET_PROP_REPEAT()] = "REPEAT";
    /**
     * 是否启用长按。
     *
     */
    TWidgetProp[TWidgetProp["ENABLE_LONG_PRESS"] = WIDGET_PROP_ENABLE_LONG_PRESS()] = "ENABLE_LONG_PRESS";
    /**
     * 是否启用动画。
     *
     */
    TWidgetProp[TWidgetProp["ANIMATABLE"] = WIDGET_PROP_ANIMATABLE()] = "ANIMATABLE";
    /**
     * 是否自动隐藏滚动条。
     *
     */
    TWidgetProp[TWidgetProp["AUTO_HIDE_SCROLL_BAR"] = WIDGET_PROP_AUTO_HIDE_SCROLL_BAR()] = "AUTO_HIDE_SCROLL_BAR";
    /**
     * 图片名称。
     *
     */
    TWidgetProp[TWidgetProp["IMAGE"] = WIDGET_PROP_IMAGE()] = "IMAGE";
    /**
     * 显示格式。
     *
     */
    TWidgetProp[TWidgetProp["FORMAT"] = WIDGET_PROP_FORMAT()] = "FORMAT";
    /**
     * 图片绘制类型。
     *
     */
    TWidgetProp[TWidgetProp["DRAW_TYPE"] = WIDGET_PROP_DRAW_TYPE()] = "DRAW_TYPE";
    /**
     * 是否可选择。
     *
     */
    TWidgetProp[TWidgetProp["SELECTABLE"] = WIDGET_PROP_SELECTABLE()] = "SELECTABLE";
    /**
     * 是否可点击。
     *
     */
    TWidgetProp[TWidgetProp["CLICKABLE"] = WIDGET_PROP_CLICKABLE()] = "CLICKABLE";
    /**
     * X方向缩放比例。
     *
     */
    TWidgetProp[TWidgetProp["SCALE_X"] = WIDGET_PROP_SCALE_X()] = "SCALE_X";
    /**
     * Y方向缩放比例。
     *
     */
    TWidgetProp[TWidgetProp["SCALE_Y"] = WIDGET_PROP_SCALE_Y()] = "SCALE_Y";
    /**
     * x锚点。
     *
     */
    TWidgetProp[TWidgetProp["ANCHOR_X"] = WIDGET_PROP_ANCHOR_X()] = "ANCHOR_X";
    /**
     * y锚点。
     *
     */
    TWidgetProp[TWidgetProp["ANCHOR_Y"] = WIDGET_PROP_ANCHOR_Y()] = "ANCHOR_Y";
    /**
     * 选中角度(幅度)
     *
     */
    TWidgetProp[TWidgetProp["ROTATION"] = WIDGET_PROP_ROTATION()] = "ROTATION";
    /**
     * 紧凑模式。
     *
     */
    TWidgetProp[TWidgetProp["COMPACT"] = WIDGET_PROP_COMPACT()] = "COMPACT";
    /**
     * 是否支持滚动。
     *
     */
    TWidgetProp[TWidgetProp["SCROLLABLE"] = WIDGET_PROP_SCROLLABLE()] = "SCROLLABLE";
    /**
     * 图标名称。
     *
     */
    TWidgetProp[TWidgetProp["ICON"] = WIDGET_PROP_ICON()] = "ICON";
    /**
     * 选项集合。
     *
     */
    TWidgetProp[TWidgetProp["OPTIONS"] = WIDGET_PROP_OPTIONS()] = "OPTIONS";
    /**
     * 是否被选中。
     *
     */
    TWidgetProp[TWidgetProp["SELECTED"] = WIDGET_PROP_SELECTED()] = "SELECTED";
    /**
     * 是否被勾选。
     *
     */
    TWidgetProp[TWidgetProp["CHECKED"] = WIDGET_PROP_CHECKED()] = "CHECKED";
    /**
     * active状态下的图标。
     *
     */
    TWidgetProp[TWidgetProp["ACTIVE_ICON"] = WIDGET_PROP_ACTIVE_ICON()] = "ACTIVE_ICON";
    /**
     * 动态加载UI名字。
     *
     */
    TWidgetProp[TWidgetProp["LOAD_UI"] = WIDGET_PROP_LOAD_UI()] = "LOAD_UI";
    /**
     * 要打开窗口的名称。
     *
     */
    TWidgetProp[TWidgetProp["OPEN_WINDOW"] = WIDGET_PROP_OPEN_WINDOW()] = "OPEN_WINDOW";
    /**
     * 被选中项的索引。
     *
     */
    TWidgetProp[TWidgetProp["SELECTED_INDEX"] = WIDGET_PROP_SELECTED_INDEX()] = "SELECTED_INDEX";
    /**
     * 点击窗口时关闭窗口。
     *
     */
    TWidgetProp[TWidgetProp["CLOSE_WHEN_CLICK"] = WIDGET_PROP_CLOSE_WHEN_CLICK()] = "CLOSE_WHEN_CLICK";
    /**
     * 点击窗口外部时关闭窗口。
     *
     */
    TWidgetProp[TWidgetProp["CLOSE_WHEN_CLICK_OUTSIDE"] = WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE()] = "CLOSE_WHEN_CLICK_OUTSIDE";
    /**
     * 行间距。
     *
     */
    TWidgetProp[TWidgetProp["LINE_GAP"] = WIDGET_PROP_LINE_GAP()] = "LINE_GAP";
    /**
     * 背景颜色(仅仅使用于color tile)。
     *
     */
    TWidgetProp[TWidgetProp["BG_COLOR"] = WIDGET_PROP_BG_COLOR()] = "BG_COLOR";
    /**
     * 边框颜色(仅仅使用于color tile)。
     *
     */
    TWidgetProp[TWidgetProp["BORDER_COLOR"] = WIDGET_PROP_BORDER_COLOR()] = "BORDER_COLOR";
    /**
     * 延迟时间(毫秒)
     *
     */
    TWidgetProp[TWidgetProp["DELAY"] = WIDGET_PROP_DELAY()] = "DELAY";
    /**
     * 是否为键盘。
     *
     */
    TWidgetProp[TWidgetProp["IS_KEYBOARD"] = WIDGET_PROP_IS_KEYBOARD()] = "IS_KEYBOARD";
    /**
     * 是否为焦点控件。
     *
     */
    TWidgetProp[TWidgetProp["FOCUSED"] = WIDGET_PROP_FOCUSED()] = "FOCUSED";
    /**
     * (过时请用focused)。
     *
     */
    TWidgetProp[TWidgetProp["FOCUS"] = WIDGET_PROP_FOCUS()] = "FOCUS";
    /**
     * 是否支持焦点停留。
     *
     */
    TWidgetProp[TWidgetProp["FOCUSABLE"] = WIDGET_PROP_FOCUSABLE()] = "FOCUSABLE";
    /**
     * 是否支持焦点状态(如果希望style支持焦点状态，但有不希望焦点停留，可用本属性)。
     *
     */
    TWidgetProp[TWidgetProp["WITH_FOCUS_STATE"] = WIDGET_PROP_WITH_FOCUS_STATE()] = "WITH_FOCUS_STATE";
    /**
     * 将焦点移到前一个的键值。
     *
     */
    TWidgetProp[TWidgetProp["MOVE_FOCUS_PREV_KEY"] = WIDGET_PROP_MOVE_FOCUS_PREV_KEY()] = "MOVE_FOCUS_PREV_KEY";
    /**
     * 将焦点移到后一个的键值。
     *
     */
    TWidgetProp[TWidgetProp["MOVE_FOCUS_NEXT_KEY"] = WIDGET_PROP_MOVE_FOCUS_NEXT_KEY()] = "MOVE_FOCUS_NEXT_KEY";
    /**
     * 将焦点向上移动的键值。
     *
     */
    TWidgetProp[TWidgetProp["MOVE_FOCUS_UP_KEY"] = WIDGET_PROP_MOVE_FOCUS_UP_KEY()] = "MOVE_FOCUS_UP_KEY";
    /**
     * 将焦点向下移动的键值。
     *
     */
    TWidgetProp[TWidgetProp["MOVE_FOCUS_DOWN_KEY"] = WIDGET_PROP_MOVE_FOCUS_DOWN_KEY()] = "MOVE_FOCUS_DOWN_KEY";
    /**
     * 将焦点向左移动的键值。
     *
     */
    TWidgetProp[TWidgetProp["MOVE_FOCUS_LEFT_KEY"] = WIDGET_PROP_MOVE_FOCUS_LEFT_KEY()] = "MOVE_FOCUS_LEFT_KEY";
    /**
     * 将焦点向右移动的键值。
     *
     */
    TWidgetProp[TWidgetProp["MOVE_FOCUS_RIGHT_KEY"] = WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY()] = "MOVE_FOCUS_RIGHT_KEY";
})(TWidgetProp || (TWidgetProp = {}));
;
/**
 * 控件的类型。
 *
 */
var TWidgetType;
(function (TWidgetType) {
    /**
     * 无特殊类型。
     *
     */
    TWidgetType[TWidgetType["NONE"] = WIDGET_TYPE_NONE()] = "NONE";
    /**
     * 窗口管理器。
     *
     */
    TWidgetType[TWidgetType["WINDOW_MANAGER"] = WIDGET_TYPE_WINDOW_MANAGER()] = "WINDOW_MANAGER";
    /**
     * 普通窗口。
     *
     */
    TWidgetType[TWidgetType["NORMAL_WINDOW"] = WIDGET_TYPE_NORMAL_WINDOW()] = "NORMAL_WINDOW";
    /**
     * overlay窗口。
     *
     */
    TWidgetType[TWidgetType["OVERLAY"] = WIDGET_TYPE_OVERLAY()] = "OVERLAY";
    /**
     * 工具条。
     *
     */
    TWidgetType[TWidgetType["TOOL_BAR"] = WIDGET_TYPE_TOOL_BAR()] = "TOOL_BAR";
    /**
     * 对话框。
     *
     */
    TWidgetType[TWidgetType["DIALOG"] = WIDGET_TYPE_DIALOG()] = "DIALOG";
    /**
     * 弹出窗口。
     *
     */
    TWidgetType[TWidgetType["POPUP"] = WIDGET_TYPE_POPUP()] = "POPUP";
    /**
     * system bar window
     *
     */
    TWidgetType[TWidgetType["SYSTEM_BAR"] = WIDGET_TYPE_SYSTEM_BAR()] = "SYSTEM_BAR";
    /**
     * system bar window ato bottom
     *
     */
    TWidgetType[TWidgetType["SYSTEM_BAR_BOTTOM"] = WIDGET_TYPE_SYSTEM_BAR_BOTTOM()] = "SYSTEM_BAR_BOTTOM";
    /**
     * 精灵窗口。
     *
     */
    TWidgetType[TWidgetType["SPRITE"] = WIDGET_TYPE_SPRITE()] = "SPRITE";
    /**
     * 键盘窗口。
     *
     */
    TWidgetType[TWidgetType["KEYBOARD"] = WIDGET_TYPE_KEYBOARD()] = "KEYBOARD";
    /**
     * 拖放状态窗口。
     *
     */
    TWidgetType[TWidgetType["DND"] = WIDGET_TYPE_DND()] = "DND";
    /**
     * 文本控件。
     *
     */
    TWidgetType[TWidgetType["LABEL"] = WIDGET_TYPE_LABEL()] = "LABEL";
    /**
     * 按钮控件。
     *
     */
    TWidgetType[TWidgetType["BUTTON"] = WIDGET_TYPE_BUTTON()] = "BUTTON";
    /**
     * 图片控件。
     *
     */
    TWidgetType[TWidgetType["IMAGE"] = WIDGET_TYPE_IMAGE()] = "IMAGE";
    /**
     * 文本编辑控件。
     *
     */
    TWidgetType[TWidgetType["EDIT"] = WIDGET_TYPE_EDIT()] = "EDIT";
    /**
     * 进度条控件。
     *
     */
    TWidgetType[TWidgetType["PROGRESS_BAR"] = WIDGET_TYPE_PROGRESS_BAR()] = "PROGRESS_BAR";
    /**
     * 分组控件。
     *
     */
    TWidgetType[TWidgetType["GROUP_BOX"] = WIDGET_TYPE_GROUP_BOX()] = "GROUP_BOX";
    /**
     * 多选按钮控件。
     *
     */
    TWidgetType[TWidgetType["CHECK_BUTTON"] = WIDGET_TYPE_CHECK_BUTTON()] = "CHECK_BUTTON";
    /**
     * 单选按钮控件。
     *
     */
    TWidgetType[TWidgetType["RADIO_BUTTON"] = WIDGET_TYPE_RADIO_BUTTON()] = "RADIO_BUTTON";
    /**
     * 对话框标题。
     *
     */
    TWidgetType[TWidgetType["DIALOG_TITLE"] = WIDGET_TYPE_DIALOG_TITLE()] = "DIALOG_TITLE";
    /**
     * 对话框客户区域。
     *
     */
    TWidgetType[TWidgetType["DIALOG_CLIENT"] = WIDGET_TYPE_DIALOG_CLIENT()] = "DIALOG_CLIENT";
    /**
     * 滑块控件。
     *
     */
    TWidgetType[TWidgetType["SLIDER"] = WIDGET_TYPE_SLIDER()] = "SLIDER";
    /**
     * 视图控件。
     *
     */
    TWidgetType[TWidgetType["VIEW"] = WIDGET_TYPE_VIEW()] = "VIEW";
    /**
     * 下拉选择框控件。
     *
     */
    TWidgetType[TWidgetType["COMBO_BOX"] = WIDGET_TYPE_COMBO_BOX()] = "COMBO_BOX";
    /**
     * 下拉选择框的列表项控件。
     *
     */
    TWidgetType[TWidgetType["COMBO_BOX_ITEM"] = WIDGET_TYPE_COMBO_BOX_ITEM()] = "COMBO_BOX_ITEM";
    /**
     * 滑动视图控件。
     *
     */
    TWidgetType[TWidgetType["SLIDE_VIEW"] = WIDGET_TYPE_SLIDE_VIEW()] = "SLIDE_VIEW";
    /**
     * 滑动视图的指示器控件。
     *
     */
    TWidgetType[TWidgetType["SLIDE_INDICATOR"] = WIDGET_TYPE_SLIDE_INDICATOR()] = "SLIDE_INDICATOR";
    /**
     * 滑动视图的指示器控件（圆弧显示）。
     *
     */
    TWidgetType[TWidgetType["SLIDE_INDICATOR_ARC"] = WIDGET_TYPE_SLIDE_INDICATOR_ARC()] = "SLIDE_INDICATOR_ARC";
    /**
     * 多页控件。
     *
     */
    TWidgetType[TWidgetType["PAGES"] = WIDGET_TYPE_PAGES()] = "PAGES";
    /**
     * 标签按钮控件。
     *
     */
    TWidgetType[TWidgetType["TAB_BUTTON"] = WIDGET_TYPE_TAB_BUTTON()] = "TAB_BUTTON";
    /**
     * 标签控件。
     *
     */
    TWidgetType[TWidgetType["TAB_CONTROL"] = WIDGET_TYPE_TAB_CONTROL()] = "TAB_CONTROL";
    /**
     * 标签按钮分组控件。
     *
     */
    TWidgetType[TWidgetType["TAB_BUTTON_GROUP"] = WIDGET_TYPE_TAB_BUTTON_GROUP()] = "TAB_BUTTON_GROUP";
    /**
     * 按钮分组控件。
     *
     */
    TWidgetType[TWidgetType["BUTTON_GROUP"] = WIDGET_TYPE_BUTTON_GROUP()] = "BUTTON_GROUP";
    /**
     * 候选字控件。
     *
     */
    TWidgetType[TWidgetType["CANDIDATES"] = WIDGET_TYPE_CANDIDATES()] = "CANDIDATES";
    /**
     * 数值编辑控件。
     *
     */
    TWidgetType[TWidgetType["SPIN_BOX"] = WIDGET_TYPE_SPIN_BOX()] = "SPIN_BOX";
    /**
     * 拖动块控件。
     *
     */
    TWidgetType[TWidgetType["DRAGGER"] = WIDGET_TYPE_DRAGGER()] = "DRAGGER";
    /**
     * 滚动条控件。
     *
     */
    TWidgetType[TWidgetType["SCROLL_BAR"] = WIDGET_TYPE_SCROLL_BAR()] = "SCROLL_BAR";
    /**
     * 桌面版滚动条控件。
     *
     */
    TWidgetType[TWidgetType["SCROLL_BAR_DESKTOP"] = WIDGET_TYPE_SCROLL_BAR_DESKTOP()] = "SCROLL_BAR_DESKTOP";
    /**
     * 移动版滚动条控件。
     *
     */
    TWidgetType[TWidgetType["SCROLL_BAR_MOBILE"] = WIDGET_TYPE_SCROLL_BAR_MOBILE()] = "SCROLL_BAR_MOBILE";
    /**
     * 滚动视图控件。
     *
     */
    TWidgetType[TWidgetType["SCROLL_VIEW"] = WIDGET_TYPE_SCROLL_VIEW()] = "SCROLL_VIEW";
    /**
     * 列表视图控件。
     *
     */
    TWidgetType[TWidgetType["LIST_VIEW"] = WIDGET_TYPE_LIST_VIEW()] = "LIST_VIEW";
    /**
     * 水平列表视图控件。
     *
     */
    TWidgetType[TWidgetType["LIST_VIEW_H"] = WIDGET_TYPE_LIST_VIEW_H()] = "LIST_VIEW_H";
    /**
     * 列表项控件。
     *
     */
    TWidgetType[TWidgetType["LIST_ITEM"] = WIDGET_TYPE_LIST_ITEM()] = "LIST_ITEM";
    /**
     * 颜色选择器控件。
     *
     */
    TWidgetType[TWidgetType["COLOR_PICKER"] = WIDGET_TYPE_COLOR_PICKER()] = "COLOR_PICKER";
    /**
     * 颜色选择器组件控件。
     *
     */
    TWidgetType[TWidgetType["COLOR_COMPONENT"] = WIDGET_TYPE_COLOR_COMPONENT()] = "COLOR_COMPONENT";
    /**
     * 颜色块控件。
     *
     */
    TWidgetType[TWidgetType["COLOR_TILE"] = WIDGET_TYPE_COLOR_TILE()] = "COLOR_TILE";
    /**
     * 裁剪控件。
     *
     */
    TWidgetType[TWidgetType["CLIP_VIEW"] = WIDGET_TYPE_CLIP_VIEW()] = "CLIP_VIEW";
    /**
     * 富文本控件。
     *
     */
    TWidgetType[TWidgetType["RICH_TEXT"] = WIDGET_TYPE_RICH_TEXT()] = "RICH_TEXT";
    /**
     * AppBar控件。
     *
     */
    TWidgetType[TWidgetType["APP_BAR"] = WIDGET_TYPE_APP_BAR()] = "APP_BAR";
    /**
     * 网格控件。
     *
     */
    TWidgetType[TWidgetType["GRID"] = WIDGET_TYPE_GRID()] = "GRID";
    /**
     * 网格项目控件。
     *
     */
    TWidgetType[TWidgetType["GRID_ITEM"] = WIDGET_TYPE_GRID_ITEM()] = "GRID_ITEM";
    /**
     * 行控件。
     *
     */
    TWidgetType[TWidgetType["ROW"] = WIDGET_TYPE_ROW()] = "ROW";
    /**
     * 列控件。
     *
     */
    TWidgetType[TWidgetType["COLUMN"] = WIDGET_TYPE_COLUMN()] = "COLUMN";
    /**
     * 电阻屏校准窗口。
     *
     */
    TWidgetType[TWidgetType["CALIBRATION_WIN"] = WIDGET_TYPE_CALIBRATION_WIN()] = "CALIBRATION_WIN";
})(TWidgetType || (TWidgetType = {}));
;
/**
 * 窗口的生命周期常量定义。
 *
 */
var TWindowStage;
(function (TWindowStage) {
    /**
     * 初始状态。
     *
     */
    TWindowStage[TWindowStage["NONE"] = WINDOW_STAGE_NONE()] = "NONE";
    /**
     * 创建完成。
     *
     */
    TWindowStage[TWindowStage["CREATED"] = WINDOW_STAGE_CREATED()] = "CREATED";
    /**
     * 窗口已经打开(窗口打开动画完成后，处于该状态，直到窗口被关闭)
     *
     */
    TWindowStage[TWindowStage["OPENED"] = WINDOW_STAGE_OPENED()] = "OPENED";
    /**
     * 窗口已关闭。
     *
     */
    TWindowStage[TWindowStage["CLOSED"] = WINDOW_STAGE_CLOSED()] = "CLOSED";
})(TWindowStage || (TWindowStage = {}));
;
/**
 * 窗口的closable常量定义。
 *
 */
var TWindowClosable;
(function (TWindowClosable) {
    /**
     * 窗口可关闭。
     *
     */
    TWindowClosable[TWindowClosable["YES"] = WINDOW_CLOSABLE_YES()] = "YES";
    /**
     * 窗口不可关闭。
     *
     */
    TWindowClosable[TWindowClosable["NO"] = WINDOW_CLOSABLE_NO()] = "NO";
    /**
     * 窗口需要确认后才能关闭。
     *
     */
    TWindowClosable[TWindowClosable["CONFIRM"] = WINDOW_CLOSABLE_CONFIRM()] = "CONFIRM";
})(TWindowClosable || (TWindowClosable = {}));
;
/**
 * 控件状态常量定义。
 *
 *这里指定常用的状态值，扩展控件可以在自己的头文件中定义私有的状态。
 *
 */
var TWidgetState;
(function (TWidgetState) {
    /**
     * 无效状态。
     *
     */
    TWidgetState[TWidgetState["STATE_NONE"] = WIDGET_STATE_NONE()] = "STATE_NONE";
    /**
     * 正常状态。
     *
     */
    TWidgetState[TWidgetState["STATE_NORMAL"] = WIDGET_STATE_NORMAL()] = "STATE_NORMAL";
    /**
     * 指针按下状态。
     *
     */
    TWidgetState[TWidgetState["STATE_PRESSED"] = WIDGET_STATE_PRESSED()] = "STATE_PRESSED";
    /**
     * 指针悬浮状态。
     *
     */
    TWidgetState[TWidgetState["STATE_OVER"] = WIDGET_STATE_OVER()] = "STATE_OVER";
    /**
     * 禁用状态。
     *
     */
    TWidgetState[TWidgetState["STATE_DISABLE"] = WIDGET_STATE_DISABLE()] = "STATE_DISABLE";
    /**
     * 聚焦状态。
     *
     */
    TWidgetState[TWidgetState["STATE_FOCUSED"] = WIDGET_STATE_FOCUSED()] = "STATE_FOCUSED";
    /**
     * 勾选状态。
     *
     */
    TWidgetState[TWidgetState["STATE_CHECKED"] = WIDGET_STATE_CHECKED()] = "STATE_CHECKED";
    /**
     * 没勾选状态。
     *
     */
    TWidgetState[TWidgetState["STATE_UNCHECKED"] = WIDGET_STATE_UNCHECKED()] = "STATE_UNCHECKED";
    /**
     * 编辑器无内容状态。
     *
     */
    TWidgetState[TWidgetState["STATE_EMPTY"] = WIDGET_STATE_EMPTY()] = "STATE_EMPTY";
    /**
     * 编辑器无内容同时聚焦的状态。
     *
     */
    TWidgetState[TWidgetState["STATE_EMPTY_FOCUS"] = WIDGET_STATE_EMPTY_FOCUS()] = "STATE_EMPTY_FOCUS";
    /**
     * 输入错误状态。
     *
     */
    TWidgetState[TWidgetState["STATE_ERROR"] = WIDGET_STATE_ERROR()] = "STATE_ERROR";
    /**
     * 选中状态。
     *
     */
    TWidgetState[TWidgetState["STATE_SELECTED"] = WIDGET_STATE_SELECTED()] = "STATE_SELECTED";
    /**
     * 正常状态(选中项)。
     *
     */
    TWidgetState[TWidgetState["STATE_NORMAL_OF_CHECKED"] = WIDGET_STATE_NORMAL_OF_CHECKED()] = "STATE_NORMAL_OF_CHECKED";
    /**
     * 指针按下状态(选中项)。
     *
     */
    TWidgetState[TWidgetState["STATE_PRESSED_OF_CHECKED"] = WIDGET_STATE_PRESSED_OF_CHECKED()] = "STATE_PRESSED_OF_CHECKED";
    /**
     * 指针悬浮状态(选中项)。
     *
     */
    TWidgetState[TWidgetState["STATE_OVER_OF_CHECKED"] = WIDGET_STATE_OVER_OF_CHECKED()] = "STATE_OVER_OF_CHECKED";
    /**
     * 焦点状态(选中项)。
     *
     */
    TWidgetState[TWidgetState["STATE_FOCUSED_OF_CHECKED"] = WIDGET_STATE_FOCUSED_OF_CHECKED()] = "STATE_FOCUSED_OF_CHECKED";
    /**
     * 正常状态(当前项)。
     *
     */
    TWidgetState[TWidgetState["STATE_NORMAL_OF_ACTIVE"] = WIDGET_STATE_NORMAL_OF_ACTIVE()] = "STATE_NORMAL_OF_ACTIVE";
    /**
     * 指针按下状态(当前项)。
     *
     */
    TWidgetState[TWidgetState["STATE_PRESSED_OF_ACTIVE"] = WIDGET_STATE_PRESSED_OF_ACTIVE()] = "STATE_PRESSED_OF_ACTIVE";
    /**
     * 指针悬浮状态(当前项)。
     *
     */
    TWidgetState[TWidgetState["STATE_OVER_OF_ACTIVE"] = WIDGET_STATE_OVER_OF_ACTIVE()] = "STATE_OVER_OF_ACTIVE";
    /**
     * 焦点状态(当前项)。
     *
     */
    TWidgetState[TWidgetState["STATE_FOCUSED_OF_ACTIVE"] = WIDGET_STATE_FOCUSED_OF_ACTIVE()] = "STATE_FOCUSED_OF_ACTIVE";
})(TWidgetState || (TWidgetState = {}));
;
/**
 * widget_t* button = button_create(win, 10, 10, 128, 30);
 *widget_set_text(button, L"OK");
 *widget_on(button, EVT_CLICK, on_click, NULL);
 *```
 *
 */
var TWidget = /** @class */ (function () {
    function TWidget(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 获取子控件的个数。
     *
     *
     * @returns 子控件的个数。
     */
    TWidget.prototype.countChildren = function () {
        return widget_count_children(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取指定索引的子控件。
     *
     * @param index 索引。
     *
     * @returns 子控件。
     */
    TWidget.prototype.getChild = function (index) {
        return new TWidget(widget_get_child(this != null ? (this.nativeObj || this) : null, index));
    };
    /**
     * 获取控件在父控件中的索引编号。
     *
     *
     * @returns 在父控件中的索引编号。
     */
    TWidget.prototype.indexOf = function () {
        return widget_index_of(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 移动控件。
     *
     * @param x x坐标
     * @param y y坐标
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.move = function (x, y) {
        return widget_move(this != null ? (this.nativeObj || this) : null, x, y);
    };
    /**
     * 调整控件的大小。
     *
     * @param w 宽度
     * @param h 高度
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.resize = function (w, h) {
        return widget_resize(this != null ? (this.nativeObj || this) : null, w, h);
    };
    /**
     * 移动控件并调整控件的大小。
     *
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.moveResize = function (x, y, w, h) {
        return widget_move_resize(this != null ? (this.nativeObj || this) : null, x, y, w, h);
    };
    /**
     * 设置控件的值。
     *只是对widget\_set\_prop的包装，值的意义由子类控件决定。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setValue = function (value) {
        return widget_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置控件的值(以动画形式变化到指定的值)。
     *只是对widget\_set\_prop的包装，值的意义由子类控件决定。
     *
     * @param value 值。
     * @param duration 动画持续时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.animateValueTo = function (value, duration) {
        return widget_animate_value_to(this != null ? (this.nativeObj || this) : null, value, duration);
    };
    /**
     * 增加控件的值。
     *只是对widget\_set\_prop的包装，值的意义由子类控件决定。
     *
     * @param delta 增量。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.addValue = function (delta) {
        return widget_add_value(this != null ? (this.nativeObj || this) : null, delta);
    };
    /**
     * 启用指定的主题。
     *
     * @param style style的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.useStyle = function (style) {
        return widget_use_style(this != null ? (this.nativeObj || this) : null, style);
    };
    /**
     * 设置控件的文本。
     *只是对widget\_set\_prop的包装，文本的意义由子类控件决定。
     *
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setText = function (text) {
        return widget_set_text_utf8(this != null ? (this.nativeObj || this) : null, text);
    };
    /**
     * 获取翻译之后的文本，然后调用widget_set_text。
     *
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setTrText = function (text) {
        return widget_set_tr_text(this != null ? (this.nativeObj || this) : null, text);
    };
    /**
     * 获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。
     *
     *
     * @returns 返回值。
     */
    TWidget.prototype.getValue = function () {
        return widget_get_value(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取控件的文本。
     *只是对widget\_get\_prop的包装，文本的意义由子类控件决定。
     *
     *
     * @returns 返回文本。
     */
    TWidget.prototype.getText = function () {
        return widget_get_text(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置控件的名称。
     *
     * @param name 名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setName = function (name) {
        return widget_set_name(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 设置theme的名称，用于动态切换主题。名称与当前主题名称相同，则重新加载全部资源。
     *
     *> 目前只支持带有文件系统的平台。
     *
     * @param name 主题的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setTheme = function (name) {
        return widget_set_theme(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 设置鼠标指针的图片名。
     *
     * @param cursor 图片名称(无扩展名)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setPointerCursor = function (cursor) {
        return widget_set_pointer_cursor(this != null ? (this.nativeObj || this) : null, cursor);
    };
    /**
     * 设置控件的动画参数(仅用于在UI文件使用)。
     *请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
     *
     * @param animation 动画参数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setAnimation = function (animation) {
        return widget_set_animation(this != null ? (this.nativeObj || this) : null, animation);
    };
    /**
     * 创建动画。
     *请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
     *
     ** 除非指定auto_start=false，动画创建后自动启动。
     ** 除非指定auto_destroy=false，动画播放完成后自动销毁。
     *
     * @param animation 动画参数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.createAnimator = function (animation) {
        return widget_create_animator(this != null ? (this.nativeObj || this) : null, animation);
    };
    /**
     * 播放动画。
     *请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
     *
     ** 1.widget为NULL时，播放所有名称为name的动画。
     ** 2.name为NULL时，播放所有widget相关的动画。
     ** 3.widget和name均为NULL，播放所有动画。
     *
     * @param name 动画名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.startAnimator = function (name) {
        return widget_start_animator(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 设置动画的时间倍率，<0: 时间倒退，<1: 时间变慢，>1 时间变快。
     *请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
     *
     ** 1.widget为NULL时，设置所有名称为name的动画的时间倍率。
     ** 2.name为NULL时，设置所有widget相关的动画的时间倍率。
     ** 3.widget和name均为NULL，设置所有动画的时间倍率。
     *
     * @param name 动画名称。
     * @param time_scale 时间倍率。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setAnimatorTimeScale = function (name, time_scale) {
        return widget_set_animator_time_scale(this != null ? (this.nativeObj || this) : null, name, time_scale);
    };
    /**
     * 暂停动画。
     *请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
     *
     ** 1.widget为NULL时，暂停所有名称为name的动画。
     ** 2.name为NULL时，暂停所有widget相关的动画。
     ** 3.widget和name均为NULL，暂停所有动画。
     *
     * @param name 动画名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.pauseAnimator = function (name) {
        return widget_pause_animator(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 停止动画(控件的相应属性回归原位)。
     *请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
     *
     ** 1.widget为NULL时，停止所有名称为name的动画。
     ** 2.name为NULL时，停止所有widget相关的动画。
     ** 3.widget和name均为NULL，停止所有动画。
     *
     * @param name 动画名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.stopAnimator = function (name) {
        return widget_stop_animator(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 销毁动画。
     *请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
     *
     ** 1.widget为NULL时，销毁所有名称为name的动画。
     ** 2.name为NULL时，销毁所有widget相关的动画。
     ** 3.widget和name均为NULL，销毁所有动画。
     *
     * @param name 动画名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.destroyAnimator = function (name) {
        return widget_destroy_animator(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 设置控件的可用性。
     *
     * @param enable 是否可用性。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setEnable = function (enable) {
        return widget_set_enable(this != null ? (this.nativeObj || this) : null, enable);
    };
    /**
     * 设置控件是否启用反馈。
     *
     * @param feedback 是否启用反馈。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setFeedback = function (feedback) {
        return widget_set_feedback(this != null ? (this.nativeObj || this) : null, feedback);
    };
    /**
     * 设置控件的floating标志。
     *> floating的控件不受父控件的子控件布局参数的影响。
     *
     * @param floating 是否启用floating布局。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setFloating = function (floating) {
        return widget_set_floating(this != null ? (this.nativeObj || this) : null, floating);
    };
    /**
     * 设置控件是否获得焦点。
     *
     * @param focused 是否获得焦点。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setFocused = function (focused) {
        return widget_set_focused(this != null ? (this.nativeObj || this) : null, focused);
    };
    /**
     * 设置控件是否可获得焦点。
     *
     * @param focusable 是否可获得焦点。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setFocusable = function (focusable) {
        return widget_set_focusable(this != null ? (this.nativeObj || this) : null, focusable);
    };
    /**
     * 设置控件的状态。
     *
     * @param state 状态(必须为真正的常量字符串，在widget的整个生命周期有效)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setState = function (state) {
        return widget_set_state(this != null ? (this.nativeObj || this) : null, state);
    };
    /**
     * 设置控件的不透明度。
     *
     *>在嵌入式平台，半透明效果会使性能大幅下降，请谨慎使用。
     *
     * @param opacity 不透明度(取值0-255，0表示完全透明，255表示完全不透明)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setOpacity = function (opacity) {
        return widget_set_opacity(this != null ? (this.nativeObj || this) : null, opacity);
    };
    /**
     * 销毁全部子控件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.destroyChildren = function () {
        return widget_destroy_children(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 加入一个子控件。
     *
     * @param child 子控件对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.addChild = function (child) {
        return widget_add_child(this != null ? (this.nativeObj || this) : null, child != null ? (child.nativeObj || child) : null);
    };
    /**
     * 移出指定的子控件(并不销毁)。
     *
     * @param child 子控件对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.removeChild = function (child) {
        return widget_remove_child(this != null ? (this.nativeObj || this) : null, child != null ? (child.nativeObj || child) : null);
    };
    /**
     * 插入子控件到指定的位置。
     *
     * @param index 位置序数(大于等于总个数，则放到最后)。
     * @param child 子控件对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.insertChild = function (index, child) {
        return widget_insert_child(this != null ? (this.nativeObj || this) : null, index, child != null ? (child.nativeObj || child) : null);
    };
    /**
     * 调整控件在父控件中的位置序数。
     *
     * @param index 位置序数(大于等于总个数，则放到最后)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.restack = function (index) {
        return widget_restack(this != null ? (this.nativeObj || this) : null, index);
    };
    /**
     * 查找指定名称的子控件(同widget_lookup(widget, name, FALSE))。
     *
     * @param name 子控件的名称。
     *
     * @returns 子控件或NULL。
     */
    TWidget.prototype.child = function (name) {
        return new TWidget(widget_child(this != null ? (this.nativeObj || this) : null, name));
    };
    /**
     * 查找指定名称的子控件(返回第一个)。
     *
     * @param name 子控件的名称。
     * @param recursive 是否递归查找全部子控件。
     *
     * @returns 子控件或NULL。
     */
    TWidget.prototype.lookup = function (name, recursive) {
        return new TWidget(widget_lookup(this != null ? (this.nativeObj || this) : null, name, recursive));
    };
    /**
     * 查找指定类型的子控件(返回第一个)。
     *
     * @param type 子控件的名称。
     * @param recursive 是否递归查找全部子控件。
     *
     * @returns 子控件或NULL。
     */
    TWidget.prototype.lookupByType = function (type, recursive) {
        return new TWidget(widget_lookup_by_type(this != null ? (this.nativeObj || this) : null, type, recursive));
    };
    /**
     * 设置控件的可见性。
     *
     * @param visible 是否可见。
     * @param recursive 是否递归设置全部子控件。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setVisible = function (visible, recursive) {
        return widget_set_visible(this != null ? (this.nativeObj || this) : null, visible, recursive);
    };
    /**
     * 设置控件的可见性(不触发repaint和relayout)。
     *
     * @param visible 是否可见。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setVisibleOnly = function (visible) {
        return widget_set_visible_only(this != null ? (this.nativeObj || this) : null, visible);
    };
    /**
     * 设置控件是否接受用户事件。
     *
     * @param sensitive 是否接受用户事件。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setSensitive = function (sensitive) {
        return widget_set_sensitive(this != null ? (this.nativeObj || this) : null, sensitive);
    };
    /**
     * widget_t* ok = button_create(win, 10, 10, 80, 30);
     *widget_on(ok, EVT_CLICK, on_click, NULL);
     *
     *```
     *
     * @param type 事件类型。
     * @param on_event 事件处理函数。
     * @param ctx 事件处理函数上下文。
     *
     * @returns 返回id，用于widget_off。
     */
    TWidget.prototype.on = function (type, on_event, ctx) {
        return widget_on(this != null ? (this.nativeObj || this) : null, type, on_event, ctx);
    };
    /**
     * 注销指定事件的处理函数。
     *
     * @param id widget_on返回的ID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.off = function (id) {
        return widget_off(this != null ? (this.nativeObj || this) : null, id);
    };
    /**
     * 请求强制重绘控件。
     *
     * @param r 矩形对象(widget本地坐标)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.invalidateForce = function (r) {
        return widget_invalidate_force(this != null ? (this.nativeObj || this) : null, r != null ? (r.nativeObj || r) : null);
    };
    /**
     * 设置字符串格式的属性。
     *
     * @param name 属性的名称。
     * @param v 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setPropStr = function (name, v) {
        return widget_set_prop_str(this != null ? (this.nativeObj || this) : null, name, v);
    };
    /**
     * 获取字符串格式的属性。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回属性的值。
     */
    TWidget.prototype.getPropStr = function (name, defval) {
        return widget_get_prop_str(this != null ? (this.nativeObj || this) : null, name, defval);
    };
    /**
     * 设置整数格式的属性。
     *
     * @param name 属性的名称。
     * @param v 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setPropInt = function (name, v) {
        return widget_set_prop_int(this != null ? (this.nativeObj || this) : null, name, v);
    };
    /**
     * 获取整数格式的属性。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回属性的值。
     */
    TWidget.prototype.getPropInt = function (name, defval) {
        return widget_get_prop_int(this != null ? (this.nativeObj || this) : null, name, defval);
    };
    /**
     * 设置布尔格式的属性。
     *
     * @param name 属性的名称。
     * @param v 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setPropBool = function (name, v) {
        return widget_set_prop_bool(this != null ? (this.nativeObj || this) : null, name, v);
    };
    /**
     * 获取布尔格式的属性。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回属性的值。
     */
    TWidget.prototype.getPropBool = function (name, defval) {
        return widget_get_prop_bool(this != null ? (this.nativeObj || this) : null, name, defval);
    };
    /**
     * 判断当前控件所在的窗口是否已经打开。
     *
     *
     * @returns 返回当前控件所在的窗口是否已经打开。
     */
    TWidget.prototype.isWindowOpened = function () {
        return widget_is_window_opened(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 判断当前控件是否是窗口。
     *
     *
     * @returns 返回当前控件是否是窗口。
     */
    TWidget.prototype.isWindow = function () {
        return widget_is_window(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 判断当前控件是否是设计窗口。
     *
     *
     * @returns 返回当前控件是否是设计窗口。
     */
    TWidget.prototype.isDesigningWindow = function () {
        return widget_is_designing_window(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 判断当前控件是否是窗口管理器。
     *
     *
     * @returns 返回当前控件是否是窗口管理器。
     */
    TWidget.prototype.isWindowManager = function () {
        return widget_is_window_manager(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 遍历当前控件及子控件。
     *
     * @param visit 遍历的回调函数。
     * @param ctx 回调函数的上下文。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.foreach = function (visit, ctx) {
        return widget_foreach(this != null ? (this.nativeObj || this) : null, visit, ctx);
    };
    /**
     * 获取当前控件所在的窗口。
     *
     *
     * @returns 窗口对象。
     */
    TWidget.prototype.getWindow = function () {
        return new TWidget(widget_get_window(this != null ? (this.nativeObj || this) : null));
    };
    /**
     * 获取当前的窗口管理器。
     *
     *
     * @returns 窗口管理器对象。
     */
    TWidget.prototype.getWindowManager = function () {
        return new TWidget(widget_get_window_manager(this != null ? (this.nativeObj || this) : null));
    };
    /**
     * 获取当前控件的类型名称。
     *
     *
     * @returns 返回类型名。
     */
    TWidget.prototype.getType = function () {
        return widget_get_type(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * clone。
     *
     * @param parent clone新控件的parent对象。
     *
     * @returns 返回clone的对象。
     */
    TWidget.prototype.clone = function (parent) {
        return new TWidget(widget_clone(this != null ? (this.nativeObj || this) : null, parent != null ? (parent.nativeObj || parent) : null));
    };
    /**
     * 判断两个widget是否相同。
     *
     * @param other 要比较的控件对象。
     *
     * @returns 返回TRUE表示相同，否则表示不同。
     */
    TWidget.prototype.equal = function (other) {
        return widget_equal(this != null ? (this.nativeObj || this) : null, other != null ? (other.nativeObj || other) : null);
    };
    /**
     * 转换为widget对象(供脚本语言使用)。
     *
     * @param widget widget对象。
     *
     * @returns widget对象。
     */
    TWidget.cast = function (widget) {
        return new TWidget(widget_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 从父控件中移除控件，并调用unref函数销毁控件。
     *
     *> 一般无需直接调用，关闭窗口时，自动销毁相关控件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.destroy = function () {
        return widget_destroy(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 减少控件的引用计数。引用计数为0时销毁控件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.unref = function () {
        return widget_unref(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 检查控件是否是system bar类型。
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    TWidget.prototype.isSystemBar = function () {
        return widget_is_system_bar(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 检查控件是否是普通窗口类型。
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    TWidget.prototype.isNormalWindow = function () {
        return widget_is_normal_window(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 检查控件是否是对话框类型。
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    TWidget.prototype.isDialog = function () {
        return widget_is_dialog(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 检查控件是否是弹出窗口类型。
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    TWidget.prototype.isPopup = function () {
        return widget_is_popup(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 布局当前控件及子控件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.layout = function () {
        return widget_layout(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置控件自己的布局参数。
     *
     * @param params 布局参数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setSelfLayout = function (params) {
        return widget_set_self_layout(this != null ? (this.nativeObj || this) : null, params);
    };
    /**
     * 设置子控件的布局参数。
     *
     * @param params 布局参数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setChildrenLayout = function (params) {
        return widget_set_children_layout(this != null ? (this.nativeObj || this) : null, params);
    };
    /**
     * 设置控件自己的布局(缺省布局器)参数(过时，请用widget\_set\_self\_layout)。
     *
     * @param x x参数。
     * @param y y参数。
     * @param w w参数。
     * @param h h参数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setSelfLayoutParams = function (x, y, w, h) {
        return widget_set_self_layout_params(this != null ? (this.nativeObj || this) : null, x, y, w, h);
    };
    /**
     * 设置整数类型的style。
     *
     * @param state_and_name 状态和名字，用英文的冒号分隔。
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setStyleInt = function (state_and_name, value) {
        return widget_set_style_int(this != null ? (this.nativeObj || this) : null, state_and_name, value);
    };
    /**
     * 设置字符串类型的style。
     *
     * @param state_and_name 状态和名字，用英文的冒号分隔。
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setStyleStr = function (state_and_name, value) {
        return widget_set_style_str(this != null ? (this.nativeObj || this) : null, state_and_name, value);
    };
    /**
     * 设置颜色类型的style。
     *
     * @param state_and_name 状态和名字，用英文的冒号分隔。
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWidget.prototype.setStyleColor = function (state_and_name, value) {
        return widget_set_style_color(this != null ? (this.nativeObj || this) : null, state_and_name, value);
    };
    Object.defineProperty(TWidget.prototype, "x", {
        /**
         * x坐标(相对于父控件的x坐标)。
         *
         */
        get: function () {
            return widget_t_get_prop_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "y", {
        /**
         * y坐标(相对于父控件的y坐标)。
         *
         */
        get: function () {
            return widget_t_get_prop_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "w", {
        /**
         * 宽度。
         *
         */
        get: function () {
            return widget_t_get_prop_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "h", {
        /**
         * 高度。
         *
         */
        get: function () {
            return widget_t_get_prop_h(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "name", {
        /**
         * 控件名字。
         *
         */
        get: function () {
            return widget_t_get_prop_name(this.nativeObj);
        },
        set: function (v) {
            this.setName(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "trText", {
        /**
         * 保存用于翻译的字符串。
         *
         */
        get: function () {
            return widget_t_get_prop_tr_text(this.nativeObj);
        },
        set: function (v) {
            this.setTrText(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "style", {
        /**
         * style的名称。
         *
         */
        get: function () {
            return widget_t_get_prop_style(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "animation", {
        /**
         * 动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
         *
         */
        get: function () {
            return widget_t_get_prop_animation(this.nativeObj);
        },
        set: function (v) {
            this.setAnimation(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "enable", {
        /**
         * 启用/禁用状态。
         *
         */
        get: function () {
            return widget_t_get_prop_enable(this.nativeObj);
        },
        set: function (v) {
            this.setEnable(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "feedback", {
        /**
         * 是否启用按键音、触屏音和震动等反馈。
         *
         */
        get: function () {
            return widget_t_get_prop_feedback(this.nativeObj);
        },
        set: function (v) {
            this.setFeedback(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "visible", {
        /**
         * 是否可见。
         *
         */
        get: function () {
            return widget_t_get_prop_visible(this.nativeObj);
        },
        set: function (v) {
            widget_t_set_prop_visible(this.nativeObj, v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "sensitive", {
        /**
         * 是否接受用户事件。
         *
         */
        get: function () {
            return widget_t_get_prop_sensitive(this.nativeObj);
        },
        set: function (v) {
            widget_t_set_prop_sensitive(this.nativeObj, v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "focusable", {
        /**
         * 是否支持焦点停留。
         *
         */
        get: function () {
            return widget_t_get_prop_focusable(this.nativeObj);
        },
        set: function (v) {
            widget_t_set_prop_focusable(this.nativeObj, v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "withFocusState", {
        /**
         * 是否支持焦点状态。
         *> 如果希望style支持焦点状态，但有不希望焦点停留，可用本属性。
         *
         */
        get: function () {
            return widget_t_get_prop_with_focus_state(this.nativeObj);
        },
        set: function (v) {
            widget_t_set_prop_with_focus_state(this.nativeObj, v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "floating", {
        /**
         * 标识控件是否启用浮动布局，不受父控件的children_layout的控制。
         *
         */
        get: function () {
            return widget_t_get_prop_floating(this.nativeObj);
        },
        set: function (v) {
            this.setFloating(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWidget.prototype, "parent", {
        /**
         * 父控件
         *
         */
        get: function () {
            return new TWidget(widget_t_get_prop_parent(this.nativeObj));
        },
        enumerable: true,
        configurable: true
    });
    return TWidget;
}());
;
/**
 * 函数返回值常量定义。
 *
 */
var TRet;
(function (TRet) {
    /**
     * 成功。
     *
     */
    TRet[TRet["OK"] = RET_OK()] = "OK";
    /**
     * Out of memory。
     *
     */
    TRet[TRet["OOM"] = RET_OOM()] = "OOM";
    /**
     * 失败。
     *
     */
    TRet[TRet["FAIL"] = RET_FAIL()] = "FAIL";
    /**
     * 没有实现/不支持。
     *
     */
    TRet[TRet["NOT_IMPL"] = RET_NOT_IMPL()] = "NOT_IMPL";
    /**
     * 退出。通常用于主循环。
     *
     */
    TRet[TRet["QUIT"] = RET_QUIT()] = "QUIT";
    /**
     * 找到。
     *
     */
    TRet[TRet["FOUND"] = RET_FOUND()] = "FOUND";
    /**
     * 对象忙。
     *
     */
    TRet[TRet["BUSY"] = RET_BUSY()] = "BUSY";
    /**
     * 移出。通常用于定时器。
     *
     */
    TRet[TRet["REMOVE"] = RET_REMOVE()] = "REMOVE";
    /**
     * 重复。通常用于定时器。
     *
     */
    TRet[TRet["REPEAT"] = RET_REPEAT()] = "REPEAT";
    /**
     * 没找到。
     *
     */
    TRet[TRet["NOT_FOUND"] = RET_NOT_FOUND()] = "NOT_FOUND";
    /**
     * 操作完成。
     *
     */
    TRet[TRet["DONE"] = RET_DONE()] = "DONE";
    /**
     * 停止后续操作。
     *
     */
    TRet[TRet["STOP"] = RET_STOP()] = "STOP";
    /**
     * 跳过当前项。
     *
     */
    TRet[TRet["SKIP"] = RET_SKIP()] = "SKIP";
    /**
     * 继续后续操作。
     *
     */
    TRet[TRet["CONTINUE"] = RET_CONTINUE()] = "CONTINUE";
    /**
     * 对象属性变化。
     *
     */
    TRet[TRet["OBJECT_CHANGED"] = RET_OBJECT_CHANGED()] = "OBJECT_CHANGED";
    /**
     * 集合数目变化。
     *
     */
    TRet[TRet["ITEMS_CHANGED"] = RET_ITEMS_CHANGED()] = "ITEMS_CHANGED";
    /**
     * 无效参数。
     *
     */
    TRet[TRet["BAD_PARAMS"] = RET_BAD_PARAMS()] = "BAD_PARAMS";
    /**
     * 超时。
     *
     */
    TRet[TRet["TIMEOUT"] = RET_TIMEOUT()] = "TIMEOUT";
    /**
     * CRC错误。
     *
     */
    TRet[TRet["CRC"] = RET_CRC()] = "CRC";
    /**
     * IO错误。
     *
     */
    TRet[TRet["IO"] = RET_IO()] = "IO";
    /**
     * End of Stream
     *
     */
    TRet[TRet["EOS"] = RET_EOS()] = "EOS";
})(TRet || (TRet = {}));
;
/**
 * 定时器管理器。
 *
 */
var TTimerManager = /** @class */ (function () {
    function TTimerManager(nativeObj) {
        this.nativeObj = nativeObj;
    }
    return TTimerManager;
}());
;
/**
 * 获取当前时间的函数。
 *这里的当前时间是相对的，在嵌入式系统一般相对于开机时间。
 *它本身并没有任何意义，一般用来计算时间间隔，如实现定时器和动画等等。
 *
 */
var TTimeNow = /** @class */ (function () {
    function TTimeNow() {
    }
    /**
     * 获取当前时间(秒)。
     *
     *
     * @returns 返回当前时间(秒)。
     */
    TTimeNow.s = function () {
        return time_now_s();
    };
    /**
     * 获取当前时间(毫秒)。
     *
     *
     * @returns 返回当前时间(毫秒)。
     */
    TTimeNow.ms = function () {
        return time_now_ms();
    };
    return TTimeNow;
}());
;
/**
 * 图片绘制方法常量定义。
 *
 */
var TImageDrawType;
(function (TImageDrawType) {
    /**
     * 缺省显示。将图片按原大小显示在目标矩形的左上角。
     *
     */
    TImageDrawType[TImageDrawType["DEFAULT"] = IMAGE_DRAW_DEFAULT()] = "DEFAULT";
    /**
     * 居中显示。将图片按原大小显示在目标矩形的中央。
     *
     */
    TImageDrawType[TImageDrawType["CENTER"] = IMAGE_DRAW_CENTER()] = "CENTER";
    /**
     * 图标显示。同居中显示，但会根据屏幕密度调整大小。
     *
     */
    TImageDrawType[TImageDrawType["ICON"] = IMAGE_DRAW_ICON()] = "ICON";
    /**
     * 缩放显示。将图片缩放至目标矩形的大小(不保证宽高成比例)。
     *
     */
    TImageDrawType[TImageDrawType["SCALE"] = IMAGE_DRAW_SCALE()] = "SCALE";
    /**
     * 自动缩放显示。将图片缩放至目标矩形的宽度或高度(选取最小的比例)，并居中显示。
     *
     */
    TImageDrawType[TImageDrawType["SCALE_AUTO"] = IMAGE_DRAW_SCALE_AUTO()] = "SCALE_AUTO";
    /**
     * 如果图片比目标矩形大，自动缩小显示，否则居中显示。
     *
     */
    TImageDrawType[TImageDrawType["SCALE_DOWN"] = IMAGE_DRAW_SCALE_DOWN()] = "SCALE_DOWN";
    /**
     * 宽度缩放显示。 将图片缩放至目标矩形的宽度，高度按此比例进行缩放，超出不部分不显示。
     *
     */
    TImageDrawType[TImageDrawType["SCALE_W"] = IMAGE_DRAW_SCALE_W()] = "SCALE_W";
    /**
     * 高度缩放显示。将图片缩放至目标矩形的高度，宽度按此比例进行缩放，超出不部分不显示。
     *
     */
    TImageDrawType[TImageDrawType["SCALE_H"] = IMAGE_DRAW_SCALE_H()] = "SCALE_H";
    /**
     * 平铺显示。
     *
     */
    TImageDrawType[TImageDrawType["REPEAT"] = IMAGE_DRAW_REPEAT()] = "REPEAT";
    /**
     * 水平方向平铺显示，垂直方向缩放。
     *
     */
    TImageDrawType[TImageDrawType["REPEAT_X"] = IMAGE_DRAW_REPEAT_X()] = "REPEAT_X";
    /**
     * 垂直方向平铺显示，水平方向缩放。
     *
     */
    TImageDrawType[TImageDrawType["REPEAT_Y"] = IMAGE_DRAW_REPEAT_Y()] = "REPEAT_Y";
    /**
     * 垂直方向平铺显示，水平方向缩放(从底部到顶部)。
     *
     */
    TImageDrawType[TImageDrawType["REPEAT_Y_INVERSE"] = IMAGE_DRAW_REPEAT_Y_INVERSE()] = "REPEAT_Y_INVERSE";
    /**
     * 9宫格显示。
     *将图片分成等大小的9块，4个角按原大小显示在目标矩形的4个角，左右上下和中间5块分别缩放显示在对应的目标区域。
     *
     */
    TImageDrawType[TImageDrawType["PATCH9"] = IMAGE_DRAW_PATCH9()] = "PATCH9";
    /**
     * 水平方向3宫格显示，垂直方向居中显示。
     *将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。
     *
     */
    TImageDrawType[TImageDrawType["PATCH3_X"] = IMAGE_DRAW_PATCH3_X()] = "PATCH3_X";
    /**
     * 垂直方向3宫格显示，水平方向居中显示。
     *将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。
     *
     */
    TImageDrawType[TImageDrawType["PATCH3_Y"] = IMAGE_DRAW_PATCH3_Y()] = "PATCH3_Y";
    /**
     * 水平方向3宫格显示，垂直方向缩放显示。
     *将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。
     *
     */
    TImageDrawType[TImageDrawType["PATCH3_X_SCALE_Y"] = IMAGE_DRAW_PATCH3_X_SCALE_Y()] = "PATCH3_X_SCALE_Y";
    /**
     * 垂直方向3宫格显示，水平方向缩放显示。
     *将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。
     *
     */
    TImageDrawType[TImageDrawType["PATCH3_Y_SCALE_X"] = IMAGE_DRAW_PATCH3_Y_SCALE_X()] = "PATCH3_Y_SCALE_X";
})(TImageDrawType || (TImageDrawType = {}));
;
/**
 * 提供基本的绘图功能和状态管理。
 *
 */
var TCanvas = /** @class */ (function () {
    function TCanvas(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 获取画布的宽度。
     *
     *
     * @returns 返回画布的宽度。
     */
    TCanvas.prototype.getWidth = function () {
        return canvas_get_width(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取画布的高度。
     *
     *
     * @returns 返回画布的高度。
     */
    TCanvas.prototype.getHeight = function () {
        return canvas_get_height(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取裁剪区。
     *
     * @param r rect对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.getClipRect = function (r) {
        return canvas_get_clip_rect(this != null ? (this.nativeObj || this) : null, r != null ? (r.nativeObj || r) : null);
    };
    /**
     * 设置裁剪区。
     *
     * @param r rect对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.setClipRect = function (r) {
        return canvas_set_clip_rect(this != null ? (this.nativeObj || this) : null, r != null ? (r.nativeObj || r) : null);
    };
    /**
     * 设置裁剪区。
     *
     * @param r rect对象。
     * @param translate 是否将裁剪区的位置加上canvas当前的偏移。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.setClipRectEx = function (r, translate) {
        return canvas_set_clip_rect_ex(this != null ? (this.nativeObj || this) : null, r != null ? (r.nativeObj || r) : null, translate);
    };
    /**
     * 设置填充颜色。
     *
     *> 供脚本语言使用。
     *
     * @param color 颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.setFillColor = function (color) {
        return canvas_set_fill_color_str(this != null ? (this.nativeObj || this) : null, color);
    };
    /**
     * 设置文本颜色。
     *
     *> 供脚本语言使用。
     *
     * @param color 颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.setTextColor = function (color) {
        return canvas_set_text_color_str(this != null ? (this.nativeObj || this) : null, color);
    };
    /**
     * 设置线条颜色。
     *
     *> 供脚本语言使用。
     *
     * @param color 颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.setStrokeColor = function (color) {
        return canvas_set_stroke_color_str(this != null ? (this.nativeObj || this) : null, color);
    };
    /**
     * 设置全局alpha值。
     *
     * @param alpha alpha值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.setGlobalAlpha = function (alpha) {
        return canvas_set_global_alpha(this != null ? (this.nativeObj || this) : null, alpha);
    };
    /**
     * 平移原点坐标。
     *
     * @param dx x偏移。
     * @param dy y偏移。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.translate = function (dx, dy) {
        return canvas_translate(this != null ? (this.nativeObj || this) : null, dx, dy);
    };
    /**
     * 反向平移原点坐标。
     *
     * @param dx x偏移。
     * @param dy y偏移。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.untranslate = function (dx, dy) {
        return canvas_untranslate(this != null ? (this.nativeObj || this) : null, dx, dy);
    };
    /**
     * 画垂直线。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param h 高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.drawVline = function (x, y, h) {
        return canvas_draw_vline(this != null ? (this.nativeObj || this) : null, x, y, h);
    };
    /**
     * 画水平线。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param w 宽度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.drawHline = function (x, y, w) {
        return canvas_draw_hline(this != null ? (this.nativeObj || this) : null, x, y, w);
    };
    /**
     * 填充矩形。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param w 宽度。
     * @param h 高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.fillRect = function (x, y, w, h) {
        return canvas_fill_rect(this != null ? (this.nativeObj || this) : null, x, y, w, h);
    };
    /**
     * 绘制矩形。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param w 宽度。
     * @param h 高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.strokeRect = function (x, y, w, h) {
        return canvas_stroke_rect(this != null ? (this.nativeObj || this) : null, x, y, w, h);
    };
    /**
     * 设置字体。
     *
     * @param name 字体名称。
     * @param size 字体大小。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.setFont = function (name, size) {
        return canvas_set_font(this != null ? (this.nativeObj || this) : null, name, size);
    };
    /**
     * 计算文本所占的宽度。
     *
     *> 供脚本语言使用。
     *
     * @param str 字符串。
     *
     * @returns 返回文本所占的宽度。
     */
    TCanvas.prototype.measureText = function (str) {
        return canvas_measure_utf8(this != null ? (this.nativeObj || this) : null, str);
    };
    /**
     * 绘制文本。
     *
     *> 供脚本语言使用。
     *
     * @param str 字符串。
     * @param x x坐标。
     * @param y y坐标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.drawText = function (str, x, y) {
        return canvas_draw_utf8(this != null ? (this.nativeObj || this) : null, str, x, y);
    };
    /**
     * 绘制文本。
     *
     *> 供脚本语言使用。
     *
     * @param str 字符串。
     * @param r 矩形区域。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.drawTextInRect = function (str, r) {
        return canvas_draw_utf8_in_rect(this != null ? (this.nativeObj || this) : null, str, r != null ? (r.nativeObj || r) : null);
    };
    /**
     * 绘制图标。
     *
     * @param img 图片对象。
     * @param cx 中心点x坐标。
     * @param cy 中心点y坐标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.drawIcon = function (img, cx, cy) {
        return canvas_draw_icon(this != null ? (this.nativeObj || this) : null, img != null ? (img.nativeObj || img) : null, cx, cy);
    };
    /**
     * 绘制图片。
     *
     * @param img 图片对象。
     * @param src 源区域。
     * @param dst 目的区域。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.drawImage = function (img, src, dst) {
        return canvas_draw_image(this != null ? (this.nativeObj || this) : null, img != null ? (img.nativeObj || img) : null, src != null ? (src.nativeObj || src) : null, dst != null ? (dst.nativeObj || dst) : null);
    };
    /**
     * 绘制图片。
     *
     * @param img 图片对象。
     * @param draw_type 绘制类型。
     * @param dst 目的区域。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.drawImageEx = function (img, draw_type, dst) {
        return canvas_draw_image_ex(this != null ? (this.nativeObj || this) : null, img != null ? (img.nativeObj || img) : null, draw_type, dst != null ? (dst.nativeObj || dst) : null);
    };
    /**
     * 获取vgcanvas对象。
     *
     *
     * @returns 返回vgcanvas对象。
     */
    TCanvas.prototype.getVgcanvas = function () {
        return new TVgcanvas(canvas_get_vgcanvas(this != null ? (this.nativeObj || this) : null));
    };
    /**
     * 转换为canvas对象(供脚本语言使用)。
     *
     * @param c canvas对象。
     *
     * @returns canvas对象。
     */
    TCanvas.cast = function (c) {
        return new TCanvas(canvas_cast(c != null ? (c.nativeObj || c) : null));
    };
    /**
     * 释放相关资源。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCanvas.prototype.reset = function () {
        return canvas_reset(this != null ? (this.nativeObj || this) : null);
    };
    Object.defineProperty(TCanvas.prototype, "ox", {
        /**
         * x坐标偏移。
         *
         */
        get: function () {
            return canvas_t_get_prop_ox(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TCanvas.prototype, "oy", {
        /**
         * y坐标偏移。
         *
         */
        get: function () {
            return canvas_t_get_prop_oy(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TCanvas.prototype, "fontName", {
        /**
         * 当前字体名称。
         *
         */
        get: function () {
            return canvas_t_get_prop_font_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TCanvas.prototype, "fontSize", {
        /**
         * 当前字体大小。
         *
         */
        get: function () {
            return canvas_t_get_prop_font_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TCanvas.prototype, "globalAlpha", {
        /**
         * 当前全局alpha。
         *
         */
        get: function () {
            return canvas_t_get_prop_global_alpha(this.nativeObj);
        },
        set: function (v) {
            this.setGlobalAlpha(v);
        },
        enumerable: true,
        configurable: true
    });
    return TCanvas;
}());
;
/**
 * 命名的值。
 *
 */
var TNamedValue = /** @class */ (function () {
    function TNamedValue(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 创建named_value对象。
     *
     *
     * @returns 返回named_value对象。
     */
    TNamedValue.create = function () {
        return new TNamedValue(named_value_create());
    };
    /**
     * 转换为named_value对象(供脚本语言使用)。
     *
     * @param nv named_value对象。
     *
     * @returns 返回named_value对象。
     */
    TNamedValue.cast = function (nv) {
        return new TNamedValue(named_value_cast(nv != null ? (nv.nativeObj || nv) : null));
    };
    /**
     * 设置名称。
     *
     * @param name 名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TNamedValue.prototype.setName = function (name) {
        return named_value_set_name(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 设置值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TNamedValue.prototype.setValue = function (value) {
        return named_value_set_value(this != null ? (this.nativeObj || this) : null, value != null ? (value.nativeObj || value) : null);
    };
    /**
     * 获取值对象(主要给脚本语言使用)。
     *
     *
     * @returns 返回值对象。
     */
    TNamedValue.prototype.getValue = function () {
        return new TValue(named_value_get_value(this != null ? (this.nativeObj || this) : null));
    };
    /**
     * 销毁named_value对象。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TNamedValue.prototype.destroy = function () {
        return named_value_destroy(this != null ? (this.nativeObj || this) : null);
    };
    Object.defineProperty(TNamedValue.prototype, "name", {
        /**
         * 名称。
         *
         */
        get: function () {
            return named_value_t_get_prop_name(this.nativeObj);
        },
        set: function (v) {
            this.setName(v);
        },
        enumerable: true,
        configurable: true
    });
    return TNamedValue;
}());
;
/**
 * MIME_TYPE。
 *
 */
var TMIME_TYPE;
(function (TMIME_TYPE) {
    /**
     * "application/envoy"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_ENVOY"] = MIME_TYPE_APPLICATION_ENVOY()] = "APPLICATION_ENVOY";
    /**
     * "application/fractals"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_FRACTALS"] = MIME_TYPE_APPLICATION_FRACTALS()] = "APPLICATION_FRACTALS";
    /**
     * "application/futuresplash"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_FUTURESPLASH"] = MIME_TYPE_APPLICATION_FUTURESPLASH()] = "APPLICATION_FUTURESPLASH";
    /**
     * "application/hta"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_HTA"] = MIME_TYPE_APPLICATION_HTA()] = "APPLICATION_HTA";
    /**
     * "application/json"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_JSON"] = MIME_TYPE_APPLICATION_JSON()] = "APPLICATION_JSON";
    /**
     * "application/ubjson"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_UBJSON"] = MIME_TYPE_APPLICATION_UBJSON()] = "APPLICATION_UBJSON";
    /**
     * "application/mac-binhex40"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_MAC_BINHEX40"] = MIME_TYPE_APPLICATION_MAC_BINHEX40()] = "APPLICATION_MAC_BINHEX40";
    /**
     * "application/msword"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_MSWORD"] = MIME_TYPE_APPLICATION_MSWORD()] = "APPLICATION_MSWORD";
    /**
     * "application/octet-stream"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_OCTET_STREAM"] = MIME_TYPE_APPLICATION_OCTET_STREAM()] = "APPLICATION_OCTET_STREAM";
    /**
     * "application/oda"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_ODA"] = MIME_TYPE_APPLICATION_ODA()] = "APPLICATION_ODA";
    /**
     * "application/olescript"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_OLESCRIPT"] = MIME_TYPE_APPLICATION_OLESCRIPT()] = "APPLICATION_OLESCRIPT";
    /**
     * "application/pdf"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_PDF"] = MIME_TYPE_APPLICATION_PDF()] = "APPLICATION_PDF";
    /**
     * "application/pics-rules"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_PICS_RULES"] = MIME_TYPE_APPLICATION_PICS_RULES()] = "APPLICATION_PICS_RULES";
    /**
     * "application/pkcs10"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_PKCS10"] = MIME_TYPE_APPLICATION_PKCS10()] = "APPLICATION_PKCS10";
    /**
     * "application/pkix-crl"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_PKIX_CRL"] = MIME_TYPE_APPLICATION_PKIX_CRL()] = "APPLICATION_PKIX_CRL";
    /**
     * "application/postscript"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_POSTSCRIPT"] = MIME_TYPE_APPLICATION_POSTSCRIPT()] = "APPLICATION_POSTSCRIPT";
    /**
     * "application/rtf"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_RTF"] = MIME_TYPE_APPLICATION_RTF()] = "APPLICATION_RTF";
    /**
     * "application/vnd.ms-excel"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_EXCEL"] = MIME_TYPE_APPLICATION_VND_MS_EXCEL()] = "APPLICATION_VND_MS_EXCEL";
    /**
     * "application/vnd.ms-outlook"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_OUTLOOK"] = MIME_TYPE_APPLICATION_VND_MS_OUTLOOK()] = "APPLICATION_VND_MS_OUTLOOK";
    /**
     * "application/vnd.ms-pkicertstore"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_PKICERTSTORE"] = MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE()] = "APPLICATION_VND_MS_PKICERTSTORE";
    /**
     * "application/vnd.ms-pkiseccat"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_PKISECCAT"] = MIME_TYPE_APPLICATION_VND_MS_PKISECCAT()] = "APPLICATION_VND_MS_PKISECCAT";
    /**
     * "application/vnd.ms-pkistl"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_PKISTL"] = MIME_TYPE_APPLICATION_VND_MS_PKISTL()] = "APPLICATION_VND_MS_PKISTL";
    /**
     * "application/vnd.ms-powerpoint"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_POWERPOINT"] = MIME_TYPE_APPLICATION_VND_MS_POWERPOINT()] = "APPLICATION_VND_MS_POWERPOINT";
    /**
     * "application/vnd.ms-project"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_PROJECT"] = MIME_TYPE_APPLICATION_VND_MS_PROJECT()] = "APPLICATION_VND_MS_PROJECT";
    /**
     * "application/vnd.ms-works"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_VND_MS_WORKS"] = MIME_TYPE_APPLICATION_VND_MS_WORKS()] = "APPLICATION_VND_MS_WORKS";
    /**
     * "application/winhlp"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_WINHLP"] = MIME_TYPE_APPLICATION_WINHLP()] = "APPLICATION_WINHLP";
    /**
     * "application/x-bcpio"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_BCPIO"] = MIME_TYPE_APPLICATION_X_BCPIO()] = "APPLICATION_X_BCPIO";
    /**
     * "application/x-cdf"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_CDF"] = MIME_TYPE_APPLICATION_X_CDF()] = "APPLICATION_X_CDF";
    /**
     * "application/x-compress"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_COMPRESS"] = MIME_TYPE_APPLICATION_X_COMPRESS()] = "APPLICATION_X_COMPRESS";
    /**
     * "application/x-compressed"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_COMPRESSED"] = MIME_TYPE_APPLICATION_X_COMPRESSED()] = "APPLICATION_X_COMPRESSED";
    /**
     * "application/x-cpio"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_CPIO"] = MIME_TYPE_APPLICATION_X_CPIO()] = "APPLICATION_X_CPIO";
    /**
     * "application/x-csh"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_CSH"] = MIME_TYPE_APPLICATION_X_CSH()] = "APPLICATION_X_CSH";
    /**
     * "application/x-director"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_DIRECTOR"] = MIME_TYPE_APPLICATION_X_DIRECTOR()] = "APPLICATION_X_DIRECTOR";
    /**
     * "application/x-dvi"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_DVI"] = MIME_TYPE_APPLICATION_X_DVI()] = "APPLICATION_X_DVI";
    /**
     * "application/x-gtar"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_GTAR"] = MIME_TYPE_APPLICATION_X_GTAR()] = "APPLICATION_X_GTAR";
    /**
     * "application/x-gzip"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_GZIP"] = MIME_TYPE_APPLICATION_X_GZIP()] = "APPLICATION_X_GZIP";
    /**
     * "application/x-hdf"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_HDF"] = MIME_TYPE_APPLICATION_X_HDF()] = "APPLICATION_X_HDF";
    /**
     * "application/x-iphone"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_IPHONE"] = MIME_TYPE_APPLICATION_X_IPHONE()] = "APPLICATION_X_IPHONE";
    /**
     * "application/x-javascript"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_JAVASCRIPT"] = MIME_TYPE_APPLICATION_X_JAVASCRIPT()] = "APPLICATION_X_JAVASCRIPT";
    /**
     * "application/x-latex"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_LATEX"] = MIME_TYPE_APPLICATION_X_LATEX()] = "APPLICATION_X_LATEX";
    /**
     * "application/x-msaccess"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSACCESS"] = MIME_TYPE_APPLICATION_X_MSACCESS()] = "APPLICATION_X_MSACCESS";
    /**
     * "application/x-mscardfile"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSCARDFILE"] = MIME_TYPE_APPLICATION_X_MSCARDFILE()] = "APPLICATION_X_MSCARDFILE";
    /**
     * "application/x-msclip"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSCLIP"] = MIME_TYPE_APPLICATION_X_MSCLIP()] = "APPLICATION_X_MSCLIP";
    /**
     * "application/x-msdownload"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSDOWNLOAD"] = MIME_TYPE_APPLICATION_X_MSDOWNLOAD()] = "APPLICATION_X_MSDOWNLOAD";
    /**
     * "application/x-msmediaview"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSMEDIAVIEW"] = MIME_TYPE_APPLICATION_X_MSMEDIAVIEW()] = "APPLICATION_X_MSMEDIAVIEW";
    /**
     * "application/x-msmetafile"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSMETAFILE"] = MIME_TYPE_APPLICATION_X_MSMETAFILE()] = "APPLICATION_X_MSMETAFILE";
    /**
     * "application/x-msmoney"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSMONEY"] = MIME_TYPE_APPLICATION_X_MSMONEY()] = "APPLICATION_X_MSMONEY";
    /**
     * "application/x-mspublisher"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSPUBLISHER"] = MIME_TYPE_APPLICATION_X_MSPUBLISHER()] = "APPLICATION_X_MSPUBLISHER";
    /**
     * "application/x-msschedule"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSSCHEDULE"] = MIME_TYPE_APPLICATION_X_MSSCHEDULE()] = "APPLICATION_X_MSSCHEDULE";
    /**
     * "application/x-msterminal"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSTERMINAL"] = MIME_TYPE_APPLICATION_X_MSTERMINAL()] = "APPLICATION_X_MSTERMINAL";
    /**
     * "application/x-mswrite"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_MSWRITE"] = MIME_TYPE_APPLICATION_X_MSWRITE()] = "APPLICATION_X_MSWRITE";
    /**
     * "application/x-netcdf"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_NETCDF"] = MIME_TYPE_APPLICATION_X_NETCDF()] = "APPLICATION_X_NETCDF";
    /**
     * "application/x-perfmon"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_PERFMON"] = MIME_TYPE_APPLICATION_X_PERFMON()] = "APPLICATION_X_PERFMON";
    /**
     * "application/x-pkcs12"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_PKCS12"] = MIME_TYPE_APPLICATION_X_PKCS12()] = "APPLICATION_X_PKCS12";
    /**
     * "application/x-sh"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_SH"] = MIME_TYPE_APPLICATION_X_SH()] = "APPLICATION_X_SH";
    /**
     * "application/x-shar"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_SHAR"] = MIME_TYPE_APPLICATION_X_SHAR()] = "APPLICATION_X_SHAR";
    /**
     * "application/x-shockwave-flash"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_SHOCKWAVE_FLASH"] = MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH()] = "APPLICATION_X_SHOCKWAVE_FLASH";
    /**
     * "application/x-stuffit"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_STUFFIT"] = MIME_TYPE_APPLICATION_X_STUFFIT()] = "APPLICATION_X_STUFFIT";
    /**
     * "application/x-sv4cpio"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_SV4CPIO"] = MIME_TYPE_APPLICATION_X_SV4CPIO()] = "APPLICATION_X_SV4CPIO";
    /**
     * "application/x-sv4crc"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_SV4CRC"] = MIME_TYPE_APPLICATION_X_SV4CRC()] = "APPLICATION_X_SV4CRC";
    /**
     * "application/x-tar"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_TAR"] = MIME_TYPE_APPLICATION_X_TAR()] = "APPLICATION_X_TAR";
    /**
     * "application/x-tcl"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_TCL"] = MIME_TYPE_APPLICATION_X_TCL()] = "APPLICATION_X_TCL";
    /**
     * "application/x-tex"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_TEX"] = MIME_TYPE_APPLICATION_X_TEX()] = "APPLICATION_X_TEX";
    /**
     * "application/x-texinfo"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_TEXINFO"] = MIME_TYPE_APPLICATION_X_TEXINFO()] = "APPLICATION_X_TEXINFO";
    /**
     * "application/x-troff"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_TROFF"] = MIME_TYPE_APPLICATION_X_TROFF()] = "APPLICATION_X_TROFF";
    /**
     * "application/x-ustar"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_X_USTAR"] = MIME_TYPE_APPLICATION_X_USTAR()] = "APPLICATION_X_USTAR";
    /**
     * "application/zip"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["APPLICATION_ZIP"] = MIME_TYPE_APPLICATION_ZIP()] = "APPLICATION_ZIP";
    /**
     * "audio/basic"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["AUDIO_BASIC"] = MIME_TYPE_AUDIO_BASIC()] = "AUDIO_BASIC";
    /**
     * "audio/mid"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["AUDIO_MID"] = MIME_TYPE_AUDIO_MID()] = "AUDIO_MID";
    /**
     * "audio/mpeg"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["AUDIO_MPEG"] = MIME_TYPE_AUDIO_MPEG()] = "AUDIO_MPEG";
    /**
     * "audio/x-aiff"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["AUDIO_X_AIFF"] = MIME_TYPE_AUDIO_X_AIFF()] = "AUDIO_X_AIFF";
    /**
     * "audio/x-mpegurl"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["AUDIO_X_MPEGURL"] = MIME_TYPE_AUDIO_X_MPEGURL()] = "AUDIO_X_MPEGURL";
    /**
     * "audio/x-wav"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["AUDIO_X_WAV"] = MIME_TYPE_AUDIO_X_WAV()] = "AUDIO_X_WAV";
    /**
     * "image/bmp"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_BMP"] = MIME_TYPE_IMAGE_BMP()] = "IMAGE_BMP";
    /**
     * "image/cis-cod"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_CIS_COD"] = MIME_TYPE_IMAGE_CIS_COD()] = "IMAGE_CIS_COD";
    /**
     * "image/gif"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_GIF"] = MIME_TYPE_IMAGE_GIF()] = "IMAGE_GIF";
    /**
     * "image/ief"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_IEF"] = MIME_TYPE_IMAGE_IEF()] = "IMAGE_IEF";
    /**
     * "image/jpeg"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_JPEG"] = MIME_TYPE_IMAGE_JPEG()] = "IMAGE_JPEG";
    /**
     * "image/pipeg"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_PIPEG"] = MIME_TYPE_IMAGE_PIPEG()] = "IMAGE_PIPEG";
    /**
     * "image/svg+xml"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_SVG_XML"] = MIME_TYPE_IMAGE_SVG_XML()] = "IMAGE_SVG_XML";
    /**
     * "image/tiff"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_TIFF"] = MIME_TYPE_IMAGE_TIFF()] = "IMAGE_TIFF";
    /**
     * "image/x-cmx"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_X_CMX"] = MIME_TYPE_IMAGE_X_CMX()] = "IMAGE_X_CMX";
    /**
     * "image/x-icon"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_X_ICON"] = MIME_TYPE_IMAGE_X_ICON()] = "IMAGE_X_ICON";
    /**
     * "image/x-rgb"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_X_RGB"] = MIME_TYPE_IMAGE_X_RGB()] = "IMAGE_X_RGB";
    /**
     * "image/x-xbitmap"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_X_XBITMAP"] = MIME_TYPE_IMAGE_X_XBITMAP()] = "IMAGE_X_XBITMAP";
    /**
     * "image/x-xpixmap"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_X_XPIXMAP"] = MIME_TYPE_IMAGE_X_XPIXMAP()] = "IMAGE_X_XPIXMAP";
    /**
     * "image/x-xwindowdump"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["IMAGE_X_XWINDOWDUMP"] = MIME_TYPE_IMAGE_X_XWINDOWDUMP()] = "IMAGE_X_XWINDOWDUMP";
    /**
     * "message/rfc822"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["MESSAGE_RFC822"] = MIME_TYPE_MESSAGE_RFC822()] = "MESSAGE_RFC822";
    /**
     * "text/css"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["TEXT_CSS"] = MIME_TYPE_TEXT_CSS()] = "TEXT_CSS";
    /**
     * "text/h323"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["TEXT_H323"] = MIME_TYPE_TEXT_H323()] = "TEXT_H323";
    /**
     * "text/html"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["TEXT_HTML"] = MIME_TYPE_TEXT_HTML()] = "TEXT_HTML";
    /**
     * "text/iuls"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["TEXT_IULS"] = MIME_TYPE_TEXT_IULS()] = "TEXT_IULS";
    /**
     * "text/plain"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["TEXT_PLAIN"] = MIME_TYPE_TEXT_PLAIN()] = "TEXT_PLAIN";
    /**
     * "text/richtext"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["TEXT_RICHTEXT"] = MIME_TYPE_TEXT_RICHTEXT()] = "TEXT_RICHTEXT";
    /**
     * "text/scriptlet"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["TEXT_SCRIPTLET"] = MIME_TYPE_TEXT_SCRIPTLET()] = "TEXT_SCRIPTLET";
    /**
     * "text/webviewhtml"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["TEXT_WEBVIEWHTML"] = MIME_TYPE_TEXT_WEBVIEWHTML()] = "TEXT_WEBVIEWHTML";
    /**
     * "text/x-component"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["TEXT_X_COMPONENT"] = MIME_TYPE_TEXT_X_COMPONENT()] = "TEXT_X_COMPONENT";
    /**
     * "text/x-setext"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["TEXT_X_SETEXT"] = MIME_TYPE_TEXT_X_SETEXT()] = "TEXT_X_SETEXT";
    /**
     * "text/x-vcard"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["TEXT_X_VCARD"] = MIME_TYPE_TEXT_X_VCARD()] = "TEXT_X_VCARD";
    /**
     * "video/mpeg"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["VIDEO_MPEG"] = MIME_TYPE_VIDEO_MPEG()] = "VIDEO_MPEG";
    /**
     * "video/quicktime"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["VIDEO_QUICKTIME"] = MIME_TYPE_VIDEO_QUICKTIME()] = "VIDEO_QUICKTIME";
    /**
     * "video/x-msvideo"。
     *
     */
    TMIME_TYPE[TMIME_TYPE["VIDEO_X_MSVIDEO"] = MIME_TYPE_VIDEO_X_MSVIDEO()] = "VIDEO_X_MSVIDEO";
})(TMIME_TYPE || (TMIME_TYPE = {}));
;
/**
 * idle_manager_t管理器。
 *
 */
var TIdleManager = /** @class */ (function () {
    function TIdleManager(nativeObj) {
        this.nativeObj = nativeObj;
    }
    return TIdleManager;
}());
;
/**
 * 指示器默认绘制的类型。
 *
 */
var TIndicatorDefaultPaint;
(function (TIndicatorDefaultPaint) {
    /**
     * 自动选择。
     *
     */
    TIndicatorDefaultPaint[TIndicatorDefaultPaint["AUTO"] = INDICATOR_DEFAULT_PAINT_AUTO()] = "AUTO";
    /**
     * 实心圆点指示器，当前项填充selected_fg_color，其他填充fg_color。
     *
     */
    TIndicatorDefaultPaint[TIndicatorDefaultPaint["FILL_DOT"] = INDICATOR_DEFAULT_PAINT_FILL_DOT()] = "FILL_DOT";
    /**
     * 镂空圆点指示器，当前项填充selected_fg_color，其他镂空fg_color。
     *
     */
    TIndicatorDefaultPaint[TIndicatorDefaultPaint["STROKE_DOT"] = INDICATOR_DEFAULT_PAINT_STROKE_DOT()] = "STROKE_DOT";
    /**
     * 实心矩形指示器，当前项填充selected_fg_color，其他填充fg_color。
     *
     */
    TIndicatorDefaultPaint[TIndicatorDefaultPaint["FILL_RECT"] = INDICATOR_DEFAULT_PAINT_FILL_RECT()] = "FILL_RECT";
    /**
     * 镂空矩形指示器，当前项填充selected_fg_color，其他镂空fg_color。
     *
     */
    TIndicatorDefaultPaint[TIndicatorDefaultPaint["STROKE_RECT"] = INDICATOR_DEFAULT_PAINT_STROKE_RECT()] = "STROKE_RECT";
})(TIndicatorDefaultPaint || (TIndicatorDefaultPaint = {}));
;
/**
 * 剪切板数据类型定义。
 *
 */
var TClipBoardDataType;
(function (TClipBoardDataType) {
    /**
     * 无数据。
     *
     */
    TClipBoardDataType[TClipBoardDataType["NONE"] = CLIP_BOARD_DATA_TYPE_NONE()] = "NONE";
    /**
     * UTF8文本。
     *
     */
    TClipBoardDataType[TClipBoardDataType["TEXT"] = CLIP_BOARD_DATA_TYPE_TEXT()] = "TEXT";
})(TClipBoardDataType || (TClipBoardDataType = {}));
;
/**
 * 剪切板接口。
 *
 */
var TClipBoard = /** @class */ (function () {
    function TClipBoard(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 设置文本(UTF8)数据到剪切板。
     *
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TClipBoard.setText = function (text) {
        return clip_board_set_text(text);
    };
    /**
     * 从剪切板中获取文本(UTF8)数据。
     *
     *
     * @returns 返回文本数据。
     */
    TClipBoard.getText = function () {
        return clip_board_get_text();
    };
    return TClipBoard;
}());
;
/**
 * 缓动作动画常量定义。
 *
 */
var TEasingType;
(function (TEasingType) {
    /**
     * EASING_LINEAR。
     *
     */
    TEasingType[TEasingType["LINEAR"] = EASING_LINEAR()] = "LINEAR";
    /**
     * EASING_QUADRATIC_IN
     *
     */
    TEasingType[TEasingType["QUADRATIC_IN"] = EASING_QUADRATIC_IN()] = "QUADRATIC_IN";
    /**
     * EASING_QUADRATIC_OUT
     *
     */
    TEasingType[TEasingType["QUADRATIC_OUT"] = EASING_QUADRATIC_OUT()] = "QUADRATIC_OUT";
    /**
     * EASING_QUADRATIC_INOUT
     *
     */
    TEasingType[TEasingType["QUADRATIC_INOUT"] = EASING_QUADRATIC_INOUT()] = "QUADRATIC_INOUT";
    /**
     * EASING_CUBIC_IN
     *
     */
    TEasingType[TEasingType["CUBIC_IN"] = EASING_CUBIC_IN()] = "CUBIC_IN";
    /**
     * EASING_CUBIC_OUT
     *
     */
    TEasingType[TEasingType["CUBIC_OUT"] = EASING_CUBIC_OUT()] = "CUBIC_OUT";
    /**
     * EASING_SIN_IN
     *
     */
    TEasingType[TEasingType["SIN_IN"] = EASING_SIN_IN()] = "SIN_IN";
    /**
     * EASING_SIN_OUT
     *
     */
    TEasingType[TEasingType["SIN_OUT"] = EASING_SIN_OUT()] = "SIN_OUT";
    /**
     * EASING_SIN_OUT
     *
     */
    TEasingType[TEasingType["SIN_INOUT"] = EASING_SIN_INOUT()] = "SIN_INOUT";
    /**
     * EASING_POW_IN
     *
     */
    TEasingType[TEasingType["POW_IN"] = EASING_POW_IN()] = "POW_IN";
    /**
     * EASING_POW_OUT
     *
     */
    TEasingType[TEasingType["POW_OUT"] = EASING_POW_OUT()] = "POW_OUT";
    /**
     * EASING_POW_INOUT
     *
     */
    TEasingType[TEasingType["POW_INOUT"] = EASING_POW_INOUT()] = "POW_INOUT";
    /**
     * EASING_CIRCULAR_IN
     *
     */
    TEasingType[TEasingType["CIRCULAR_IN"] = EASING_CIRCULAR_IN()] = "CIRCULAR_IN";
    /**
     * EASING_CIRCULAR_OUT
     *
     */
    TEasingType[TEasingType["CIRCULAR_OUT"] = EASING_CIRCULAR_OUT()] = "CIRCULAR_OUT";
    /**
     * EASING_CIRCULAR_INOUT
     *
     */
    TEasingType[TEasingType["CIRCULAR_INOUT"] = EASING_CIRCULAR_INOUT()] = "CIRCULAR_INOUT";
    /**
     * EASING_ELASTIC_IN
     *
     */
    TEasingType[TEasingType["ELASTIC_IN"] = EASING_ELASTIC_IN()] = "ELASTIC_IN";
    /**
     * EASING_ELASTIC_OUT
     *
     */
    TEasingType[TEasingType["ELASTIC_OUT"] = EASING_ELASTIC_OUT()] = "ELASTIC_OUT";
    /**
     * EASING_ELASTIC_INOUT
     *
     */
    TEasingType[TEasingType["ELASTIC_INOUT"] = EASING_ELASTIC_INOUT()] = "ELASTIC_INOUT";
    /**
     * EASING_BACK_IN
     *
     */
    TEasingType[TEasingType["BACK_IN"] = EASING_BACK_IN()] = "BACK_IN";
    /**
     * EASING_BACK_OUT
     *
     */
    TEasingType[TEasingType["BACK_OUT"] = EASING_BACK_OUT()] = "BACK_OUT";
    /**
     * EASING_BACK_INOUT
     *
     */
    TEasingType[TEasingType["BACK_INOUT"] = EASING_BACK_INOUT()] = "BACK_INOUT";
    /**
     * EASING_BOUNCE_IN
     *
     */
    TEasingType[TEasingType["BOUNCE_IN"] = EASING_BOUNCE_IN()] = "BOUNCE_IN";
    /**
     * EASING_BOUNCE_OUT
     *
     */
    TEasingType[TEasingType["BOUNCE_OUT"] = EASING_BOUNCE_OUT()] = "BOUNCE_OUT";
    /**
     * EASING_BOUNCE_INOUT
     *
     */
    TEasingType[TEasingType["BOUNCE_INOUT"] = EASING_BOUNCE_INOUT()] = "BOUNCE_INOUT";
})(TEasingType || (TEasingType = {}));
;
/**
 * 日期时间。
 *
 *> 在嵌入式平台中，在系统初始时，需要调用date\_time\_global\_init设置实际获取/设置系统时间的函数。
 *
 */
var TDateTime = /** @class */ (function () {
    function TDateTime(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。
     *
     *
     * @returns 返回date_time对象。
     */
    TDateTime.create = function () {
        return new TDateTime(date_time_create());
    };
    /**
     * 设置当前时间。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDateTime.prototype.set = function () {
        return date_time_set(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 销毁date_time对象(一般供脚本语言中使用)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDateTime.prototype.destroy = function () {
        return date_time_destroy(this != null ? (this.nativeObj || this) : null);
    };
    Object.defineProperty(TDateTime.prototype, "second", {
        /**
         * 秒(0 - 59)。
         *
         */
        get: function () {
            return date_time_t_get_prop_second(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDateTime.prototype, "minute", {
        /**
         * 分(0 - 59)。
         *
         */
        get: function () {
            return date_time_t_get_prop_minute(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDateTime.prototype, "hour", {
        /**
         * 时(0 - 23)。
         *
         */
        get: function () {
            return date_time_t_get_prop_hour(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDateTime.prototype, "day", {
        /**
         * 日(1-31)。
         *
         */
        get: function () {
            return date_time_t_get_prop_day(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDateTime.prototype, "wday", {
        /**
         * 星期几(0-6, Sunday = 0)。
         *
         */
        get: function () {
            return date_time_t_get_prop_wday(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDateTime.prototype, "month", {
        /**
         * 月(1-12)。
         *
         */
        get: function () {
            return date_time_t_get_prop_month(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDateTime.prototype, "year", {
        /**
         * 年。
         *
         */
        get: function () {
            return date_time_t_get_prop_year(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TDateTime;
}());
;
/**
 * 颜色。
 *
 */
var TColor = /** @class */ (function () {
    function TColor(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 创建color对象。
     *
     *> 主要供脚本语言使用。
     *
     * @param r 红色通道。
     * @param b 蓝色通道。
     * @param g 绿色通道。
     * @param a alpha通道。
     *
     * @returns color对象。
     */
    TColor.create = function (r, b, g, a) {
        return new TColor(color_create(r, b, g, a));
    };
    /**
     * 创建color对象。
     *
     *> 主要供脚本语言使用。
     *
     * @param str css类似的颜色值。
     *
     * @returns color对象。
     */
    TColor.prototype.fromStr = function (str) {
        return new TColor(color_from_str(this != null ? (this.nativeObj || this) : null, str));
    };
    /**
     * 获取红色通道的值。
     *
     *> 主要供脚本语言使用。
     *
     *
     * @returns 返回红色通道的值。
     */
    TColor.prototype.r = function () {
        return color_r(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取绿色通道的值。
     *
     *> 主要供脚本语言使用。
     *
     *
     * @returns 返回绿色通道的值。
     */
    TColor.prototype.g = function () {
        return color_g(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取蓝色通道的值。
     *
     *> 主要供脚本语言使用。
     *
     *
     * @returns 返回蓝色通道的值。
     */
    TColor.prototype.b = function () {
        return color_b(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取alpha通道的值。
     *
     *> 主要供脚本语言使用。
     *
     *
     * @returns 返回alpha通道的值。
     */
    TColor.prototype.a = function () {
        return color_a(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 转换为color对象。
     *
     *> 供脚本语言使用。
     *
     * @param color color对象。
     *
     * @returns color对象。
     */
    TColor.cast = function (color) {
        return new TColor(color_cast(color != null ? (color.nativeObj || color) : null));
    };
    /**
     * 销毁color对象。
     *> 主要供脚本语言使用。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TColor.prototype.destroy = function () {
        return color_destroy(this != null ? (this.nativeObj || this) : null);
    };
    Object.defineProperty(TColor.prototype, "color", {
        /**
         * 颜色的数值。
         *
         */
        get: function () {
            return color_t_get_prop_color(this.nativeObj);
        },
        set: function (v) {
            color_t_set_prop_color(this.nativeObj, v);
        },
        enumerable: true,
        configurable: true
    });
    return TColor;
}());
;
/**
 * 单个资源的描述信息。
 *
 */
var TAssetInfo = /** @class */ (function () {
    function TAssetInfo(nativeObj) {
        this.nativeObj = nativeObj;
    }
    Object.defineProperty(TAssetInfo.prototype, "type", {
        /**
         * 类型。
         *
         */
        get: function () {
            return asset_info_t_get_prop_type(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TAssetInfo.prototype, "subtype", {
        /**
         * 子类型。
         *
         */
        get: function () {
            return asset_info_t_get_prop_subtype(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TAssetInfo.prototype, "isInRom", {
        /**
         * 资源是否在ROM中。
         *
         */
        get: function () {
            return asset_info_t_get_prop_is_in_rom(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TAssetInfo.prototype, "size", {
        /**
         * 大小。
         *
         */
        get: function () {
            return asset_info_t_get_prop_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TAssetInfo.prototype, "refcount", {
        /**
         * 引用计数。
         *is\_in\_rom == FALSE时才有效。
         *
         */
        get: function () {
            return asset_info_t_get_prop_refcount(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TAssetInfo.prototype, "name", {
        /**
         * 名称。
         *
         */
        get: function () {
            return asset_info_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TAssetInfo;
}());
;
/**
 * 资源类型常量定义。
 *
 */
var TAssetType;
(function (TAssetType) {
    /**
     * 无效资源。
     *
     */
    TAssetType[TAssetType["NONE"] = ASSET_TYPE_NONE()] = "NONE";
    /**
     * 字体资源。
     *
     */
    TAssetType[TAssetType["FONT"] = ASSET_TYPE_FONT()] = "FONT";
    /**
     * 图片资源。
     *
     */
    TAssetType[TAssetType["IMAGE"] = ASSET_TYPE_IMAGE()] = "IMAGE";
    /**
     * 主题资源。
     *
     */
    TAssetType[TAssetType["STYLE"] = ASSET_TYPE_STYLE()] = "STYLE";
    /**
     * UI数据资源。
     *
     */
    TAssetType[TAssetType["UI"] = ASSET_TYPE_UI()] = "UI";
    /**
     * XML数据资源。
     *
     */
    TAssetType[TAssetType["XML"] = ASSET_TYPE_XML()] = "XML";
    /**
     * 字符串数据资源。
     *
     */
    TAssetType[TAssetType["STRINGS"] = ASSET_TYPE_STRINGS()] = "STRINGS";
    /**
     * JS等脚本资源。
     *
     */
    TAssetType[TAssetType["SCRIPT"] = ASSET_TYPE_SCRIPT()] = "SCRIPT";
    /**
     * 其它数据资源。
     *
     */
    TAssetType[TAssetType["DATA"] = ASSET_TYPE_DATA()] = "DATA";
})(TAssetType || (TAssetType = {}));
;
/**
 * 资源管理器。
 *这里的资源管理器并非Windows下的文件浏览器，而是负责对各种资源，比如字体、主题、图片、界面数据、字符串和其它数据的进行集中管理的组件。引入资源管理器的目的有以下几个：
 *
 ** 让上层不需要了解存储的方式。
 *在没有文件系统时或者内存紧缺时，把资源转成常量数组直接编译到代码中。在有文件系统而且内存充足时，资源放在文件系统中。在有网络时，资源也可以存放在服务器上(暂未实现)。资源管理器为上层提供统一的接口，让上层而不用关心底层的存储方式。
 *
 ** 让上层不需要了解资源的具体格式。
 *比如一个名为earth的图片，没有文件系统或内存紧缺，图片直接用位图数据格式存在ROM中，而有文件系统时，则用PNG格式存放在文件系统中。资源管理器让上层不需要关心图片的格式，访问时指定图片的名称即可(不用指定扩展名)。
 *
 ** 让上层不需要了解屏幕的密度。
 *不同的屏幕密度下需要加载不同的图片，比如MacPro的Retina屏就需要用双倍解析度的图片，否则就出现界面模糊。AWTK以后会支持PC软件和手机软件的开发，所以资源管理器需要为此提供支持，让上层不需关心屏幕的密度。
 *
 ** 对资源进行内存缓存。
 *不同类型的资源使用方式是不一样的，比如字体和主题加载之后会一直使用，UI文件在生成界面之后就暂时不需要了，PNG文件解码之后就只需要保留解码的位图数据即可。资源管理器配合图片管理器等其它组件实现资源的自动缓存。
 *
 *当从文件系统加载资源时，目录结构要求如下：
 *
 *```
 *assets/{theme}/raw/
 *fonts   字体
 *images  图片
 *x1   普通密度屏幕的图片。
 *x2   2倍密度屏幕的图片。
 *x3   3倍密度屏幕的图片。
 *xx   密度无关的图片。
 *strings 需要翻译的字符串。
 *styles  主题数据。
 *ui      UI描述数据。
 *```
 *
 */
var TAssetsManager = /** @class */ (function () {
    function TAssetsManager(nativeObj) {
        this.nativeObj = nativeObj;
    }
    /**
     * 获取缺省资源管理器。
     *
     *
     * @returns 返回asset manager对象。
     */
    TAssetsManager.instance = function () {
        return new TAssetsManager(assets_manager());
    };
    /**
     * 在资源管理器的缓存中查找指定的资源并引用它，如果缓存中不存在，尝试加载该资源。
     *
     * @param type 资源的类型。
     * @param name 资源的名称。
     *
     * @returns 返回资源。
     */
    TAssetsManager.prototype.ref = function (type, name) {
        return new TAssetInfo(assets_manager_ref(this != null ? (this.nativeObj || this) : null, type, name));
    };
    /**
     * 释放指定的资源。
     *
     * @param info 资源。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TAssetsManager.prototype.unref = function (info) {
        return assets_manager_unref(this != null ? (this.nativeObj || this) : null, info != null ? (info.nativeObj || info) : null);
    };
    return TAssetsManager;
}());
;
/**
 * 画布控件。
 *
 *画布控件让开发者可以自己在控件上绘制需要的内容。
 *
 *canvas\_widget\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于canvas\_widget\_t控件。
 *
 *在xml中使用"canvas"标签创建画布控件。如：
 *
 *```xml
 *<canvas name="paint_vgcanvas" x="0" y="0" w="100%" h="100%" />
 *```
 *
 *> 更多用法请参考：
 *[canvas_widget.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/vgcanvas.xml)
 *
 *在c代码中使用函数canvas\_widget\_create创建画布控件。如：
 *
 *
 *> 创建之后，需要用widget\_on注册EVT\_PAINT事件，并在EVT\_PAINT事件处理函数中绘制。
 *
 *
 *绘制时，可以通过canvas接口去绘制，也可以通过vgcanvas接口去绘制。
 *先从evt获取canvas对象，再通过canvas\_get\_vgcanvas从canvas中获取vgcanvas对象。
 *
 *
 *> 完整示例请参考：
 *[canvas demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/canvas.c)
 *
 *参考：
 *
 ** [canvas接口描述](canvas_t.md)
 ** [vgcanvas接口描述](vgcanvas_t.md)
 *
 */
var TCanvasWidget = /** @class */ (function (_super) {
    __extends(TCanvasWidget, _super);
    function TCanvasWidget(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建canvas_widget对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TCanvasWidget.create = function (parent, x, y, w, h) {
        return new TCanvasWidget(canvas_widget_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为canvas_widget对象(供脚本语言使用)。
     *
     * @param widget canvas_widget对象。
     *
     * @returns canvas_widget对象。
     */
    TCanvasWidget.cast = function (widget) {
        return new TCanvasWidget(canvas_widget_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TCanvasWidget;
}(TWidget));
;
/**
 * 模拟时钟控件。
 *
 *time\_clock\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于time\_clock\_t控件。
 *
 *在xml中使用"time\_clock"标签创建模拟时钟控件。如：
 *
 *```xml
 *<time_clock x="c" y="m" w="300" h="300" bg_image="clock_bg" image="clock"
 *hour_image="clock_hour" minute_image="clock_minute" second_image="clock_second"/>
 *```
 *
 *> 更多用法请参考：[time\_clock.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/time_clock.xml)
 *
 *在c代码中使用函数time\_clock\_create创建模拟时钟控件。如：
 *
 *
 *> 完整示例请参考：[time_clock demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/time_clock.c)
 *
 *time\_clock一般不需要设置style。
 *
 */
var TTimeClock = /** @class */ (function (_super) {
    __extends(TTimeClock, _super);
    function TTimeClock(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建time_clock对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TTimeClock.create = function (parent, x, y, w, h) {
        return new TTimeClock(time_clock_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为time_clock对象(供脚本语言使用)。
     *
     * @param widget time_clock对象。
     *
     * @returns time_clock对象。
     */
    TTimeClock.cast = function (widget) {
        return new TTimeClock(time_clock_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置小时的值。
     *
     * @param hour 小时的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimeClock.prototype.setHour = function (hour) {
        return time_clock_set_hour(this != null ? (this.nativeObj || this) : null, hour);
    };
    /**
     * 设置分钟的值。
     *
     * @param minute 分钟的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimeClock.prototype.setMinute = function (minute) {
        return time_clock_set_minute(this != null ? (this.nativeObj || this) : null, minute);
    };
    /**
     * 设置秒的值。
     *
     * @param second 秒的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimeClock.prototype.setSecond = function (second) {
        return time_clock_set_second(this != null ? (this.nativeObj || this) : null, second);
    };
    /**
     * 设置小时的图片。
     *
     * @param hour 小时的图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimeClock.prototype.setHourImage = function (hour) {
        return time_clock_set_hour_image(this != null ? (this.nativeObj || this) : null, hour);
    };
    /**
     * 设置分钟的图片。
     *
     * @param minute_image 分钟的图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimeClock.prototype.setMinuteImage = function (minute_image) {
        return time_clock_set_minute_image(this != null ? (this.nativeObj || this) : null, minute_image);
    };
    /**
     * 设置秒的图片。
     *
     * @param second_image 秒的图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimeClock.prototype.setSecondImage = function (second_image) {
        return time_clock_set_second_image(this != null ? (this.nativeObj || this) : null, second_image);
    };
    /**
     * 设置背景图片。
     *
     * @param bg_image 背景图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimeClock.prototype.setBgImage = function (bg_image) {
        return time_clock_set_bg_image(this != null ? (this.nativeObj || this) : null, bg_image);
    };
    /**
     * 设置中心图片。
     *
     * @param image 图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimeClock.prototype.setImage = function (image) {
        return time_clock_set_image(this != null ? (this.nativeObj || this) : null, image);
    };
    /**
     * 设置小时指针的旋转锚点。
     *> 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
     *
     * @param anchor_x 指针的锚点坐标x。
     * @param anchor_y 指针的锚点坐标y。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimeClock.prototype.setHourAnchor = function (anchor_x, anchor_y) {
        return time_clock_set_hour_anchor(this != null ? (this.nativeObj || this) : null, anchor_x, anchor_y);
    };
    /**
     * 设置分钟指针的旋转锚点。
     *> 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
     *
     * @param anchor_x 指针的锚点坐标x。
     * @param anchor_y 指针的锚点坐标y。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimeClock.prototype.setMinuteAnchor = function (anchor_x, anchor_y) {
        return time_clock_set_minute_anchor(this != null ? (this.nativeObj || this) : null, anchor_x, anchor_y);
    };
    /**
     * 设置秒钟指针的旋转锚点。
     *> 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
     *
     * @param anchor_x 指针的锚点坐标x。
     * @param anchor_y 指针的锚点坐标y。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTimeClock.prototype.setSecondAnchor = function (anchor_x, anchor_y) {
        return time_clock_set_second_anchor(this != null ? (this.nativeObj || this) : null, anchor_x, anchor_y);
    };
    Object.defineProperty(TTimeClock.prototype, "hour", {
        /**
         * 小时。
         *
         */
        get: function () {
            return time_clock_t_get_prop_hour(this.nativeObj);
        },
        set: function (v) {
            this.setHour(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "minute", {
        /**
         * 分钟。
         *
         */
        get: function () {
            return time_clock_t_get_prop_minute(this.nativeObj);
        },
        set: function (v) {
            this.setMinute(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "second", {
        /**
         * 秒。
         *
         */
        get: function () {
            return time_clock_t_get_prop_second(this.nativeObj);
        },
        set: function (v) {
            this.setSecond(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "image", {
        /**
         * 中心图片。
         *
         */
        get: function () {
            return time_clock_t_get_prop_image(this.nativeObj);
        },
        set: function (v) {
            this.setImage(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "bgImage", {
        /**
         * 背景图片。
         *
         */
        get: function () {
            return time_clock_t_get_prop_bg_image(this.nativeObj);
        },
        set: function (v) {
            this.setBgImage(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "hourImage", {
        /**
         * 时针图片。
         *
         */
        get: function () {
            return time_clock_t_get_prop_hour_image(this.nativeObj);
        },
        set: function (v) {
            this.setHourImage(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "minuteImage", {
        /**
         * 分针图片。
         *
         */
        get: function () {
            return time_clock_t_get_prop_minute_image(this.nativeObj);
        },
        set: function (v) {
            this.setMinuteImage(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "secondImage", {
        /**
         * 秒针图片。
         *
         */
        get: function () {
            return time_clock_t_get_prop_second_image(this.nativeObj);
        },
        set: function (v) {
            this.setSecondImage(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "hourAnchorX", {
        /**
         * 时针图片旋转锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
         *
         */
        get: function () {
            return time_clock_t_get_prop_hour_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "hourAnchorY", {
        /**
         * 时针图片旋转锚点y坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
         *
         */
        get: function () {
            return time_clock_t_get_prop_hour_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "minuteAnchorX", {
        /**
         * 分针图片旋转锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
         *
         */
        get: function () {
            return time_clock_t_get_prop_minute_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "minuteAnchorY", {
        /**
         * 分针图片旋转锚点y坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
         *
         */
        get: function () {
            return time_clock_t_get_prop_minute_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "secondAnchorX", {
        /**
         * 秒针图片旋转锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
         *
         */
        get: function () {
            return time_clock_t_get_prop_second_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimeClock.prototype, "secondAnchorY", {
        /**
         * 秒针图片旋转锚点y坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
         *
         */
        get: function () {
            return time_clock_t_get_prop_second_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TTimeClock;
}(TWidget));
;
/**
 * 文本选择器控件，通常用于选择日期和时间等。
 *
 *> XXX: 目前需要先设置options和visible_nr，再设置其它参数(在XML中也需要按此顺序)。
 *
 *text\_selector\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于text\_selector\_t控件。
 *
 *在xml中使用"text\_selector"标签创建文本选择器控件。如：
 *
 *```xml
 *<text_selector options="red;green;blue;gold;orange" visible_nr="3" text="red"/>
 *```
 *
 *> 更多用法请参考：[text\_selector.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/text_selector.xml)
 *
 *在c代码中使用函数text\_selector\_create创建文本选择器控件。如：
 *
 *
 *> 完整示例请参考：[text\_selector demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/text_selector.c)
 *
 *可用通过style来设置控件的显示风格，如字体和背景颜色等。如：
 *
 *```xml
 *<style name="dark" fg_color="#a0a0a0"  text_color="black" text_align_h="center">
 *<normal     bg_color="#ffffff" mask_color="#404040" border_color="#404040"/>
 *</style>
 *```
 *
 *> 更多用法请参考：[theme default](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L443)
 *
 */
var TTextSelector = /** @class */ (function (_super) {
    __extends(TTextSelector, _super);
    function TTextSelector(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建text_selector对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TTextSelector.create = function (parent, x, y, w, h) {
        return new TTextSelector(text_selector_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换text_selector对象(供脚本语言使用)。
     *
     * @param widget text_selector对象。
     *
     * @returns text_selector对象。
     */
    TTextSelector.cast = function (widget) {
        return new TTextSelector(text_selector_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 重置所有选项。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTextSelector.prototype.resetOptions = function () {
        return text_selector_reset_options(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取选项个数。
     *
     *
     * @returns 返回选项个数。
     */
    TTextSelector.prototype.countOptions = function () {
        return text_selector_count_options(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 追加一个选项。
     *
     * @param value 值。
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTextSelector.prototype.appendOption = function (value, text) {
        return text_selector_append_option(this != null ? (this.nativeObj || this) : null, value, text);
    };
    /**
     * 设置选项。
     *
     * @param options 选项。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTextSelector.prototype.setOptions = function (options) {
        return text_selector_set_options(this != null ? (this.nativeObj || this) : null, options);
    };
    /**
     * 设置一系列的整数选项。
     *
     * @param start 起始值。
     * @param nr 个数。
     * @param step 步长。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTextSelector.prototype.setRangeOptions = function (start, nr, step) {
        return text_selector_set_range_options(this != null ? (this.nativeObj || this) : null, start, nr, step);
    };
    /**
     * 获取text_selector的值。
     *
     *
     * @returns 返回值。
     */
    TTextSelector.prototype.getValue = function () {
        return text_selector_get_value(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置text_selector的值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTextSelector.prototype.setValue = function (value) {
        return text_selector_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 获取text_selector的文本。
     *
     *
     * @returns 返回文本。
     */
    TTextSelector.prototype.getTextValue = function () {
        return text_selector_get_text(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置text_selector的文本。
     *
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTextSelector.prototype.setText = function (text) {
        return text_selector_set_text(this != null ? (this.nativeObj || this) : null, text);
    };
    /**
     * 设置第index个选项为当前选中的选项。
     *
     * @param index 选项的索引。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTextSelector.prototype.setSelectedIndex = function (index) {
        return text_selector_set_selected_index(this != null ? (this.nativeObj || this) : null, index);
    };
    /**
     * 设置可见的选项数。
     *
     * @param visible_nr 选项数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTextSelector.prototype.setVisibleNr = function (visible_nr) {
        return text_selector_set_visible_nr(this != null ? (this.nativeObj || this) : null, visible_nr);
    };
    Object.defineProperty(TTextSelector.prototype, "visibleNr", {
        /**
         * 可见的选项数量(只能是3或者5，缺省为5)。
         *
         */
        get: function () {
            return text_selector_t_get_prop_visible_nr(this.nativeObj);
        },
        set: function (v) {
            this.setVisibleNr(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTextSelector.prototype, "selectedIndex", {
        /**
         * 当前选中的选项。
         *
         */
        get: function () {
            return text_selector_t_get_prop_selected_index(this.nativeObj);
        },
        set: function (v) {
            this.setSelectedIndex(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTextSelector.prototype, "options", {
        /**
         * 设置可选项(冒号分隔值和文本，分号分隔选项，如:1:red;2:green;3:blue)。
         *对于数值选项，也可以指定一个范围，用『-』分隔起始值、结束值和格式。
         *如："1-7-%02d"表示1到7，格式为『02d』，格式为可选，缺省为『%d』。
         *
         */
        get: function () {
            return text_selector_t_get_prop_options(this.nativeObj);
        },
        set: function (v) {
            this.setOptions(v);
        },
        enumerable: true,
        configurable: true
    });
    return TTextSelector;
}(TWidget));
;
/**
 * 对象属性变化事件。
 *
 */
var TPropChangeEvent = /** @class */ (function (_super) {
    __extends(TPropChangeEvent, _super);
    function TPropChangeEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 把event对象转prop_change_event_t对象，主要给脚本语言使用。
     *
     * @param event event对象。
     *
     * @returns 返回event对象。
     */
    TPropChangeEvent.cast = function (event) {
        return new TPropChangeEvent(prop_change_event_cast(event != null ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TPropChangeEvent.prototype, "name", {
        /**
         * 属性的名称。
         *
         */
        get: function () {
            return prop_change_event_t_get_prop_name(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPropChangeEvent.prototype, "value", {
        /**
         * 属性的值。
         *
         */
        get: function () {
            return new TValue(prop_change_event_t_get_prop_value(this.nativeObj));
        },
        enumerable: true,
        configurable: true
    });
    return TPropChangeEvent;
}(TEvent));
;
/**
 * 进度变化事件。
 *
 */
var TProgressEvent = /** @class */ (function (_super) {
    __extends(TProgressEvent, _super);
    function TProgressEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 把event对象转progress_event_t对象，主要给脚本语言使用。
     *
     * @param event event对象。
     *
     * @returns 返回event对象。
     */
    TProgressEvent.cast = function (event) {
        return new TProgressEvent(progress_event_cast(event != null ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TProgressEvent.prototype, "percent", {
        /**
         * 进度百分比。
         *
         */
        get: function () {
            return progress_event_t_get_prop_percent(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TProgressEvent;
}(TEvent));
;
/**
 * 开关控件。
 *
 *switch\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于switch\_t控件。
 *
 *在xml中使用"switch"标签创建开关控件。如：
 *
 *```xml
 *<switch x="10" y="60" w="60" h="22" />
 *```
 *
 *> 更多用法请参考：[switch.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/switch.xml)
 *
 *在c代码中使用函数switch\_create创建开关控件。如：
 *
 *
 *> 完整示例请参考：[switch demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/switch.c)
 *
 *可用通过style来设置控件的显示风格，如背景图片等。如：
 *
 *```xml
 *<style name="default">
 *<normal  bg_image="switch" />
 *</style>
 *```
 *
 *> 更多用法请参考：[theme default](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L452)
 *
 */
var TSwitch = /** @class */ (function (_super) {
    __extends(TSwitch, _super);
    function TSwitch(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建switch对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TSwitch.create = function (parent, x, y, w, h) {
        return new TSwitch(switch_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置控件的值。
     *
     * @param value 值
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSwitch.prototype.setValue = function (value) {
        return switch_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 转换switch对象(供脚本语言使用)。
     *
     * @param widget switch对象。
     *
     * @returns switch对象。
     */
    TSwitch.cast = function (widget) {
        return new TSwitch(switch_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TSwitch.prototype, "value", {
        /**
         * 值。
         *
         */
        get: function () {
            return switch_t_get_prop_value(this.nativeObj);
        },
        set: function (v) {
            this.setValue(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSwitch.prototype, "maxXoffsetRatio", {
        /**
         * 当开关处于关闭时，图片偏移相对于图片宽度的比例(缺省为1/3)。
         *
         */
        get: function () {
            return switch_t_get_prop_max_xoffset_ratio(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TSwitch;
}(TWidget));
;
/**
 * 滑动视图。
 *
 *滑动视图可以管理多个页面，并通过滑动来切换当前页面。也可以管理多张图片，让它们自动切换。
 *
 *slide\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于slide\_view\_t控件。
 *
 *在xml中使用"slide\_view"标签创建滑动视图控件。如：
 *
 *```xml
 *<slide_view x="0" y="0" w="100%" h="100%" style="dot">
 *<view x="0" y="0" w="100%" h="100%" children_layout="default(w=60,h=60,m=5,s=10)">
 *...
 *</view>
 *<view x="0" y="0" w="100%" h="100%" children_layout="default(w=60,h=60,m=5,s=10)">
 *...
 *</view>
 *</slide_view>
 *```
 *
 *> 更多用法请参考：[slide_view.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/slide_view.xml)
 *
 *在c代码中使用函数slide\_view\_create创建滑动视图控件。如：
 *
 *
 *> 完整示例请参考：
 *[slide_view demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/slide_view.c)
 *
 *可用通过style来设置控件的显示风格，如背景颜色和指示器的图标等等。如：
 *
 *```xml
 *<style name="dot">
 *<normal  icon="dot" active_icon="active_dot"/>
 *</style>
 *```
 *
 *> 如果希望背景图片跟随滚动，请将背景图片设置到页面上，否则设置到slide\_view上。
 *
 *> 更多用法请参考：[theme default](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L458)
 *
 */
var TSlideView = /** @class */ (function (_super) {
    __extends(TSlideView, _super);
    function TSlideView(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建slide_view对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TSlideView.create = function (parent, x, y, w, h) {
        return new TSlideView(slide_view_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为slide_view对象(供脚本语言使用)。
     *
     * @param widget slide_view对象。
     *
     * @returns slide_view对象。
     */
    TSlideView.cast = function (widget) {
        return new TSlideView(slide_view_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置为自动播放模式。
     *
     * @param auto_play 0表示禁止自动播放，非0表示自动播放时每一页播放的时间。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideView.prototype.setAutoPlay = function (auto_play) {
        return slide_view_set_auto_play(this != null ? (this.nativeObj || this) : null, auto_play);
    };
    /**
     * 设置当前页的序号。
     *
     * @param index 当前页的序号。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideView.prototype.setActive = function (index) {
        return slide_view_set_active(this != null ? (this.nativeObj || this) : null, index);
    };
    /**
     * 设置为上下滑动(缺省为左右滑动)。
     *
     * @param vertical TRUE表示上下滑动，FALSE表示左右滑动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideView.prototype.setVertical = function (vertical) {
        return slide_view_set_vertical(this != null ? (this.nativeObj || this) : null, vertical);
    };
    /**
     * 设置页面切换动画。
     *
     *anim_hint取值如下：
     *
     ** "translate"：平移。
     ** "overlap"：覆盖。
     ** "overlap\_with\_alpha"：覆盖并改变透明度。
     *
     *> 使用"overlap"或"overlap\_with\_alpha"动画时，背景图片最好指定到page上。
     *>
     *> 使用"overlap\_with\_alpha"动画时，slideview的背景设置为黑色，
     *> 或slideview的背景设置为透明，窗口的背景设置为黑色，以获得更好的视觉效果和性能。
     *
     * @param anim_hint 页面切换动画。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideView.prototype.setAnimHint = function (anim_hint) {
        return slide_view_set_anim_hint(this != null ? (this.nativeObj || this) : null, anim_hint);
    };
    /**
     * 设置循环切换模式。
     *
     * @param loop 是否启用循环切换模式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideView.prototype.setLoop = function (loop) {
        return slide_view_set_loop(this != null ? (this.nativeObj || this) : null, loop);
    };
    Object.defineProperty(TSlideView.prototype, "vertical", {
        /**
         * 是否为上下滑动模式。
         *
         */
        get: function () {
            return slide_view_t_get_prop_vertical(this.nativeObj);
        },
        set: function (v) {
            this.setVertical(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideView.prototype, "autoPlay", {
        /**
         * 自动播放。0表示禁止自动播放，非0表示自动播放时每一页播放的时间。
         *
         */
        get: function () {
            return slide_view_t_get_prop_auto_play(this.nativeObj);
        },
        set: function (v) {
            this.setAutoPlay(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideView.prototype, "loop", {
        /**
         * 循环切换模式。
         *
         *向后切换：切换到最后一页时，再往后切换就到第一页。
         *向前切换：切换到第一页时，再往前切换就到最后一页。
         *
         */
        get: function () {
            return slide_view_t_get_prop_loop(this.nativeObj);
        },
        set: function (v) {
            this.setLoop(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideView.prototype, "animHint", {
        /**
         * 页面切换效果。
         *
         */
        get: function () {
            return slide_view_t_get_prop_anim_hint(this.nativeObj);
        },
        set: function (v) {
            this.setAnimHint(v);
        },
        enumerable: true,
        configurable: true
    });
    return TSlideView;
}(TWidget));
;
/**
 * slide_view的指示器控件。
 *
 *> 支持直线、弧线排布，默认有4种绘制样式，若设置了icon/active_icon，则优先使用icon/active_icon
 *
 *slide\_indicator\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于slide\_indicator\_t控件。
 *
 *在xml中使用"slide\_indicator"或"slide\_indicator\_arc"标签创建指示器控件。如：
 *
 *```xml
 *<slide_view name="view" x="0"  y="0" w="100%" h="100%">
 *...
 *</slide_view>
 *<slide_indicator name="indicator" x="right" y="0" w="6" h="100%"/>
 *```
 *
 *> 更多用法请参考：[slide\_view.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/slide_view.xml)
 *
 *在c代码中使用函数slide\_indicator\_create创建指示器控件。如：
 *
 *
 *```xml
 *<style name="default">
 *<normal fg_color="#FFFFFF80" selected_fg_color="#FFFFFF"/>
 *</style>
 *```
 *
 *> 更多用法请参考：[theme default](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L350)
 *
 */
var TSlideIndicator = /** @class */ (function (_super) {
    __extends(TSlideIndicator, _super);
    function TSlideIndicator(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建slide_indicator对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TSlideIndicator.create = function (parent, x, y, w, h) {
        return new TSlideIndicator(slide_indicator_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 创建slide_indicator对象（线性显示）
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TSlideIndicator.createLinear = function (parent, x, y, w, h) {
        return new TSlideIndicator(slide_indicator_create_linear(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 创建slide_indicator对象（圆弧显示）
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TSlideIndicator.createArc = function (parent, x, y, w, h) {
        return new TSlideIndicator(slide_indicator_create_arc(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为slide_indicator对象(供脚本语言使用)。
     *
     * @param widget slide_indicator对象。
     *
     * @returns slide_indicator对象。
     */
    TSlideIndicator.cast = function (widget) {
        return new TSlideIndicator(slide_indicator_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置当前页的序号。
     *
     * @param value 当前项的序号。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideIndicator.prototype.setValue = function (value) {
        return slide_indicator_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置指示器的数量。
     *
     * @param max 数量。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideIndicator.prototype.setMax = function (max) {
        return slide_indicator_set_max(this != null ? (this.nativeObj || this) : null, max);
    };
    /**
     * 设置指示器的默认绘制类型。
     *
     * @param default_paint 默认绘制类型。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideIndicator.prototype.setDefaultPaint = function (default_paint) {
        return slide_indicator_set_default_paint(this != null ? (this.nativeObj || this) : null, default_paint);
    };
    /**
     * 设置指示器是否自动隐藏。
     *
     * @param auto_hide 0表示禁止，非0表示无操作后延迟多久隐藏。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideIndicator.prototype.setAutoHide = function (auto_hide) {
        return slide_indicator_set_auto_hide(this != null ? (this.nativeObj || this) : null, auto_hide);
    };
    /**
     * 设置指示器的边距(默认为10像素)。
     *
     * @param margin 指示器的边距。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideIndicator.prototype.setMargin = function (margin) {
        return slide_indicator_set_margin(this != null ? (this.nativeObj || this) : null, margin);
    };
    /**
     * 设置指示器的间距(指示器有弧度时为角度值，否则为直线间距)。
     *
     * @param spacing 指示器的间距。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideIndicator.prototype.setSpacing = function (spacing) {
        return slide_indicator_set_spacing(this != null ? (this.nativeObj || this) : null, spacing);
    };
    /**
     * 设置指示器的大小(默认为8)。
     *
     * @param size 指示器的大小。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideIndicator.prototype.setSize = function (size) {
        return slide_indicator_set_size(this != null ? (this.nativeObj || this) : null, size);
    };
    /**
     * 设置旋转锚点。
     *
     * @param anchor_x 锚点坐标x。(后面加上px为像素点，不加px为相对百分比坐标)
     * @param anchor_y 锚点坐标y。(后面加上px为像素点，不加px为相对百分比坐标)
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideIndicator.prototype.setAnchor = function (anchor_x, anchor_y) {
        return slide_indicator_set_anchor(this != null ? (this.nativeObj || this) : null, anchor_x, anchor_y);
    };
    /**
     * 设置指示器指示的目标。
     *
     * @param indicated_target 指示器指示的目标
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideIndicator.prototype.setIndicatedTarget = function (indicated_target) {
        return slide_indicator_set_indicated_target(this != null ? (this.nativeObj || this) : null, indicated_target);
    };
    Object.defineProperty(TSlideIndicator.prototype, "value", {
        /**
         * 值(缺省为0)。
         *
         */
        get: function () {
            return slide_indicator_t_get_prop_value(this.nativeObj);
        },
        set: function (v) {
            this.setValue(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "max", {
        /**
         * 最大值(缺省为100)。
         *
         */
        get: function () {
            return slide_indicator_t_get_prop_max(this.nativeObj);
        },
        set: function (v) {
            this.setMax(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "defaultPaint", {
        /**
         * 指示器的类型。
         *
         */
        get: function () {
            return slide_indicator_t_get_prop_default_paint(this.nativeObj);
        },
        set: function (v) {
            this.setDefaultPaint(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "autoHide", {
        /**
         * 自动隐藏。0表示禁止，非0表示无操作后延迟多久隐藏。
         *
         */
        get: function () {
            return slide_indicator_t_get_prop_auto_hide(this.nativeObj);
        },
        set: function (v) {
            this.setAutoHide(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "margin", {
        /**
         * 指示器与边缘的边距。
         *
         */
        get: function () {
            return slide_indicator_t_get_prop_margin(this.nativeObj);
        },
        set: function (v) {
            this.setMargin(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "spacing", {
        /**
         * 指示器的中心之间的间距（圆弧显示时，间距的单位为弧度，否则为像素）。
         *
         */
        get: function () {
            return slide_indicator_t_get_prop_spacing(this.nativeObj);
        },
        set: function (v) {
            this.setSpacing(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "size", {
        /**
         * 指示器的大小。
         *
         */
        get: function () {
            return slide_indicator_t_get_prop_size(this.nativeObj);
        },
        set: function (v) {
            this.setSize(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "anchorX", {
        /**
         * 锚点x坐标。
         *
         */
        get: function () {
            return slide_indicator_t_get_prop_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "anchorY", {
        /**
         * 锚点y坐标。
         *
         */
        get: function () {
            return slide_indicator_t_get_prop_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideIndicator.prototype, "indicatedTarget", {
        /**
         * 指示器指示的目标。
         *
         */
        get: function () {
            return slide_indicator_t_get_prop_indicated_target(this.nativeObj);
        },
        set: function (v) {
            this.setIndicatedTarget(v);
        },
        enumerable: true,
        configurable: true
    });
    return TSlideIndicator;
}(TWidget));
;
/**
 * 左右滑动菜单控件。
 *
 *一般用一组按钮作为子控件，通过左右滑动改变当前的项。除了当菜单使用外，也可以用来切换页面。
 *
 *slide\_menu\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于slide\_menu\_t控件。
 *
 *在xml中使用"slide\_menu"标签创建左右滑动菜单控件。如：
 *
 *```xml
 *<slide_menu style="mask" align_v="top">
 *<button style="slide_button" text="0"/>
 *<button style="slide_button" text="1"/>
 *<button style="slide_button" text="2"/>
 *<button style="slide_button" text="3"/>
 *<button style="slide_button" text="4"/>
 *</slide_menu>
 *```
 *
 *> 更多用法请参考：[slide_menu.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/slide_menu.xml)
 *
 *在c代码中使用函数slide\_menu\_create创建左右滑动菜单控件。如：
 *
 *
 *可按下面的方法关注当前项改变的事件：
 *
 *
 *可按下面的方法关注当前按钮被点击的事件：
 *
 *
 *> 完整示例请参考：[slide_menu demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/slide_menu.c)
 *
 *可用通过style来设置控件的显示风格，如背景颜色和蒙版颜色等等。如：
 *
 *```xml
 *<style name="mask">
 *<normal     bg_color="#f0f0f0" mask_color="#f0f0f0"/>
 *</style>
 *```
 *
 *> 更多用法请参考：[theme default](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L493)
 *
 */
var TSlideMenu = /** @class */ (function (_super) {
    __extends(TSlideMenu, _super);
    function TSlideMenu(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建slide_menu对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TSlideMenu.create = function (parent, x, y, w, h) {
        return new TSlideMenu(slide_menu_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换slide_menu对象(供脚本语言使用)。
     *
     * @param widget slide_menu对象。
     *
     * @returns slide_menu对象。
     */
    TSlideMenu.cast = function (widget) {
        return new TSlideMenu(slide_menu_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置当前项。
     *
     * @param value 当前项的索引。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideMenu.prototype.setValue = function (value) {
        return slide_menu_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置垂直对齐方式。
     *
     * @param align_v 对齐方式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideMenu.prototype.setAlignV = function (align_v) {
        return slide_menu_set_align_v(this != null ? (this.nativeObj || this) : null, align_v);
    };
    /**
     * 设置最小缩放比例。
     *
     * @param min_scale 最小缩放比例，范围[0.5-1]。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlideMenu.prototype.setMinScale = function (min_scale) {
        return slide_menu_set_min_scale(this != null ? (this.nativeObj || this) : null, min_scale);
    };
    Object.defineProperty(TSlideMenu.prototype, "value", {
        /**
         * 值。代表当前选中项的索引。
         *
         */
        get: function () {
            return slide_menu_t_get_prop_value(this.nativeObj);
        },
        set: function (v) {
            this.setValue(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideMenu.prototype, "alignV", {
        /**
         * 垂直对齐方式。
         *
         */
        get: function () {
            return slide_menu_t_get_prop_align_v(this.nativeObj);
        },
        set: function (v) {
            this.setAlignV(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlideMenu.prototype, "minScale", {
        /**
         * 最小缩放比例。
         *
         */
        get: function () {
            return slide_menu_t_get_prop_min_scale(this.nativeObj);
        },
        set: function (v) {
            this.setMinScale(v);
        },
        enumerable: true,
        configurable: true
    });
    return TSlideMenu;
}(TWidget));
;
/**
 * 滚动视图。
 *
 *scroll\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于scroll\_view\_t控件。
 *
 *在xml中使用"scroll\_view"标签创建滚动视图控件。如：
 *
 *```xml
 *<list_view x="0"  y="30" w="100%" h="-80" item_height="60">
 *<scroll_view name="view" x="0"  y="0" w="100%" h="100%">
 *<list_item style="odd" children_layout="default(rows=1,cols=0)">
 *<image draw_type="icon" w="30" image="earth"/>
 *<label w="-30" text="1.Hello AWTK !">
 *<switch x="r:10" y="m" w="60" h="20"/>
 *</label>
 *</list_item>
 *...
 *</scroll_view>
 *</list_view>
 *```
 *
 *> 滚动视图一般作为列表视图的子控件使用。
 *
 *> 更多用法请参考：[list\_view\_m.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/list_view_m.xml)
 *
 *在c代码中使用函数scroll\_view\_create创建列表视图控件。如：
 *
 *
 *可用通过style来设置控件的显示风格，如背景颜色和边框颜色等(一般情况不需要)。
 *
 */
var TScrollView = /** @class */ (function (_super) {
    __extends(TScrollView, _super);
    function TScrollView(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建scroll_view对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TScrollView.create = function (parent, x, y, w, h) {
        return new TScrollView(scroll_view_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为scroll_view对象(供脚本语言使用)。
     *
     * @param widget scroll_view对象。
     *
     * @returns scroll_view对象。
     */
    TScrollView.cast = function (widget) {
        return new TScrollView(scroll_view_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置虚拟宽度。
     *
     * @param w 虚拟宽度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollView.prototype.setVirtualW = function (w) {
        return scroll_view_set_virtual_w(this != null ? (this.nativeObj || this) : null, w);
    };
    /**
     * 设置虚拟高度。
     *
     * @param h 虚拟高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollView.prototype.setVirtualH = function (h) {
        return scroll_view_set_virtual_h(this != null ? (this.nativeObj || this) : null, h);
    };
    /**
     * 设置是否允许x方向滑动。
     *
     * @param xslidable 是否允许滑动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollView.prototype.setXslidable = function (xslidable) {
        return scroll_view_set_xslidable(this != null ? (this.nativeObj || this) : null, xslidable);
    };
    /**
     * 设置是否允许y方向滑动。
     *
     * @param yslidable 是否允许滑动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollView.prototype.setYslidable = function (yslidable) {
        return scroll_view_set_yslidable(this != null ? (this.nativeObj || this) : null, yslidable);
    };
    /**
     * 设置偏移量。
     *
     * @param xoffset x偏移量。
     * @param yoffset y偏移量。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollView.prototype.setOffset = function (xoffset, yoffset) {
        return scroll_view_set_offset(this != null ? (this.nativeObj || this) : null, xoffset, yoffset);
    };
    /**
     * 设置偏移速度比例。
     *
     * @param xspeed_scale x偏移速度比例。。
     * @param yspeed_scale y偏移速度比例。。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollView.prototype.setSpeedScale = function (xspeed_scale, yspeed_scale) {
        return scroll_view_set_speed_scale(this != null ? (this.nativeObj || this) : null, xspeed_scale, yspeed_scale);
    };
    /**
     * 滚动到指定的偏移量。
     *
     * @param xoffset_end x偏移量。
     * @param yoffset_end y偏移量。
     * @param duration 时间。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollView.prototype.scrollTo = function (xoffset_end, yoffset_end, duration) {
        return scroll_view_scroll_to(this != null ? (this.nativeObj || this) : null, xoffset_end, yoffset_end, duration);
    };
    /**
     * 滚动到指定的偏移量。
     *
     * @param xoffset_delta x偏移量。
     * @param yoffset_delta y偏移量。
     * @param duration 时间。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollView.prototype.scrollDeltaTo = function (xoffset_delta, yoffset_delta, duration) {
        return scroll_view_scroll_delta_to(this != null ? (this.nativeObj || this) : null, xoffset_delta, yoffset_delta, duration);
    };
    Object.defineProperty(TScrollView.prototype, "virtualW", {
        /**
         * 虚拟宽度。
         *
         */
        get: function () {
            return scroll_view_t_get_prop_virtual_w(this.nativeObj);
        },
        set: function (v) {
            this.setVirtualW(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollView.prototype, "virtualH", {
        /**
         * 虚拟高度。
         *
         */
        get: function () {
            return scroll_view_t_get_prop_virtual_h(this.nativeObj);
        },
        set: function (v) {
            this.setVirtualH(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollView.prototype, "xoffset", {
        /**
         * x偏移量。
         *
         */
        get: function () {
            return scroll_view_t_get_prop_xoffset(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollView.prototype, "yoffset", {
        /**
         * y偏移量。
         *
         */
        get: function () {
            return scroll_view_t_get_prop_yoffset(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollView.prototype, "xspeedScale", {
        /**
         * x偏移速度比例。
         *
         */
        get: function () {
            return scroll_view_t_get_prop_xspeed_scale(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollView.prototype, "yspeedScale", {
        /**
         * y偏移速度比例。
         *
         */
        get: function () {
            return scroll_view_t_get_prop_yspeed_scale(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollView.prototype, "xslidable", {
        /**
         * 是否允许x方向滑动。
         *
         */
        get: function () {
            return scroll_view_t_get_prop_xslidable(this.nativeObj);
        },
        set: function (v) {
            this.setXslidable(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollView.prototype, "yslidable", {
        /**
         * 是否允许y方向滑动。
         *
         */
        get: function () {
            return scroll_view_t_get_prop_yslidable(this.nativeObj);
        },
        set: function (v) {
            this.setYslidable(v);
        },
        enumerable: true,
        configurable: true
    });
    return TScrollView;
}(TWidget));
;
/**
 * 滚动条控件。
 *
 *> 目前只支持垂直滚动。
 *
 *scroll\_bar\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于scroll\_bar\_t控件。
 *
 *在xml中使用"scroll\_bar"或"scroll\_bar\_d"或"scroll\_bar\_m"标签创建滚动条控件。如：
 *
 *```xml
 *<list_view x="0"  y="30" w="100%" h="-80" item_height="60">
 *<scroll_view name="view" x="0"  y="0" w="100%" h="100%">
 *...
 *</scroll_view>
 *<scroll_bar_m name="bar" x="right" y="0" w="6" h="100%" value="0"/>
 *</list_view>
 *```
 *
 *> 更多用法请参考：[list\_view\_m.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/list_view_m.xml)
 *
 *在c代码中使用函数scroll\_bar\_create创建列表项控件。如：
 *
 *
 *```xml
 *<style name="default">
 *<normal bg_color="#c0c0c0" fg_color="#808080"/>
 *<over bg_color="#c0c0c0" fg_color="#808080"/>
 *<pressed bg_color="#c0c0c0" fg_color="#808080"/>
 *</style>
 *```
 *
 *> 更多用法请参考：[theme default](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L350)
 *
 */
var TScrollBar = /** @class */ (function (_super) {
    __extends(TScrollBar, _super);
    function TScrollBar(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建scroll_bar对象
     *
     *> 根据宏WITH_DESKTOP_STYLE决定创建desktop风格还是mobile风格的滚动条
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TScrollBar.create = function (parent, x, y, w, h) {
        return new TScrollBar(scroll_bar_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为scroll_bar对象(供脚本语言使用)。
     *
     * @param widget scroll_bar对象。
     *
     * @returns scroll_bar对象。
     */
    TScrollBar.cast = function (widget) {
        return new TScrollBar(scroll_bar_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 创建mobile风格的scroll_bar对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TScrollBar.createMobile = function (parent, x, y, w, h) {
        return new TScrollBar(scroll_bar_create_mobile(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 创建desktop风格的scroll_bar对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TScrollBar.createDesktop = function (parent, x, y, w, h) {
        return new TScrollBar(scroll_bar_create_desktop(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置参数。
     *
     * @param virtual_size 虚拟高度。
     * @param row 每一行的高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollBar.prototype.setParams = function (virtual_size, row) {
        return scroll_bar_set_params(this != null ? (this.nativeObj || this) : null, virtual_size, row);
    };
    /**
     * 滚动到指定的值。
     *
     * @param value 值。
     * @param duration 动画持续时间。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollBar.prototype.scrollTo = function (value, duration) {
        return scroll_bar_scroll_to(this != null ? (this.nativeObj || this) : null, value, duration);
    };
    /**
     * 设置值，并触发EVT_VALUE_CHANGED事件。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollBar.prototype.setValue = function (value) {
        return scroll_bar_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 在当前的值上增加一个值，并触发EVT_VALUE_CHANGED事件。
     *
     * @param delta 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollBar.prototype.addDelta = function (delta) {
        return scroll_bar_add_delta(this != null ? (this.nativeObj || this) : null, delta);
    };
    /**
     * 在当前的值上增加一个值，并滚动到新的值，并触发EVT_VALUE_CHANGED事件。
     *
     * @param delta 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollBar.prototype.scrollDelta = function (delta) {
        return scroll_bar_scroll_delta(this != null ? (this.nativeObj || this) : null, delta);
    };
    /**
     * 设置值，但不触发EVT_VALUE_CHANGED事件。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TScrollBar.prototype.setValueOnly = function (value) {
        return scroll_bar_set_value_only(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 判断是否是mobile风格的滚动条。
     *
     *
     * @returns 返回TRUE表示是mobile风格的，否则表示不是mobile风格的。
     */
    TScrollBar.prototype.isMobile = function () {
        return scroll_bar_is_mobile(this != null ? (this.nativeObj || this) : null);
    };
    Object.defineProperty(TScrollBar.prototype, "virtualSize", {
        /**
         * 虚拟宽度或高度。
         *
         */
        get: function () {
            return scroll_bar_t_get_prop_virtual_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollBar.prototype, "value", {
        /**
         * 当前的值。
         *
         */
        get: function () {
            return scroll_bar_t_get_prop_value(this.nativeObj);
        },
        set: function (v) {
            this.setValue(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollBar.prototype, "row", {
        /**
         * 行的高度。
         *
         */
        get: function () {
            return scroll_bar_t_get_prop_row(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TScrollBar.prototype, "animatable", {
        /**
         * 滚动时是否启用动画。
         *
         */
        get: function () {
            return scroll_bar_t_get_prop_animatable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TScrollBar;
}(TWidget));
;
/**
 * 列表视图控件。
 *
 *列表视图控件是一个可以垂直滚动的列表控件。
 *
 *如果不需要滚动，可以用view控件配置适当的layout参数作为列表控件。
 *
 *列表视图中的列表项可以固定高度，也可以使用不同高度。请参考[变高列表项](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/list_view_vh.xml)
 *
 *列表视图控件的中可以有滚动条，也可以没有滚动条。
 *可以使用移动设备风格的滚动条，也可以使用桌面风格的滚动条。
 *
 *list\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于list\_view\_t控件。
 *
 *在xml中使用"list\_view"标签创建列表视图控件。如：
 *
 *```xml
 *<list_view x="0"  y="30" w="100%" h="-80" item_height="60">
 *<scroll_view name="view" x="0"  y="0" w="100%" h="100%">
 *<list_item style="odd" children_layout="default(rows=1,cols=0)">
 *<image draw_type="icon" w="30" image="earth"/>
 *<label w="-30" text="1.Hello AWTK !">
 *<switch x="r:10" y="m" w="60" h="20"/>
 *</label>
 *</list_item>
 *...
 *</scroll_view>
 *</list_view>
 *```
 *
 *> 注意：列表项不是作为列表视图控件的直接子控件，而是作为滚动视图的子控件。
 *
 *
 *> 更多用法请参考：[list\_view\_m.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/list_view_m.xml)
 *
 *在c代码中使用函数list\_view\_create创建列表视图控件。如：
 *
 *
 *用代码构造列表视图是比较繁琐的事情，最好用XML来构造。
 *如果需要动态修改，可以使用widget\_clone来增加列表项，使用widget\_remove\_child来移出列表项。
 *
 *可用通过style来设置控件的显示风格，如背景颜色和边框颜色等(一般情况不需要)。
 *
 */
var TListView = /** @class */ (function (_super) {
    __extends(TListView, _super);
    function TListView(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建list_view对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TListView.create = function (parent, x, y, w, h) {
        return new TListView(list_view_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置列表项的高度。
     *
     * @param item_height 列表项的高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TListView.prototype.setItemHeight = function (item_height) {
        return list_view_set_item_height(this != null ? (this.nativeObj || this) : null, item_height);
    };
    /**
     * 设置列表项的缺省高度。
     *
     * @param default_item_height 列表项的高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TListView.prototype.setDefaultItemHeight = function (default_item_height) {
        return list_view_set_default_item_height(this != null ? (this.nativeObj || this) : null, default_item_height);
    };
    /**
     * 设置是否自动隐藏滚动条。
     *
     * @param auto_hide_scroll_bar 是否自动隐藏滚动条。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TListView.prototype.setAutoHideScrollBar = function (auto_hide_scroll_bar) {
        return list_view_set_auto_hide_scroll_bar(this != null ? (this.nativeObj || this) : null, auto_hide_scroll_bar);
    };
    /**
     * 转换为list_view对象(供脚本语言使用)。
     *
     * @param widget list_view对象。
     *
     * @returns list_view对象。
     */
    TListView.cast = function (widget) {
        return new TListView(list_view_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TListView.prototype, "itemHeight", {
        /**
         * 列表项的高度。如果 item_height 0，所有列表项使用固定高度，否则使用列表项自身的高度。
         *
         */
        get: function () {
            return list_view_t_get_prop_item_height(this.nativeObj);
        },
        set: function (v) {
            this.setItemHeight(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TListView.prototype, "defaultItemHeight", {
        /**
         * 列表项的缺省高度。如果item_height <= 0 而且列表项自身的高度 <= 0，则使用缺省高度。
         *
         */
        get: function () {
            return list_view_t_get_prop_default_item_height(this.nativeObj);
        },
        set: function (v) {
            this.setDefaultItemHeight(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TListView.prototype, "autoHideScrollBar", {
        /**
         * 如果不需要滚动条时，自动隐藏滚动条。
         *
         */
        get: function () {
            return list_view_t_get_prop_auto_hide_scroll_bar(this.nativeObj);
        },
        set: function (v) {
            this.setAutoHideScrollBar(v);
        },
        enumerable: true,
        configurable: true
    });
    return TListView;
}(TWidget));
;
/**
 * 水平列表视图控件。
 *
 *list\_view\_h\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于list\_view\_h\_t控件。
 *
 *在xml中使用"list\_view\_h"标签创建水平列表视图控件。如：
 *
 *```xml
 *<list_view_h x="center"  y="10" w="90%" h="100" item_width="200" spacing="5">
 *<scroll_view name="view" w="100%" h="100%">
 *<image style="border" draw_type="auto" image="1" text="1"/>
 *...
 *</scroll_view>
 *</list_view_h>
 *```
 *
 *> 注意：列表项不是作为列表视图控件的直接子控件，而是作为滚动视图的子控件。
 *
 *
 *> 更多用法请参考：[list\_view\_h.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/list_view_h.xml)
 *
 *在c代码中使用函数list\_view\_h\_create创建水平列表视图控件。如：
 *
 *
 *用代码构造列表视图是比较繁琐的事情，最好用XML来构造。
 *如果需要动态修改，可以使用widget\_clone来增加列表项，使用widget\_remove\_child来移出列表项。
 *
 *可用通过style来设置控件的显示风格，如背景颜色和边框颜色等(一般情况不需要)。
 *
 */
var TListViewH = /** @class */ (function (_super) {
    __extends(TListViewH, _super);
    function TListViewH(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建list_view_h对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TListViewH.create = function (parent, x, y, w, h) {
        return new TListViewH(list_view_h_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置列表项的宽度。
     *
     * @param item_width 列表项的宽度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TListViewH.prototype.setItemWidth = function (item_width) {
        return list_view_h_set_item_width(this != null ? (this.nativeObj || this) : null, item_width);
    };
    /**
     * 设置列表项的间距。
     *
     * @param spacing 列表项的间距。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TListViewH.prototype.setSpacing = function (spacing) {
        return list_view_h_set_spacing(this != null ? (this.nativeObj || this) : null, spacing);
    };
    /**
     * 转换为list_view_h对象(供脚本语言使用)。
     *
     * @param widget list_view_h对象。
     *
     * @returns list_view_h对象。
     */
    TListViewH.cast = function (widget) {
        return new TListViewH(list_view_h_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TListViewH.prototype, "itemWidth", {
        /**
         * 列表项的宽度。
         *
         */
        get: function () {
            return list_view_h_t_get_prop_item_width(this.nativeObj);
        },
        set: function (v) {
            this.setItemWidth(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TListViewH.prototype, "spacing", {
        /**
         * 间距。
         *
         */
        get: function () {
            return list_view_h_t_get_prop_spacing(this.nativeObj);
        },
        set: function (v) {
            this.setSpacing(v);
        },
        enumerable: true,
        configurable: true
    });
    return TListViewH;
}(TWidget));
;
/**
 * 列表项控件。
 *
 *列表项控件是一个简单的容器控件，一般作为列表视图中滚动视图的子控件。
 *
 *list\_item\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于list\_item\_t控件。
 *
 *在xml中使用"list\_item"标签创建列表项控件。如：
 *
 *```xml
 *<list_view x="0"  y="30" w="100%" h="-80" item_height="60">
 *<scroll_view name="view" x="0"  y="0" w="100%" h="100%">
 *<list_item style="odd" children_layout="default(rows=1,cols=0)">
 *<image draw_type="icon" w="30" image="earth"/>
 *<label w="-30" text="1.Hello AWTK !">
 *<switch x="r:10" y="m" w="60" h="20"/>
 *</label>
 *</list_item>
 *...
 *</scroll_view>
 *</list_view>
 *```
 *
 *> 更多用法请参考：[list\_view\_m.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/list_view_m.xml)
 *
 *在c代码中使用函数list\_item\_create创建列表项控件。如：
 *
 *
 *> 列表项控件大小一般由列表控制，不需指定xywh参数。
 *
 *可以用style来实现可点击或不可点击的效果。如：
 *
 *```xml
 *<style name="odd_clickable" border_color="#a0a0a0"  border="bottom" text_color="black">
 *<normal     bg_color="#f5f5f5" />
 *<pressed    bg_color="#c0c0c0" />
 *<over       bg_color="#f5f5f5" />
 *</style>
 *```
 *
 *> 更多用法请参考：[theme default](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L372)
 *
 */
var TListItem = /** @class */ (function (_super) {
    __extends(TListItem, _super);
    function TListItem(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建list_item对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TListItem.create = function (parent, x, y, w, h) {
        return new TListItem(list_item_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为list_item对象(供脚本语言使用)。
     *
     * @param widget list_item对象。
     *
     * @returns list_item对象。
     */
    TListItem.cast = function (widget) {
        return new TListItem(list_item_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TListItem;
}(TWidget));
;
/**
 * 可水平滚动的文本控件，方便实现长文本滚动。
 *
 *
 *hscroll\_label\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于hscroll\_label\_t控件。
 *
 *在xml中使用"hscroll\_label"标签创建行号控件，一般配合mledit使用。如：
 *
 *```xml
 *```
 *
 *> 更多用法请参考：[mledit.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/mledit.xml)
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<style name="default" text_color="black">
 *<normal   />
 *<focused  />
 *</style>
 *```
 *
 *> 更多用法请参考：
 *[theme default](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml)
 *
 */
var THscrollLabel = /** @class */ (function (_super) {
    __extends(THscrollLabel, _super);
    function THscrollLabel(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建hscroll_label对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    THscrollLabel.create = function (parent, x, y, w, h) {
        return new THscrollLabel(hscroll_label_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置lull。
     *
     * @param lull 间歇时间(ms)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    THscrollLabel.prototype.setLull = function (lull) {
        return hscroll_label_set_lull(this != null ? (this.nativeObj || this) : null, lull);
    };
    /**
     * 设置duration。
     *
     * @param duration 滚动时间(ms)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    THscrollLabel.prototype.setDuration = function (duration) {
        return hscroll_label_set_duration(this != null ? (this.nativeObj || this) : null, duration);
    };
    /**
     * 设置only_focus。
     *
     * @param only_focus 是否只有处于focus时才滚动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    THscrollLabel.prototype.setOnlyFocus = function (only_focus) {
        return hscroll_label_set_only_focus(this != null ? (this.nativeObj || this) : null, only_focus);
    };
    /**
     * 设置only_parent_focus。
     *
     * @param only_parent_focus 是否只有处于focus时才滚动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    THscrollLabel.prototype.setOnlyParentFocus = function (only_parent_focus) {
        return hscroll_label_set_only_parent_focus(this != null ? (this.nativeObj || this) : null, only_parent_focus);
    };
    /**
     * 设置loop。
     *
     * @param loop 是否循环滚动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    THscrollLabel.prototype.setLoop = function (loop) {
        return hscroll_label_set_loop(this != null ? (this.nativeObj || this) : null, loop);
    };
    /**
     * 设置yoyo。
     *
     * @param yoyo 是否往返滚动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    THscrollLabel.prototype.setYoyo = function (yoyo) {
        return hscroll_label_set_yoyo(this != null ? (this.nativeObj || this) : null, yoyo);
    };
    /**
     * 设置ellipses。
     *
     * @param ellipses 是否在文本超长时在行尾显示"..."。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    THscrollLabel.prototype.setEllipses = function (ellipses) {
        return hscroll_label_set_ellipses(this != null ? (this.nativeObj || this) : null, ellipses);
    };
    /**
     * 设置x偏移(一般无需用户调用)。。
     *
     * @param xoffset x偏移。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    THscrollLabel.prototype.setXoffset = function (xoffset) {
        return hscroll_label_set_xoffset(this != null ? (this.nativeObj || this) : null, xoffset);
    };
    /**
     * 启动(一般无需用户调用)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    THscrollLabel.prototype.start = function () {
        return hscroll_label_start(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 停止(一般无需用户调用)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    THscrollLabel.prototype.stop = function () {
        return hscroll_label_stop(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 转换为hscroll_label对象(供脚本语言使用)。
     *
     * @param widget hscroll_label对象。
     *
     * @returns hscroll_label对象。
     */
    THscrollLabel.cast = function (widget) {
        return new THscrollLabel(hscroll_label_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(THscrollLabel.prototype, "onlyFocus", {
        /**
         * 只有处于focus时才滚动(缺省否)。
         *
         */
        get: function () {
            return hscroll_label_t_get_prop_only_focus(this.nativeObj);
        },
        set: function (v) {
            this.setOnlyFocus(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "onlyParentFocus", {
        /**
         * 只有父控件处于focus时才滚动(缺省否)。
         *
         */
        get: function () {
            return hscroll_label_t_get_prop_only_parent_focus(this.nativeObj);
        },
        set: function (v) {
            this.setOnlyParentFocus(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "loop", {
        /**
         * loop是否循环滚动(缺省FALSE)。
         *
         */
        get: function () {
            return hscroll_label_t_get_prop_loop(this.nativeObj);
        },
        set: function (v) {
            this.setLoop(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "yoyo", {
        /**
         * 是否往返滚动(缺省FALSE)。
         *
         */
        get: function () {
            return hscroll_label_t_get_prop_yoyo(this.nativeObj);
        },
        set: function (v) {
            this.setYoyo(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "ellipses", {
        /**
         * 文本显示不下时，在行尾显示省略号(缺省FALSE)。
         *
         */
        get: function () {
            return hscroll_label_t_get_prop_ellipses(this.nativeObj);
        },
        set: function (v) {
            this.setEllipses(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "lull", {
        /**
         * 滚动之间的间歇时间(ms)，缺省3000ms。
         *
         */
        get: function () {
            return hscroll_label_t_get_prop_lull(this.nativeObj);
        },
        set: function (v) {
            this.setLull(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "duration", {
        /**
         * 完整的滚动一次需要的时间(ms)，缺省5000ms。
         *
         */
        get: function () {
            return hscroll_label_t_get_prop_duration(this.nativeObj);
        },
        set: function (v) {
            this.setDuration(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "xoffset", {
        /**
         * 偏移量。
         *
         */
        get: function () {
            return hscroll_label_t_get_prop_xoffset(this.nativeObj);
        },
        set: function (v) {
            this.setXoffset(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(THscrollLabel.prototype, "textW", {
        /**
         * 文本的宽度。
         *
         */
        get: function () {
            return hscroll_label_t_get_prop_text_w(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return THscrollLabel;
}(TWidget));
;
/**
 * 图文混排控件，实现简单的图文混排。
 *
 *rich\_text\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于rich\_text\_t控件。
 *
 *在xml中使用"rich\_text"标签创建图文混排控件。如：
 *
 *```xml
 *<rich_text x="0" y="0" w="100%" h="60"
 *text="<image name=&quota;bricks&quota;/><font align_v=&quota;middle&quota;>hello awtk!</font>" />
 *```
 *>
 *
 *> 更多用法请参考：
 *[rich_text.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/rich_text.xml)
 *
 *在c代码中使用函数rich\_text\_create创建图文混排控件。如：
 *
 *
 *> 完整示例请参考：
 *[rich_text demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/rich_text.c)
 *
 *可用通过style来设置控件的显示风格，如背景颜色等等。而字体的大小和颜色则由文本内部的属性决定。
 *
 *目前支持image和font两个tag：
 *
 ** image 支持的属性有：
 ** name 图片的名称。
 ** w 图片的宽度。
 ** h 图片的高度。
 *
 ** font 支持的属性有：
 ** color 颜色。
 ** size 大小。
 ** align_v 垂直方向对齐的方式(top|middle|bottom)。
 ** bold 粗体(暂不支持)
 ** italic 斜体(暂不支持)
 ** underline 下划线(暂不支持)
 *
 */
var TRichText = /** @class */ (function (_super) {
    __extends(TRichText, _super);
    function TRichText(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建rich_text对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TRichText.create = function (parent, x, y, w, h) {
        return new TRichText(rich_text_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置文本。
     *
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TRichText.prototype.setText = function (text) {
        return rich_text_set_text(this != null ? (this.nativeObj || this) : null, text);
    };
    /**
     * 转换为rich_text对象(供脚本语言使用)。
     *
     * @param widget rich_text对象。
     *
     * @returns rich_text对象。
     */
    TRichText.cast = function (widget) {
        return new TRichText(rich_text_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TRichText.prototype, "lineGap", {
        /**
         * 行间距。
         *
         */
        get: function () {
            return rich_text_t_get_prop_line_gap(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TRichText.prototype, "margin", {
        /**
         * 边距。
         *
         */
        get: function () {
            return rich_text_t_get_prop_margin(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TRichText;
}(TWidget));
;
/**
 * 进度圆环控件。
 *
 *progress\_circle\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于progress\_circle\_t控件。
 *
 *在xml中使用"progress\_circle"标签创建进度圆环控件。如：
 *
 *```xml
 *<progress_circle max="360" show_text="true" start_angle="90" />
 *```
 *
 *> 更多用法请参考：
 *[progress_circle.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/progress_circle.xml)
 *
 *在c代码中使用函数progress\_circle\_create创建进度圆环控件。如：
 *
 *
 *> 完整示例请参考：
 *[progress_circle
 *demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/progress_circle.c)
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<style name="default">
 *<normal text_color="green" fg_color="black" />
 *</style>
 *```
 *
 *> 更多用法请参考：
 *[theme
 *default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L467)
 *
 */
var TProgressCircle = /** @class */ (function (_super) {
    __extends(TProgressCircle, _super);
    function TProgressCircle(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建progress_circle对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TProgressCircle.create = function (parent, x, y, w, h) {
        return new TProgressCircle(progress_circle_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为progress_circle对象(供脚本语言使用)。
     *
     * @param widget progress_circle对象。
     *
     * @returns progress_circle对象。
     */
    TProgressCircle.cast = function (widget) {
        return new TProgressCircle(progress_circle_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TProgressCircle.prototype.setValue = function (value) {
        return progress_circle_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置最大值。
     *
     * @param max 最大值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TProgressCircle.prototype.setMax = function (max) {
        return progress_circle_set_max(this != null ? (this.nativeObj || this) : null, max);
    };
    /**
     * 设置环线的厚度。
     *
     * @param line_width 环线的厚度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TProgressCircle.prototype.setLineWidth = function (line_width) {
        return progress_circle_set_line_width(this != null ? (this.nativeObj || this) : null, line_width);
    };
    /**
     * 设置起始角度。
     *
     * @param start_angle 起始角度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TProgressCircle.prototype.setStartAngle = function (start_angle) {
        return progress_circle_set_start_angle(this != null ? (this.nativeObj || this) : null, start_angle);
    };
    /**
     * 设置单位。
     *
     * @param unit 单位。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TProgressCircle.prototype.setUnit = function (unit) {
        return progress_circle_set_unit(this != null ? (this.nativeObj || this) : null, unit);
    };
    /**
     * 设置是否显示文本。
     *
     * @param show_text 是否显示文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TProgressCircle.prototype.setShowText = function (show_text) {
        return progress_circle_set_show_text(this != null ? (this.nativeObj || this) : null, show_text);
    };
    /**
     * 设置是否为逆时针方向。
     *
     * @param counter_clock_wise 是否为逆时针方向。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TProgressCircle.prototype.setCounterClockWise = function (counter_clock_wise) {
        return progress_circle_set_counter_clock_wise(this != null ? (this.nativeObj || this) : null, counter_clock_wise);
    };
    Object.defineProperty(TProgressCircle.prototype, "value", {
        /**
         * 值(缺省为0)。
         *
         */
        get: function () {
            return progress_circle_t_get_prop_value(this.nativeObj);
        },
        set: function (v) {
            this.setValue(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressCircle.prototype, "max", {
        /**
         * 最大值(缺省为100)。
         *
         */
        get: function () {
            return progress_circle_t_get_prop_max(this.nativeObj);
        },
        set: function (v) {
            this.setMax(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressCircle.prototype, "startAngle", {
        /**
         * 起始角度(单位为度，缺省-90)。
         *
         */
        get: function () {
            return progress_circle_t_get_prop_start_angle(this.nativeObj);
        },
        set: function (v) {
            this.setStartAngle(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressCircle.prototype, "lineWidth", {
        /**
         * 环线的厚度(缺省为8)。
         *
         */
        get: function () {
            return progress_circle_t_get_prop_line_width(this.nativeObj);
        },
        set: function (v) {
            this.setLineWidth(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressCircle.prototype, "unit", {
        /**
         * 单元(缺省无)。
         *
         */
        get: function () {
            return progress_circle_t_get_prop_unit(this.nativeObj);
        },
        set: function (v) {
            this.setUnit(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressCircle.prototype, "counterClockWise", {
        /**
         * 是否为逆时针方向(缺省为FALSE)。
         *
         */
        get: function () {
            return progress_circle_t_get_prop_counter_clock_wise(this.nativeObj);
        },
        set: function (v) {
            this.setCounterClockWise(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressCircle.prototype, "showText", {
        /**
         * 是否显示文本(缺省为TRUE)。
         *
         */
        get: function () {
            return progress_circle_t_get_prop_show_text(this.nativeObj);
        },
        set: function (v) {
            this.setShowText(v);
        },
        enumerable: true,
        configurable: true
    });
    return TProgressCircle;
}(TWidget));
;
/**
 * 多行编辑器控件。
 *
 *mledit\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于mledit\_t控件。
 *
 *在xml中使用"mledit"标签创建多行编辑器控件。如：
 *
 *```xml
 *<mledit x="c" y="m" w="300" h="300" />
 *```
 *
 *> 更多用法请参考：[mledit.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/mledit.xml)
 *
 *在c代码中使用函数mledit\_create创建多行编辑器控件。如：
 *
 *
 *> 完整示例请参考：[mledit demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/mledit.c)
 *
 *time\_clock一般不需要设置style。
 *
 */
var TMledit = /** @class */ (function (_super) {
    __extends(TMledit, _super);
    function TMledit(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建mledit对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TMledit.create = function (parent, x, y, w, h) {
        return new TMledit(mledit_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置编辑器是否为只读。
     *
     * @param readonly 只读。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TMledit.prototype.setReadonly = function (readonly) {
        return mledit_set_readonly(this != null ? (this.nativeObj || this) : null, readonly);
    };
    /**
     * 设置为焦点。
     *
     * @param focus 是否为焦点。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TMledit.prototype.setFocus = function (focus) {
        return mledit_set_focus(this != null ? (this.nativeObj || this) : null, focus);
    };
    /**
     * 设置编辑器是否自动折行。
     *
     * @param wrap_word 是否自动折行。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TMledit.prototype.setWrapWord = function (wrap_word) {
        return mledit_set_wrap_word(this != null ? (this.nativeObj || this) : null, wrap_word);
    };
    /**
     * 设置编辑器的最大行数。
     *
     * @param max_lines 最大行数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TMledit.prototype.setMaxLines = function (max_lines) {
        return mledit_set_max_lines(this != null ? (this.nativeObj || this) : null, max_lines);
    };
    /**
     * 设置编辑器的输入提示。
     *
     * @param tips 输入提示。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TMledit.prototype.setInputTips = function (tips) {
        return mledit_set_input_tips(this != null ? (this.nativeObj || this) : null, tips);
    };
    /**
     * 设置编辑器光标位置。
     *
     * @param cursor 光标位置。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TMledit.prototype.setCursor = function (cursor) {
        return mledit_set_cursor(this != null ? (this.nativeObj || this) : null, cursor);
    };
    /**
     * 设置编辑器滚动速度。
     *
     * @param scroll_line 滚动行数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TMledit.prototype.setScrollLine = function (scroll_line) {
        return mledit_set_scroll_line(this != null ? (this.nativeObj || this) : null, scroll_line);
    };
    /**
     * 转换为mledit对象(供脚本语言使用)。
     *
     * @param widget mledit对象。
     *
     * @returns mledit对象。
     */
    TMledit.cast = function (widget) {
        return new TMledit(mledit_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TMledit.prototype, "readonly", {
        /**
         * 编辑器是否为只读。
         *
         */
        get: function () {
            return mledit_t_get_prop_readonly(this.nativeObj);
        },
        set: function (v) {
            this.setReadonly(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TMledit.prototype, "tips", {
        /**
         * 输入提示。
         *
         */
        get: function () {
            return mledit_t_get_prop_tips(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TMledit.prototype, "wrapWord", {
        /**
         * 是否自动折行。
         *
         */
        get: function () {
            return mledit_t_get_prop_wrap_word(this.nativeObj);
        },
        set: function (v) {
            this.setWrapWord(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TMledit.prototype, "maxLines", {
        /**
         * 最大行数。
         *
         */
        get: function () {
            return mledit_t_get_prop_max_lines(this.nativeObj);
        },
        set: function (v) {
            this.setMaxLines(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TMledit.prototype, "scrollLine", {
        /**
         * 鼠标一次滚动行数。
         *
         */
        get: function () {
            return mledit_t_get_prop_scroll_line(this.nativeObj);
        },
        set: function (v) {
            this.setScrollLine(v);
        },
        enumerable: true,
        configurable: true
    });
    return TMledit;
}(TWidget));
;
/**
 * 行号。多行编辑器的行号。
 *
 *line\_number\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于line\_number\_t控件。
 *
 *在xml中使用"lin\e_number"标签创建行号控件，一般配合mledit使用。如：
 *
 *```xml
 *<mledit x="c" y="10" h="40%" w="90%" focus="true" left_margin="36" right_margin="16"
 *wrap_word="true">
 *<line_number x="0" y="0" w="32" h="100%" value="0"/>
 *<scroll_bar_d x="right" y="0" w="14" h="100%" value="0"/>
 *</mledit>
 *```
 *
 *> 更多用法请参考：[mledit.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/mledit.xml)
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<line_number>
 *<style name="default">
 *<normal text_color="black" bg_color="#d0d0d0" text_align_h="right"/>
 *</style>
 *</line_number>
 *```
 *
 *> 更多用法请参考：
 *[theme default](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L556)
 *
 */
var TLineNumber = /** @class */ (function (_super) {
    __extends(TLineNumber, _super);
    function TLineNumber(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建line_number对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TLineNumber.create = function (parent, x, y, w, h) {
        return new TLineNumber(line_number_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置顶部边距。
     *
     * @param top_margin 顶部边距。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TLineNumber.prototype.setTopMargin = function (top_margin) {
        return line_number_set_top_margin(this != null ? (this.nativeObj || this) : null, top_margin);
    };
    /**
     * 设置顶部边距。
     *
     * @param bottom_margin 顶部边距。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TLineNumber.prototype.setBottomMargin = function (bottom_margin) {
        return line_number_set_bottom_margin(this != null ? (this.nativeObj || this) : null, bottom_margin);
    };
    /**
     * 设置行高。
     *
     * @param line_height 行高。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TLineNumber.prototype.setLineHeight = function (line_height) {
        return line_number_set_line_height(this != null ? (this.nativeObj || this) : null, line_height);
    };
    /**
     * 设置y偏移。
     *
     * @param yoffset 行高。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TLineNumber.prototype.setYoffset = function (yoffset) {
        return line_number_set_yoffset(this != null ? (this.nativeObj || this) : null, yoffset);
    };
    /**
     * 转换为line_number对象(供脚本语言使用)。
     *
     * @param widget line_number对象。
     *
     * @returns line_number对象。
     */
    TLineNumber.cast = function (widget) {
        return new TLineNumber(line_number_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TLineNumber;
}(TWidget));
;
/**
 * 图片值控件。
 *
 *可以用图片来表示如电池电量、WIFI信号强度和其它各种数值的值。
 *
 *其原理如下：
 *
 ** 1.把value以format为格式转换成字符串。
 ** 2.把每个字符与image(图片文件名前缀)映射成一个图片名。
 ** 3.最后把这些图片显示出来。
 *
 *image\_value\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于image\_value\_t控件。
 *
 *在xml中使用"image\_value"标签创建图片值控件。如：
 *
 *```xml
 *<image_value  value="0" image="num_" />
 *```
 *
 *> 更多用法请参考：
 *[image\_value](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/image_value.xml)
 *
 *在c代码中使用函数image\_value\_create创建图片值控件。如：
 *
 *
 *> 完整示例请参考：
 *[image_value demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/image_value.c)
 *
 *可用通过style来设置控件的显示风格，如背景颜色和边框等等，不过一般情况并不需要。
 *
 */
var TImageValue = /** @class */ (function (_super) {
    __extends(TImageValue, _super);
    function TImageValue(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建image_value对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TImageValue.create = function (parent, x, y, w, h) {
        return new TImageValue(image_value_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置图片前缀。
     *
     * @param image 图片前缀。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageValue.prototype.setImage = function (image) {
        return image_value_set_image(this != null ? (this.nativeObj || this) : null, image);
    };
    /**
     * 设置格式。
     *
     * @param format 格式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageValue.prototype.setFormat = function (format) {
        return image_value_set_format(this != null ? (this.nativeObj || this) : null, format);
    };
    /**
     * 设置值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageValue.prototype.setValue = function (value) {
        return image_value_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 转换为image_value对象(供脚本语言使用)。
     *
     * @param widget image_value对象。
     *
     * @returns image_value对象。
     */
    TImageValue.cast = function (widget) {
        return new TImageValue(image_value_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TImageValue.prototype, "image", {
        /**
         * 图片名称的前缀。
         *
         */
        get: function () {
            return image_value_t_get_prop_image(this.nativeObj);
        },
        set: function (v) {
            this.setImage(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageValue.prototype, "format", {
        /**
         * 数值到字符串转换时的格式，缺省为"%d"。
         *
         */
        get: function () {
            return image_value_t_get_prop_format(this.nativeObj);
        },
        set: function (v) {
            this.setFormat(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageValue.prototype, "value", {
        /**
         * 值。
         *
         */
        get: function () {
            return image_value_t_get_prop_value(this.nativeObj);
        },
        set: function (v) {
            this.setValue(v);
        },
        enumerable: true,
        configurable: true
    });
    return TImageValue;
}(TWidget));
;
/**
 * 图片动画控件，指定一个图片前缀，依次显示指定序列的图片，从而形成动画效果。
 *
 *图片序列可以用sequence指定，也可以用start\_index和end\_index指定一个范围。
 *
 *image\_animation\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于image\_animation\_t控件。
 *
 *在xml中使用"image\_animation"标签创建图片动画控件。如：
 *
 *```xml
 *<image_animation image="ani" start_index="1" end_index="9" auto_play="true" interval="50"
 *delay="100"/>
 *```
 *
 *> 更多用法请参考：
 *[image_animation.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/image_animation.xml)
 *
 *在c代码中使用函数image\_animation\_create创建图片动画控件。如：
 *
 *
 *> 完整示例请参考：
 *[image_animation
 *demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/image_animation.c)
 *
 *可用通过style来设置控件的显示风格，如背景颜色和边框等等，不过一般情况并不需要。
 *
 */
var TImageAnimation = /** @class */ (function (_super) {
    __extends(TImageAnimation, _super);
    function TImageAnimation(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建image_animation对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TImageAnimation.create = function (parent, x, y, w, h) {
        return new TImageAnimation(image_animation_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置是否循环播放。
     *
     * @param loop 是否循环播放。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageAnimation.prototype.setLoop = function (loop) {
        return image_animation_set_loop(this != null ? (this.nativeObj || this) : null, loop);
    };
    /**
     * 设置图片前缀。
     *
     * @param image 图片前缀。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageAnimation.prototype.setImage = function (image) {
        return image_animation_set_image(this != null ? (this.nativeObj || this) : null, image);
    };
    /**
     * 设置播放间隔时间。
     *
     * @param interval 间隔时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageAnimation.prototype.setInterval = function (interval) {
        return image_animation_set_interval(this != null ? (this.nativeObj || this) : null, interval);
    };
    /**
     * 设置延迟播放时间(仅适用于自动播放)。
     *
     * @param delay 延迟播放时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageAnimation.prototype.setDelay = function (delay) {
        return image_animation_set_delay(this != null ? (this.nativeObj || this) : null, delay);
    };
    /**
     * 设置是否自动播放。
     *
     * @param auto_play 是否自动播放。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageAnimation.prototype.setAutoPlay = function (auto_play) {
        return image_animation_set_auto_play(this != null ? (this.nativeObj || this) : null, auto_play);
    };
    /**
     * 设置播放序列。比如image为"fire"，sequence为"12223", 将依次播放"fire1", "fire2", "fire2", "fire2",
     *"fire3"。
     *
     * @param sequence 播放序列。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageAnimation.prototype.setSequence = function (sequence) {
        return image_animation_set_sequence(this != null ? (this.nativeObj || this) : null, sequence);
    };
    /**
     * 设置播放序列。比如image为"fire"，start_index为0, end_index为99, 将依次播放"fire0", ...,
     *"fire99"。
     *
     *若指定的图片不存在，则重复上一张图片。
     *
     * @param start_index 图片起始序数。
     * @param end_index 图片结束序数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageAnimation.prototype.setRangeSequence = function (start_index, end_index) {
        return image_animation_set_range_sequence(this != null ? (this.nativeObj || this) : null, start_index, end_index);
    };
    /**
     * 播放。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageAnimation.prototype.play = function () {
        return image_animation_play(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 停止(并重置index为-1)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageAnimation.prototype.stop = function () {
        return image_animation_stop(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 暂停。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageAnimation.prototype.pause = function () {
        return image_animation_pause(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 手动切换到下一张图片。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageAnimation.prototype.next = function () {
        return image_animation_next(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置生成图片名的格式。
     *
     *XXX:生成图片名时，第一个参数是图片名前缀，第二个是序数，只能在此前提下设置格式。
     *
     *```
     *const char* format = image_animation->format ? image_animation->format : "%s%d";
     *tk_snprintf(name, TK_NAME_LEN, format, image_animation->image, image_animation->index);
     *```
     *
     * @param format 格式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageAnimation.prototype.setFormat = function (format) {
        return image_animation_set_format(this != null ? (this.nativeObj || this) : null, format);
    };
    /**
     * 设置绘制完成后unload图片，以释放内存空间。
     *
     * @param unload_after_paint 是否绘制完成后unload图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageAnimation.prototype.setUnloadAfterPaint = function (unload_after_paint) {
        return image_animation_set_unload_after_paint(this != null ? (this.nativeObj || this) : null, unload_after_paint);
    };
    /**
     * 转换为image_animation对象(供脚本语言使用)。
     *
     * @param widget image_animation对象。
     *
     * @returns image_animation对象。
     */
    TImageAnimation.cast = function (widget) {
        return new TImageAnimation(image_animation_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TImageAnimation.prototype, "image", {
        /**
         * 图片名称的前缀。
         *
         */
        get: function () {
            return image_animation_t_get_prop_image(this.nativeObj);
        },
        set: function (v) {
            this.setImage(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "sequence", {
        /**
         * 播放的序列，字符可选值为数字和英文大小写字母，字符可以重复。如：0123456789或者123123abcd。
         *
         */
        get: function () {
            return image_animation_t_get_prop_sequence(this.nativeObj);
        },
        set: function (v) {
            this.setSequence(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "startIndex", {
        /**
         * 图片起始序数。
         *
         */
        get: function () {
            return image_animation_t_get_prop_start_index(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "endIndex", {
        /**
         * 图片结束序数。
         *
         */
        get: function () {
            return image_animation_t_get_prop_end_index(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "loop", {
        /**
         * 是否循环播放。
         *
         */
        get: function () {
            return image_animation_t_get_prop_loop(this.nativeObj);
        },
        set: function (v) {
            this.setLoop(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "autoPlay", {
        /**
         * 是否自动播放。
         *
         */
        get: function () {
            return image_animation_t_get_prop_auto_play(this.nativeObj);
        },
        set: function (v) {
            this.setAutoPlay(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "unloadAfterPaint", {
        /**
         * 绘制完成后unload图片，以释放内存空间。
         *
         */
        get: function () {
            return image_animation_t_get_prop_unload_after_paint(this.nativeObj);
        },
        set: function (v) {
            this.setUnloadAfterPaint(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "format", {
        /**
         * 索引到图片名转换时的格式，缺省为"%s%d"。
         *
         */
        get: function () {
            return image_animation_t_get_prop_format(this.nativeObj);
        },
        set: function (v) {
            this.setFormat(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "interval", {
        /**
         * 每张图片播放的时间(毫秒)。
         *
         */
        get: function () {
            return image_animation_t_get_prop_interval(this.nativeObj);
        },
        set: function (v) {
            this.setInterval(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageAnimation.prototype, "delay", {
        /**
         * 自动播放时延迟播放的时间(毫秒)。
         *
         */
        get: function () {
            return image_animation_t_get_prop_delay(this.nativeObj);
        },
        set: function (v) {
            this.setDelay(v);
        },
        enumerable: true,
        configurable: true
    });
    return TImageAnimation;
}(TWidget));
;
/**
 * 表盘控件。
 *
 *表盘控件就是一张图片。
 *
 *guage\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于guage\_t控件。
 *
 *在xml中使用"guage"标签创建表盘控件。如：
 *
 *```xml
 *<guage x="c" y="10" w="240" h="240" image="guage_bg"
 *```
 *
 *> 更多用法请参考：
 *[guage.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/guage.xml)
 *
 *在c代码中使用函数guage\_create创建表盘控件。如：
 *
 *
 *可用通过style来设置控件的显示风格，如背景和边框等。如：
 *
 *```xml
 *<guage>
 *<style name="border">
 *<normal border_color="#000000" bg_color="#e0e0e0" text_color="black"/>
 *</style>
 *</guage>
 *```
 *
 *> 更多用法请参考：
 *[theme
 *default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml)
 *
 */
var TGuage = /** @class */ (function (_super) {
    __extends(TGuage, _super);
    function TGuage(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建guage对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TGuage.create = function (parent, x, y, w, h) {
        return new TGuage(guage_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为guage对象(供脚本语言使用)。
     *
     * @param widget guage对象。
     *
     * @returns guage对象。
     */
    TGuage.cast = function (widget) {
        return new TGuage(guage_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置背景图片的名称。
     *
     * @param name 图片名称，该图片必须存在于资源管理器。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TGuage.prototype.setImage = function (name) {
        return guage_set_image(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 设置图片的显示方式。
     *
     *> 绘制方式的属性值和枚举值:
     *[image\_draw\_type\_name\_value](https://github.com/zlgopen/awtk/blob/master/src/base/enums.c#L98)
     *
     * @param draw_type 显示方式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TGuage.prototype.setDrawType = function (draw_type) {
        return guage_set_draw_type(this != null ? (this.nativeObj || this) : null, draw_type);
    };
    Object.defineProperty(TGuage.prototype, "image", {
        /**
         * 背景图片。
         *
         */
        get: function () {
            return guage_t_get_prop_image(this.nativeObj);
        },
        set: function (v) {
            this.setImage(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TGuage.prototype, "drawType", {
        /**
         * 图片的绘制方式。
         *
         */
        get: function () {
            return guage_t_get_prop_draw_type(this.nativeObj);
        },
        set: function (v) {
            this.setDrawType(v);
        },
        enumerable: true,
        configurable: true
    });
    return TGuage;
}(TWidget));
;
/**
 * 仪表指针控件。
 *
 *仪表指针就是一张旋转的图片，图片可以是普通图片也可以是SVG图片。
 *
 *在嵌入式平台上，对于旋转的图片，SVG图片的效率比位图高数倍，所以推荐使用SVG图片。
 *
 *guage\_pointer\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于guage\_pointer\_t控件。
 *
 *在xml中使用"guage\_pointer"标签创建仪表指针控件。如：
 *
 *```xml
 *<guage_pointer x="c" y="50" w="24" h="140" value="-128" image="guage_pointer" />
 *```
 *
 *> 更多用法请参考：
 *[guage.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/guage.xml)
 *
 *在c代码中使用函数guage\_pointer\_create创建仪表指针控件。如：
 *
 *
 *> 创建之后，需要用guage\_pointer\_set\_image设置仪表指针图片。
 *
 */
var TGuagePointer = /** @class */ (function (_super) {
    __extends(TGuagePointer, _super);
    function TGuagePointer(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建guage_pointer对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TGuagePointer.create = function (parent, x, y, w, h) {
        return new TGuagePointer(guage_pointer_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为guage_pointer对象(供脚本语言使用)。
     *
     * @param widget guage_pointer对象。
     *
     * @returns guage_pointer对象。
     */
    TGuagePointer.cast = function (widget) {
        return new TGuagePointer(guage_pointer_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置指针角度。12点钟方向为0度，顺时钟方向为正，单位为度。
     *
     * @param angle 指针角度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TGuagePointer.prototype.setAngle = function (angle) {
        return guage_pointer_set_angle(this != null ? (this.nativeObj || this) : null, angle);
    };
    /**
     * 设置指针的图片。
     *
     * @param image 指针的图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TGuagePointer.prototype.setImage = function (image) {
        return guage_pointer_set_image(this != null ? (this.nativeObj || this) : null, image);
    };
    /**
     * 设置指针的旋转锚点。
     *
     * @param anchor_x 指针的锚点坐标x。(后面加上px为像素点，不加px为相对百分比坐标)
     * @param anchor_y 指针的锚点坐标y。(后面加上px为像素点，不加px为相对百分比坐标)
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TGuagePointer.prototype.setAnchor = function (anchor_x, anchor_y) {
        return guage_pointer_set_anchor(this != null ? (this.nativeObj || this) : null, anchor_x, anchor_y);
    };
    Object.defineProperty(TGuagePointer.prototype, "angle", {
        /**
         * 指针角度。12点钟方向为0度，顺时钟方向为正，单位为度。
         *
         */
        get: function () {
            return guage_pointer_t_get_prop_angle(this.nativeObj);
        },
        set: function (v) {
            this.setAngle(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TGuagePointer.prototype, "image", {
        /**
         * 指针图片。
         *
         *图片须垂直向上，图片的中心点为旋转方向。
         *
         */
        get: function () {
            return guage_pointer_t_get_prop_image(this.nativeObj);
        },
        set: function (v) {
            this.setImage(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TGuagePointer.prototype, "anchorX", {
        /**
         * 旋转锚点x坐标。
         *
         */
        get: function () {
            return guage_pointer_t_get_prop_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TGuagePointer.prototype, "anchorY", {
        /**
         * 旋转锚点y坐标。
         *
         */
        get: function () {
            return guage_pointer_t_get_prop_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TGuagePointer;
}(TWidget));
;
/**
 * 将draggable放入目标控件，即可让目标控件或当前窗口可以被拖动。
 *
 *draggable\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于draggable\_t控件。
 *
 *在xml中使用"draggable"标签创建draggable控件。如：
 *
 *```xml
 *<button text="Drag Me" w="80" h="40" x="10" y="10">
 *<draggable />
 *</button>
 *```
 *
 *拖动对话框标题时移动对话框：
 *
 *```xml
 *<dialog_title x="0" y="0" w="100%" h="30" text="Hello AWTK"
 *<draggable drag_window="true"/>
 *</dialog_title>
 *```
 *
 *> 更多用法请参考：
 *[draggable.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/draggable.xml)
 *
 *在c代码中使用函数draggable\_create创建按钮控件。如：
 *
 *
 *> draggable本身不可见，故无需style。
 *
 */
var TDraggable = /** @class */ (function (_super) {
    __extends(TDraggable, _super);
    function TDraggable(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建draggable对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TDraggable.create = function (parent, x, y, w, h) {
        return new TDraggable(draggable_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为draggable对象(供脚本语言使用)。
     *
     * @param widget draggable对象。
     *
     * @returns draggable对象。
     */
    TDraggable.cast = function (widget) {
        return new TDraggable(draggable_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置top。
     *
     * @param top 拖动范围的顶部限制。缺省为父控件的顶部。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDraggable.prototype.setTop = function (top) {
        return draggable_set_top(this != null ? (this.nativeObj || this) : null, top);
    };
    /**
     * 设置bottom。
     *
     * @param bottom 拖动范围的底部限制。缺省为父控件的底部。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDraggable.prototype.setBottom = function (bottom) {
        return draggable_set_bottom(this != null ? (this.nativeObj || this) : null, bottom);
    };
    /**
     * 设置left。
     *
     * @param left 拖动范围的左边限制。缺省为父控件的左边。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDraggable.prototype.setLeft = function (left) {
        return draggable_set_left(this != null ? (this.nativeObj || this) : null, left);
    };
    /**
     * 设置right。
     *
     * @param right 拖动范围的右边限制。缺省为父控件的右边边。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDraggable.prototype.setRight = function (right) {
        return draggable_set_right(this != null ? (this.nativeObj || this) : null, right);
    };
    /**
     * 设置vertical_only。
     *
     * @param vertical_only 只允许垂直拖动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDraggable.prototype.setVerticalOnly = function (vertical_only) {
        return draggable_set_vertical_only(this != null ? (this.nativeObj || this) : null, vertical_only);
    };
    /**
     * 设置horizontal_only。
     *
     * @param horizontal_only 只允许水平拖动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDraggable.prototype.setHorizontalOnly = function (horizontal_only) {
        return draggable_set_horizontal_only(this != null ? (this.nativeObj || this) : null, horizontal_only);
    };
    /**
     * 设置drag_window。
     *拖动窗口而不是父控件。比如放在对话框的titlebar上，拖动titlebar其实是希望拖动对话框。
     *
     * @param drag_window drag_window
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDraggable.prototype.setDragWindow = function (drag_window) {
        return draggable_set_drag_window(this != null ? (this.nativeObj || this) : null, drag_window);
    };
    Object.defineProperty(TDraggable.prototype, "top", {
        /**
         * 拖动范围的顶部限制。缺省为父控件的顶部。
         *
         */
        get: function () {
            return draggable_t_get_prop_top(this.nativeObj);
        },
        set: function (v) {
            this.setTop(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDraggable.prototype, "bottom", {
        /**
         * 拖动范围的底部限制。缺省为父控件的底部。
         *
         */
        get: function () {
            return draggable_t_get_prop_bottom(this.nativeObj);
        },
        set: function (v) {
            this.setBottom(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDraggable.prototype, "left", {
        /**
         * 拖动范围的左边限制。缺省为父控件的左边。
         *
         */
        get: function () {
            return draggable_t_get_prop_left(this.nativeObj);
        },
        set: function (v) {
            this.setLeft(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDraggable.prototype, "right", {
        /**
         * 拖动范围的右边限制。缺省为父控件的右边边。
         *
         */
        get: function () {
            return draggable_t_get_prop_right(this.nativeObj);
        },
        set: function (v) {
            this.setRight(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDraggable.prototype, "verticalOnly", {
        /**
         * 只允许垂直拖动。
         *
         */
        get: function () {
            return draggable_t_get_prop_vertical_only(this.nativeObj);
        },
        set: function (v) {
            this.setVerticalOnly(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDraggable.prototype, "horizontalOnly", {
        /**
         * 只允许水平拖动。
         *
         */
        get: function () {
            return draggable_t_get_prop_horizontal_only(this.nativeObj);
        },
        set: function (v) {
            this.setHorizontalOnly(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDraggable.prototype, "dragWindow", {
        /**
         * 拖动窗口而不是父控件。比如放在对话框的titlebar上，拖动titlebar其实是希望拖动对话框。
         *
         */
        get: function () {
            return draggable_t_get_prop_drag_window(this.nativeObj);
        },
        set: function (v) {
            this.setDragWindow(v);
        },
        enumerable: true,
        configurable: true
    });
    return TDraggable;
}(TWidget));
;
/**
 * 颜色选择器。
 *
 *color\_picker\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于color\_picker\_t控件。
 *
 *在xml中使用"color\_picker"标签创建颜色选择器控件。如：
 *
 *```xml
 *<color_picker x="0" y="0" w="100%" h="100%" value="orange">
 *<color_component x="0" y="0" w="200" h="200" name="sv"/>
 *<color_component x="210" y="0" w="20" h="200" name="h"/>
 *<color_tile x="0" y="210" w="50%" h="20" name="new" bg_color="green"/>
 *<color_tile x="right" y="210" w="50%" h="20" name="old" bg_color="blue"/>
 *</color_picker>
 *```
 *
 *> 更多用法请参考：
 *[color\_picker](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/color_picker.xml)
 *
 *其中的子控件必须按下列规则命名：
 *
 ** r 红色分量。可以是spin_box、edit和slider。
 ** g 绿色分量。可以是spin_box、edit和slider。
 ** b 蓝色分量。可以是spin_box、edit和slider。
 ** h Hue分量。可以是spin_box、edit、slider和color_component。
 ** s Saturation分量。可以是spin_box、edit和slider。
 ** v Value/Brightness分量。可以是spin_box、edit和slider。
 ** sv Saturation和Value/Brightness分量。可以是color_component。
 ** old 旧的值。可以是spin_box、edit和color_tile。
 ** new 新的值。可以是spin_box、edit和color_tile。
 *
 */
var TColorPicker = /** @class */ (function (_super) {
    __extends(TColorPicker, _super);
    function TColorPicker(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建color_picker对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TColorPicker.create = function (parent, x, y, w, h) {
        return new TColorPicker(color_picker_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置颜色。
     *
     * @param color 颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TColorPicker.prototype.setColor = function (color) {
        return color_picker_set_color(this != null ? (this.nativeObj || this) : null, color);
    };
    /**
     * 转换为color_picker对象(供脚本语言使用)。
     *
     * @param widget color_picker对象。
     *
     * @returns color_picker对象。
     */
    TColorPicker.cast = function (widget) {
        return new TColorPicker(color_picker_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TColorPicker.prototype, "value", {
        /**
         * 颜色。
         *
         */
        get: function () {
            return color_picker_t_get_prop_value(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TColorPicker;
}(TWidget));
;
/**
 * 颜色选择器的颜色分量。
 *控件的名称有严格规定：
 *COLOR_PICKER_CHILD_SV: 水平为Value/Brightness(递增)，垂直为Saturation(递减)。
 *COLOR_PICKER_CHILD_H: 水平为同色，垂直为Hue(递减)。
 *
 */
var TColorComponent = /** @class */ (function (_super) {
    __extends(TColorComponent, _super);
    function TColorComponent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 转换为color_component对象(供脚本语言使用)。
     *
     * @param widget color_component对象。
     *
     * @returns color_component对象。
     */
    TColorComponent.cast = function (widget) {
        return new TColorComponent(color_component_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TColorComponent;
}(TWidget));
;
/**
 * 窗口管理器。
 *
 */
var TWindowManager = /** @class */ (function (_super) {
    __extends(TWindowManager, _super);
    function TWindowManager(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 获取全局window_manager对象
     *
     *
     * @returns 对象。
     */
    TWindowManager.instance = function () {
        return new TWindowManager(window_manager());
    };
    /**
     * 转换为window_manager对象(供脚本语言使用)。
     *
     * @param widget window_manager对象。
     *
     * @returns window_manager对象。
     */
    TWindowManager.cast = function (widget) {
        return new TWindowManager(window_manager_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 获取最上面的主窗口。
     *
     *
     * @returns 返回窗口对象。
     */
    TWindowManager.prototype.getTopMainWindow = function () {
        return new TWidget(window_manager_get_top_main_window(this != null ? (this.nativeObj || this) : null));
    };
    /**
     * 获取最上面的窗口。
     *
     *
     * @returns 返回窗口对象。
     */
    TWindowManager.prototype.getTopWindow = function () {
        return new TWidget(window_manager_get_top_window(this != null ? (this.nativeObj || this) : null));
    };
    /**
     * 获取前一个的窗口。
     *
     *
     * @returns 返回窗口对象。
     */
    TWindowManager.prototype.getPrevWindow = function () {
        return new TWidget(window_manager_get_prev_window(this != null ? (this.nativeObj || this) : null));
    };
    /**
     * 获取指针当前的X坐标。
     *
     *
     * @returns 返回指针当前的X坐标。
     */
    TWindowManager.prototype.getPointerX = function () {
        return window_manager_get_pointer_x(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取指针当前的Y坐标。
     *
     *
     * @returns 返回指针当前的X坐标。
     */
    TWindowManager.prototype.getPointerY = function () {
        return window_manager_get_pointer_y(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取指针当前是否按下。
     *
     *
     * @returns 返回指针当前是否按下。
     */
    TWindowManager.prototype.getPointerPressed = function () {
        return window_manager_get_pointer_pressed(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置是否显示FPS。
     *
     * @param show_fps 是否显示FPS。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWindowManager.prototype.setShowFps = function (show_fps) {
        return window_manager_set_show_fps(this != null ? (this.nativeObj || this) : null, show_fps);
    };
    /**
     * 设置屏保时间。
     *
     * @param screen_saver_time 屏保时间(单位毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWindowManager.prototype.setScreenSaverTime = function (screen_saver_time) {
        return window_manager_set_screen_saver_time(this != null ? (this.nativeObj || this) : null, screen_saver_time);
    };
    /**
     * 设置鼠标指针。
     *
     * @param cursor 图片名称(从图片管理器中加载)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWindowManager.prototype.setCursor = function (cursor) {
        return window_manager_set_cursor(this != null ? (this.nativeObj || this) : null, cursor);
    };
    /**
     * 请求关闭顶层窗口。
     *
     *> 如果顶层窗口时模态对话框，用DIALOG\_QUIT\_NONE调用dialog\_quit。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWindowManager.prototype.back = function () {
        return window_manager_back(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 回到主窗口，关闭之上的全部窗口。
     *
     *> 如果顶层窗口时模态对话框，用DIALOG\_QUIT\_NONE调用dialog\_quit。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWindowManager.prototype.backToHome = function () {
        return window_manager_back_to_home(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 回到指定的窗口，关闭之上的全部窗口。
     *
     *> 如果顶层窗口时模态对话框，用DIALOG\_QUIT\_NONE调用dialog\_quit。
     *
     * @param target 目标窗口的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWindowManager.prototype.backTo = function (target) {
        return window_manager_back_to(this != null ? (this.nativeObj || this) : null, target);
    };
    return TWindowManager;
}(TWidget));
;
/**
 * 窗口。
 *
 *本类把窗口相关的公共行为进行抽象，放到一起方便重用。目前已知的具体实现如下图：
 *
 *
 *
 *> 本类是一个抽象类，不能进行实例化。请在应用程序中使用具体的类，如window\_t。
 *
 */
var TWindowBase = /** @class */ (function (_super) {
    __extends(TWindowBase, _super);
    function TWindowBase(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 转换为window_base对象(供脚本语言使用)。
     *
     * @param widget window_base对象。
     *
     * @returns window_base对象。
     */
    TWindowBase.cast = function (widget) {
        return new TWindowBase(window_base_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TWindowBase.prototype, "theme", {
        /**
         * 主题资源的名称。
         *每个窗口都可以有独立的主题文件，如果没指定，则使用系统缺省的主题文件。
         *主题是一个XML文件，放在assets/raw/styles目录下。
         *请参考[主题](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)
         *
         */
        get: function () {
            return window_base_t_get_prop_theme(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWindowBase.prototype, "closable", {
        /**
         * 收到EVT_REQUEST_CLOSE_WINDOW是否自动关闭窗口。
         *
         *如果关闭窗口时，需要用户确认:
         *
         ** 1.将closable设置为WINDOW\_CLOSABLE\_CONFIRM
         *
         ** 2.处理窗口的EVT\_REQUEST\_CLOSE\_WINDOW事件
         *
         *> closable在XML中取值为：yes/no/confirm，缺省为yes。
         *
         */
        get: function () {
            return window_base_t_get_prop_closable(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TWindowBase;
}(TWidget));
;
/**
 * 可变的style(可实时修改并生效，主要用于在designer中被编辑的控件，或者一些特殊控件)。
 *
 *style\_mutable也对style\_const进行了包装，当用户没修改某个值时，便从style\_const中获取。
 *
 */
var TStyleMutable = /** @class */ (function (_super) {
    __extends(TStyleMutable, _super);
    function TStyleMutable(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 设置style的名称。
     *
     * @param name 名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TStyleMutable.prototype.setName = function (name) {
        return style_mutable_set_name(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 设置指定名称整数格式的值。
     *
     * @param state 控件状态。
     * @param name 属性名。
     * @param val 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TStyleMutable.prototype.setInt = function (state, name, val) {
        return style_mutable_set_int(this != null ? (this.nativeObj || this) : null, state, name, val);
    };
    /**
     * 转换为style_mutable对象。
     *
     * @param s style对象。
     *
     * @returns style对象。
     */
    TStyleMutable.cast = function (s) {
        return new TStyleMutable(style_mutable_cast(s != null ? (s.nativeObj || s) : null));
    };
    /**
     * 创建style\_mutable对象。
     *
     *> 除了测试程序外不需要直接调用，widget会通过style\_factory\_create创建。
     *
     * @param widget 控件
     * @param default_style 缺省的style。
     *
     * @returns style对象。
     */
    TStyleMutable.create = function (widget, default_style) {
        return new TStyleMutable(style_mutable_create(widget != null ? (widget.nativeObj || widget) : null, default_style != null ? (default_style.nativeObj || default_style) : null));
    };
    Object.defineProperty(TStyleMutable.prototype, "name", {
        /**
         * 名称。
         *
         */
        get: function () {
            return style_mutable_t_get_prop_name(this.nativeObj);
        },
        set: function (v) {
            this.setName(v);
        },
        enumerable: true,
        configurable: true
    });
    return TStyleMutable;
}(TStyle));
;
/**
 * 图片控件基类。
 *
 *本类把图片相关控件的公共行为进行抽象，放到一起方便重用。目前已知的具体实现如下图：
 *
 *
 *
 *> 本类是一个抽象类，不能进行实例化。请在应用程序中使用具体的类，如image\_t。
 *
 *如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。如：
 *
 *```
 *<image draw_type="center" image="file://./demos/assets/default/raw/images/xx/flag_CN.png" />
 *<gif image="file://./demos/assets/default/raw/images/x2/bee.gif" />
 *<svg image="file://./demos/assets/default/raw/images/svg/china.bsvg" />
 *```
 *
 */
var TImageBase = /** @class */ (function (_super) {
    __extends(TImageBase, _super);
    function TImageBase(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 设置控件的图片名称。
     *
     *> 如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。
     *
     * @param name 图片名称，该图片必须存在于资源管理器。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageBase.prototype.setImage = function (name) {
        return image_base_set_image(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 设置控件的旋转角度(仅在WITH_VGCANVAS定义时生效)。
     *
     * @param rotation 旋转角度(幅度)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageBase.prototype.setRotation = function (rotation) {
        return image_base_set_rotation(this != null ? (this.nativeObj || this) : null, rotation);
    };
    /**
     * 设置控件的缩放比例(仅在WITH_VGCANVAS定义时生效)。
     *
     * @param scale_x X方向缩放比例。
     * @param scale_y Y方向缩放比例。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageBase.prototype.setScale = function (scale_x, scale_y) {
        return image_base_set_scale(this != null ? (this.nativeObj || this) : null, scale_x, scale_y);
    };
    /**
     * 设置控件的锚点(仅在WITH_VGCANVAS定义时生效)。
     *
     * @param anchor_x 锚点X(0-1)。0在控件左边，0.5在控件中间，1在控件右边。
     * @param anchor_y 锚点Y(0-1)。0在控件顶部，0.5在控件中间，1在控件底部。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageBase.prototype.setAnchor = function (anchor_x, anchor_y) {
        return image_base_set_anchor(this != null ? (this.nativeObj || this) : null, anchor_x, anchor_y);
    };
    /**
     * 设置控件的选中状态。
     *
     * @param selected 是否被选中。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageBase.prototype.setSelected = function (selected) {
        return image_base_set_selected(this != null ? (this.nativeObj || this) : null, selected);
    };
    /**
     * 设置控件是否可以被选中。
     *
     * @param selectable 是否可以被选中。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageBase.prototype.setSelectable = function (selectable) {
        return image_base_set_selectable(this != null ? (this.nativeObj || this) : null, selectable);
    };
    /**
     * 设置控件是否可以被点击。
     *
     * @param clickable 是否可以被点击。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImageBase.prototype.setClickable = function (clickable) {
        return image_base_set_clickable(this != null ? (this.nativeObj || this) : null, clickable);
    };
    /**
     * 转换为image_base对象(供脚本语言使用)。
     *
     * @param widget image_base对象。
     *
     * @returns image_base对象。
     */
    TImageBase.cast = function (widget) {
        return new TImageBase(image_base_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TImageBase.prototype, "image", {
        /**
         * 图片的名称。
         *
         */
        get: function () {
            return image_base_t_get_prop_image(this.nativeObj);
        },
        set: function (v) {
            this.setImage(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "anchorX", {
        /**
         * 锚点X(0-1)。0在控件左边，0.5在控件中间，1在控件右边。
         *
         */
        get: function () {
            return image_base_t_get_prop_anchor_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "anchorY", {
        /**
         * 锚点Y(0-1)。0在控件顶部，0.5在控件中间，1在控件底部。
         *
         */
        get: function () {
            return image_base_t_get_prop_anchor_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "scaleX", {
        /**
         * 控件在X方向上的缩放比例。
         *
         */
        get: function () {
            return image_base_t_get_prop_scale_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "scaleY", {
        /**
         * 控件在Y方向上的缩放比例。
         *
         */
        get: function () {
            return image_base_t_get_prop_scale_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "rotation", {
        /**
         * 控件的旋转角度(幅度)。
         *
         */
        get: function () {
            return image_base_t_get_prop_rotation(this.nativeObj);
        },
        set: function (v) {
            this.setRotation(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "clickable", {
        /**
         * 点击时，是否触发EVT_CLICK事件。
         *
         */
        get: function () {
            return image_base_t_get_prop_clickable(this.nativeObj);
        },
        set: function (v) {
            this.setClickable(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "selectable", {
        /**
         * 是否设置选中状态。
         *
         */
        get: function () {
            return image_base_t_get_prop_selectable(this.nativeObj);
        },
        set: function (v) {
            this.setSelectable(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TImageBase.prototype, "selected", {
        /**
         * 当前是否被选中。
         *
         */
        get: function () {
            return image_base_t_get_prop_selected(this.nativeObj);
        },
        set: function (v) {
            this.setSelected(v);
        },
        enumerable: true,
        configurable: true
    });
    return TImageBase;
}(TWidget));
;
/**
 * 窗口事件，由窗口管理器触发。
 *
 */
var TWindowEvent = /** @class */ (function (_super) {
    __extends(TWindowEvent, _super);
    function TWindowEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 把event对象转window_event_t对象。主要给脚本语言使用。
     *
     * @param event event对象。
     *
     * @returns 对象。
     */
    TWindowEvent.cast = function (event) {
        return new TWindowEvent(window_event_cast(event != null ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TWindowEvent.prototype, "window", {
        /**
         * canvas。
         *
         */
        get: function () {
            return new TWidget(window_event_t_get_prop_window(this.nativeObj));
        },
        enumerable: true,
        configurable: true
    });
    return TWindowEvent;
}(TEvent));
;
/**
 * 绘制事件。
 *
 */
var TPaintEvent = /** @class */ (function (_super) {
    __extends(TPaintEvent, _super);
    function TPaintEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 把event对象转paint_event_t对象。主要给脚本语言使用。
     *
     * @param event event对象。
     *
     * @returns event 对象。
     */
    TPaintEvent.cast = function (event) {
        return new TPaintEvent(paint_event_cast(event != null ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TPaintEvent.prototype, "c", {
        /**
         * canvas。
         *
         */
        get: function () {
            return new TCanvas(paint_event_t_get_prop_c(this.nativeObj));
        },
        enumerable: true,
        configurable: true
    });
    return TPaintEvent;
}(TEvent));
;
/**
 * 按键事件。
 *
 */
var TKeyEvent = /** @class */ (function (_super) {
    __extends(TKeyEvent, _super);
    function TKeyEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 把event对象转key_event_t对象，主要给脚本语言使用。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    TKeyEvent.cast = function (event) {
        return new TKeyEvent(key_event_cast(event != null ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TKeyEvent.prototype, "key", {
        /**
         * 键值。
         *
         */
        get: function () {
            return key_event_t_get_prop_key(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "alt", {
        /**
         * alt键是否按下。
         *
         */
        get: function () {
            return key_event_t_get_prop_alt(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "lalt", {
        /**
         * left alt键是否按下。
         *
         */
        get: function () {
            return key_event_t_get_prop_lalt(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "ralt", {
        /**
         * right alt键是否按下。
         *
         */
        get: function () {
            return key_event_t_get_prop_ralt(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "ctrl", {
        /**
         * right alt键是否按下。
         *ctrl键是否按下。
         *
         */
        get: function () {
            return key_event_t_get_prop_ctrl(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "lctrl", {
        /**
         * left ctrl键是否按下。
         *
         */
        get: function () {
            return key_event_t_get_prop_lctrl(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "rctrl", {
        /**
         * right ctrl键是否按下。
         *
         */
        get: function () {
            return key_event_t_get_prop_rctrl(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "shift", {
        /**
         * shift键是否按下。
         *
         */
        get: function () {
            return key_event_t_get_prop_shift(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "lshift", {
        /**
         * left shift键是否按下。
         *
         */
        get: function () {
            return key_event_t_get_prop_lshift(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "rshift", {
        /**
         * right shift键是否按下。
         *
         */
        get: function () {
            return key_event_t_get_prop_rshift(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "cmd", {
        /**
         * left shift键是否按下。
         *cmd/win键是否按下。
         *
         */
        get: function () {
            return key_event_t_get_prop_cmd(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "menu", {
        /**
         * menu键是否按下。
         *
         */
        get: function () {
            return key_event_t_get_prop_menu(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TKeyEvent.prototype, "capslock", {
        /**
         * capslock键是否按下。
         *
         */
        get: function () {
            return key_event_t_get_prop_capslock(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TKeyEvent;
}(TEvent));
;
/**
 * 指针事件。
 *
 */
var TPointerEvent = /** @class */ (function (_super) {
    __extends(TPointerEvent, _super);
    function TPointerEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 把event对象转pointer_event_t对象，主要给脚本语言使用。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    TPointerEvent.cast = function (event) {
        return new TPointerEvent(pointer_event_cast(event != null ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TPointerEvent.prototype, "x", {
        /**
         * x坐标。
         *
         */
        get: function () {
            return pointer_event_t_get_prop_x(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "y", {
        /**
         * y坐标。
         *
         */
        get: function () {
            return pointer_event_t_get_prop_y(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "button", {
        /**
         * button。
         *
         */
        get: function () {
            return pointer_event_t_get_prop_button(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "pressed", {
        /**
         * 指针是否按下。
         *
         */
        get: function () {
            return pointer_event_t_get_prop_pressed(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "alt", {
        /**
         * alt键是否按下。
         *
         */
        get: function () {
            return pointer_event_t_get_prop_alt(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "ctrl", {
        /**
         * ctrl键是否按下。
         *
         */
        get: function () {
            return pointer_event_t_get_prop_ctrl(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "cmd", {
        /**
         * cmd键是否按下。
         *
         */
        get: function () {
            return pointer_event_t_get_prop_cmd(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "menu", {
        /**
         * menu键是否按下。
         *
         */
        get: function () {
            return pointer_event_t_get_prop_menu(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPointerEvent.prototype, "shift", {
        /**
         * shift键是否按下。
         *
         */
        get: function () {
            return pointer_event_t_get_prop_shift(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TPointerEvent;
}(TEvent));
;
/**
 * 滚轮事件。
 *
 */
var TOrientationEvent = /** @class */ (function (_super) {
    __extends(TOrientationEvent, _super);
    function TOrientationEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 把event对象转orientation_event_t对象，主要给脚本语言使用。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    TOrientationEvent.cast = function (event) {
        return new TOrientationEvent(orientation_event_cast(event != null ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TOrientationEvent.prototype, "orientation", {
        /**
         * 屏幕方向。
         *
         */
        get: function () {
            return orientation_event_t_get_prop_orientation(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TOrientationEvent;
}(TEvent));
;
/**
 * 滚轮事件。
 *
 */
var TWheelEvent = /** @class */ (function (_super) {
    __extends(TWheelEvent, _super);
    function TWheelEvent(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 把event对象转wheel_event_t对象，主要给脚本语言使用。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    TWheelEvent.cast = function (event) {
        return new TWheelEvent(wheel_event_cast(event != null ? (event.nativeObj || event) : null));
    };
    Object.defineProperty(TWheelEvent.prototype, "dy", {
        /**
         * 滚轮的y值。
         *
         */
        get: function () {
            return wheel_event_t_get_prop_dy(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWheelEvent.prototype, "alt", {
        /**
         * alt键是否按下。
         *
         */
        get: function () {
            return wheel_event_t_get_prop_alt(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWheelEvent.prototype, "ctrl", {
        /**
         * ctrl键是否按下。
         *
         */
        get: function () {
            return wheel_event_t_get_prop_ctrl(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TWheelEvent.prototype, "shift", {
        /**
         * shift键是否按下。
         *
         */
        get: function () {
            return wheel_event_t_get_prop_shift(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TWheelEvent;
}(TEvent));
;
/**
 * app_bar控件。
 *
 *一个简单的容器控件，一般在窗口的顶部，用于显示本窗口的状态和信息。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *子控件的布局可用layout\_children属性指定。
 *请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 *
 *app\_bar\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于app\_bar\_t控件。
 *
 *在xml中使用"app\_bar"标签创建app\_bar。如：
 *
 *```xml
 *<app_bar x="0" y="0" w="100%" h="30"
 *<label x="0" y="0" w="100%" h="100%" text="Basic Controls" />
 *</app_bar>
 *```
 *
 *在c代码中使用函数app\_bar\_create创建app\_bar。如：
 *
 *
 *可用通过style来设置控件的显示风格，如背景颜色等。如：
 *
 *```xml
 *<style name="default" border_color="#a0a0a0">
 *<normal     bg_color="#f0f0f0" />
 *</style>
 *```
 *
 */
var TAppBar = /** @class */ (function (_super) {
    __extends(TAppBar, _super);
    function TAppBar(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建app_bar对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TAppBar.create = function (parent, x, y, w, h) {
        return new TAppBar(app_bar_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为app_bar对象(供脚本语言使用)。
     *
     * @param widget app_bar对象。
     *
     * @returns app_bar对象。
     */
    TAppBar.cast = function (widget) {
        return new TAppBar(app_bar_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TAppBar;
}(TWidget));
;
/**
 * Button Group控件。一个简单的容器控件，用于容纳一组按钮控件。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *子控件的布局可用layout\_children属性指定。
 *请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 *
 *button\_group\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于button\_group\_t控件。
 *
 *在xml中使用"button\_group"标签创建button\_group。如：
 *
 *```xml
 *<button_group x="0" y="m" w="100%" h="40" children_layout="default(c=4,r=1,s=5,m=5)">
 *<button name="open:basic" text="Basic"/>
 *<button name="open:button" text="Buttons"/>
 *<button name="open:edit" text="Edits"/>
 *<button name="open:keyboard" text="KeyBoard"/>
 *</button_group>
 *```
 *
 *可用通过style来设置控件的显示风格，如背景颜色等。如：
 *
 *```xml
 *<style name="default" border_color="#a0a0a0">
 *<normal     bg_color="#f0f0f0" />
 *</style>
 *```
 *
 */
var TButtonGroup = /** @class */ (function (_super) {
    __extends(TButtonGroup, _super);
    function TButtonGroup(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建button_group对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TButtonGroup.create = function (parent, x, y, w, h) {
        return new TButtonGroup(button_group_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为button_group对象(供脚本语言使用)。
     *
     * @param widget button_group对象。
     *
     * @returns button_group对象。
     */
    TButtonGroup.cast = function (widget) {
        return new TButtonGroup(button_group_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TButtonGroup;
}(TWidget));
;
/**
 * 按钮控件。
 *
 *点击按钮之后会触发EVT\_CLICK事件，注册EVT\_CLICK事件以执行特定操作。
 *
 *按钮控件也可以作为容器使用，使用图片和文本作为其子控件，可以实现很多有趣的效果。
 *
 *button\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于button\_t控件。
 *
 *在xml中使用"button"标签创建按钮控件。如：
 *
 *```xml
 *<button x="c" y="m" w="80" h="30" text="OK"/>
 *```
 *
 *> 更多用法请参考：
 *[button.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/button.xml)
 *
 *在c代码中使用函数button\_create创建按钮控件。如：
 *
 *
 *> 创建之后，需要用widget\_set\_text或widget\_set\_text\_utf8设置文本内容。
 *
 *> 完整示例请参考：
 *[button demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/button.c)
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<style name="default" border_color="#a0a0a0"  text_color="black">
 *<normal     bg_color="#f0f0f0" />
 *<pressed    bg_color="#c0c0c0" x_offset="1" y_offset="1"/>
 *<over       bg_color="#e0e0e0" />
 *<disable    bg_color="gray" text_color="#d0d0d0" />
 *</style>
 *```
 *
 *> 更多用法请参考：
 *[theme
 *default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L31)
 *
 */
var TButton = /** @class */ (function (_super) {
    __extends(TButton, _super);
    function TButton(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建button对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TButton.create = function (parent, x, y, w, h) {
        return new TButton(button_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为button对象(供脚本语言使用)。
     *
     * @param widget button对象。
     *
     * @returns button对象。
     */
    TButton.cast = function (widget) {
        return new TButton(button_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置触发EVT\_CLICK事件的时间间隔。为0则不重复触发EVT\_CLICK事件。
     *
     * @param repeat 触发EVT_CLICK事件的时间间隔(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TButton.prototype.setRepeat = function (repeat) {
        return button_set_repeat(this != null ? (this.nativeObj || this) : null, repeat);
    };
    /**
     * 设置是否启用长按事件。
     *
     * @param enable_long_press 是否启用长按事件。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TButton.prototype.setEnableLongPress = function (enable_long_press) {
        return button_set_enable_long_press(this != null ? (this.nativeObj || this) : null, enable_long_press);
    };
    Object.defineProperty(TButton.prototype, "repeat", {
        /**
         * 重复触发EVT\_CLICK事件的时间间隔。
         *
         *为0则不重复触发EVT\_CLICK事件。
         *
         */
        get: function () {
            return button_t_get_prop_repeat(this.nativeObj);
        },
        set: function (v) {
            this.setRepeat(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TButton.prototype, "enableLongPress", {
        /**
         * 是否启用长按事件，为true时才触发长按事件。
         *
         *触发长按事件后不再触发点击事件。
         *缺省不启用。
         *
         */
        get: function () {
            return button_t_get_prop_enable_long_press(this.nativeObj);
        },
        set: function (v) {
            this.setEnableLongPress(v);
        },
        enumerable: true,
        configurable: true
    });
    return TButton;
}(TWidget));
;
/**
 * 勾选按钮控件(单选/多选)。
 *
 *check\_button\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于check\_button\_t控件。
 *
 *在xml中使用"check_button"标签创建多选按钮控件。如：
 *
 *```xml
 *<check_button name="c1" text="Book"/>
 *```
 *
 *在xml中使用"radio_button"标签创建单选按钮控件。如：
 *
 *```xml
 *<radio_button name="r1" text="Book"/>
 *```
 *
 *> 更多用法请参考：
 *[button.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/basic.xml)
 *
 *在c代码中使用函数check\_button\_create创建多选按钮控件。如：
 *
 *
 *在c代码中使用函数check\_button\_create\_radio创建单选按钮控件。如：
 *
 *
 *> 完整示例请参考：
 *[button demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/check_button.c)
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<style name="default" icon_at="left">
 *<normal  icon="unchecked" />
 *<pressed icon="unchecked" />
 *<over    icon="unchecked" text_color="green"/>
 *<normal_of_checked icon="checked" text_color="blue"/>
 *<pressed_of_checked icon="checked" text_color="blue"/>
 *<over_of_checked icon="checked" text_color="green"/>
 *</style>
 *```
 *
 *> 更多用法请参考：
 *[theme
 *default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L227)
 *
 */
var TCheckButton = /** @class */ (function (_super) {
    __extends(TCheckButton, _super);
    function TCheckButton(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建多选按钮对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TCheckButton.create = function (parent, x, y, w, h) {
        return new TCheckButton(check_button_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 创建单选按钮对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TCheckButton.createRadio = function (parent, x, y, w, h) {
        return new TCheckButton(check_button_create_radio(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置控件的值。
     *
     * @param value 值
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TCheckButton.prototype.setValue = function (value) {
        return check_button_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 转换check_button对象(供脚本语言使用)。
     *
     * @param widget check_button对象。
     *
     * @returns check_button对象。
     */
    TCheckButton.cast = function (widget) {
        return new TCheckButton(check_button_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TCheckButton.prototype, "value", {
        /**
         * 值。
         *
         */
        get: function () {
            return check_button_t_get_prop_value(this.nativeObj);
        },
        set: function (v) {
            this.setValue(v);
        },
        enumerable: true,
        configurable: true
    });
    return TCheckButton;
}(TWidget));
;
/**
 * 一个裁剪子控件的容器控件。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *子控件的布局可用layout\_children属性指定。
 *请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 *
 *clip\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于clip\_view\_t控件。
 *
 *在xml中使用"clip_view"标签创建clip_view，在clip_view控件下的所有子控件都会被裁剪。如下button控件会被裁剪，无法画出clip_view控件 ：
 *
 *```xml
 *<clip_view x="0" y="0" w="100" h="100">
 *<button x="50" y="10" w="100" h="50" />
 *</clip_view>
 *```
 *
 *备注：在clip_view控件下的所有子控件都会被裁剪，如果子控件本身会设置裁剪区的话，在子控件中计算裁剪区的交集，具体请参考scroll_view控件的scroll_view_on_paint_children函数。
 *
 *可用通过style来设置控件的显示风格，如背景颜色等。如：
 *
 *```xml
 *<style name="default" border_color="#a0a0a0">
 *<normal     bg_color="#f0f0f0" />
 *</style>
 *```
 *
 */
var TClipView = /** @class */ (function (_super) {
    __extends(TClipView, _super);
    function TClipView(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建clip_view对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TClipView.create = function (parent, x, y, w, h) {
        return new TClipView(clip_view_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为clip_view对象(供脚本语言使用)。
     *
     * @param widget clip_view对象。
     *
     * @returns clip_view对象。
     */
    TClipView.cast = function (widget) {
        return new TClipView(clip_view_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TClipView;
}(TWidget));
;
/**
 * 色块控件。
 *
 *用来显示一个颜色块，它通过属性而不是主题来设置颜色，方便在运行时动态改变颜色。
 *
 *可以使用value属性访问背景颜色的颜色值。
 *
 *color\_tile\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于color\_tile\_t控件。
 *
 *在xml中使用"color_tile"标签创建色块控件。如：
 *
 *```xml
 *<color_tile x="c" y="m" w="80" h="30" bg_color="green" />
 *```
 *
 *> 更多用法请参考：
 *[color_tile](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/color_picker_rgb.xml)
 *
 *在c代码中使用函数color_tile\_create创建色块控件。如：
 *
 *> 创建之后，用color\_tile\_set\_bg\_color设置背景颜色。
 *
 */
var TColorTile = /** @class */ (function (_super) {
    __extends(TColorTile, _super);
    function TColorTile(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建color_tile对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TColorTile.create = function (parent, x, y, w, h) {
        return new TColorTile(color_tile_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为color_tile对象(供脚本语言使用)。
     *
     * @param widget color_tile对象。
     *
     * @returns color_tile对象。
     */
    TColorTile.cast = function (widget) {
        return new TColorTile(color_tile_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置背景颜色。
     *
     * @param color 背景颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TColorTile.prototype.setBgColor = function (color) {
        return color_tile_set_bg_color(this != null ? (this.nativeObj || this) : null, color);
    };
    Object.defineProperty(TColorTile.prototype, "bgColor", {
        /**
         * 背景颜色。
         *
         */
        get: function () {
            return color_tile_t_get_prop_bg_color(this.nativeObj);
        },
        set: function (v) {
            this.setBgColor(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TColorTile.prototype, "borderColor", {
        /**
         * 边框颜色。
         *
         */
        get: function () {
            return color_tile_t_get_prop_border_color(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TColorTile;
}(TWidget));
;
/**
 * column。一个简单的容器控件，垂直排列其子控件。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *子控件的布局可用layout\_children属性指定。
 *请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 *
 *column\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于column\_t控件。
 *
 *在xml中使用"column"标签创建column。如：
 *
 *```xml
 *<column x="0" y="0" w="100%" h="100%" children_layout="default(c=1,r=0)">
 *<button name="open:basic" text="Basic"/>
 *<button name="open:button" text="Buttons"/>
 *<button name="open:edit" text="Edits"/>
 *<button name="open:keyboard" text="KeyBoard"/>
 *</column>
 *```
 *
 *可用通过style来设置控件的显示风格，如背景颜色等。如：
 *
 *```xml
 *<style name="default" border_color="#a0a0a0">
 *<normal     bg_color="#f0f0f0" />
 *</style>
 *```
 *
 */
var TColumn = /** @class */ (function (_super) {
    __extends(TColumn, _super);
    function TColumn(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建column对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TColumn.create = function (parent, x, y, w, h) {
        return new TColumn(column_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为column对象(供脚本语言使用)。
     *
     * @param widget column对象。
     *
     * @returns column对象。
     */
    TColumn.cast = function (widget) {
        return new TColumn(column_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TColumn;
}(TWidget));
;
/**
 * ComboBox Item控件。
 *
 *本类仅供combo\_box控件内部使用。
 *
 */
var TComboBoxItem = /** @class */ (function (_super) {
    __extends(TComboBoxItem, _super);
    function TComboBoxItem(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建combo_box_item对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TComboBoxItem.create = function (parent, x, y, w, h) {
        return new TComboBoxItem(combo_box_item_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换combo_box_item对象(供脚本语言使用)。
     *
     * @param widget combo_box_item对象。
     *
     * @returns combo_box_item对象。
     */
    TComboBoxItem.cast = function (widget) {
        return new TComboBoxItem(combo_box_item_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置控件是否被选中。
     *
     * @param checked 是否被选中。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TComboBoxItem.prototype.setChecked = function (checked) {
        return combo_box_item_set_checked(this != null ? (this.nativeObj || this) : null, checked);
    };
    /**
     * 设置控件的值。
     *
     * @param value 值
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TComboBoxItem.prototype.setValue = function (value) {
        return combo_box_item_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    Object.defineProperty(TComboBoxItem.prototype, "value", {
        /**
         * 值。
         *
         */
        get: function () {
            return combo_box_item_t_get_prop_value(this.nativeObj);
        },
        set: function (v) {
            this.setValue(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TComboBoxItem.prototype, "checked", {
        /**
         * 是否被选中。
         *
         */
        get: function () {
            return combo_box_item_t_get_prop_checked(this.nativeObj);
        },
        set: function (v) {
            this.setChecked(v);
        },
        enumerable: true,
        configurable: true
    });
    return TComboBoxItem;
}(TWidget));
;
/**
 * 下拉列表控件。
 *
 *点击右边的按钮，可弹出一个下拉列表，从中选择一项作为当前的值。
 *
 *combo\_box\_t是[edit\_t](edit_t.md)的子类控件，edit\_t的函数均适用于combo\_box\_t控件。
 *
 *在xml中使用"combo_box"标签创建下拉列表控件。
 *
 *列表选项可以直接写在"options"属性中。如：
 *
 *```xml
 *<combo_box readonly="true" x="10" y="bottom:5" w="200" h="30" tr_text="ok"
 *options="1:ok;2:cancel;"/>
 *```
 *
 *列表选项也可以放在独立的窗口中，用属性"open_window"指定窗口的名称。如：
 *
 *```xml
 *<combo_box open_window="language" readonly="true" x="10" y="bottom:50" w="200" h="30"
 *tr_text="english"/>
 *```
 *
 *language.xml:
 *
 *```xml
 *<popup close_when_click_outside="true" h="80"
 *<list_view x="0"  y="0" w="100%" h="100%" item_height="30">
 *<scroll_view name="view" x="0"  y="0" w="-12" h="100%">
 *<combo_box_item tr_text="english"/>
 *<combo_box_item tr_text="chinese" />
 *</scroll_view>
 *<scroll_bar_d name="bar" x="right" y="0" w="12" h="100%" value="0"/>
 *</list_view>
 *</popup>
 *```
 *
 *> 更多用法请参考：[combo_box.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/combo_box.xml)
 *
 *
 *
 *如果在文本比较长时，希望在获得焦点时文本自动滚动，可以放入一个hscroll_label为子控件，并命名为"value"。如：
 *
 *```xml
 *<combo_box left_margin="6" readonly="true" x="10" y="50" w="80" h="30" options="leftttttttttt;centerrrrrrrrrrrrrrrr;rightttttttttt;"
 *selected_index="1">
 *<hscroll_label x="0" y="0" w="-30" h="100%"
 *name="value"
 *lull="1000"
 *loop="true"
 *yoyo="true"
 *ellipses="true"
 *only_parent_focus="true"/>
 *<button style="combobox_down" x="right:5" y="middle" w="20" h="20"/>
 *</combo_box>
 *```
 *
 *在c代码中使用函数combo\_box\_create创建下拉列表控件。如：
 *
 *
 *创建之后：
 *
 ** 用combo\_box\_set\_options设置可选项目。
 ** 用combo\_box\_set\_selected\_index设置缺省项。
 *
 *> 完整示例请参考：[combo_box
 *demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/combo_box.c)
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<combo_box>
 *<style name="default" border_color="#a0a0a0"  text_color="black" text_align_h="left">
 *<normal     bg_color="#f0f0f0" />
 *<focused    bg_color="#f0f0f0" border_color="black"/>
 *<empty      bg_color="#f0f0f0" text_color="#a0a0a0" />
 *</style>
 *</combo_box>
 *```
 *
 ** 1.combobox的下拉按钮的style名称为combobox_down，可以在主题文件中设置。
 *
 *```xml
 *<button>
 *<style name="combobox_down" border_color="#a0a0a0">
 *<normal     bg_color="#f0f0f0" icon="arrow_down_n"/>
 *<pressed    bg_color="#c0c0c0" icon="arrow_down_p"/>
 *<over       bg_color="#e0e0e0" icon="arrow_down_o"/>
 *</style>
 *</button>
 *```
 *
 ** 2.combobox的弹出popup窗口的style名称为combobox_popup，可以在主题文件中设置。
 *
 *```xml
 *<popup>
 *<style name="combobox_popup" border_color="red">
 *<normal bg_color="#808080"/>
 *</style>
 *</popup>
 *```
 *
 *> 更多用法请参考：[theme
 *default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L422)
 *
 */
var TComboBox = /** @class */ (function (_super) {
    __extends(TComboBox, _super);
    function TComboBox(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建combo_box对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TComboBox.create = function (parent, x, y, w, h) {
        return new TComboBox(combo_box_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换combo_box对象(供脚本语言使用)。
     *
     * @param widget combo_box对象。
     *
     * @returns combo_box对象。
     */
    TComboBox.cast = function (widget) {
        return new TComboBox(combo_box_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 点击按钮时可以打开popup窗口，本函数可设置窗口的名称。
     *
     * @param open_window 弹出窗口的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TComboBox.prototype.setOpenWindow = function (open_window) {
        return combo_box_set_open_window(this != null ? (this.nativeObj || this) : null, open_window);
    };
    /**
     * 重置所有选项。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TComboBox.prototype.resetOptions = function () {
        return combo_box_reset_options(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取选项个数。
     *
     *
     * @returns 返回选项个数。
     */
    TComboBox.prototype.countOptions = function () {
        return combo_box_count_options(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置第index个选项为当前选中的选项。
     *
     * @param index 选项的索引。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TComboBox.prototype.setSelectedIndex = function (index) {
        return combo_box_set_selected_index(this != null ? (this.nativeObj || this) : null, index);
    };
    /**
     * 设置是否本地化(翻译)选项。
     *
     * @param localize_options 是否本地化(翻译)选项。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TComboBox.prototype.setLocalizeOptions = function (localize_options) {
        return combo_box_set_localize_options(this != null ? (this.nativeObj || this) : null, localize_options);
    };
    /**
     * 设置值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TComboBox.prototype.setValue = function (value) {
        return combo_box_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置item高度。
     *
     * @param item_height item的高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TComboBox.prototype.setItemHeight = function (item_height) {
        return combo_box_set_item_height(this != null ? (this.nativeObj || this) : null, item_height);
    };
    /**
     * 追加一个选项。
     *
     * @param value 值。
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TComboBox.prototype.appendOption = function (value, text) {
        return combo_box_append_option(this != null ? (this.nativeObj || this) : null, value, text);
    };
    /**
     * 设置选项。
     *
     * @param options 选项。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TComboBox.prototype.setOptions = function (options) {
        return combo_box_set_options(this != null ? (this.nativeObj || this) : null, options);
    };
    /**
     * 获取combo_box的值。
     *
     *
     * @returns 返回值。
     */
    TComboBox.prototype.getValue = function () {
        return combo_box_get_value(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取combo_box的文本。
     *
     *
     * @returns 返回文本。
     */
    TComboBox.prototype.getTextValue = function () {
        return combo_box_get_text(this != null ? (this.nativeObj || this) : null);
    };
    Object.defineProperty(TComboBox.prototype, "openWindow", {
        /**
         * 为点击按钮时，要打开窗口的名称。
         *
         */
        get: function () {
            return combo_box_t_get_prop_open_window(this.nativeObj);
        },
        set: function (v) {
            this.setOpenWindow(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TComboBox.prototype, "selectedIndex", {
        /**
         * 当前选中的选项。
         *
         */
        get: function () {
            return combo_box_t_get_prop_selected_index(this.nativeObj);
        },
        set: function (v) {
            this.setSelectedIndex(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TComboBox.prototype, "value", {
        /**
         * 值。
         *
         */
        get: function () {
            return combo_box_t_get_prop_value(this.nativeObj);
        },
        set: function (v) {
            this.setValue(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TComboBox.prototype, "localizeOptions", {
        /**
         * 是否本地化(翻译)选项(缺省为TRUE)。
         *
         */
        get: function () {
            return combo_box_t_get_prop_localize_options(this.nativeObj);
        },
        set: function (v) {
            this.setLocalizeOptions(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TComboBox.prototype, "options", {
        /**
         * 设置可选项(冒号分隔值和文本，分号分隔选项，如:1:red;2:green;3:blue)。
         *
         */
        get: function () {
            return combo_box_t_get_prop_options(this.nativeObj);
        },
        set: function (v) {
            this.setOptions(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TComboBox.prototype, "itemHeight", {
        /**
         * 下拉选项的高度。如果open_window为空，则使用缺省高度。
         *
         */
        get: function () {
            return combo_box_t_get_prop_item_height(this.nativeObj);
        },
        set: function (v) {
            this.setItemHeight(v);
        },
        enumerable: true,
        configurable: true
    });
    return TComboBox;
}(TWidget));
;
/**
 * 对话框客户区控件。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *子控件的布局可用layout\_children属性指定。
 *请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 *
 *dialog\_client\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于dialog\_client\_t控件。
 *
 *在xml中使用"dialog\_client"标签创建dialog\_client。如：
 *
 *```xml
 *<dialog anim_hint="center_scale(duration=300)" x="c" y="m" w="80%" h="160" text="Dialog">
 *<dialog_title x="0" y="0" w="100%" h="30" text="Hello AWTK" />
 *<dialog_client x="0" y="bottom" w="100%" h="-30">
 *<label name="" x="center" y="middle:-20" w="200" h="30" text="Are you ready?"/>
 *<button name="quit" x="10" y="bottom:10" w="40%" h="30" text="确定"/>
 *<button name="quit" x="right:10" y="bottom:10" w="40%" h="30" text="取消"/>
 *</dialog_client>
 *</dialog>
 *```
 *
 *在c代码中，用dialog\_create\_simple创建对话框时，自动创建dialog客户区对象。
 *
 */
var TDialogClient = /** @class */ (function (_super) {
    __extends(TDialogClient, _super);
    function TDialogClient(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建dialog客户区对象。
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns dialog对象。
     */
    TDialogClient.create = function (parent, x, y, w, h) {
        return new TDialogClient(dialog_client_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为dialog_client对象(供脚本语言使用)。
     *
     * @param widget dialog_client对象。
     *
     * @returns dialog_client对象。
     */
    TDialogClient.cast = function (widget) {
        return new TDialogClient(dialog_client_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TDialogClient;
}(TWidget));
;
/**
 * 对话框标题控件。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *子控件的布局可用layout\_children属性指定。
 *请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 *
 *dialog\_title\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于dialog\_title\_t控件。
 *
 *在xml中使用"dialog\_title"标签创建dialog\_title。如：
 *
 *```xml
 *<dialog anim_hint="center_scale(duration=300)" x="c" y="m" w="80%" h="160" text="Dialog">
 *<dialog_title x="0" y="0" w="100%" h="30" text="Hello AWTK" />
 *<dialog_client x="0" y="bottom" w="100%" h="-30">
 *<label name="" x="center" y="middle:-20" w="200" h="30" text="Are you ready?"/>
 *<button name="quit" x="10" y="bottom:10" w="40%" h="30" text="确定"/>
 *<button name="quit" x="right:10" y="bottom:10" w="40%" h="30" text="取消"/>
 *</dialog_client>
 *</dialog>
 *```
 *
 *在c代码中，用dialog\_create\_simple创建对话框时，自动创建dialog标题对象。
 *
 */
var TDialogTitle = /** @class */ (function (_super) {
    __extends(TDialogTitle, _super);
    function TDialogTitle(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建dialog对象。
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns dialog对象。
     */
    TDialogTitle.create = function (parent, x, y, w, h) {
        return new TDialogTitle(dialog_title_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为dialog_title对象(供脚本语言使用)。
     *
     * @param widget dialog_title对象。
     *
     * @returns dialog_title对象。
     */
    TDialogTitle.cast = function (widget) {
        return new TDialogTitle(dialog_title_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TDialogTitle;
}(TWidget));
;
/**
 * 数字时钟控件。
 *
 *digit\_clock\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于digit\_clock\_t控件。
 *
 *在xml中使用"digit\_clock"标签创建数字时钟控件。如：
 *
 *```xml
 *<digit_clock format="YY/MM/DD h:mm:ss"/>
 *```
 *
 *> 更多用法请参考：[digit\_clock.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/digit_clock.xml)
 *
 *在c代码中使用函数digit\_clock\_create创建数字时钟控件。如：
 *
 *
 *> 完整示例请参考：[digit\_clock demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/digit_clock.c)
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<style name="default">
 *<normal text_color="black" />
 *</style>
 *```
 *
 *> 更多用法请参考：[theme default](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L138)
 *
 */
var TDigitClock = /** @class */ (function (_super) {
    __extends(TDigitClock, _super);
    function TDigitClock(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建digit_clock对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TDigitClock.create = function (parent, x, y, w, h) {
        return new TDigitClock(digit_clock_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为digit_clock对象(供脚本语言使用)。
     *
     * @param widget digit_clock对象。
     *
     * @returns digit_clock对象。
     */
    TDigitClock.cast = function (widget) {
        return new TDigitClock(digit_clock_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置显示格式。
     *
     * @param format 格式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDigitClock.prototype.setFormat = function (format) {
        return digit_clock_set_format(this != null ? (this.nativeObj || this) : null, format);
    };
    Object.defineProperty(TDigitClock.prototype, "format", {
        /**
         * 显示格式。
         *
         ** Y 代表年(完整显示)
         ** M 代表月(1-12)
         ** D 代表日(1-31)
         ** h 代表时(0-23)
         ** m 代表分(0-59)
         ** s 代表秒(0-59)
         ** w 代表星期(0-6)
         ** W 代表星期的英文缩写(支持翻译)
         ** YY 代表年(只显示末两位)
         ** MM 代表月(01-12)
         ** DD 代表日(01-31)
         ** hh 代表时(00-23)
         ** mm 代表分(00-59)
         ** ss 代表秒(00-59)
         ** MMM 代表月的英文缩写(支持翻译)
         *
         *如 日期时间为：2018/11/12 9:10:20
         ** "Y/D/M"显示为"2018/11/12"
         ** "Y-D-M"显示为"2018-11-12"
         ** "Y-D-M h:m:s"显示为"2018-11-12 9:10:20"
         ** "Y-D-M hh:mm:ss"显示为"2018-11-12 09:10:20"
         *
         */
        get: function () {
            return digit_clock_t_get_prop_format(this.nativeObj);
        },
        set: function (v) {
            this.setFormat(v);
        },
        enumerable: true,
        configurable: true
    });
    return TDigitClock;
}(TWidget));
;
/**
 * dragger控件。
 *
 *目前主要用于scrollbar里的滑块。
 *
 */
var TDragger = /** @class */ (function (_super) {
    __extends(TDragger, _super);
    function TDragger(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建dragger对象。
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TDragger.create = function (parent, x, y, w, h) {
        return new TDragger(dragger_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为dragger对象(供脚本语言使用)。
     *
     * @param widget dragger对象。
     *
     * @returns dragger对象。
     */
    TDragger.cast = function (widget) {
        return new TDragger(dragger_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置拖动的范围。
     *
     * @param x_min x坐标最小值。
     * @param y_min y坐标最小值。
     * @param x_max x坐标最大值。
     * @param y_max y坐标最大值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDragger.prototype.setRange = function (x_min, y_min, x_max, y_max) {
        return dragger_set_range(this != null ? (this.nativeObj || this) : null, x_min, y_min, x_max, y_max);
    };
    Object.defineProperty(TDragger.prototype, "xMin", {
        /**
         * x坐标的最小值。
         *
         */
        get: function () {
            return dragger_t_get_prop_x_min(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDragger.prototype, "yMin", {
        /**
         * y坐标的最小值。
         *
         */
        get: function () {
            return dragger_t_get_prop_y_min(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDragger.prototype, "xMax", {
        /**
         * x坐标的最大值。
         *
         */
        get: function () {
            return dragger_t_get_prop_x_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TDragger.prototype, "yMax", {
        /**
         * y坐标的最大值。
         *
         */
        get: function () {
            return dragger_t_get_prop_y_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TDragger;
}(TWidget));
;
/**
 * 单行编辑器控件。
 *
 *在基于SDL的平台，单行编辑器控件使用平台原生的输入法，对于嵌入式平台使用内置的输入法。
 *
 *在使用内置的输入法时，软键盘由输入类型决定，开发者可以自定义软键盘的界面。
 *
 *edit\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于edit\_t控件。
 *
 *edit\_t本身可以做为容器，放入按钮等控件。有几个特殊的子控件：
 *
 ** 名为"clear"的按钮。点击时清除编辑器中的内容。
 ** 名为"inc"的按钮。点击时增加编辑器的值，用于实现类似于spinbox的功能。
 ** 名为"dec"的按钮。点击时减少编辑器的值，用于实现类似于spinbox的功能。
 ** 名为"visible"的复选框。勾选时显示密码，反之不显示密码。
 *
 *在xml中使用"edit"标签创建编辑器控件。如：
 *
 *```xml
 *<edit x="c" y="m" w="80" h="30"
 *tips="age" input_type="uint" min="0" max="150" step="1" auto_fix="true" style="number" />
 *```
 *
 *> XXX：需要在min/max/step之前设置input\_type。
 *
 *>更多用法请参考：
 *[edit.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/edit.xml)
 *
 *在c代码中使用函数edit\_create创建编辑器控件。如：
 *
 *
 *> 创建之后，可以用widget\_set\_text或widget\_set\_text\_utf8设置文本内容。
 *
 *> 完整示例请参考：
 *[edit demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/edit.c)
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<style name="default" border_color="#a0a0a0"  text_color="black" text_align_h="left">
 *<normal     bg_color="#f0f0f0" />
 *<focused    bg_color="#f0f0f0" border_color="black"/>
 *<disable    bg_color="gray" text_color="#d0d0d0" />
 *<error      bg_color="#f0f0f0" text_color="red" />
 *<empty      bg_color="#f0f0f0" text_color="#a0a0a0" />
 *</style>
 *```
 *
 *> 更多用法请参考：
 *[theme
 *default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L104)
 *
 */
var TEdit = /** @class */ (function (_super) {
    __extends(TEdit, _super);
    function TEdit(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建edit对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TEdit.create = function (parent, x, y, w, h) {
        return new TEdit(edit_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为edit对象(供脚本语言使用)。
     *
     * @param widget edit对象。
     *
     * @returns edit对象。
     */
    TEdit.cast = function (widget) {
        return new TEdit(edit_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 获取int类型的值。
     *
     *
     * @returns 返回int的值。
     */
    TEdit.prototype.getInt = function () {
        return edit_get_int(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 获取double类型的值。
     *
     *
     * @returns 返回double的值。
     */
    TEdit.prototype.getDouble = function () {
        return edit_get_double(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 设置int类型的值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setInt = function (value) {
        return edit_set_int(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置double类型的值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setDouble = function (value) {
        return edit_set_double(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置为文本输入及其长度限制，不允许输入超过max个字符，少于min个字符时进入error状态。
     *
     * @param min 最小长度。
     * @param max 最大长度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setTextLimit = function (min, max) {
        return edit_set_text_limit(this != null ? (this.nativeObj || this) : null, min, max);
    };
    /**
     * 设置为整数输入及取值范围。
     *
     * @param min 最小值。
     * @param max 最大值。
     * @param step 步长。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setIntLimit = function (min, max, step) {
        return edit_set_int_limit(this != null ? (this.nativeObj || this) : null, min, max, step);
    };
    /**
     * 设置为浮点数输入及取值范围。
     *
     * @param min 最小值。
     * @param max 最大值。
     * @param step 步长。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setFloatLimit = function (min, max, step) {
        return edit_set_float_limit(this != null ? (this.nativeObj || this) : null, min, max, step);
    };
    /**
     * 设置编辑器是否为只读。
     *
     * @param readonly 只读。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setReadonly = function (readonly) {
        return edit_set_readonly(this != null ? (this.nativeObj || this) : null, readonly);
    };
    /**
     * 设置编辑器是否为自动改正。
     *
     * @param auto_fix 自动改正。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setAutoFix = function (auto_fix) {
        return edit_set_auto_fix(this != null ? (this.nativeObj || this) : null, auto_fix);
    };
    /**
     * 设置编辑器是否在获得焦点时不选中文本。
     *
     * @param select_none_when_focused 是否在获得焦点时不选中文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setSelectNoneWhenFocused = function (select_none_when_focused) {
        return edit_set_select_none_when_focused(this != null ? (this.nativeObj || this) : null, select_none_when_focused);
    };
    /**
     * 设置编辑器是否在获得焦点时打开输入法。
     *
     * @param open_im_when_focused 是否在获得焦点时打开输入法。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setOpenImWhenFocused = function (open_im_when_focused) {
        return edit_set_open_im_when_focused(this != null ? (this.nativeObj || this) : null, open_im_when_focused);
    };
    /**
     * 设置编辑器的输入类型。
     *
     * @param type 输入类型。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setInputType = function (type) {
        return edit_set_input_type(this != null ? (this.nativeObj || this) : null, type);
    };
    /**
     * 设置编辑器的输入提示。
     *
     * @param tips 输入提示。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setInputTips = function (tips) {
        return edit_set_input_tips(this != null ? (this.nativeObj || this) : null, tips);
    };
    /**
     * 当编辑器输入类型为密码时，设置密码是否可见。
     *
     * @param password_visible 密码是否可见。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setPasswordVisible = function (password_visible) {
        return edit_set_password_visible(this != null ? (this.nativeObj || this) : null, password_visible);
    };
    /**
     * 设置为焦点。
     *
     * @param focus 是否为焦点。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setFocus = function (focus) {
        return edit_set_focus(this != null ? (this.nativeObj || this) : null, focus);
    };
    /**
     * 设置输入框的光标坐标。
     *
     * @param cursor 是否为焦点。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TEdit.prototype.setCursor = function (cursor) {
        return edit_set_cursor(this != null ? (this.nativeObj || this) : null, cursor);
    };
    Object.defineProperty(TEdit.prototype, "readonly", {
        /**
         * 编辑器是否为只读。
         *
         */
        get: function () {
            return edit_t_get_prop_readonly(this.nativeObj);
        },
        set: function (v) {
            this.setReadonly(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "passwordVisible", {
        /**
         * 密码是否可见。
         *
         */
        get: function () {
            return edit_t_get_prop_password_visible(this.nativeObj);
        },
        set: function (v) {
            this.setPasswordVisible(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "autoFix", {
        /**
         * 输入无效时，是否自动改正。
         *
         */
        get: function () {
            return edit_t_get_prop_auto_fix(this.nativeObj);
        },
        set: function (v) {
            this.setAutoFix(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "selectNoneWhenFocused", {
        /**
         * 获得焦点时不选中文本。
         *
         *> 主要用于没有指针设备的情况，否则软键盘无法取消选中文本。
         *
         */
        get: function () {
            return edit_t_get_prop_select_none_when_focused(this.nativeObj);
        },
        set: function (v) {
            this.setSelectNoneWhenFocused(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "openImWhenFocused", {
        /**
         * 获得焦点时打开输入法。
         *
         *> 主要用于没有指针设备的情况，否则每次切换焦点时都打开输入法。
         *
         */
        get: function () {
            return edit_t_get_prop_open_im_when_focused(this.nativeObj);
        },
        set: function (v) {
            this.setOpenImWhenFocused(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "tips", {
        /**
         * 输入提示。
         *
         */
        get: function () {
            return edit_t_get_prop_tips(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "inputType", {
        /**
         * 输入类型。
         *
         */
        get: function () {
            return edit_t_get_prop_input_type(this.nativeObj);
        },
        set: function (v) {
            this.setInputType(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "min", {
        /**
         * 最小值或最小长度。
         *
         */
        get: function () {
            return edit_t_get_prop_min(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "max", {
        /**
         * 最大值或最大长度。
         *
         */
        get: function () {
            return edit_t_get_prop_max(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TEdit.prototype, "step", {
        /**
         * 步长。
         *作为数值型编辑器时，一次增加和减少时的数值。
         *
         */
        get: function () {
            return edit_t_get_prop_step(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TEdit;
}(TWidget));
;
/**
 * grid_item。一个简单的容器控件，一般作为grid的子控件。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *子控件的布局可用layout\_children属性指定。
 *请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 *
 *grid\_item\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于grid\_item\_t控件。
 *
 *在xml中使用"grid\_item"标签创建grid\_item。如：
 *
 *```xml
 *<grid x="0" y="0" w="100%" h="100%" children_layout="default(c=2,r=2,m=5,s=5)">
 *<grid_item>
 *<button x="c" y="m" w="80%" h="30" name="0" text="0"/>
 *</grid_item>
 *<grid_item>
 *<button x="c" y="m" w="80%" h="30" name="1" text="1"/>
 *</grid_item>
 *<grid_item>
 *<button x="c" y="m" w="80%" h="30" name="2" text="2"/>
 *</grid_item>
 *<grid_item>
 *<button x="c" y="m" w="80%" h="30" name="3" text="3"/>
 *</grid_item>
 *</grid>
 *
 *```
 *
 *可用通过style来设置控件的显示风格，如背景颜色等。如：
 *
 *```xml
 *<style name="default" border_color="#a0a0a0">
 *<normal     bg_color="#f0f0f0" />
 *</style>
 *```
 *
 */
var TGridItem = /** @class */ (function (_super) {
    __extends(TGridItem, _super);
    function TGridItem(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建grid_item对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TGridItem.create = function (parent, x, y, w, h) {
        return new TGridItem(grid_item_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为grid_item对象(供脚本语言使用)。
     *
     * @param widget grid_item对象。
     *
     * @returns grid_item对象。
     */
    TGridItem.cast = function (widget) {
        return new TGridItem(grid_item_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TGridItem;
}(TWidget));
;
/**
 * grid控件。一个简单的容器控件，用于网格排列一组控件。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *子控件的布局可用layout\_children属性指定。
 *请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 *
 *grid\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于grid\_t控件。
 *
 *在xml中使用"grid"标签创建grid。如：
 *
 *```xml
 *<grid x="0" y="0" w="100%" h="100%" children_layout="default(c=2,r=2,m=5,s=5)">
 *<button name="open:basic" text="Basic"/>
 *<button name="open:button" text="Buttons"/>
 *<button name="open:edit" text="Edits"/>
 *<button name="open:keyboard" text="KeyBoard"/>
 *</grid>
 *```
 *
 *可用通过style来设置控件的显示风格，如背景颜色等。如：
 *
 *```xml
 *<style name="default" border_color="#a0a0a0">
 *<normal     bg_color="#f0f0f0" />
 *</style>
 *```
 *
 */
var TGrid = /** @class */ (function (_super) {
    __extends(TGrid, _super);
    function TGrid(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建grid对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TGrid.create = function (parent, x, y, w, h) {
        return new TGrid(grid_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为grid对象(供脚本语言使用)。
     *
     * @param widget grid对象。
     *
     * @returns grid对象。
     */
    TGrid.cast = function (widget) {
        return new TGrid(grid_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TGrid;
}(TWidget));
;
/**
 * 分组控件。
 *
 *单选按钮在同一个父控件中是互斥的，所以通常将相关的单选按钮放在一个group\_box中。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *子控件的布局可用layout\_children属性指定。
 *请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 *
 *group\_box\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于group\_box\_t控件。
 *
 *在xml中使用"group\_box"标签创建group\_box。如：
 *
 *```xml
 *<group_box x="20" y="230" w="50%" h="90" children_layout="default(r=3,c=1,ym=2,s=10)"
 *<radio_button name="r1" text="Book"/>
 *<radio_button name="r2" text="Food"/>
 *<radio_button name="r3" text="Pencil" value="true"/>
 *</group_box>
 *```
 *
 *可用通过style来设置控件的显示风格，如背景颜色等。如：
 *
 *```xml
 *<style name="default" border_color="#a0a0a0">
 *<normal     bg_color="#f0f0f0" />
 *</style>
 *```
 *
 */
var TGroupBox = /** @class */ (function (_super) {
    __extends(TGroupBox, _super);
    function TGroupBox(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建group_box对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TGroupBox.create = function (parent, x, y, w, h) {
        return new TGroupBox(group_box_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为group_box对象(供脚本语言使用)。
     *
     * @param widget group_box对象。
     *
     * @returns group_box对象。
     */
    TGroupBox.cast = function (widget) {
        return new TGroupBox(group_box_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TGroupBox;
}(TWidget));
;
/**
 * 文本控件。用于显示一行或多行文本。
 *
 *文本控件不会根据文本的长度自动换行，只有文本内容包含换行符时才会换行。
 *
 *如需自动换行请使用[rich\_text\_t](rich_text_t.md)控件。
 *
 *label\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于label\_t控件。
 *
 *在xml中使用"label"标签创建文本控件。如：
 *
 *```xml
 *<label style="center" text="center"/>
 *```
 *
 *> 更多用法请参考：[label.xml](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/label.xml)
 *
 *在c代码中使用函数label\_create创建文本控件。如：
 *
 *
 *> 创建之后，需要用widget\_set\_text或widget\_set\_text\_utf8设置文本内容。
 *
 *> 完整示例请参考：[label demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/label.c)
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<style name="left">
 *<normal text_color="red" text_align_h="left" border_color="#a0a0a0" margin="4" />
 *</style>
 *```
 *
 *> 更多用法请参考：
 *[theme default](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L144)
 *
 */
var TLabel = /** @class */ (function (_super) {
    __extends(TLabel, _super);
    function TLabel(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建label对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TLabel.create = function (parent, x, y, w, h) {
        return new TLabel(label_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置显示字符的个数(小余0时全部显示)。。
     *
     * @param length 最大可显示字符个数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TLabel.prototype.setLength = function (length) {
        return label_set_length(this != null ? (this.nativeObj || this) : null, length);
    };
    /**
     * 根据文本内容调节控件大小。
     *
     * @param min_w 最小宽度。
     * @param max_w 最大宽度。
     * @param min_h 最小高度。
     * @param max_h 最大高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TLabel.prototype.resizeToContent = function (min_w, max_w, min_h, max_h) {
        return label_resize_to_content(this != null ? (this.nativeObj || this) : null, min_w, max_w, min_h, max_h);
    };
    /**
     * 转换为label对象(供脚本语言使用)。
     *
     * @param widget label对象。
     *
     * @returns label对象。
     */
    TLabel.cast = function (widget) {
        return new TLabel(label_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TLabel.prototype, "length", {
        /**
         * 显示字符的个数(小余0时全部显示)。
         *主要用于动态改变显示字符的个数，来实现类似[拨号中...]的动画效果。
         *
         */
        get: function () {
            return label_t_get_prop_length(this.nativeObj);
        },
        set: function (v) {
            this.setLength(v);
        },
        enumerable: true,
        configurable: true
    });
    return TLabel;
}(TWidget));
;
/**
 * overlay窗口。
 *
 *overlay窗口有点类似于非模态的dialog，但是它位置和大小是完全自由的，窗口管理器不会对它做任何限制。
 *
 *如果overlay窗口有透明或半透效果，则不支持窗口动画，但可以通过移动窗口位置来实现类似动画的效果。
 *
 *overlay\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于overlay\_t控件。
 *
 *在xml中使用"overlay"标签创建窗口。需要指定坐标和大小，可以指定主题和动画名称。如：
 *
 *```xml
 *<overlay theme="basic" x="100" y="100" w="200" h="300">
 *...
 *</overlay>
 *```
 *
 *>
 *更多用法请参考：[overlay.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 *
 *在c代码中使用函数overlay\_create创建窗口。如：
 *
 *
 *> 完整示例请参考：[overlay
 *demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/)
 *
 *可用通过style来设置窗口的风格，如背景颜色或图片等。如：
 *
 *```xml
 *<style name="bricks">
 *<normal bg_image="bricks"  bg_image_draw_type="repeat"/>
 *</style>
 *```
 *
 *> 更多用法请参考：[theme
 *default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L0)
 *
 */
var TOverlay = /** @class */ (function (_super) {
    __extends(TOverlay, _super);
    function TOverlay(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建overlay对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TOverlay.create = function (parent, x, y, w, h) {
        return new TOverlay(overlay_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为overlay对象(供脚本语言使用)。
     *
     * @param widget overlay对象。
     *
     * @returns overlay对象。
     */
    TOverlay.cast = function (widget) {
        return new TOverlay(overlay_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TOverlay;
}(TWidget));
;
/**
 * 页面管理控件。
 *
 *只有一个Page处于active状态，处于active状态的Page才能显示并接收事件。
 *常用于实现标签控件中的页面管理。
 *
 *pages\_t是[widget\_t](widget_t.md)的子类控件，
 *widget\_t的函数均适用于pages\_t控件。
 *
 *在xml中使用"pages"标签创建页面管理控件。如：
 *
 *```xml
 *<tab_control x="0" y="0" w="100%" h="100%"
 *<pages x="c" y="20" w="90%" h="-60" value="1">
 *...
 *</pages>
 *<tab_button_group>
 *...
 *</tab_button_group>
 *</tab_control>
 *```
 *
 *> 更多用法请参考：
 *[tab control](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 *
 */
var TPages = /** @class */ (function (_super) {
    __extends(TPages, _super);
    function TPages(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建pages对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TPages.create = function (parent, x, y, w, h) {
        return new TPages(pages_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为pages对象(供脚本语言使用)。
     *
     * @param widget pages对象。
     *
     * @returns pages对象。
     */
    TPages.cast = function (widget) {
        return new TPages(pages_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置当前的Page。
     *
     * @param index 当前Page的序号。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TPages.prototype.setActive = function (index) {
        return pages_set_active(this != null ? (this.nativeObj || this) : null, index);
    };
    /**
     * 通过页面的名字设置当前的Page。
     *
     * @param name 当前Page的名字。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TPages.prototype.setActiveByName = function (name) {
        return pages_set_active_by_name(this != null ? (this.nativeObj || this) : null, name);
    };
    Object.defineProperty(TPages.prototype, "active", {
        /**
         * 当前活跃的page。
         *
         */
        get: function () {
            return pages_t_get_prop_active(this.nativeObj);
        },
        set: function (v) {
            this.setActive(v);
        },
        enumerable: true,
        configurable: true
    });
    return TPages;
}(TWidget));
;
/**
 * 进度条控件。
 *
 *进度条控件可以水平显示也可以垂直显示，由vertical属性决定。
 *
 *progress\_bar\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于progress\_bar\_t控件。
 *
 *在xml中使用"progress\_bar"标签创建进度条控件。如：
 *
 *```xml
 *<progress_bar name="bar1" x="10" y="128" w="240" h="30" value="40"/>
 *<progress_bar name="bar2" x="280" y="128" w="30" h="118" value="20" vertical="true"/>
 *```
 *
 *> 更多用法请参考：
 *[basic demo](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/basic.xml)
 *
 *在c代码中使用函数progress\_bar\_create创建进度条控件。如：
 *
 *
 *> 完整示例请参考：
 *[progress_bar demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/progress_bar.c)
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<style>
 *<normal bg_color="#f0f0f0" text_color="gold" fg_color="#c0c0c0" border_color="#a0a0a0" />
 *</style>
 *```
 *
 *> 更多用法请参考：
 *[theme
 *default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L183)
 *
 */
var TProgressBar = /** @class */ (function (_super) {
    __extends(TProgressBar, _super);
    function TProgressBar(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建progress_bar对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TProgressBar.create = function (parent, x, y, w, h) {
        return new TProgressBar(progress_bar_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为progress_bar对象(供脚本语言使用)。
     *
     * @param widget progress_bar对象。
     *
     * @returns progress_bar对象。
     */
    TProgressBar.cast = function (widget) {
        return new TProgressBar(progress_bar_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置进度条的进度。
     *
     * @param value 进度
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TProgressBar.prototype.setValue = function (value) {
        return progress_bar_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置最大值。
     *
     * @param max 最大值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TProgressBar.prototype.setMax = function (max) {
        return progress_bar_set_max(this != null ? (this.nativeObj || this) : null, max);
    };
    /**
     * 设置进度条的方向。
     *
     * @param vertical 是否为垂直方向。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TProgressBar.prototype.setVertical = function (vertical) {
        return progress_bar_set_vertical(this != null ? (this.nativeObj || this) : null, vertical);
    };
    /**
     * 设置进度条的是否显示文本。
     *
     * @param show_text 是否显示文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TProgressBar.prototype.setShowText = function (show_text) {
        return progress_bar_set_show_text(this != null ? (this.nativeObj || this) : null, show_text);
    };
    /**
     * 获取进度百分比。
     *
     *> 当max为100时，percent和value取整后一致。
     *
     *
     * @returns 返回百分比。
     */
    TProgressBar.prototype.getPercent = function () {
        return progress_bar_get_percent(this != null ? (this.nativeObj || this) : null);
    };
    Object.defineProperty(TProgressBar.prototype, "value", {
        /**
         * 进度条的值[0-100]。
         *
         */
        get: function () {
            return progress_bar_t_get_prop_value(this.nativeObj);
        },
        set: function (v) {
            this.setValue(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressBar.prototype, "max", {
        /**
         * 最大值(缺省为100)。
         *
         */
        get: function () {
            return progress_bar_t_get_prop_max(this.nativeObj);
        },
        set: function (v) {
            this.setMax(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressBar.prototype, "vertical", {
        /**
         * 进度条的是否为垂直方向。
         *
         */
        get: function () {
            return progress_bar_t_get_prop_vertical(this.nativeObj);
        },
        set: function (v) {
            this.setVertical(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TProgressBar.prototype, "showText", {
        /**
         * 是否显示文本。
         *
         */
        get: function () {
            return progress_bar_t_get_prop_show_text(this.nativeObj);
        },
        set: function (v) {
            this.setShowText(v);
        },
        enumerable: true,
        configurable: true
    });
    return TProgressBar;
}(TWidget));
;
/**
 * row。一个简单的容器控件，用于水平排列其子控件。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *子控件的布局可用layout\_children属性指定。
 *请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 *
 *row\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于row\_t控件。
 *
 *在xml中使用"row"标签创建row。如：
 *
 *```xml
 *<row x="0" y="0" w="100%" h="100%" children_layout="default(c=0,r=1)">
 *<button name="open:basic" text="Basic"/>
 *<button name="open:button" text="Buttons"/>
 *<button name="open:edit" text="Edits"/>
 *<button name="open:keyboard" text="KeyBoard"/>
 *</row>
 *```
 *
 *可用通过style来设置控件的显示风格，如背景颜色等。如：
 *
 *```xml
 *<style name="default" border_color="#a0a0a0">
 *<normal     bg_color="#f0f0f0" />
 *</style>
 *```
 *
 */
var TRow = /** @class */ (function (_super) {
    __extends(TRow, _super);
    function TRow(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建row对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TRow.create = function (parent, x, y, w, h) {
        return new TRow(row_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为row对象(供脚本语言使用)。
     *
     * @param widget row对象。
     *
     * @returns row对象。
     */
    TRow.cast = function (widget) {
        return new TRow(row_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TRow;
}(TWidget));
;
/**
 * 滑块控件。
 *
 *slider\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于slider\_t控件。
 *
 *在xml中使用"slider"标签创建滑块控件。如：
 *
 *```xml
 *<slider x="center" y="10" w="80%" h="20" value="10"/>
 *<slider style="img" x="center" y="50" w="80%" h="30" value="20" />
 *<slider style="img" x="center" y="90" w="80%" h="30" value="30" min="5" max="50" step="5"/>
 *```
 *
 *> 更多用法请参考：
 *[basic](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/basic.xml)
 *
 *在c代码中使用函数slider\_create创建滑块控件。如：
 *
 *
 *> 完整示例请参考：
 *[slider demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/slider.c)
 *
 *可用通过style来设置控件的显示风格，如图片和颜色等等。如：
 *
 *```xml
 *<style name="img" bg_image="slider_bg" fg_image="slider_fg">
 *<normal icon="slider_drag"/>
 *<pressed icon="slider_drag_p"/>
 *<over icon="slider_drag_o"/>
 *</style>
 *```
 *
 *> 更多用法请参考：
 *[theme
 *default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L179)
 *
 */
var TSlider = /** @class */ (function (_super) {
    __extends(TSlider, _super);
    function TSlider(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建slider对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TSlider.create = function (parent, x, y, w, h) {
        return new TSlider(slider_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为slider对象(供脚本语言使用)。
     *
     * @param widget slider对象。
     *
     * @returns slider对象。
     */
    TSlider.cast = function (widget) {
        return new TSlider(slider_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置滑块的值。
     *
     * @param value 值
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlider.prototype.setValue = function (value) {
        return slider_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置滑块的最小值。
     *
     * @param min 最小值
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlider.prototype.setMin = function (min) {
        return slider_set_min(this != null ? (this.nativeObj || this) : null, min);
    };
    /**
     * 设置滑块的最大值。
     *
     * @param max 最大值
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlider.prototype.setMax = function (max) {
        return slider_set_max(this != null ? (this.nativeObj || this) : null, max);
    };
    /**
     * 设置滑块的拖动的最小单位。
     *
     * @param step 拖动的最小单位。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlider.prototype.setStep = function (step) {
        return slider_set_step(this != null ? (this.nativeObj || this) : null, step);
    };
    /**
     * 设置bar的宽度或高度。
     *
     * @param bar_size bar的宽度或高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlider.prototype.setBarSize = function (bar_size) {
        return slider_set_bar_size(this != null ? (this.nativeObj || this) : null, bar_size);
    };
    /**
     * 设置滑块的方向。
     *
     * @param vertical 是否为垂直方向。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSlider.prototype.setVertical = function (vertical) {
        return slider_set_vertical(this != null ? (this.nativeObj || this) : null, vertical);
    };
    Object.defineProperty(TSlider.prototype, "value", {
        /**
         * 值。
         *
         */
        get: function () {
            return slider_t_get_prop_value(this.nativeObj);
        },
        set: function (v) {
            this.setValue(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlider.prototype, "min", {
        /**
         * 最小值。
         *
         */
        get: function () {
            return slider_t_get_prop_min(this.nativeObj);
        },
        set: function (v) {
            this.setMin(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlider.prototype, "max", {
        /**
         * 最大值。
         *
         */
        get: function () {
            return slider_t_get_prop_max(this.nativeObj);
        },
        set: function (v) {
            this.setMax(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlider.prototype, "step", {
        /**
         * 拖动的最小单位。
         *
         */
        get: function () {
            return slider_t_get_prop_step(this.nativeObj);
        },
        set: function (v) {
            this.setStep(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlider.prototype, "vertical", {
        /**
         * 滑块的是否为垂直方向。
         *
         */
        get: function () {
            return slider_t_get_prop_vertical(this.nativeObj);
        },
        set: function (v) {
            this.setVertical(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlider.prototype, "barSize", {
        /**
         * 轴的宽度或高度（单位：像素），为0表示为控件的宽度或高度的一半，缺省为0。
         *
         */
        get: function () {
            return slider_t_get_prop_bar_size(this.nativeObj);
        },
        set: function (v) {
            this.setBarSize(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlider.prototype, "draggerSize", {
        /**
         * 滑块的宽度或高度（单位：像素），缺省为10。
         *
         */
        get: function () {
            return slider_t_get_prop_dragger_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlider.prototype, "draggerAdaptToIcon", {
        /**
         * 滑块的宽度或高度是否与icon适应，缺省为true。
         *
         */
        get: function () {
            return slider_t_get_prop_dragger_adapt_to_icon(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TSlider.prototype, "slideWithBar", {
        /**
         * 是否允许在轴上滑动来改变滑块位置，缺省为FALSE。
         *
         */
        get: function () {
            return slider_t_get_prop_slide_with_bar(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TSlider;
}(TWidget));
;
/**
 * 标签按钮分组控件。
 *
 *一个简单的容器，主要用于对标签按钮进行布局和管理。
 *
 *tab\_button\_group\_t是[widget\_t](widget_t.md)的子类控件，
 *widget\_t的函数均适用于tab\_button\_group\_t控件。
 *
 *在xml中使用"tab\_button\_group"标签创建标签按钮分组控件。如：
 *
 *```xml
 *<tab_button_group x="c" y="bottom:10" w="90%" h="30" compact="true"
 *<tab_button text="General"/>
 *<tab_button text="Network" value="true" />
 *<tab_button text="Security"/>
 *</tab_button_group>
 *```
 *
 *> 更多用法请参考：
 *[tab control](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 *
 *可用通过style来设置控件的显示风格，如颜色等等。如：
 *
 *```xml
 *<tab_button_group>
 *<style name="default">
 *<normal/>
 *</style>
 *</tab_button_group>
 *```
 *
 */
var TTabButtonGroup = /** @class */ (function (_super) {
    __extends(TTabButtonGroup, _super);
    function TTabButtonGroup(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建tab_button_group对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TTabButtonGroup.create = function (parent, x, y, w, h) {
        return new TTabButtonGroup(tab_button_group_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置compact。
     *
     * @param compact 是否使用紧凑布局(缺省FALSE)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTabButtonGroup.prototype.setCompact = function (compact) {
        return tab_button_group_set_compact(this != null ? (this.nativeObj || this) : null, compact);
    };
    /**
     * 设置scrollable。
     *
     * @param scrollable 是否允许滚动(缺省FALSE)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTabButtonGroup.prototype.setScrollable = function (scrollable) {
        return tab_button_group_set_scrollable(this != null ? (this.nativeObj || this) : null, scrollable);
    };
    /**
     * 转换tab_button_group对象(供脚本语言使用)。
     *
     * @param widget tab_button_group对象。
     *
     * @returns tab_button_group对象。
     */
    TTabButtonGroup.cast = function (widget) {
        return new TTabButtonGroup(tab_button_group_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TTabButtonGroup.prototype, "compact", {
        /**
         * 紧凑型排版子控件(缺省FALSE)。
         *
         */
        get: function () {
            return tab_button_group_t_get_prop_compact(this.nativeObj);
        },
        set: function (v) {
            this.setCompact(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTabButtonGroup.prototype, "scrollable", {
        /**
         * 是否支持滚动(缺省FALSE)。
         *
         *> 紧凑型排版子控件时才支持滚动。
         *
         */
        get: function () {
            return tab_button_group_t_get_prop_scrollable(this.nativeObj);
        },
        set: function (v) {
            this.setScrollable(v);
        },
        enumerable: true,
        configurable: true
    });
    return TTabButtonGroup;
}(TWidget));
;
/**
 * 标签按钮控件。
 *
 *标签按钮有点类似单选按钮，但点击标签按钮之后会自动切换当前的标签页。
 *
 *tab\_button\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于tab\_button\_t控件。
 *
 *在xml中使用"tab\_button"标签创建标签按钮控件。如：
 *
 *```xml
 *<!-- tab_button_view_page1.xml -->
 *<view w="100%" h="100%">
 *<label x="c" y="m" w="100%" h="60" text="page1" />
 *<button name="close" x="c" y="bottom:100" w="80" h="40" text="Close" />
 *</view>
 *```
 *
 *```xml
 *<!-- tab_button dynamic load UI -->
 *<pages name="pages" x="right" y="0" w="70%" h="100%">
 *</pages>
 *<list_view x="0" y="0" w="30%" h="100%" item_height="40" auto_hide_scroll_bar="true">
 *<scroll_view name="view" x="0"  y="0" w="-12" h="100%">
 *<tab_button text="page1" load_ui="tab_button_view_page1" value="true"/>
 *<tab_button text="page2" load_ui="tab_button_view_page2" />
 *<tab_button text="page3" load_ui="tab_button_view_page3" />
 *<scroll_view />
 *<scroll_bar_d name="bar" x="right" y="0" w="12" h="100%" value="0"/>
 *</list_view>
 *```
 *
 *```xml
 *<!-- tab_button static load UI -->
 *<tab_button_group x="c" y="bottom:10" w="90%" h="30" compact="true"
 *<tab_button text="General"/>
 *<tab_button text="Network" value="true" />
 *<tab_button text="Security"/>
 *</tab_button_group>
 *```
 *
 *标签按钮一般放在标签按钮分组中，布局由标签按钮分组控件决定，不需要指定自己的布局参数和坐标。
 *
 *> 更多用法请参考：
 *[tab control](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<tab_button>
 *<style name="default" border_color="#a0a0a0"  text_color="black">
 *<normal     bg_color="#d0d0d0" />
 *<pressed    bg_color="#f0f0f0" />
 *<over       bg_color="#e0e0e0" />
 *<normal_of_active     bg_color="#f0f0f0" />
 *<pressed_of_active    bg_color="#f0f0f0" />
 *<over_of_active       bg_color="#f0f0f0" />
 *</style>
 *</tab_button>
 *```
 *
 */
var TTabButton = /** @class */ (function (_super) {
    __extends(TTabButton, _super);
    function TTabButton(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建tab_button对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TTabButton.create = function (parent, x, y, w, h) {
        return new TTabButton(tab_button_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换tab_button对象(供脚本语言使用)。
     *
     * @param widget tab_button对象。
     *
     * @returns tab_button对象。
     */
    TTabButton.cast = function (widget) {
        return new TTabButton(tab_button_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置为当前标签。
     *
     * @param value 是否为当前标签。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTabButton.prototype.setValue = function (value) {
        return tab_button_set_value(this != null ? (this.nativeObj || this) : null, value);
    };
    /**
     * 设置控件的图标。
     *
     * @param name 当前项的图标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTabButton.prototype.setIcon = function (name) {
        return tab_button_set_icon(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 设置控件的active图标。
     *
     * @param name 当前项的图标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTabButton.prototype.setActiveIcon = function (name) {
        return tab_button_set_active_icon(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 设置控件动态加载显示UI。
     *
     * @param name 动态加载UI的资源名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TTabButton.prototype.setLoadUi = function (name) {
        return tab_button_set_load_ui(this != null ? (this.nativeObj || this) : null, name);
    };
    Object.defineProperty(TTabButton.prototype, "value", {
        /**
         * 值。
         *
         */
        get: function () {
            return tab_button_t_get_prop_value(this.nativeObj);
        },
        set: function (v) {
            this.setValue(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTabButton.prototype, "loadUi", {
        /**
         * 激活后加载的UI名字。
         *
         */
        get: function () {
            return tab_button_t_get_prop_load_ui(this.nativeObj);
        },
        set: function (v) {
            this.setLoadUi(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTabButton.prototype, "activeIcon", {
        /**
         * 当前项的图标的名称。
         *
         */
        get: function () {
            return tab_button_t_get_prop_active_icon(this.nativeObj);
        },
        set: function (v) {
            this.setActiveIcon(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTabButton.prototype, "icon", {
        /**
         * 非当前项的图标的名称。
         *
         */
        get: function () {
            return tab_button_t_get_prop_icon(this.nativeObj);
        },
        set: function (v) {
            this.setIcon(v);
        },
        enumerable: true,
        configurable: true
    });
    return TTabButton;
}(TWidget));
;
/**
 * 标签控件。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *
 *标签控件通常会包含一个pages控件和一个tab\_button\_group控件。
 *
 *
 *
 *tab\_control\_t是[widget\_t](widget_t.md)的子类控件，
 *widget\_t的函数均适用于tab\_control\_t控件。
 *
 *在xml中使用"tab\_control"标签创建标签控件。如：
 *
 *```xml
 *<tab_control x="0" y="0" w="100%" h="100%"
 *<pages x="c" y="20" w="90%" h="-60" value="1">
 *...
 *</pages>
 *<tab_button_group>
 *...
 *</tab_button_group>
 *</tab_control>
 *```
 *
 *> 更多用法请参考：
 *[tab control](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 *
 */
var TTabControl = /** @class */ (function (_super) {
    __extends(TTabControl, _super);
    function TTabControl(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建tab_control对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TTabControl.create = function (parent, x, y, w, h) {
        return new TTabControl(tab_control_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换tab_control对象(供脚本语言使用)。
     *
     * @param widget tab_control对象。
     *
     * @returns tab_control对象。
     */
    TTabControl.cast = function (widget) {
        return new TTabControl(tab_control_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TTabControl;
}(TWidget));
;
/**
 * 一个通用的容器控件。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *子控件的布局可用layout\_children属性指定。
 *请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 *
 *view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于view\_t控件。
 *
 *在xml中使用"view"标签创建view。如：
 *
 *```xml
 *<view x="0" y="0" w="100%" h="100%" children_layout="default(c=2,r=2,m=5,s=5)">
 *</view>
 *```
 *
 *可用通过style来设置控件的显示风格，如背景颜色等。如：
 *
 *```xml
 *<style name="default" border_color="#a0a0a0">
 *<normal     bg_color="#f0f0f0" />
 *</style>
 *```
 *
 */
var TView = /** @class */ (function (_super) {
    __extends(TView, _super);
    function TView(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建view对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TView.create = function (parent, x, y, w, h) {
        return new TView(view_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为view对象(供脚本语言使用)。
     *
     * @param widget view对象。
     *
     * @returns view对象。
     */
    TView.cast = function (widget) {
        return new TView(view_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TView;
}(TWidget));
;
/**
 * 单个idle的信息。
 *
 */
var TIdleInfo = /** @class */ (function (_super) {
    __extends(TIdleInfo, _super);
    function TIdleInfo(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 转换为idle_info对象(供脚本语言使用)。
     *
     * @param idle idle_info对象。
     *
     * @returns idle_info对象。
     */
    TIdleInfo.cast = function (idle) {
        return new TIdleInfo(idle_info_cast(idle != null ? (idle.nativeObj || idle) : null));
    };
    Object.defineProperty(TIdleInfo.prototype, "ctx", {
        /**
         * idle回调函数上下文。
         *
         */
        get: function () {
            return idle_info_t_get_prop_ctx(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TIdleInfo.prototype, "id", {
        /**
         * idle的ID
         *
         *> 为TK\_INVALID\_ID时表示无效idle。
         *
         */
        get: function () {
            return idle_info_t_get_prop_id(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TIdleInfo;
}(TObject));
;
/**
 * mutable图片控件。
 *
 *像摄像头和视频的图像是变化的，每一帧都不同，我们把这类图片称为mutable image。
 *
 *本控件辅助实现摄像头和视频的显示功能。
 *
 *mutable\_image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于mutable\_image\_t控件。
 *
 *在xml中使用"mutable\_image"标签创建mutable图片控件。如：
 *
 *```xml
 *<mutable_image w="100%" h="100%"/>
 *```
 *
 *>更多用法请参考：
 *[mutable
 *image](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/mutable_image.xml)
 *
 *在c代码中使用函数mutable\_image\_create创建mutable图片控件。如：
 *
 *
 *> 创建之后:
 *>
 *> 需要用mutable\_image\_set\_prepare\_image设置准备图片的回调函数。
 *
 *> 完整示例请参考：[mutable image demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/mutable_image.c)
 *
 *一般不需通过style来设置控件的显示风格，如果在特殊情况下需要，可以参考其它控件。
 *
 */
var TMutableImage = /** @class */ (function (_super) {
    __extends(TMutableImage, _super);
    function TMutableImage(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    return TMutableImage;
}(TImageBase));
;
/**
 * 简单的动态数组，内部存放value对象。
 *
 *访问时属性名称为：
 *
 ** "size"/"length" 用于获取数组的长度。
 ** index 用于访问属性，-1可以用来追加新元素。
 *
 */
var TObjectArray = /** @class */ (function (_super) {
    __extends(TObjectArray, _super);
    function TObjectArray(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建对象。
     *
     *
     * @returns 返回object对象。
     */
    TObjectArray.create = function () {
        return new TObjectArray(object_array_create());
    };
    /**
     * for script gc
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObjectArray.prototype.unref = function () {
        return object_array_unref(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 清除全部属性。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObjectArray.prototype.clearProps = function () {
        return object_array_clear_props(this != null ? (this.nativeObj || this) : null);
    };
    Object.defineProperty(TObjectArray.prototype, "propsSize", {
        /**
         * 属性个数。
         *
         */
        get: function () {
            return object_array_t_get_prop_props_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TObjectArray;
}(TObject));
;
/**
 * GIF图片控件。
 *
 *> 注意：GIF图片的尺寸大于控件大小时会自动缩小图片，但一般的嵌入式系统的硬件加速都不支持图片缩放，
 *所以缩放图片会导致性能明显下降。如果性能不满意时，请确认一下GIF图片的尺寸是否小余控件大小。
 *
 *gif\_image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于gif\_image\_t控件。
 *
 *在xml中使用"gif"标签创建GIF图片控件。如：
 *
 *```xml
 *<gif image="bee"/>
 *```
 *
 *>更多用法请参考：
 *[gif
 *image](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/gif_image.xml)
 *
 *在c代码中使用函数gif\_image\_create创建GIF图片控件。如：
 *
 *
 *> 创建之后:
 *>
 *> 需要用widget\_set\_image设置图片名称。
 *
 *> 完整示例请参考：[gif image demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/gif_image.c)
 *
 *可用通过style来设置控件的显示风格，如背景和边框等。如：
 *
 *```xml
 *<gif>
 *<style name="border">
 *<normal border_color="#000000" bg_color="#e0e0e0" text_color="black"/>
 *</style>
 *</gif>
 *```
 *
 *> 更多用法请参考：[theme default](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml)
 *
 */
var TGifImage = /** @class */ (function (_super) {
    __extends(TGifImage, _super);
    function TGifImage(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建gif_image对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TGifImage.create = function (parent, x, y, w, h) {
        return new TGifImage(gif_image_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为gif_image对象(供脚本语言使用)。
     *
     * @param widget gif_image对象。
     *
     * @returns gif_image对象。
     */
    TGifImage.cast = function (widget) {
        return new TGifImage(gif_image_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TGifImage;
}(TImageBase));
;
/**
 * 对象接口的缺省实现。
 *
 *内部使用有序数组保存所有属性，可以快速查找指定名称的属性。
 *
 */
var TObjectDefault = /** @class */ (function (_super) {
    __extends(TObjectDefault, _super);
    function TObjectDefault(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建对象。
     *
     *
     * @returns 返回object对象。
     */
    TObjectDefault.create = function () {
        return new TObjectDefault(object_default_create());
    };
    /**
     * for script gc
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObjectDefault.prototype.unref = function () {
        return object_default_unref(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 清除全部属性。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TObjectDefault.prototype.clearProps = function () {
        return object_default_clear_props(this != null ? (this.nativeObj || this) : null);
    };
    Object.defineProperty(TObjectDefault.prototype, "propsSize", {
        /**
         * 属性个数。
         *
         */
        get: function () {
            return object_default_t_get_prop_props_size(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TObjectDefault;
}(TObject));
;
/**
 * 图片控件。
 *
 *用来显示一张静态图片，目前支持bmp/png/jpg等格式。
 *
 *如果要显示gif文件，请用[gif\_image](gif_image_t.md)。
 *
 *如果要显示svg文件，请用[svg\_image](svg_image_t.md)。
 *
 *如果需要支持勾选效果，请设置**selectable**属性。
 *
 *如果需要支持点击效果，请设置**clickable**属性。
 *
 *image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于image\_t控件。
 *
 *在xml中使用"image"标签创建图片控件。如：
 *
 *```xml
 *<image style="border" image="earth" draw_type="icon" />
 *```
 *
 *> 更多用法请参考：
 *[image.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/images.xml)
 *
 *在c代码中使用函数image\_create创建图片控件。如：
 *
 *
 *> 创建之后:
 *>
 *> 需要用widget\_set\_image设置图片名称。
 *>
 *> 可以用image\_set\_draw\_type设置图片的绘制方式。
 *
 *> 绘制方式请参考[image\_draw\_type\_t](image_draw_type_t.md)
 *
 *> 绘制方式的属性值和枚举值:
 *[image\_draw\_type\_name\_value](https://github.com/zlgopen/awtk/blob/master/src/base/enums.c#L98)
 *
 *> 完整示例请参考：
 *[image demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/image.c)
 *
 *可用通过style来设置控件的显示风格，如背景和边框等。如：
 *
 *```xml
 *<image>
 *<style name="border">
 *<normal border_color="#000000" bg_color="#e0e0e0" text_color="black"/>
 *</style>
 *</image>
 *```
 *
 *> 更多用法请参考：
 *[theme
 *default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L313)
 *
 */
var TImage = /** @class */ (function (_super) {
    __extends(TImage, _super);
    function TImage(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建image对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TImage.create = function (parent, x, y, w, h) {
        return new TImage(image_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置图片的绘制方式。
     *
     * @param draw_type 绘制方式(仅在没有旋转和缩放时生效)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TImage.prototype.setDrawType = function (draw_type) {
        return image_set_draw_type(this != null ? (this.nativeObj || this) : null, draw_type);
    };
    /**
     * 转换为image对象(供脚本语言使用)。
     *
     * @param widget image对象。
     *
     * @returns image对象。
     */
    TImage.cast = function (widget) {
        return new TImage(image_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TImage.prototype, "drawType", {
        /**
         * 图片的绘制方式(仅在没有旋转和缩放时生效)。
         *
         */
        get: function () {
            return image_t_get_prop_draw_type(this.nativeObj);
        },
        set: function (v) {
            this.setDrawType(v);
        },
        enumerable: true,
        configurable: true
    });
    return TImage;
}(TImageBase));
;
/**
 * 可滚动的combo_box控件。
 *
 */
var TComboBoxEx = /** @class */ (function (_super) {
    __extends(TComboBoxEx, _super);
    function TComboBoxEx(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建combo_box_ex对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TComboBoxEx.create = function (parent, x, y, w, h) {
        return new TComboBoxEx(combo_box_ex_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    return TComboBoxEx;
}(TComboBox));
;
/**
 * 电阻屏校准窗口。
 *
 *calibration\_win\_t是[window\_base\_t](window_base_t.md)的子类控件，
 *window\_base\_t的函数均适用于calibration\_win\_t控件。
 *
 *在xml中使用"calibration\_win"标签创建电阻屏校准窗口。如：
 *
 *```xml
 *<calibration_win name="cali" w="100%" h="100%" text="Please click the center of cross">
 *</calibration_win>
 *```
 *
 *> 更多用法请参考：
 *[window.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/calibration_win.xml)
 *
 *在c代码中使用函数calibration\_win\_create创建窗口。如：
 *
 *
 *通过calibration\_win\_set\_on\_done注册回调函数，用于保存校准数据。
 *
 */
var TCalibrationWin = /** @class */ (function (_super) {
    __extends(TCalibrationWin, _super);
    function TCalibrationWin(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 转换为calibration_win对象(供脚本语言使用)。
     *
     * @param widget calibration_win对象。
     *
     * @returns calibration_win对象。
     */
    TCalibrationWin.cast = function (widget) {
        return new TCalibrationWin(calibration_win_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TCalibrationWin;
}(TWindowBase));
;
/**
 * 弹出窗口。
 *
 *弹出窗口是一种特殊的窗口，大小和位置可以自由设置，主要用来实现右键菜单和combo\_box的下列列表等功能。
 *
 *popup\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于popup\_t控件。
 *
 *在xml中使用"popup"标签创建弹出窗口。如：
 *
 *```xml
 *<popup close_when_click_outside="true" x="c" y="m" w="80%" h="80"
 *<list_view x="0"  y="0" w="100%" h="100%" item_height="30">
 *<scroll_view name="view" x="0"  y="0" w="-12" h="100%">
 *<combo_box_item tr_text="english"/>
 *<combo_box_item tr_text="chinese" />
 *</scroll_view>
 *<scroll_bar_d name="bar" x="right" y="0" w="12" h="100%" value="0"/>
 *</list_view>
 *</popup>
 *```
 *
 *>
 *更多用法请参考：[popup](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 *
 *在c代码中使用函数popup\_create创建弹出窗口。如：
 *
 *
 *> 创建之后，和使用普通窗口是一样的。
 *
 *> 完整示例请参考：[combo_box.c](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/combo_box.c)
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<popup>
 *<style name="default" border_color="#a0a0a0">
 *<normal bg_color="#f0f0f0"/>
 *</style>
 *</popup>
 *```
 *
 *> 更多用法请参考：[theme
 *default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L324)
 *
 */
var TPopup = /** @class */ (function (_super) {
    __extends(TPopup, _super);
    function TPopup(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建popup对象。
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns popup对象。
     */
    TPopup.create = function (parent, x, y, w, h) {
        return new TPopup(popup_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为popup对象(供脚本语言使用)。
     *
     * @param widget popup对象。
     *
     * @returns popup对象。
     */
    TPopup.cast = function (widget) {
        return new TPopup(popup_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 设置点击时是否关闭窗口。
     *
     * @param close_when_click 点击时是否关闭窗口。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TPopup.prototype.setCloseWhenClick = function (close_when_click) {
        return popup_set_close_when_click(this != null ? (this.nativeObj || this) : null, close_when_click);
    };
    /**
     * 设置点击窗口外部时是否关闭窗口。
     *
     * @param close_when_click_outside 点击窗口外部时是否关闭窗口。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TPopup.prototype.setCloseWhenClickOutside = function (close_when_click_outside) {
        return popup_set_close_when_click_outside(this != null ? (this.nativeObj || this) : null, close_when_click_outside);
    };
    Object.defineProperty(TPopup.prototype, "closeWhenClick", {
        /**
         * 点击时是否关闭窗口。
         *
         */
        get: function () {
            return popup_t_get_prop_close_when_click(this.nativeObj);
        },
        set: function (v) {
            this.setCloseWhenClick(v);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TPopup.prototype, "closeWhenClickOutside", {
        /**
         * 点击到窗口外时是否关闭窗口。
         *
         */
        get: function () {
            return popup_t_get_prop_close_when_click_outside(this.nativeObj);
        },
        set: function (v) {
            this.setCloseWhenClickOutside(v);
        },
        enumerable: true,
        configurable: true
    });
    return TPopup;
}(TWindowBase));
;
/**
 * SVG图片控件。
 *
 *svg\_image\_t是[image\_base\_t](image_base_t.md)的子类控件，image\_base\_t的函数均适用于svg\_image\_t控件。
 *
 *在xml中使用"svg"标签创建SVG图片控件。如：
 *
 *```xml
 *<svg image="girl"/>
 *```
 *
 *>更多用法请参考：[svg image](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/svg_image.xml)
 *
 *在c代码中使用函数svg\_image\_create创建SVG图片控件。如：
 *
 *
 *> 创建之后: 需要用widget\_set\_image设置图片名称。
 *
 *> 完整示例请参考：[svg image demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/svg_image.c)
 *
 *可用通过style来设置控件的显示风格，如背景和边框等。如：
 *
 *```xml
 *<svg>
 *<style name="default">
 *<normal border_color="green" fg_color="red" />
 *</style>
 *</svg>
 *```
 *
 *> 更多用法请参考：[theme default](
 *https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml)
 *
 */
var TSvgImage = /** @class */ (function (_super) {
    __extends(TSvgImage, _super);
    function TSvgImage(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建svg_image对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TSvgImage.create = function (parent, x, y, w, h) {
        return new TSvgImage(svg_image_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 设置控件的图片名称。
     *
     *> 如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。
     *
     * @param name 图片名称，该图片必须存在于资源管理器。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TSvgImage.prototype.setImage = function (name) {
        return svg_image_set_image(this != null ? (this.nativeObj || this) : null, name);
    };
    /**
     * 转换为svg_image对象(供脚本语言使用)。
     *
     * @param widget svg_image对象。
     *
     * @returns svg_image对象。
     */
    TSvgImage.cast = function (widget) {
        return new TSvgImage(svg_image_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TSvgImage;
}(TImageBase));
;
/**
 * 单个定时器的信息。
 *
 */
var TTimerInfo = /** @class */ (function (_super) {
    __extends(TTimerInfo, _super);
    function TTimerInfo(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 转换为timer_info对象(供脚本语言使用)。
     *
     * @param timer timer_info对象。
     *
     * @returns timer_info对象。
     */
    TTimerInfo.cast = function (timer) {
        return new TTimerInfo(timer_info_cast(timer != null ? (timer.nativeObj || timer) : null));
    };
    Object.defineProperty(TTimerInfo.prototype, "ctx", {
        /**
         * 定时器回调函数的上下文
         *
         */
        get: function () {
            return timer_info_t_get_prop_ctx(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimerInfo.prototype, "id", {
        /**
         * 定时器的ID
         *
         *> 为TK\_INVALID\_ID时表示无效定时器。
         *
         */
        get: function () {
            return timer_info_t_get_prop_id(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    Object.defineProperty(TTimerInfo.prototype, "now", {
        /**
         * 当前时间(相对时间，单位为毫秒)。
         *
         */
        get: function () {
            return timer_info_t_get_prop_now(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TTimerInfo;
}(TObject));
;
/**
 * spinbox控件。
 *
 *一个特殊的数值编辑器，将edit\_t和button\_t进行组合，方便编辑数值。
 *
 *点击向上的按钮将数值增加一个step，点击向下的按钮将数值减小一个step。
 *step的值可以通过step属性进行设置。
 *
 *spin_box\_t是[edit\_t](edit_t.md)的子类控件，edit\_t的函数均适用于spin\_box\_t控件。
 *
 *在xml中使用"spin_box"标签创建spinbox控件。如：
 *
 *```xml
 *<spin_box w="70%" input_type="int" min="-100" max="100" step="5">
 *```
 *
 *>
 *更多用法请参考：[spin_box.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/spinbox.xml)
 *
 *在c代码中使用函数spin_box\_create创建spinbox控件。如：
 *
 *
 *> 创建之后:
 *>
 *> 可以用edit相关函数去设置它的各种属性。
 *
 *> 完整示例请参考：[spin_box
 *demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/spin_box.c)
 *
 *可用通过style来设置控件的显示风格，如背景和边框等。如：
 *
 *```xml
 *<spin_box>
 *<style name="default" border_color="#a0a0a0"  text_color="black" text_align_h="left">
 *<normal     bg_color="#f0f0f0" />
 *<focused    bg_color="#f0f0f0" border_color="black"/>
 *<disable    bg_color="gray" text_color="#d0d0d0" />
 *<error      bg_color="#f0f0f0" text_color="red" />
 *<empty      bg_color="#f0f0f0" text_color="#a0a0a0" />
 *</style>
 *</spin_box>
 *```
 *
 *> 更多用法请参考：[theme
 *default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L128)
 *
 */
var TSpinBox = /** @class */ (function (_super) {
    __extends(TSpinBox, _super);
    function TSpinBox(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建spin_box对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TSpinBox.create = function (parent, x, y, w, h) {
        return new TSpinBox(spin_box_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为spin_box对象(供脚本语言使用)。
     *
     * @param widget spin_box对象。
     *
     * @returns spin_box对象。
     */
    TSpinBox.cast = function (widget) {
        return new TSpinBox(spin_box_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TSpinBox;
}(TEdit));
;
/**
 * system\_bar窗口。
 *
 *system\_bar窗口是一种特殊的窗口，独占LCD顶部区域，用来显示当前窗口的标题和关闭按钮等内容。
 *
 *> system\_bar窗口需要在打开第一个应用程序窗口之前打开。
 *
 *system_bar对两个子控件会做特殊处理：
 *
 ** 1.名为"title"的label控件，自动显示当前主窗口的name或text。
 ** 2.名为"close"的button控件，点击之后向当前主窗口发送EVT\_REQUEST\_CLOSE\_WINDOW消息。
 *
 *system\_bar\_t是[window\_base\_t](window_base_t.md)的子类控件，
 *window\_base\_t的函数均适用于system\_bar\_t控件。
 *
 *在xml中使用"system\_bar"标签创建system\_bar窗口。如：
 *
 *```xml
 *<system_bar h="30">
 *<column x="0" y="0" w="-40" h="100%">
 *<label style="title" x="10" y="m" w="55%" h="100%" name="title"/>
 *<digit_clock style="time" x="r" y="m" w="40%" h="100%" format="hh:mm"/>
 *</column>
 *<button style="close" x="r:5" y="m" w="26" h="26" name="close" text="x"/>
 *</system_bar>
 *```
 *
 *> 更多用法请参考：
 *[system_bar](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/system_bar.xml)
 *
 *在c代码中使用函数system\_bar\_create创建system\_bar窗口。如：
 *
 *
 *> 创建之后，和使用普通窗口是一样的。
 *
 *可用通过style来设置控件的显示风格，如背景颜色等等。如：
 *
 *```xml
 *<system_bar>
 *<style name="default">
 *<normal bg_color="#a0a0a0"/>
 *</style>
 *</system_bar>
 *```
 *
 *> 更多用法请参考：
 *[system_bar.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/system_bar.xml)
 *
 */
var TSystemBar = /** @class */ (function (_super) {
    __extends(TSystemBar, _super);
    function TSystemBar(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建system_bar对象。
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns system_bar对象。
     */
    TSystemBar.create = function (parent, x, y, w, h) {
        return new TSystemBar(system_bar_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为system_bar对象(供脚本语言使用)。
     *
     * @param widget system_bar对象。
     *
     * @returns system_bar对象。
     */
    TSystemBar.cast = function (widget) {
        return new TSystemBar(system_bar_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TSystemBar;
}(TWindowBase));
;
/**
 * 窗口。
 *
 *缺省的应用程序窗口，占用除system\_bar\_t之外的整个区域，请不要修改它的位置和大小(除非你清楚后果)。
 *
 *window\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于window\_t控件。
 *
 *在xml中使用"window"标签创建窗口。无需指定坐标和大小，可以指定主题和动画名称。如：
 *
 *```xml
 *<window theme="basic" anim_hint="htranslate">
 *...
 *</window>
 *```
 *
 *>
 *更多用法请参考：[window.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 *
 *在c代码中使用函数window\_create创建窗口。如：
 *
 *
 *> 无需指定父控件、坐标和大小，使用0即可。
 *
 *> 完整示例请参考：[window
 *demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/)
 *
 *可用通过style来设置窗口的风格，如背景颜色或图片等。如：
 *
 *```xml
 *<style name="bricks">
 *<normal bg_image="bricks"  bg_image_draw_type="repeat"/>
 *</style>
 *```
 *
 *> 更多用法请参考：[theme
 *default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L0)
 *
 */
var TWindow = /** @class */ (function (_super) {
    __extends(TWindow, _super);
    function TWindow(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建window对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TWindow.create = function (parent, x, y, w, h) {
        return new TWindow(window_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 以缺省的方式创建window对象。
     *
     *
     * @returns 对象。
     */
    TWindow.createDefault = function () {
        return new TWindow(window_create_default());
    };
    /**
     * 设置为全屏窗口。
     *
     *>这里全屏是指与LCD相同大小，而非让SDL窗口全屏。
     *
     * @param fullscreen 是否全屏。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWindow.prototype.setFullscreen = function (fullscreen) {
        return window_set_fullscreen(this != null ? (this.nativeObj || this) : null, fullscreen);
    };
    /**
     * 从资源文件中加载并创建window_base对象。本函数在ui_loader/ui_builder_default里实现。
     *
     * @param name window的名称。
     *
     * @returns 对象。
     */
    TWindow.open = function (name) {
        return new TWindow(window_open(name));
    };
    /**
     * 从资源文件中加载并创建window对象。本函数在ui_loader/ui_builder_default里实现。
     *
     * @param name window的名称。
     * @param to_close 关闭该窗口。
     *
     * @returns 对象。
     */
    TWindow.openAndClose = function (name, to_close) {
        return new TWindow(window_open_and_close(name, to_close != null ? (to_close.nativeObj || to_close) : null));
    };
    /**
     * 关闭窗口。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWindow.prototype.close = function () {
        return window_close(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 立即无条件关闭窗口(无动画)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TWindow.prototype.closeForce = function () {
        return window_close_force(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 转换为window对象(供脚本语言使用)。
     *
     * @param widget window对象。
     *
     * @returns window对象。
     */
    TWindow.cast = function (widget) {
        return new TWindow(window_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    Object.defineProperty(TWindow.prototype, "fullscreen", {
        /**
         * 是否全屏。
         *
         *>这里全屏是指与LCD相同大小，而非让SDL窗口全屏。
         *
         */
        get: function () {
            return window_t_get_prop_fullscreen(this.nativeObj);
        },
        set: function (v) {
            this.setFullscreen(v);
        },
        enumerable: true,
        configurable: true
    });
    return TWindow;
}(TWindowBase));
;
/**
 * 软键盘。
 *
 *软键盘是一个特殊的窗口，由编辑器通过输入法自动打开和关闭。
 *
 *这里介绍一下定制软键盘的方法：
 *
 *编辑器输入类型和软键盘UI资源文件的对应关系:
 *
 *| 输入类型       | 软键盘UI资源文件|
 *|----------------|:---------------:|
 *| INPUT\_PHONE    | kb\_phone.xml    |
 *| INPUT\_INT      | kb\_int.xml      |
 *| INPUT\_FLOAT    | kb\_float.xml    |
 *| INPUT\_UINT     | kb\_uint.xml     |
 *| INPUT\_UFLOAT   | kb\_ufloat.xml   |
 *| INPUT\_HEX      | kb\_hex.xml      |
 *| INPUT\_EMAIL    | kb\_ascii.xml    |
 *| INPUT\_PASSWORD | kb\_ascii.xml    |
 *| INPUT\_CUSTOM   | 使用自定义的键盘 |
 *| 其它            | kb\_default.xml  |
 *
 *keyboard中按钮子控件的名称有些特殊要求：
 *
 *|  名称          | 功能            |
 *|----------------|:---------------:|
 *| return         | 回车键          |
 *| action         | 定制按钮        |
 *| backspace      | 删除键          |
 *| tab            | tab键           |
 *| space          | 空格键          |
 *| close          | 关闭软键盘      |
 *| 前缀key:       | 键值            |
 *| 前缀page:      | 切换到页面      |
 *
 *
 *> 更多用法请参考：
 *[kb_default](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/kb_default.xml)
 *
 */
var TKeyboard = /** @class */ (function (_super) {
    __extends(TKeyboard, _super);
    function TKeyboard(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建keyboard对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    TKeyboard.create = function (parent, x, y, w, h) {
        return new TKeyboard(keyboard_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换为keyboard对象(供脚本语言使用)。
     *
     * @param widget keyboard对象。
     *
     * @returns keyboard对象。
     */
    TKeyboard.cast = function (widget) {
        return new TKeyboard(keyboard_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    return TKeyboard;
}(TWindowBase));
;
/**
 * 对话框。 对话框是一种特殊的窗口，大小和位置可以自由设置。
 *
 *AWTK中的对话框可以是模态的，也可以是非模态的。
 *
 *如果dialog有透明或半透效果则不支持窗口动画。
 *
 *> 由于浏览器中无法实现主循环嵌套，因此无法实现模态对话框。
 *如果希望自己写的AWTK应用程序可以在浏览器(包括各种小程序)中运行或演示，
 *请避免使用模态对话框。
 *
 *对话框通常由对话框标题和对话框客户区两部分组成：
 *
 *
 *
 *dialog\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于dialog\_t控件。
 *
 *在xml中使用"dialog"标签创建对话框。如：
 *
 *```xml
 *<dialog anim_hint="center_scale(duration=300)" x="c" y="m" w="80%" h="160" text="Dialog">
 *<dialog_title x="0" y="0" w="100%" h="30" text="Hello AWTK" />
 *<dialog_client x="0" y="bottom" w="100%" h="-30">
 *<label name="" x="center" y="middle:-20" w="200" h="30" text="Are you ready?"/>
 *<button name="quit" x="10" y="bottom:10" w="40%" h="30" text="确定"/>
 *<button name="quit" x="right:10" y="bottom:10" w="40%" h="30" text="取消"/>
 *</dialog_client>
 *</dialog>
 *```
 *
 *如果你不需要对话框的标题，可以这样写：
 *
 *```xml
 *<dialog anim_hint="center_scale(duration=300)" x="c" y="m" w="80%" h="160" text="Dialog">
 *<label name="" x="center" y="middle:-20" w="200" h="30" text="Are you ready?"/>
 *<button name="quit" x="10" y="bottom:10" w="40%" h="30" text="确定"/>
 *<button name="quit" x="right:10" y="bottom:10" w="40%" h="30" text="取消"/>
 *</dialog>
 *```
 *
 *打开非模态对话框时，其用法与普通窗口一样。打开非模态对话框时，还需要调用dialog\_modal。
 *
 *
 *关闭模态对话框用dialog\_quit
 *
 *
 *关闭非模态对话框用window\_close。
 *
 *
 *> 更多用法请参考：
 *[dialog.xml](https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/)
 *
 *> 完整C代码示例请参考：
 *
 ** [非模态对话框](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/dialog.c)
 *
 ** [模态对话框](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/dialog_modal.c)
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<style name="default">
 *<normal border_color="#606060" />
 *</style>
 *```
 *
 *> 更多用法请参考：
 *[theme default]
 *(https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/styles/default.xml#L324)
 *
 */
var TDialog = /** @class */ (function (_super) {
    __extends(TDialog, _super);
    function TDialog(nativeObj) {
        return _super.call(this, nativeObj) || this;
    }
    /**
     * 创建dialog对象。
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns dialog对象。
     */
    TDialog.create = function (parent, x, y, w, h) {
        return new TDialog(dialog_create(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 创建dialog对象，同时创建title/client。
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns dialog对象。
     */
    TDialog.createSimple = function (parent, x, y, w, h) {
        return new TDialog(dialog_create_simple(parent != null ? (parent.nativeObj || parent) : null, x, y, w, h));
    };
    /**
     * 转换dialog对象(供脚本语言使用)。
     *
     * @param widget dialog对象。
     *
     * @returns dialog对象。
     */
    TDialog.cast = function (widget) {
        return new TDialog(dialog_cast(widget != null ? (widget.nativeObj || widget) : null));
    };
    /**
     * 获取title控件。
     *
     *
     * @returns title对象。
     */
    TDialog.prototype.getTitle = function () {
        return new TWidget(dialog_get_title(this != null ? (this.nativeObj || this) : null));
    };
    /**
     * 获取client控件。
     *
     *
     * @returns client对象。
     */
    TDialog.prototype.getClient = function () {
        return new TWidget(dialog_get_client(this != null ? (this.nativeObj || this) : null));
    };
    /**
     * 从资源文件中加载并创建Dialog对象。
     *
     *本函数在ui\_loader/ui\_builder_default里实现。
     *
     * @param name dialog的名称。
     *
     * @returns 对象。
     */
    TDialog.open = function (name) {
        return new TDialog(dialog_open(name));
    };
    /**
     * 设置对话框的标题文本。
     *
     * @param title 标题。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDialog.prototype.setTitle = function (title) {
        return dialog_set_title(this != null ? (this.nativeObj || this) : null, title);
    };
    /**
     * 模态显示对话框。
     *dialog_modal返回后，dialog对象将在下一个idle函数中回收。
     *也就是在dialog_modal调用完成后仍然可以访问dialog中控件，直到本次事件结束。
     *
     *
     * @returns 返回退出吗。
     */
    TDialog.prototype.modal = function () {
        return dialog_modal(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 退出模态显示，关闭对话框。
     *
     *> 比如，在对话框中关闭按钮的事件处理函数中，调用本函数关闭对话框。
     *
     * @param code 退出码，作为dialog_modal的返回值(参考：[dialog_quit_code_t](dialog_quit_code_t.md))。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDialog.prototype.quit = function (code) {
        return dialog_quit(this != null ? (this.nativeObj || this) : null, code);
    };
    /**
     * 检查对话框是否已经退出模态。
     *
     *
     * @returns 返回TRUE表示已经退出，否则表示没有。
     */
    TDialog.prototype.isQuited = function () {
        return dialog_is_quited(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 检查对话框是否为模态对话框。
     *
     *
     * @returns 返回TRUE表示是模态对话框，否则表示不是。
     */
    TDialog.prototype.isModal = function () {
        return dialog_is_modal(this != null ? (this.nativeObj || this) : null);
    };
    /**
     * 显示『短暂提示信息』对话框。
     *
     *主题由dialog_toast.xml文件决定。
     *
     * @param text 文本内容。
     * @param duration 显示时间(单位为毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDialog.toast = function (text, duration) {
        return dialog_toast(text, duration);
    };
    /**
     * 显示『提示信息』对话框。
     *
     *主题由dialog_info.xml文件决定。
     *
     * @param title 标题。
     * @param text 文本内容。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDialog.info = function (title, text) {
        return dialog_info(title, text);
    };
    /**
     * 显示『警告』对话框。
     *
     *主题由dialog_warn.xml文件决定。
     *
     * @param title 标题。
     * @param text 文本内容。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    TDialog.warn = function (title, text) {
        return dialog_warn(title, text);
    };
    /**
     * 显示『确认』对话框。
     *
     *主题由dialog_confirm.xml文件决定。
     *
     * @param title 标题。
     * @param text 文本内容。
     *
     * @returns 返回RET_OK表示确认，否则表示取消。
     */
    TDialog.confirm = function (title, text) {
        return dialog_confirm(title, text);
    };
    Object.defineProperty(TDialog.prototype, "highlight", {
        /**
         * 对话框高亮策略。
         *
         *> 请参考 [对话框高亮策略](https://github.com/zlgopen/awtk/blob/master/docs/dialog_highlight.md)
         *
         */
        get: function () {
            return dialog_t_get_prop_highlight(this.nativeObj);
        },
        enumerable: true,
        configurable: true
    });
    return TDialog;
}(TWindowBase));
;
//# sourceMappingURL=awtk.js.map