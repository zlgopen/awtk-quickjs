export declare function print(str: any): any;
export declare function init(w: number, h: number, name: string, isDesktop: boolean): any;
/**
 * 事件分发器, 用于实现观察者模式。
 *
 */
export declare class TEmitter {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建emitter对象。
     *
     *
     * @returns 对象。
     */
    static create(): TEmitter;
    /**
     * 分发事件。如果当前分发的回调函数返回RET_REMOVE，该回调函数将被移出。
     *禁用状态下，本函数不做任何事情。
     *
     * @param e 事件对象。
     *
     * @returns 如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。
     */
    dispatch(e: TEvent): TRet;
    /**
     * 分发事件。
     *> 对emitter_dispatch的包装，分发一个简单的事件。
     *如果当前分发的回调函数返回RET_STOP，dispatch中断分发，并返回RET_STOP，否则返回RET_OK。
     *
     * @param type 事件类型。
     *
     * @returns
     */
    dispatchSimpleEvent(type: number): TRet;
    /**
     * 注册指定事件的处理函数。
     *
     * @param etype 事件类型。
     * @param handler 事件处理函数。
     * @param ctx 事件处理函数上下文。
     *
     * @returns 返回id，用于emitter_off。
     */
    on(etype: number, handler: Function, ctx: any): number;
    /**
     * 注销指定事件的处理函数。
     *
     * @param id emitter_on返回的ID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    off(id: number): TRet;
    /**
     * 启用。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    enable(): TRet;
    /**
     * 禁用。
     *
     *禁用后emitter_dispatch无效，但可以注册和注销。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    disable(): TRet;
    /**
     * 销毁。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    destroy(): TRet;
    /**
     * 转换为emitter对象(供脚本语言使用)。
     *
     *主要给脚本语言使用。
     *
     * @param emitter emitter对象。
     *
     * @returns 对象。
     */
    static cast(emitter: TEmitter): TEmitter;
}
/**
 * 点。包括一个x坐标和一个y坐标。
 *
 */
export declare class TPoint {
    nativeObj: any;
    constructor(nativeObj: any);
}
/**
 * 点(浮点数)。包括一个x坐标和一个y坐标。
 *
 */
export declare class TPointf {
    nativeObj: any;
    constructor(nativeObj: any);
}
/**
 * 矩形。包括一个x坐标、y坐标、宽度和高度。
 *
 */
export declare class TRectf {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * x坐标。
     *
     */
    get x(): number;
    /**
     * y坐标。
     *
     */
    get y(): number;
    /**
     * 宽度。
     *
     */
    get w(): number;
    /**
     * 高度。
     *
     */
    get h(): number;
}
/**
 * 矩形。包括一个x坐标、y坐标、宽度和高度。
 *
 */
export declare class TRect {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(x: number, y: number, w: number, h: number): TRect;
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
    set(x: number, y: number, w: number, h: number): TRect;
    /**
     * 转换为rect对象。
     *
     *> 供脚本语言使用。
     *
     * @param rect rect对象。
     *
     * @returns rect对象。
     */
    static cast(rect: TRect): TRect;
    /**
     * 销毁rect对象。
     *
     *> 主要供脚本语言使用。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    destroy(): TRet;
    /**
     * x坐标。
     *
     */
    get x(): number;
    /**
     * y坐标。
     *
     */
    get y(): number;
    /**
     * 宽度。
     *
     */
    get w(): number;
    /**
     * 高度。
     *
     */
    get h(): number;
}
/**
 * 位图。
 *
 */
export declare class TBitmap {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建图片对象(一般供脚本语言中使用)。
     *
     *
     * @returns 返回bitmap对象。
     */
    static create(): TBitmap;
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
    static createEx(w: number, h: number, line_length: number, format: TBitmapFormat): TBitmap;
    /**
     * 获取图片一个像素占用的字节数。
     *
     *
     * @returns 返回一个像素占用的字节数。
     */
    getBpp(): number;
    /**
     * 销毁图片(for script only)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    destroy(): TRet;
    /**
     * 获取位图格式对应的颜色位数。
     *
     * @param format 位图格式。
     *
     * @returns 成功返回颜色位数，失败返回0。
     */
    static getBppOfFormat(format: TBitmapFormat): number;
    /**
     * 宽度。
     *
     */
    get w(): number;
    /**
     * 高度。
     *
     */
    get h(): number;
    /**
     * 每一行实际占用的内存(也称为stride或pitch)，一般情况下为w*bpp。
     *
     */
    get lineLength(): number;
    /**
     * 标志。请参考{bitmap_flag_t}。
     *
     */
    get flags(): number;
    /**
     * 格式。请参考{bitmap_format_t}。
     *
     */
    get format(): number;
    /**
     * 名称。
     *
     */
    get name(): string;
}
/**
 * 对象接口。
 *
 */
export declare class TObject extends TEmitter {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 引用计数减1。引用计数为0时，销毁对象。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    unref(): TRet;
    /**
     * 引用计数加1。
     *
     * @param obj object对象。
     *
     * @returns 返回object对象。
     */
    static ref(obj: TObject): TObject;
    /**
     * 获取对象的类型名称。
     *
     *
     * @returns 返回对象的类型名称。
     */
    getType(): string;
    /**
     * 获取对象的描述信息。
     *
     *
     * @returns 返回对象的描述信息。
     */
    getDesc(): string;
    /**
     * 获取对象占用内存的大小。
     *
     *
     * @returns 返回对象占用内存的大小。
     */
    getSize(): number;
    /**
     * 判断对象是否是集合。
     *
     *
     * @returns 返回TRUE表示是集合，否则不是。
     */
    isCollection(): boolean;
    /**
     * 设置对象的名称。
     *
     * @param name 对象的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setName(name: string): TRet;
    /**
     * 比较两个对象。
     *
     * @param other 比较的object对象。
     *
     * @returns 返回比较结果。
     */
    compare(other: TObject): number;
    /**
     * 获取指定属性的值。
     *
     * @param name 属性的名称。
     * @param v 返回属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    getProp(name: string, v: TValue): TRet;
    /**
     * 获取指定属性的字符串类型的值。
     *
     * @param name 属性的名称。
     *
     * @returns 返回指定属性的字符串类型的值。
     */
    getPropStr(name: string): string;
    /**
     * 获取指定属性的指针类型的值。
     *
     * @param name 属性的名称。
     *
     * @returns 返回指定属性的指针类型的值。
     */
    getPropPointer(name: string): any;
    /**
     * 获取指定属性的object类型的值。
     *
     * @param name 属性的名称。
     *
     * @returns 返回指定属性的object类型的值。
     */
    getPropObject(name: string): TObject;
    /**
     * 获取指定属性的整数类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的整数类型的值。
     */
    getPropInt(name: string, defval: number): number;
    /**
     * 获取指定属性的bool类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的bool类型的值。
     */
    getPropBool(name: string, defval: boolean): boolean;
    /**
     * 获取指定属性的浮点数类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的浮点数类型的值。
     */
    getPropFloat(name: string, defval: number): number;
    /**
     * 获取指定属性的浮点数类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的浮点数类型的值。
     */
    getPropDouble(name: string, defval: number): number;
    /**
     * 删除指定属性。
     *
     * @param name 属性的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    removeProp(name: string): TRet;
    /**
     * 设置指定属性的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setProp(name: string, value: TValue): TRet;
    /**
     * 设置指定属性的字符串类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropStr(name: string, value: string): TRet;
    /**
     * 设置指定属性的object类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropObject(name: string, value: TObject): TRet;
    /**
     * 设置指定属性的整数类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropInt(name: string, value: any): TRet;
    /**
     * 设置指定属性的bool类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropBool(name: string, value: any): TRet;
    /**
     * 设置指定属性的浮点数类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropFloat(name: string, value: any): TRet;
    /**
     * 设置指定属性的浮点数类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropDouble(name: string, value: any): TRet;
    /**
     * 拷贝指定的属性。
     *
     * @param src 源对象。
     * @param name 属性的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    copyProp(src: TObject, name: string): TRet;
    /**
     * 拷贝全部的属性。
     *
     * @param src 源对象。
     * @param overwrite 如果属性存在是否覆盖。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    copyProps(src: TObject, overwrite: boolean): TRet;
    /**
     * 检查是否存在指定的属性。
     *
     * @param name 属性的名称。
     *
     * @returns 返回TRUE表示存在，否则表示不存在。
     */
    hasProp(name: string): boolean;
    /**
     * 计算一个表达式，表达式中引用的变量从prop中获取。
     *
     * @param expr 表达式。
     * @param v 返回计算结果。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    eval(expr: string, v: TValue): TRet;
    /**
     * 检查是否可以执行指定的命令。
     *
     * @param name 命令的名称。
     * @param args 命令的参数。
     *
     * @returns 返回TRUE表示可以执行，否则表示不可以执行。
     */
    canExec(name: string, args: string): boolean;
    /**
     * 执行指定的命令。
     *
     * @param name 命令的名称。
     * @param args 命令的参数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    execute(name: string, args: string): TRet;
    /**
     * 触发EVT_PROPS_CHANGED事件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    notifyChanged(): TRet;
    /**
     * 检查是否存在指定的属性。
     *
     * @param path 属性的path，各级之间用.分隔。
     *
     * @returns 返回TRUE表示存在，否则表示不存在。
     */
    hasPropByPath(path: string): boolean;
    /**
     * 获取指定属性的字符串类型的值。
     *
     * @param path 属性的path。
     *
     * @returns 返回指定属性的字符串类型的值。
     */
    getPropStrByPath(path: string): string;
    /**
     * 获取指定属性的指针类型的值。
     *
     * @param path 属性的path。
     *
     * @returns 返回指定属性的指针类型的值。
     */
    getPropPointerByPath(path: string): any;
    /**
     * 获取指定属性的object类型的值。
     *
     * @param path 属性的path。
     *
     * @returns 返回指定属性的object类型的值。
     */
    getPropObjectByPath(path: string): TObject;
    /**
     * 获取指定属性的整数类型的值。
     *
     * @param path 属性的path。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的整数类型的值。
     */
    getPropIntByPath(path: string, defval: number): number;
    /**
     * 获取指定属性的bool类型的值。
     *
     * @param path 属性的path。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的bool类型的值。
     */
    getPropBoolByPath(path: string, defval: boolean): boolean;
    /**
     * 获取指定属性的浮点数类型的值。
     *
     *e
     *
     * @param path 属性的path。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的浮点数类型的值。
     */
    getPropFloatByPath(path: string, defval: number): number;
    /**
     * 设置指定属性的值。
     *
     * @param path 属性的path。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropByPath(path: string, value: TValue): TRet;
    /**
     * 设置指定属性的字符串类型的值。
     *
     * @param path 属性的path。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropStrByPath(path: string, value: string): TRet;
    /**
     * 设置指定属性的object类型的值。
     *
     * @param path 属性的path。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropObjectByPath(path: string, value: TObject): TRet;
    /**
     * 设置指定属性的整数类型的值。
     *
     * @param path 属性的path。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropIntByPath(path: string, value: any): TRet;
    /**
     * 设置指定属性的bool类型的值。
     *
     * @param path 属性的path。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropBoolByPath(path: string, value: any): TRet;
    /**
     * 设置指定属性的浮点数类型的值。
     *
     * @param path 属性的path。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropFloatByPath(path: string, value: any): TRet;
    /**
     * 检查是否可以执行指定的命令。
     *
     * @param path 命令的path。
     * @param args 命令的参数。
     *
     * @returns 返回TRUE表示可以执行，否则表示不可以执行。
     */
    canExecByPath(path: string, args: string): boolean;
    /**
     * 执行指定的命令。
     *
     * @param path 命令的path。
     * @param args 命令的参数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    executeByPath(path: string, args: string): TRet;
    /**
     * 获取指定属性的int8类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的int8类型的值。
     */
    getPropInt8(name: string, defval: number): number;
    /**
     * 设置指定属性的int8类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropInt8(name: string, value: any): TRet;
    /**
     * 获取指定属性的uint8类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的uint8类型的值。
     */
    getPropUint8(name: string, defval: number): number;
    /**
     * 设置指定属性的uint8类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropUint8(name: string, value: any): TRet;
    /**
     * 获取指定属性的int16类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的int16类型的值。
     */
    getPropInt16(name: string, defval: number): number;
    /**
     * 设置指定属性的int16类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropInt16(name: string, value: any): TRet;
    /**
     * 获取指定属性的uint16类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的uint16类型的值。
     */
    getPropUint16(name: string, defval: number): number;
    /**
     * 设置指定属性的uint16类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropUint16(name: string, value: any): TRet;
    /**
     * 获取指定属性的int32类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的int32类型的值。
     */
    getPropInt32(name: string, defval: number): number;
    /**
     * 设置指定属性的int32类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropInt32(name: string, value: any): TRet;
    /**
     * 获取指定属性的uint32类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的uint32类型的值。
     */
    getPropUint32(name: string, defval: number): number;
    /**
     * 设置指定属性的uint32类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropUint32(name: string, value: any): TRet;
    /**
     * 获取指定属性的int64类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的int64类型的值。
     */
    getPropInt64(name: string, defval: number): number;
    /**
     * 设置指定属性的int64类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropInt64(name: string, value: any): TRet;
    /**
     * 获取指定属性的uint64类型的值。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回指定属性的uint64类型的值。
     */
    getPropUint64(name: string, defval: number): number;
    /**
     * 设置指定属性的uint64类型的值。
     *
     * @param name 属性的名称。
     * @param value 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropUint64(name: string, value: any): TRet;
    /**
     * 引用计数。
     *
     */
    get refCount(): number;
    /**
     * 对象的名称。
     *
     */
    get name(): string;
    set name(v: string);
}
/**
 * 一个通用数据类型，用来存放整数、浮点数、字符串和其它对象。
 *
 *在C/C++中，一般不需动态创建对象，直接声明并初始化即可。如：
 *
 *
 *
 *> 在脚本语言中，需要动态创建对象。
 *
 */
export declare class TValue {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 设置类型为bool的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setBool(value: any): TValue;
    /**
     * 获取类型为bool的值。
     *
     *
     * @returns 值。
     */
    bool(): boolean;
    /**
     * 设置类型为int8的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setInt8(value: any): TValue;
    /**
     * 获取类型为int8的值。
     *
     *
     * @returns 值。
     */
    int8(): number;
    /**
     * 设置类型为uint8的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setUint8(value: any): TValue;
    /**
     * 获取类型为uint8的值。
     *
     *
     * @returns 值。
     */
    uint8(): number;
    /**
     * 设置类型为int16的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setInt16(value: any): TValue;
    /**
     * 获取类型为int16的值。
     *
     *
     * @returns 值。
     */
    int16(): number;
    /**
     * 设置类型为uint16的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setUint16(value: any): TValue;
    /**
     * 获取类型为uint16的值。
     *
     *
     * @returns 值。
     */
    uint16(): number;
    /**
     * 设置类型为int32的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setInt32(value: any): TValue;
    /**
     * 获取类型为int32的值。
     *
     *
     * @returns 值。
     */
    int32(): number;
    /**
     * 设置类型为uint32的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setUint32(value: any): TValue;
    /**
     * 设置类型为int64的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setInt64(value: any): TValue;
    /**
     * 获取类型为int64的值。
     *
     *
     * @returns 值。
     */
    int64(): number;
    /**
     * 设置类型为uint64的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setUint64(value: any): TValue;
    /**
     * 获取类型为uint64的值。
     *
     *
     * @returns 值。
     */
    uint64(): number;
    /**
     * 设置类型为float\_t的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setFloat(value: any): TValue;
    /**
     * 获取类型为float的值。
     *
     *
     * @returns 值。
     */
    float32(): number;
    /**
     * 设置类型为double的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setFloat64(value: any): TValue;
    /**
     * 获取类型为double的值。
     *
     *
     * @returns 值。
     */
    float64(): number;
    /**
     * 设置类型为字符串的值(并拷贝字符串)。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setStr(value: string): TValue;
    /**
     * 获取类型为字符串的值。
     *
     *
     * @returns 值。
     */
    str(): string;
    /**
     * 获取类型为字符串的值。
     *
     * @param buff 用于格式转换的缓冲区（如果 v 对象为 string 类型的话，不会把字符串数据拷贝到 buff 中）。
     * @param size 缓冲区大小。
     *
     * @returns 值。
     */
    strEx(buff: string, size: number): string;
    /**
     * 判断value是否为空值。
     *
     *
     * @returns 为空值返回TRUE，否则返回FALSE。
     */
    isNull(): boolean;
    /**
     * 判断两个value是否相同。
     *
     * @param other value对象。
     *
     * @returns 为空值返回TRUE，否则返回FALSE。
     */
    equal(other: TValue): boolean;
    /**
     * 转换为int的值。
     *
     *
     * @returns 值。
     */
    int(): number;
    /**
     * 设置类型为int的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setInt(value: any): TValue;
    /**
     * 设置类型为object的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setObject(value: TObject): TValue;
    /**
     * 转换为object的值。
     *
     *
     * @returns 值。
     */
    object(): TObject;
    /**
     * 设置类型为token的值。
     *
     * @param value 待设置的值。
     *
     * @returns value对象本身。
     */
    setToken(value: any): TValue;
    /**
     * 获取token的值。
     *
     *
     * @returns 值。
     */
    token(): number;
    /**
     * 创建value对象。
     *
     *
     * @returns 对象。
     */
    static create(): TValue;
    /**
     * 销毁value对象。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    destroy(): TRet;
    /**
     * 重置value对象。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    reset(): TRet;
    /**
     * 转换为value对象。
     *
     *> 供脚本语言使用
     *
     * @param value value对象。
     *
     * @returns 对象。
     */
    static cast(value: TValue): TValue;
    /**
     * 获取类型为ID的值。
     *
     *
     * @returns 值。
     */
    id(): string;
    /**
     * 获取类型为func的值。
     *
     *
     * @returns 值。
     */
    func(): any;
    /**
     * 获取类型为func_def的值。
     *
     *
     * @returns 值。
     */
    funcDef(): any;
    /**
     * 获取类型为位图对象。
     *
     *
     * @returns 位图对象。
     */
    bitmap(): any;
    /**
     * 获取类型为矩形区域数据。
     *
     *
     * @returns 返回矩形区域数据。
     */
    rect(): TRect;
}
/**
 * TK全局对象。
 *
 */
export declare class TGlobal {
    /**
     * 初始化基本功能。
     *> 在tk_init之前，应用程序可能需要加载配置文件，
     *> 为了保证这些功能正常工作，可以先调用tk_pre_init来初始化平台、内存和data reader等等。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static preInit(): TRet;
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
    static init(w: number, h: number, app_type: TAppType, app_name: string, app_root: string): TRet;
    /**
     * 进入TK事件主循环。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static run(): TRet;
    /**
     * 退出TK事件主循环。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static quit(): TRet;
    /**
     * 退出TK事件主循环。
     *
     * @param delay 延迟退出的时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static quitEx(delay: number): TRet;
    /**
     * 获取全局指针的X坐标。
     *
     *
     * @returns 返回全局指针的X坐标。
     */
    static getPointerX(): number;
    /**
     * 获取全局指针的Y坐标。
     *
     *
     * @returns 返回全局指针的X坐标。
     */
    static getPointerY(): number;
    /**
     * 获取全局指针是否按下。
     *
     *
     * @returns 返回全局指针是否按下。
     */
    static isPointerPressed(): boolean;
}
/**
 * bidi 类型常量定义。
 *
 */
export declare enum TBidiType {
    /**
     * 自动检查。
     *
     */
    AUTO,
    /**
     * Left-To-Right letter。
     *
     */
    LTR,
    /**
     * Right-To-Left letter。
     *
     */
    RTL,
    /**
     * Left-To-Right letter Override。
     *
     */
    LRO,
    /**
     * Right-To-Left letter Override。
     *
     */
    RLO,
    /**
     * Weak Left To Right paragraph。
     *
     */
    WLTR,
    /**
     * Weak Right To Left paragraph。
     *
     */
    WRTL
}
/**
 * 图片绘制方法常量定义。
 *
 */
export declare enum TImageDrawType {
    /**
     * 缺省显示。将图片按原大小显示在目标矩形的左上角。
     *
     */
    DEFAULT,
    /**
     * 居中显示。将图片按原大小显示在目标矩形的中央。
     *
     */
    CENTER,
    /**
     * 图标显示。同居中显示，但会根据屏幕密度调整大小。
     *
     */
    ICON,
    /**
     * 缩放显示。将图片缩放至目标矩形的大小(不保证宽高成比例)。
     *
     */
    SCALE,
    /**
     * 自动缩放显示。将图片缩放至目标矩形的宽度或高度(选取最小的比例)，并居中显示。
     *
     */
    SCALE_AUTO,
    /**
     * 如果图片比目标矩形大，自动缩小显示，否则居中显示。
     *
     */
    SCALE_DOWN,
    /**
     * 宽度缩放显示。 将图片缩放至目标矩形的宽度，高度按此比例进行缩放，超出不部分不显示。
     *
     */
    SCALE_W,
    /**
     * 高度缩放显示。将图片缩放至目标矩形的高度，宽度按此比例进行缩放，超出不部分不显示。
     *
     */
    SCALE_H,
    /**
     * 填充整个区域。将图片缩放至目标矩形的高度或宽度，包装填满整个目标区域，超出不部分不显示。
     *
     */
    FILL,
    /**
     * 平铺显示。
     *
     */
    REPEAT,
    /**
     * 水平方向平铺显示，垂直方向缩放。
     *
     */
    REPEAT_X,
    /**
     * 垂直方向平铺显示，水平方向缩放。
     *
     */
    REPEAT_Y,
    /**
     * 垂直方向平铺显示，水平方向缩放(从底部到顶部)。
     *
     */
    REPEAT_Y_INVERSE,
    /**
     * 9宫格显示。
     *将图片分成等大小的9块，4个角按原大小显示在目标矩形的4个角，左右上下和中间5块分别缩放显示在对应的目标区域。
     *
     */
    PATCH9,
    /**
     * 水平方向3宫格显示，垂直方向居中显示。
     *将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。
     *
     */
    PATCH3_X,
    /**
     * 垂直方向3宫格显示，水平方向居中显示。
     *将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。
     *
     */
    PATCH3_Y,
    /**
     * 水平方向3宫格显示，垂直方向缩放显示。
     *将图片在水平方向上分成等大小的3块，左右两块按原大小显示在目标矩形的左右，中间一块缩放显示在目标区域中间剩余部分。
     *
     */
    PATCH3_X_SCALE_Y,
    /**
     * 垂直方向3宫格显示，水平方向缩放显示。
     *将图片在垂直方向上分成等大小的3块，上下两块按原大小显示在目标矩形的上下，中间一块缩放显示在目标区域中间剩余部分。
     *
     */
    PATCH3_Y_SCALE_X,
    /**
     * 平铺9宫格显示。
     *将图片分成4个角和5块平铺块，4个角按原大小显示在目标矩形的4个角，其余5块会平铺对应的目标区域。
     *切割方法为（如下图）：
     *如果图片宽度为奇数，则中间一块为一列数据，如果图片宽度为偶数，则中间一块为二列数据，其他数据分为左右块
     *如果图片高度为奇数，则中间一块为一行数据，如果图片高度为偶数，则中间一块为二行数据，其他数据分为上下块
     *中间一块数据根据上面两条规则组成4中情况，分别是一列一行数据，一列两行数据，两列一行数据和两行两列数据
     *
     */
    REPEAT9,
    /**
     * 水平方向3宫格显示，垂直方向居中显示。
     *将图片在水平方向上分成左右相等两块和中间一块，如果图片宽度为奇数，则中间一块为一列数据，如果图片宽度为偶数，则中间一块为二列数据，其他数据分为左右块。
     *左右两块按原大小显示在目标矩形的左右，中间一列像素点平铺显示在目标区域中间剩余部分。
     *
     */
    REPEAT3_X,
    /**
     * 垂直方向3宫格显示，水平方向居中显示。
     *将图片在垂直方向上分成上下相等两块和中间一块，如果图片高度为奇数，则中间一块为一行数据，如果图片高度为偶数，则中间一块为二行数据，其他数据分为上下块
     *上下两块按原大小显示在目标矩形的上下，中间一块平铺显示在目标区域中间剩余部分。
     *
     */
    REPEAT3_Y
}
/**
 * 离线画布 canvas。
 *
 */
export declare class TCanvasOffline {
    nativeObj: any;
    constructor(nativeObj: any);
}
/**
 * 提供基本的绘图功能和状态管理。
 *
 */
export declare class TCanvas {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 获取画布的宽度。
     *
     *
     * @returns 返回画布的宽度。
     */
    getWidth(): number;
    /**
     * 获取画布的高度。
     *
     *
     * @returns 返回画布的高度。
     */
    getHeight(): number;
    /**
     * 获取裁剪区。
     *
     * @param r rect对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    getClipRect(r: TRect): TRet;
    /**
     * 设置裁剪区。
     *
     * @param r rect对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setClipRect(r: TRect): TRet;
    /**
     * 设置裁剪区。
     *
     * @param r rect对象。
     * @param translate 是否将裁剪区的位置加上canvas当前的偏移。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setClipRectEx(r: TRect, translate: boolean): TRet;
    /**
     * 设置填充颜色。
     *
     *> 供脚本语言使用。
     *
     * @param color 颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFillColor(color: string): TRet;
    /**
     * 设置文本颜色。
     *
     *> 供脚本语言使用。
     *
     * @param color 颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTextColor(color: string): TRet;
    /**
     * 设置线条颜色。
     *
     *> 供脚本语言使用。
     *
     * @param color 颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setStrokeColor(color: string): TRet;
    /**
     * 设置全局alpha值。
     *
     * @param alpha alpha值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setGlobalAlpha(alpha: number): TRet;
    /**
     * 平移原点坐标。
     *
     * @param dx x偏移。
     * @param dy y偏移。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    translate(dx: number, dy: number): TRet;
    /**
     * 反向平移原点坐标。
     *
     * @param dx x偏移。
     * @param dy y偏移。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    untranslate(dx: number, dy: number): TRet;
    /**
     * 画垂直线。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param h 高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    drawVline(x: number, y: number, h: number): TRet;
    /**
     * 画水平线。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param w 宽度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    drawHline(x: number, y: number, w: number): TRet;
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
    fillRect(x: number, y: number, w: number, h: number): TRet;
    /**
     * 用填充颜色填充指定矩形。
     *
     *> 如果lcd的颜色格式带alpha通道，连同alpha的值一起修改。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param w 宽度。
     * @param h 高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    clearRect(x: number, y: number, w: number, h: number): TRet;
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
    strokeRect(x: number, y: number, w: number, h: number): TRet;
    /**
     * 设置字体。
     *
     * @param name 字体名称。
     * @param size 字体大小。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFont(name: string, size: number): TRet;
    /**
     * 释放canvas中字体相关的资源。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    resetFont(): TRet;
    /**
     * 计算文本所占的宽度。
     *
     *> 供脚本语言使用。
     *
     * @param str 字符串。
     *
     * @returns 返回文本所占的宽度。
     */
    measureText(str: string): number;
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
    drawText(str: string, x: number, y: number): TRet;
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
    drawTextInRect(str: string, r: TRect): TRet;
    /**
     * 绘制图标。
     *
     * @param img 图片对象。
     * @param cx 中心点x坐标。
     * @param cy 中心点y坐标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    drawIcon(img: TBitmap, cx: number, cy: number): TRet;
    /**
     * 绘制图片。
     *
     * @param img 图片对象。
     * @param src 源区域。
     * @param dst 目的区域。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    drawImage(img: TBitmap, src: TRect, dst: TRect): TRet;
    /**
     * 绘制图片。
     *
     * @param img 图片对象。
     * @param draw_type 绘制类型。
     * @param dst 目的区域。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    drawImageEx(img: TBitmap, draw_type: TImageDrawType, dst: TRect): TRet;
    /**
     * 绘制图片。
     *
     * @param img 图片对象。
     * @param draw_type 绘制类型。
     * @param src 源区域。
     * @param dst 目的区域。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    drawImageEx2(img: TBitmap, draw_type: TImageDrawType, src: TRect, dst: TRect): TRet;
    /**
     * 获取vgcanvas对象。
     *
     *
     * @returns 返回vgcanvas对象。
     */
    getVgcanvas(): TVgcanvas;
    /**
     * 转换为canvas对象(供脚本语言使用)。
     *
     * @param c canvas对象。
     *
     * @returns canvas对象。
     */
    static cast(c: TCanvas): TCanvas;
    /**
     * 释放相关资源。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    reset(): TRet;
    /**
     * 清除canvas中缓存。
     *> 备注：主要用于窗口动画的离线画布绘制完成后重置在线画布，使下一帧中lcd对象的数据保持一致。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    resetCache(): TRet;
    /**
     * x坐标偏移。
     *
     */
    get ox(): number;
    /**
     * y坐标偏移。
     *
     */
    get oy(): number;
    /**
     * 当前字体名称。
     *
     */
    get fontName(): string;
    /**
     * 当前字体大小。
     *
     */
    get fontSize(): number;
    /**
     * 当前全局alpha。
     *
     */
    get globalAlpha(): number;
    set globalAlpha(v: number);
}
/**
 * 剪切板数据类型定义。
 *
 */
export declare enum TClipBoardDataType {
    /**
     * 无数据。
     *
     */
    NONE,
    /**
     * UTF8文本。
     *
     */
    TEXT
}
/**
 * 剪切板接口。
 *
 */
export declare class TClipBoard {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 设置文本(UTF8)数据到剪切板。
     *
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static setText(text: string): TRet;
    /**
     * 从剪切板中获取文本(UTF8)数据。
     *
     *
     * @returns 返回文本数据。
     */
    static getText(): string;
}
/**
 * 对话框退出码。
 *
 *> 一般用作dialog_quit函数的参数。
 *
 */
export declare enum TDialogQuitCode {
    /**
     * 对话框被强行关闭或不关心关闭原因。
     *
     */
    NONE,
    /**
     * 点击“OK”按钮关闭。
     *
     */
    OK,
    /**
     * 点击“YES”按钮关闭。
     *
     */
    YES,
    /**
     * 点击“CANCEL”按钮关闭。
     *
     */
    CANCEL,
    /**
     * 点击“NO”按钮关闭。
     *
     */
    NO,
    /**
     * 点击其它按钮关闭。
     *
     */
    OTHER
}
/**
 * 类型常量定义。
 *
 */
export declare enum TEventType {
    /**
     * 指针按下事件名(pointer_event_t)。
     *
     */
    POINTER_DOWN,
    /**
     * 指针按下事件名，在子控件处理之前触发(pointer_event_t)。
     *
     */
    POINTER_DOWN_BEFORE_CHILDREN,
    /**
     * 指针移动事件名(pointer_event_t)。
     *
     */
    POINTER_MOVE,
    /**
     * 指针移动事件名，在子控件处理之前触发(pointer_event_t)。
     *
     */
    POINTER_MOVE_BEFORE_CHILDREN,
    /**
     * 指针抬起事件名(pointer_event_t)。
     *
     */
    POINTER_UP,
    /**
     * 指针抬起事件名，在子控件处理之前触发(pointer_event_t)。
     *
     */
    POINTER_UP_BEFORE_CHILDREN,
    /**
     * 滚轮事件名(wheel_event_t)。
     *
     */
    WHEEL,
    /**
     * 鼠标滚轮事件名，在子控件处理之前触发(wheel_event_t)。
     *
     */
    WHEEL_BEFORE_CHILDREN,
    /**
     * 取消前一个指针按下事件名(pointer_event_t)。
     *
     */
    POINTER_DOWN_ABORT,
    /**
     * 右键/长按弹出上下文菜单的事件名(pointer_event_t)。
     *
     */
    CONTEXT_MENU,
    /**
     * 指针进入事件名(pointer_event_t)。
     *
     */
    POINTER_ENTER,
    /**
     * 指针离开事件名(pointer_event_t)。
     *
     */
    POINTER_LEAVE,
    /**
     * 长按事件名(pointer_event_t)。
     *
     */
    LONG_PRESS,
    /**
     * 点击事件名(pointer_event_t)。
     *
     */
    CLICK,
    /**
     * 双击事件名(pointer_event_t)。
     *
     */
    DOUBLE_CLICK,
    /**
     * 得到焦点事件名(event_t)。
     *
     */
    FOCUS,
    /**
     * 失去焦点事件名(event_t)。
     *
     */
    BLUR,
    /**
     * 键按下事件名(key_event_t)。
     *
     */
    KEY_DOWN,
    /**
     * 键长按事件名(key_event_t)。
     *
     */
    KEY_LONG_PRESS,
    /**
     * 键按下事件名，在子控件处理之前触发(key_event_t)。
     *
     */
    KEY_DOWN_BEFORE_CHILDREN,
    /**
     * 按键repeat事件名(key_event_t)。
     *
     */
    KEY_REPEAT,
    /**
     * 键抬起事件名(key_event_t)。
     *
     */
    KEY_UP,
    /**
     * 键抬起事件名，在子控件处理之前触发(key_event_t)。
     *
     */
    KEY_UP_BEFORE_CHILDREN,
    /**
     * 即将移动Widget的事件名(event_t)。
     *
     */
    WILL_MOVE,
    /**
     * 移动Widget的事件名(event_t)。
     *
     */
    MOVE,
    /**
     * 即将调整Widget大小的事件名(event_t)。
     *
     */
    WILL_RESIZE,
    /**
     * 调整Widget大小的事件名(event_t)。
     *
     */
    RESIZE,
    /**
     * 即将调整Widget大小/位置的事件名(event_t)。
     *
     */
    WILL_MOVE_RESIZE,
    /**
     * 调整Widget大小/位置的事件名(event_t)。
     *
     */
    MOVE_RESIZE,
    /**
     * 绘制的事件名(paint_event_t)。
     *
     */
    PAINT,
    /**
     * 即将绘制的事件名(paint_event_t)。
     *
     */
    BEFORE_PAINT,
    /**
     * 绘制完成的事件名(paint_event_t)。
     *
     */
    AFTER_PAINT,
    /**
     * 绘制完成(canvas状态已经恢复)的事件名(paint_event_t)。
     *
     */
    PAINT_DONE,
    /**
     * locale改变的事件(event_t)。
     *
     */
    LOCALE_CHANGED,
    /**
     * 控件动画开始事件(event_t)。
     *
     */
    ANIM_START,
    /**
     * 控件动画被主动停止的事件(event_t)。
     *
     */
    ANIM_STOP,
    /**
     * 控件动画被暂停的事件(event_t)。
     *
     */
    ANIM_PAUSE,
    /**
     * 控件动画yoyo/repeat时，完成一次的事件(event_t)。
     *
     */
    ANIM_ONCE,
    /**
     * 控件动画完成事件(event_t)。
     *
     */
    ANIM_END,
    /**
     * 窗口加载完成事件(event_t)。
     *
     */
    WINDOW_LOAD,
    /**
     * 控件加载完成事件(event_t)。
     *
     */
    WIDGET_LOAD,
    /**
     * 窗口即将打开事件(event_t)。
     *如果有窗口动画，在窗口动画开始前触发。如果没有窗口动画，在窗口被加载后的下一次循环中触发。
     *
     */
    WINDOW_WILL_OPEN,
    /**
     * 窗口打开事件(event_t)。
     *如果有窗口动画，在窗口动画完成时触发。如果没有窗口动画，在窗口被加载后的下一次循环中触发。
     *
     */
    WINDOW_OPEN,
    /**
     * 窗口被切换到后台事件(event_t)。
     *打开新窗口时，当前窗口被切换到后台时，对当前窗口触发本事件。
     *
     */
    WINDOW_TO_BACKGROUND,
    /**
     * 窗口被切换到前台事件(event_t)。
     *关闭当前窗口时，前一个窗口被切换到前台时，对前一个窗口触发本事件。
     *
     */
    WINDOW_TO_FOREGROUND,
    /**
     * 窗口关闭事件。
     *
     */
    WINDOW_CLOSE,
    /**
     * 请求关闭窗口的事件(event_t)。
     *
     */
    REQUEST_CLOSE_WINDOW,
    /**
     * 顶层窗口改变的事件(window_event_t)。
     *
     */
    TOP_WINDOW_CHANGED,
    /**
     * 输入法启动(event_t)。
     *
     */
    IM_START,
    /**
     * 输入法停止(event_t)。
     *
     */
    IM_STOP,
    /**
     * 输入法提交输入的文本事件(im_commit_event_t)。
     *
     */
    IM_COMMIT,
    /**
     * 清除编辑器内容(event_t)。
     *
     */
    IM_CLEAR,
    /**
     * 取消编辑，恢复之前的内容(event_t)。
     *
     */
    IM_CANCEL,
    /**
     * 进入预编辑状态(event_t)。
     *
     */
    IM_PREEDIT,
    /**
     * 确认预编辑内容，退出预编辑状态(event_t)。
     *
     */
    IM_PREEDIT_CONFIRM,
    /**
     * 删除预编辑内容，退出预编辑状态event_t)。
     *
     */
    IM_PREEDIT_ABORT,
    /**
     * 输入法请求显示候选字事件(im_candidates_event_t)。
     *
     */
    IM_SHOW_CANDIDATES,
    /**
     * 输入法请求显示预候选字事件(im_candidates_event_t)。
     *
     */
    IM_SHOW_PRE_CANDIDATES,
    /**
     * 输入法语言改变事件(event_t)。
     *
     */
    IM_LANG_CHANGED,
    /**
     * 软键盘Action点击事件(event_t)。
     *
     */
    IM_ACTION,
    /**
     * 请求更新软键盘上的Action按钮的信息(im_action_button_info_event_t)。
     *
     */
    IM_ACTION_INFO,
    /**
     * 开始拖动(event_t)。
     *
     */
    DRAG_START,
    /**
     * 拖动(event_t)。
     *
     */
    DRAG,
    /**
     * 结束拖动(event_t)。
     *
     */
    DRAG_END,
    /**
     * Reset(event_t)。
     *
     */
    RESET,
    /**
     * 在指定的时间内，没有用户输入事件，由窗口管理器触发。
     *
     */
    SCREEN_SAVER,
    /**
     * 内存不足(event_t)。
     *
     */
    LOW_MEMORY,
    /**
     * 内存耗尽(event_t)。
     *
     */
    OUT_OF_MEMORY,
    /**
     * 屏幕即将旋转(event_t)。
     *
     */
    ORIENTATION_WILL_CHANGED,
    /**
     * 屏幕旋转(event_t)。
     *
     */
    ORIENTATION_CHANGED,
    /**
     * 控件创建事件(event_t)。
     *
     */
    WIDGET_CREATED,
    /**
     * 请求退出应用程序事件。
     *点击原生窗口关闭按钮时，通过窗口管理器触发，注册该事件并返回RET_STOP，可以阻止窗口关闭。
     *
     */
    REQUEST_QUIT_APP,
    /**
     * 即将改变主题(event_t)。
     *
     */
    THEME_WILL_CHANGE,
    /**
     * 主题变化(event_t)。
     *
     */
    THEME_CHANGED,
    /**
     * 控件根据自己当前状态即将更新style(event_t)。
     *
     */
    WIDGET_WILL_UPDATE_STYLE,
    /**
     * 控件根据自己当前状态更新style(event_t)。
     *
     */
    WIDGET_UPDATE_STYLE,
    /**
     * 控件加载新的子控件(event_t)。
     *
     */
    WIDGET_ADD_CHILD,
    /**
     * 控件移除子控件(event_t)。
     *
     */
    WIDGET_REMOVE_CHILD,
    /**
     * scroll view开始滚动(event_t)。
     *
     */
    SCROLL_START,
    /**
     * scroll view滚动(event_t)。
     *
     */
    SCROLL,
    /**
     * scroll view结束滚动(event_t)。
     *
     */
    SCROLL_END,
    /**
     * 多点触摸手势(multi_gesture_event_t)。
     *
     */
    MULTI_GESTURE,
    /**
     * 当前看到的页面改变了(event_t)。
     *
     */
    PAGE_CHANGED,
    /**
     * 当前看到的页面正在改变(offset_change_event_t)。
     *
     */
    PAGE_CHANGING,
    /**
     * 资源管理加载某个资源(assets_event_t)。
     *
     */
    ASSET_MANAGER_LOAD_ASSET,
    /**
     * 资源管理卸载某个资源(assets_event_t)。
     *
     */
    ASSET_MANAGER_UNLOAD_ASSET,
    /**
     * 资源管理移除同种资源缓存(assets_event_t)。
     *
     */
    ASSET_MANAGER_CLEAR_CACHE,
    /**
     * 定时器(event_t)。
     *
     */
    TIMER,
    /**
     * 数据到来(event_t)。
     *
     */
    DATA,
    /**
     * 客户连接到来(event_t)。
     *
     */
    CONNECT,
    /**
     * 模型变化。用于fscript实现窗口间通讯(model_event_t)。
     *
     */
    MODEL_CHANGE,
    /**
     * SDL系统事件(system_event_t)。
     *
     */
    SYSTEM,
    /**
     * SDL文件拖入事件(drop_file_event_t)。
     *
     */
    DROP_FILE,
    /**
     * locale_infos加载某个本地化信息(event_t)。
     *
     */
    LOCALE_INFOS_LOAD_INFO,
    /**
     * locale_infos卸载某个本地化信息(event_t)。
     *
     */
    LOCALE_INFOS_UNLOAD_INFO,
    /**
     * 控件进入激活状态(event_t)。
     *
     */
    ACTIVATED,
    /**
     * 控件退出激活状态(event_t)。
     *
     */
    UNACTIVATED,
    /**
     * UI加载完成事件(event_t)。
     *
     */
    UI_LOAD,
    /**
     * event queue其它请求编号起始值。
     *
     */
    REQ_START,
    /**
     * 用户定义事件起始值。
     *
     */
    USER_START,
    /**
     * 无效事件名称。
     *
     */
    NONE,
    /**
     * 对象的属性即将改变的事件名(prop_change_event_t)。
     *
     */
    PROP_WILL_CHANGE,
    /**
     * 对象的属性改变的事件名(prop_change_event_t)。
     *
     */
    PROP_CHANGED,
    /**
     * 对象即将执行命令(cmd_exec_event_t)。
     *
     */
    CMD_WILL_EXEC,
    /**
     * 对象完成执行命令(cmd_exec_event_t)。
     *
     */
    CMD_EXECED,
    /**
     * 对象命令是否能执行指定的命令(cmd_exec_event_t)。
     *
     */
    CMD_CAN_EXEC,
    /**
     * 即将增加和删除集合中的项目(event_t)。
     *
     */
    ITEMS_WILL_CHANGE,
    /**
     * 完成增加和删除集合中的项目(event_t)。
     *
     */
    ITEMS_CHANGED,
    /**
     * 对象的属性改变的事件名(props_event_t)。
     *
     */
    PROPS_CHANGED,
    /**
     * 进度状态(progress_event_t)。
     *
     */
    PROGRESS,
    /**
     * 完成(done_event_t)。
     *
     */
    DONE,
    /**
     * 错误(error_event_t)。
     *
     */
    ERROR,
    /**
     * 对象销毁事件名(event_t)。
     *
     */
    DESTROY,
    /**
     * 值即将改变的事件名(value_change_event_t)。
     *
     */
    VALUE_WILL_CHANGE,
    /**
     * 值改变的事件名(value_change_event_t)。
     *
     */
    VALUE_CHANGED,
    /**
     * 值持续改变(如编辑器正在编辑)的事件名(value_change_event_t)。
     *
     */
    VALUE_CHANGING,
    /**
     * 日志信息。
     *
     */
    LOG_MESSAGE
}
/**
 * 事件基类。
 *
 */
export declare class TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 将事件名转换成事件的值。
     *
     * @param name 事件名。
     *
     * @returns 返回事件的值。
     */
    static fromName(name: string): number;
    /**
     * 转换为event对象。
     *
     *> 供脚本语言使用
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    static cast(event: TEvent): TEvent;
    /**
     * 获取event类型。
     *
     *
     * @returns 返回event类型。
     */
    getType(): number;
    /**
     * 创建event对象。
     *
     *主要给脚本语言使用。
     *
     * @param type 事件类型。
     *
     * @returns 返回事件对象。
     */
    static create(type: number): TEvent;
    /**
     * 销毁事件对象。
     *
     *主要给脚本语言使用。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    destroy(): TRet;
    /**
     * 类型。
     *
     */
    get type(): number;
    /**
     * 结构体的大小。
     *
     */
    get size(): number;
    /**
     * 事件发生的时间点（该时间点并非真实时间）。
     *
     */
    get time(): number;
    /**
     * 事件发生的目标对象。
     *
     */
    get target(): any;
}
/**
 * 字模格式常量定义。
 *
 */
export declare enum TGlyphFormat {
    /**
     * 每个像素占用1个字节(缺省)。
     *
     */
    ALPHA,
    /**
     * 每个像素占用1个比特。
     *
     */
    MONO,
    /**
     * 每个像素占用4个字节。
     *
     */
    RGBA,
    /**
     * 每个像素占用2bit。
     *
     */
    ALPHA2,
    /**
     * 每个像素占用4bit。
     *
     */
    ALPHA4
}
/**
 * idle可以看作是duration为0的定时器。
 *
 *> idle可以用来实现一些异步处理。
 *
 *示例：
 *
 *
 *
 *> 在非GUI线程请用idle\_queue。
 *
 */
export declare class TIdle {
    /**
     * 增加一个idle。
     *
     * @param on_idle idle回调函数，回调函数返回RET_REPEAT，则下次继续执行，否则自动移出。
     * @param ctx idle回调函数的上下文。
     *
     * @returns 返回idle的ID，0表示失败。
     */
    static add(on_idle: Function, ctx: any): number;
    /**
     * 删除指定的idle。
     *
     * @param idle_id idleID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static remove(idle_id: number): TRet;
    /**
     * 根据上下文删除所有对应的idle。
     *
     * @param ctx idle回调函数的上下文
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static removeAllByCtx(ctx: any): TRet;
}
/**
 * 图片管理器。负责加载，解码和缓存图片。
 *
 */
export declare class TImageManager {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 获取缺省的图片管理器。
     *
     *
     * @returns 返回图片管理器对象。
     */
    static instance(): TImageManager;
    /**
     * 获取指定的图片。
     *先从缓存查找，如果没找到，再加载并缓存。
     *
     * @param name 图片名称。
     * @param image 用于返回图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    getBitmap(name: string, image: TBitmap): TRet;
    /**
     * 预加载指定的图片。
     *
     * @param name 图片名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    preload(name: string): TRet;
}
/**
 * 输入类型常量定义。
 *
 */
export declare enum TInputType {
    /**
     * 文本。字符串属性值：text
     *
     */
    TEXT,
    /**
     * 整数。字符串属性值：int
     *
     */
    INT,
    /**
     * 非负整数。字符串属性值：uint
     *
     */
    UINT,
    /**
     * 16进制整数。字符串属性值：hex
     *
     */
    HEX,
    /**
     * 浮点数。字符串属性值：float
     *
     */
    FLOAT,
    /**
     * 非负浮点数。字符串属性值：ufloat
     *
     */
    UFLOAT,
    /**
     * 邮件地址。字符串属性值：email
     *
     */
    EMAIL,
    /**
     * 密码。字符串属性值：password
     *
     */
    PASSWORD,
    /**
     * 电话号码。字符串属性值：phone
     *
     */
    PHONE,
    /**
     * IP Addr V4(如：192.168.1.1)。字符串属性值：ipv4
     *
     */
    IPV4,
    /**
     * 日期(如：2020/02/20)。字符串属性值：date
     *
     */
    DATE,
    /**
     * 时间(时分，如：12:00)。字符串属性值：time
     *
     */
    TIME,
    /**
     * 时间(时分秒，如：12:00:00)。字符串属性值：time_full
     *
     */
    TIME_FULL,
    /**
     * 使用自定义的软键盘(如计算器等应用不希望弹出系统软键盘)。字符串属性值：custom
     *
     */
    CUSTOM,
    /**
     * 使用自定义的密码软键盘。字符串属性值：custom_password
     *
     */
    CUSTOM_PASSWORD,
    /**
     * 纯英文文本。字符串属性值：ascii
     *
     */
    ASCII
}
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
export declare class TInputMethod {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 提交输入文本。
     *
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    commitText(text: string): TRet;
    /**
     * 设置语言。
     *
     *> 有时在同一种语言环境下，也需要输入多种文字，典型的情况是同时输入中文和英文。
     *> 比如T9输入法，可以同时支持中文和英文输入，配合软键盘随时切换输入的语言。
     *> 数字、小写字母、大写字母和符合也可以视为输入的语言。
     *> 主要用于提示输入法引擎选择适当的输入方法。
     *
     * @param lang 语言。格式为语言+国家/地区码。如：zh_cn和en_us等。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLang(lang: string): TRet;
    /**
     * 获取语言。
     *
     *
     * @returns 返回语言。
     */
    getLang(): string;
    /**
     * 提交按键。
     *
     * @param key 键值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    dispatchKey(key: number): TRet;
    /**
     * 提交按键。
     *
     * @param keys 键值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    dispatchKeys(keys: string): TRet;
    /**
     * 分发进入预编辑状态的事件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    dispatchPreedit(): TRet;
    /**
     * 分发确认预编辑状态的事件(提交预编辑内容，退出预编辑状态)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    dispatchPreeditConfirm(): TRet;
    /**
     * 分发取消预编辑状态的事件(提交预编辑内容，退出预编辑状态)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    dispatchPreeditAbort(): TRet;
    /**
     * 获取全局输入法对象。
     *
     *
     * @returns 成功返回输入法对象，失败返回NULL。
     */
    static instance(): TInputMethod;
}
/**
 * key code。
 *
 */
export declare enum TKeyCode {
    /**
     * TK_KEY_RETURN
     *
     */
    KEY_RETURN,
    /**
     * TK_KEY_ESCAPE
     *
     */
    KEY_ESCAPE,
    /**
     * TK_KEY_BACKSPACE
     *
     */
    KEY_BACKSPACE,
    /**
     * TK_KEY_TAB
     *
     */
    KEY_TAB,
    /**
     * TK_KEY_SPACE
     *
     */
    KEY_SPACE,
    /**
     * TK_KEY_EXCLAIM
     *
     */
    KEY_EXCLAIM,
    /**
     * TK_KEY_QUOTEDBL
     *
     */
    KEY_QUOTEDBL,
    /**
     * TK_KEY_HASH
     *
     */
    KEY_HASH,
    /**
     * TK_KEY_PERCENT
     *
     */
    KEY_PERCENT,
    /**
     * TK_KEY_DOLLAR
     *
     */
    KEY_DOLLAR,
    /**
     * TK_KEY_AMPERSAND
     *
     */
    KEY_AMPERSAND,
    /**
     * TK_KEY_QUOTE
     *
     */
    KEY_QUOTE,
    /**
     * TK_KEY_LEFTPAREN
     *
     */
    KEY_LEFTPAREN,
    /**
     * TK_KEY_RIGHTPAREN
     *
     */
    KEY_RIGHTPAREN,
    /**
     * TK_KEY_ASTERISK
     *
     */
    KEY_ASTERISK,
    /**
     * TK_KEY_PLUS
     *
     */
    KEY_PLUS,
    /**
     * TK_KEY_COMMA
     *
     */
    KEY_COMMA,
    /**
     * TK_KEY_MINUS
     *
     */
    KEY_MINUS,
    /**
     * TK_KEY_PERIOD
     *
     */
    KEY_PERIOD,
    /**
     * TK_KEY_SLASH
     *
     */
    KEY_SLASH,
    /**
     * TK_KEY_0
     *
     */
    KEY_0,
    /**
     * TK_KEY_1
     *
     */
    KEY_1,
    /**
     * TK_KEY_2
     *
     */
    KEY_2,
    /**
     * TK_KEY_3
     *
     */
    KEY_3,
    /**
     * TK_KEY_4
     *
     */
    KEY_4,
    /**
     * TK_KEY_5
     *
     */
    KEY_5,
    /**
     * TK_KEY_6
     *
     */
    KEY_6,
    /**
     * TK_KEY_7
     *
     */
    KEY_7,
    /**
     * TK_KEY_8
     *
     */
    KEY_8,
    /**
     * TK_KEY_9
     *
     */
    KEY_9,
    /**
     * TK_KEY_COLON
     *
     */
    KEY_COLON,
    /**
     * TK_KEY_SEMICOLON
     *
     */
    KEY_SEMICOLON,
    /**
     * TK_KEY_LESS
     *
     */
    KEY_LESS,
    /**
     * TK_KEY_EQUAL
     *
     */
    KEY_EQUAL,
    /**
     * TK_KEY_GREATER
     *
     */
    KEY_GREATER,
    /**
     * TK_KEY_QUESTION
     *
     */
    KEY_QUESTION,
    /**
     * TK_KEY_AT
     *
     */
    KEY_AT,
    /**
     * TK_KEY_LEFTBRACKET
     *
     */
    KEY_LEFTBRACKET,
    /**
     * TK_KEY_BACKSLASH
     *
     */
    KEY_BACKSLASH,
    /**
     * TK_KEY_RIGHTBRACKET
     *
     */
    KEY_RIGHTBRACKET,
    /**
     * TK_KEY_CARET
     *
     */
    KEY_CARET,
    /**
     * TK_KEY_UNDERSCORE
     *
     */
    KEY_UNDERSCORE,
    /**
     * TK_KEY_BACKQUOTE
     *
     */
    KEY_BACKQUOTE,
    /**
     * TK_KEY_a
     *
     */
    KEY_a,
    /**
     * TK_KEY_b
     *
     */
    KEY_b,
    /**
     * TK_KEY_c
     *
     */
    KEY_c,
    /**
     * TK_KEY_d
     *
     */
    KEY_d,
    /**
     * TK_KEY_e
     *
     */
    KEY_e,
    /**
     * TK_KEY_f
     *
     */
    KEY_f,
    /**
     * TK_KEY_g
     *
     */
    KEY_g,
    /**
     * TK_KEY_h
     *
     */
    KEY_h,
    /**
     * TK_KEY_i
     *
     */
    KEY_i,
    /**
     * TK_KEY_j
     *
     */
    KEY_j,
    /**
     * TK_KEY_k
     *
     */
    KEY_k,
    /**
     * TK_KEY_l
     *
     */
    KEY_l,
    /**
     * TK_KEY_m
     *
     */
    KEY_m,
    /**
     * TK_KEY_n
     *
     */
    KEY_n,
    /**
     * TK_KEY_o
     *
     */
    KEY_o,
    /**
     * TK_KEY_p
     *
     */
    KEY_p,
    /**
     * TK_KEY_q
     *
     */
    KEY_q,
    /**
     * TK_KEY_r
     *
     */
    KEY_r,
    /**
     * TK_KEY_s
     *
     */
    KEY_s,
    /**
     * TK_KEY_t
     *
     */
    KEY_t,
    /**
     * TK_KEY_u
     *
     */
    KEY_u,
    /**
     * TK_KEY_v
     *
     */
    KEY_v,
    /**
     * TK_KEY_w
     *
     */
    KEY_w,
    /**
     * TK_KEY_x
     *
     */
    KEY_x,
    /**
     * TK_KEY_y
     *
     */
    KEY_y,
    /**
     * TK_KEY_z
     *
     */
    KEY_z,
    /**
     * TK_KEY_A
     *
     */
    KEY_A,
    /**
     * TK_KEY_B
     *
     */
    KEY_B,
    /**
     * TK_KEY_C
     *
     */
    KEY_C,
    /**
     * TK_KEY_D
     *
     */
    KEY_D,
    /**
     * TK_KEY_E
     *
     */
    KEY_E,
    /**
     * TK_KEY_F
     *
     */
    KEY_F,
    /**
     * TK_KEY_G
     *
     */
    KEY_G,
    /**
     * TK_KEY_H
     *
     */
    KEY_H,
    /**
     * TK_KEY_I
     *
     */
    KEY_I,
    /**
     * TK_KEY_J
     *
     */
    KEY_J,
    /**
     * TK_KEY_K
     *
     */
    KEY_K,
    /**
     * TK_KEY_L
     *
     */
    KEY_L,
    /**
     * TK_KEY_M
     *
     */
    KEY_M,
    /**
     * TK_KEY_N
     *
     */
    KEY_N,
    /**
     * TK_KEY_O
     *
     */
    KEY_O,
    /**
     * TK_KEY_P
     *
     */
    KEY_P,
    /**
     * TK_KEY_Q
     *
     */
    KEY_Q,
    /**
     * TK_KEY_R
     *
     */
    KEY_R,
    /**
     * TK_KEY_S
     *
     */
    KEY_S,
    /**
     * TK_KEY_T
     *
     */
    KEY_T,
    /**
     * TK_KEY_U
     *
     */
    KEY_U,
    /**
     * TK_KEY_V
     *
     */
    KEY_V,
    /**
     * TK_KEY_W
     *
     */
    KEY_W,
    /**
     * TK_KEY_X
     *
     */
    KEY_X,
    /**
     * TK_KEY_Y
     *
     */
    KEY_Y,
    /**
     * TK_KEY_Z
     *
     */
    KEY_Z,
    /**
     * TK_KEY_DOT
     *
     */
    KEY_DOT,
    /**
     * TK_KEY_DELETE
     *
     */
    KEY_DELETE,
    /**
     * TK_KEY_LEFTBRACE
     *
     */
    KEY_LEFTBRACE,
    /**
     * TK_KEY_RIGHTBRACE
     *
     */
    KEY_RIGHTBRACE,
    /**
     * TK_KEY_LSHIFT
     *
     */
    KEY_LSHIFT,
    /**
     * TK_KEY_RSHIFT
     *
     */
    KEY_RSHIFT,
    /**
     * TK_KEY_LCTRL
     *
     */
    KEY_LCTRL,
    /**
     * TK_KEY_RCTRL
     *
     */
    KEY_RCTRL,
    /**
     * TK_KEY_LALT
     *
     */
    KEY_LALT,
    /**
     * TK_KEY_RALT
     *
     */
    KEY_RALT,
    /**
     * TK_KEY_CAPSLOCK
     *
     */
    KEY_CAPSLOCK,
    /**
     * TK_KEY_HOME
     *
     */
    KEY_HOME,
    /**
     * TK_KEY_END
     *
     */
    KEY_END,
    /**
     * TK_KEY_INSERT
     *
     */
    KEY_INSERT,
    /**
     * TK_KEY_UP
     *
     */
    KEY_UP,
    /**
     * TK_KEY_DOWN
     *
     */
    KEY_DOWN,
    /**
     * TK_KEY_LEFT
     *
     */
    KEY_LEFT,
    /**
     * TK_KEY_RIGHT
     *
     */
    KEY_RIGHT,
    /**
     * TK_KEY_PAGEUP
     *
     */
    KEY_PAGEUP,
    /**
     * TK_KEY_PAGEDOWN
     *
     */
    KEY_PAGEDOWN,
    /**
     * TK_KEY_F1
     *
     */
    KEY_F1,
    /**
     * TK_KEY_F2
     *
     */
    KEY_F2,
    /**
     * TK_KEY_F3
     *
     */
    KEY_F3,
    /**
     * TK_KEY_F4
     *
     */
    KEY_F4,
    /**
     * TK_KEY_F5
     *
     */
    KEY_F5,
    /**
     * TK_KEY_F6
     *
     */
    KEY_F6,
    /**
     * TK_KEY_F7
     *
     */
    KEY_F7,
    /**
     * TK_KEY_F8
     *
     */
    KEY_F8,
    /**
     * TK_KEY_F9
     *
     */
    KEY_F9,
    /**
     * TK_KEY_F10
     *
     */
    KEY_F10,
    /**
     * TK_KEY_F11
     *
     */
    KEY_F11,
    /**
     * TK_KEY_F12
     *
     */
    KEY_F12,
    /**
     * TK_KEY_MENU
     *
     */
    KEY_MENU,
    /**
     * TK_KEY_COMMAND
     *
     */
    KEY_COMMAND,
    /**
     * TK_KEY_BACK
     *
     */
    KEY_BACK,
    /**
     * TK_KEY_CANCEL
     *
     */
    KEY_CANCEL,
    /**
     * TK_KEY_KP_DIVIDE
     *
     */
    KEY_KP_DIVIDE,
    /**
     * TK_KEY_KP_MULTIPLY
     *
     */
    KEY_KP_MULTIPLY,
    /**
     * TK_KEY_KP_MINUS
     *
     */
    KEY_KP_MINUS,
    /**
     * TK_KEY_KP_PLUS
     *
     */
    KEY_KP_PLUS,
    /**
     * TK_KEY_KP_ENTER
     *
     */
    KEY_KP_ENTER,
    /**
     * TK_KEY_KP_1
     *
     */
    KEY_KP_1,
    /**
     * TK_KEY_KP_2
     *
     */
    KEY_KP_2,
    /**
     * TK_KEY_KP_3
     *
     */
    KEY_KP_3,
    /**
     * TK_KEY_KP_4
     *
     */
    KEY_KP_4,
    /**
     * TK_KEY_KP_5
     *
     */
    KEY_KP_5,
    /**
     * TK_KEY_KP_6
     *
     */
    KEY_KP_6,
    /**
     * TK_KEY_KP_7
     *
     */
    KEY_KP_7,
    /**
     * TK_KEY_KP_8
     *
     */
    KEY_KP_8,
    /**
     * TK_KEY_KP_9
     *
     */
    KEY_KP_9,
    /**
     * TK_KEY_KP_0
     *
     */
    KEY_KP_0,
    /**
     * TK_KEY_KP_PERIOD
     *
     */
    KEY_KP_PERIOD,
    /**
     * TK_KEY_NUMLOCKCLEAR
     *
     */
    KEY_NUMLOCKCLEAR,
    /**
     * TK_KEY_WHEEL
     *
     */
    KEY_WHEEL
}
/**
 * 本地化信息。提供字符串翻译数据管理，当前语言改变的事件通知等等。
 *
 */
export declare class TLocaleInfo {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 获取缺省locale_info。
     *
     *
     * @returns 返回locale_info对象。
     */
    static instance(): TLocaleInfo;
    /**
     * 翻译字符串。
     *
     * @param text 待翻译的文本。
     *
     * @returns 返回翻译之后的字符串。
     */
    tr(text: string): string;
    /**
     * 设置当前的国家和语言。
     *
     * @param language 语言。
     * @param country 国家或地区。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    change(language: string, country: string): TRet;
    /**
     * 注销指定事件的处理函数。
     *
     * @param id locale_info_on返回的ID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    off(id: number): TRet;
}
/**
 * 在某些情况下，需要多个资源管理器。比如在手表系统里，每个应用或表盘，可能放在独立的资源包中，
 *此时优先加载应用自己的资源，如果没有就加载系统的资源。
 *
 */
export declare class TLocaleInfos {
    /**
     * 获取指定小应用程序(applet)的locale_info。
     *
     * @param name 小应用程序(applet)的名称。
     *
     * @returns 返回locale_info对象。
     */
    static ref(name: string): TLocaleInfos;
    /**
     * 释放指定小应用程序(applet)的locale_info。
     *
     * @param locale_info locale_info对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static unref(locale_info: TLocaleInfo): TRet;
    /**
     * 设置全部locale_info的当前国家和语言。
     *
     * @param language 语言。
     * @param country 国家或地区。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static change(language: string, country: string): TRet;
    /**
     * 注册指定事件的处理函数。
     *
     * @param type 事件类型，目前有EVT_LOCALE_INFOS_LOAD_INFO、EVT_LOCALE_INFOS_UNLOAD_INFO。
     * @param on_event 事件处理函数。
     * @param ctx 事件处理函数上下文。
     *
     * @returns 返回id，用于locale_infos_off。
     */
    static on(type: TEventType, on_event: Function, ctx: any): number;
    /**
     * 注销指定事件的处理函数。
     *
     * @param id locale_infos_on返回的ID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static off(id: number): TRet;
    /**
     * 重新加载全部字符串资源。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static reloadAll(): TRet;
}
/**
 * style常量定义。
 *
 */
export declare enum TStyleId {
    /**
     * 背景颜色。
     *
     */
    BG_COLOR,
    /**
     * 前景颜色。
     *
     */
    FG_COLOR,
    /**
     * dragger颜色。
     *
     */
    DRAGGER_COLOR,
    /**
     * 蒙版颜色。
     *
     */
    MASK_COLOR,
    /**
     * 字体名称。
     *
     */
    FONT_NAME,
    /**
     * 字体大小。
     *
     */
    FONT_SIZE,
    /**
     * 字体风格(粗体、斜体等)。
     *
     */
    FONT_STYLE,
    /**
     * 文本颜色。
     *
     */
    TEXT_COLOR,
    /**
     * 高亮文本的字体名称。
     *
     */
    HIGHLIGHT_FONT_NAME,
    /**
     * 高亮文本的字体大小。
     *
     */
    HIGHLIGHT_FONT_SIZE,
    /**
     * 高亮文本的文本颜色。
     *
     */
    HIGHLIGHT_TEXT_COLOR,
    /**
     * 提示文本颜色。
     *
     */
    TIPS_TEXT_COLOR,
    /**
     * 文本水平对齐的方式。
     *
     */
    TEXT_ALIGN_H,
    /**
     * 文本垂直对齐的方式。
     *
     */
    TEXT_ALIGN_V,
    /**
     * 边框颜色。
     *
     */
    BORDER_COLOR,
    /**
     * 边框线宽。
     *
     */
    BORDER_WIDTH,
    /**
     * 边框类型。
     *
     */
    BORDER,
    /**
     * 图片的名称。
     *
     */
    BG_IMAGE,
    /**
     * 图片的显示方式。
     *
     */
    BG_IMAGE_DRAW_TYPE,
    /**
     * 图标的名称。
     *
     */
    ICON,
    /**
     * 图片的名称。
     *
     */
    FG_IMAGE,
    /**
     * 图片的显示方式。
     *
     */
    FG_IMAGE_DRAW_TYPE,
    /**
     * 间距。
     *
     */
    SPACER,
    /**
     * 边距。
     *
     */
    MARGIN,
    /**
     * 左边距。
     *
     */
    MARGIN_LEFT,
    /**
     * 右边距。
     *
     */
    MARGIN_RIGHT,
    /**
     * 顶边距。
     *
     */
    MARGIN_TOP,
    /**
     * 底边距。
     *
     */
    MARGIN_BOTTOM,
    /**
     * 图标的位置。
     *
     */
    ICON_AT,
    /**
     * Active图标的名称。
     *
     */
    ACTIVE_ICON,
    /**
     * X方向的偏移，方便实现按下的效果。
     *
     */
    X_OFFSET,
    /**
     * Y方向的偏移，方便实现按下的效果。
     *
     */
    Y_OFFSET,
    /**
     * 编辑器中选中区域的背景颜色。
     *
     */
    SELECTED_BG_COLOR,
    /**
     * 编辑器中选中区域的前景颜色。
     *
     */
    SELECTED_FG_COLOR,
    /**
     * 编辑器中选中区域的文本颜色。
     *
     */
    SELECTED_TEXT_COLOR,
    /**
     * 圆角半径(仅在WITH_VGCANVAS定义时生效)。
     *
     */
    ROUND_RADIUS,
    /**
     * 左上角圆角半径(仅在WITH_VGCANVAS定义时生效)。
     *
     */
    ROUND_RADIUS_TOP_LEFT,
    /**
     * 右上角圆角半径(仅在WITH_VGCANVAS定义时生效)。
     *
     */
    ROUND_RADIUS_TOP_RIGHT,
    /**
     * 左下角圆角半径(仅在WITH_VGCANVAS定义时生效)。
     *
     */
    ROUND_RADIUS_BOTTOM_LEFT,
    /**
     * 右下角圆角半径(仅在WITH_VGCANVAS定义时生效)。
     *
     */
    ROUND_RADIUS_BOTTOM_RIGHT,
    /**
     * 子控件布局参数。
     *
     */
    CHILDREN_LAYOUT,
    /**
     * 控件布局参数。
     *
     */
    SELF_LAYOUT,
    /**
     * 是否支持焦点停留。
     *
     */
    FOCUSABLE,
    /**
     * 是否启用按键音、触屏音和震动等反馈。
     *
     */
    FEEDBACK,
    /**
     * 是否用clear_rect代替fill_rect绘制背景。
     *
     */
    CLEAR_BG,
    /**
     * 网格线颜色(grid控件)
     *
     */
    GRID_COLOR,
    /**
     * 偶数行背景颜色(grid控件)
     *
     */
    EVEN_BG_COLOR,
    /**
     * 奇数行背景颜色(grid控件)
     *
     */
    ODD_BG_COLOR
}
/**
 * 控件风格。
 *
 *widget从style对象中，获取诸如字体、颜色和图片相关的参数，根据这些参数来绘制界面。
 *
 *
 *
 *属性名称的请参考[style\_id](style_id_t.md)
 *
 */
export declare class TStyle {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * widget状态改变时，通知style更新数据。
     *
     * @param widget 控件对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    notifyWidgetStateChanged(widget: TWidget): TRet;
    /**
     * 检查style对象是否有效
     *
     *
     * @returns 返回是否有效。
     */
    isValid(): boolean;
    /**
     * 获取指定name的整数格式的值。
     *
     * @param name 属性名。
     * @param defval 缺省值。
     *
     * @returns 返回整数格式的值。
     */
    getInt(name: string, defval: number): number;
    /**
     * 获取指定name的无符号整数格式的值。
     *
     * @param name 属性名。
     * @param defval 缺省值。
     *
     * @returns 返回无符号整数格式的值。
     */
    getUint(name: string, defval: number): number;
    /**
     * 获取指定name的字符串格式的值。
     *
     * @param name 属性名。
     * @param defval 缺省值。
     *
     * @returns 返回字符串格式的值。
     */
    getStr(name: string, defval: string): string;
    /**
     * 获取指定状态的指定属性的值。
     *
     * @param state 状态。
     * @param name 属性名。
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    get(state: string, name: string, value: TValue): TRet;
    /**
     * 设置指定状态的指定属性的值(仅仅对mutable的style有效)。
     *
     * @param state 状态。
     * @param name 属性名。
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    set(state: string, name: string, value: TValue): TRet;
    /**
     * 更新风格对象的状态以及对应的数据
     *备注：根据 widget_type 和 style_name 以及 widget_state 在 theme 对象中查找对应的数据并且更新到 style 对象中
     *
     * @param theme theme对象。
     * @param widget_type 控件的类型名。
     * @param style_name style的名称。
     * @param widget_state 控件的状态。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    updateState(theme: TTheme, widget_type: string, style_name: string, widget_state: string): TRet;
    /**
     * 获取风格对象的风格状态
     *
     *
     * @returns 返回风格状态。
     */
    getStyleState(): string;
    /**
     * 检查style是否是mutable的。
     *
     *
     * @returns 返回TRUE表示是，否则表示不是。
     */
    isMutable(): boolean;
    /**
     * 获取 style 的风格类型。
     *
     *
     * @returns 返回风格类型。
     */
    getStyleType(): string;
}
/**
 * SystemInfo常量定义。
 *
 */
export declare enum TSystemInfoFlag {
    /**
     * 无特殊标志。
     *
     */
    NONE,
    /**
     * 使用快速旋转功能。
     *
     */
    FAST_LCD_PORTRAIT
}
/**
 * 窗体样式。
 *
 */
export declare class TTheme {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 获取缺省的窗体样式对象。
     *
     *
     * @returns 返回窗体样式对象。
     */
    static instance(): TTheme;
}
/**
 * 定时器系统。
 *
 *> 本定时器精度较低，最高精度为1000/FPS，如果需要高精度的定时器，请用OS提供的定时器。
 *
 *示例：
 *
 *
 *> 在非GUI线程请用timer\_queue。
 *
 */
export declare class TTimer {
    /**
     * 增加一个timer。
     *
     * @param on_timer timer回调函数。
     * @param ctx timer回调函数的上下文。
     * @param duration 时间(毫秒)。
     *
     * @returns 返回timer的ID，TK_INVALID_ID表示失败。
     */
    static add(on_timer: Function, ctx: any, duration: number): number;
    /**
     * 删除指定的timer。
     *
     * @param timer_id timerID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static remove(timer_id: number): TRet;
    /**
     * 根据上下文删除所有对应的timer。
     *
     * @param ctx timer回调函数的上下文。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static removeAllByCtx(ctx: any): TRet;
    /**
     * 重置指定的timer，重置之后定时器重新开始计时。
     *
     * @param timer_id timerID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static reset(timer_id: number): TRet;
    /**
     * 挂起指定的timer，一般用于不断循环触发的计时器。
     *
     * @param timer_id timerID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static suspend(timer_id: number): TRet;
    /**
     * 唤醒挂起指定的timer，并且重置定时器重新开始计时
     *
     * @param timer_id timerID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static resume(timer_id: number): TRet;
    /**
     * 修改指定的timer的duration，修改之后定时器重新开始计时。
     *
     * @param timer_id timerID。
     * @param duration 新的时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static modify(timer_id: number, duration: number): TRet;
}
/**
 * 垂直对齐的常量定义。
 *
 */
export declare enum TAlignV {
    /**
     * 无效对齐方式。
     *
     */
    NONE,
    /**
     * 居中对齐。
     *
     */
    MIDDLE,
    /**
     * 顶部对齐。
     *
     */
    TOP,
    /**
     * 底部对齐。
     *
     */
    BOTTOM
}
/**
 * 水平对齐的常量定义。
 *
 */
export declare enum TAlignH {
    /**
     * 无效对齐方式。
     *
     */
    NONE,
    /**
     * 居中对齐。
     *
     */
    CENTER,
    /**
     * 左边对齐。
     *
     */
    LEFT,
    /**
     * 右边对齐。
     *
     */
    RIGHT
}
/**
 * 应用程序类型。
 *
 */
export declare enum TAppType {
    /**
     * 嵌入式或移动APP
     *
     */
    MOBILE,
    /**
     * 模拟器。
     *
     */
    SIMULATOR,
    /**
     * 桌面应用程序。
     *
     */
    DESKTOP,
    /**
     * 控制台（没有界面）。
     *
     */
    CONSOLE
}
/**
 * 位图格式常量定义。
 *
 */
export declare enum TBitmapFormat {
    /**
     * 无效格式。
     *
     */
    NONE,
    /**
     * 一个像素占用4个字节，RGBA占一个字节，按内存地址递增。
     *
     */
    RGBA8888,
    /**
     * 一个像素占用4个字节，ABGR占一个字节，按内存地址递增。
     *
     */
    ABGR8888,
    /**
     * 一个像素占用4个字节，BGRA占一个字节，按内存地址递增。
     *
     */
    BGRA8888,
    /**
     * 一个像素占用4个字节，ARGB占一个字节，按内存地址递增。
     *
     */
    ARGB8888,
    /**
     * 一个像素占用2个字节，RGB分别占用5,6,5位, 按内存地址递增。
     *
     */
    RGB565,
    /**
     * 一个像素占用2个字节，BGR分别占用5,6,5位, 按内存地址递增。
     *
     */
    BGR565,
    /**
     * 一个像素占用3个字节，RGB占一个字节，按内存地址递增。
     *
     */
    RGB888,
    /**
     * 一个像素占用3个字节，RGB占一个字节，按内存地址递增。
     *
     */
    BGR888,
    /**
     * 一个像素占用1个字节。
     *
     */
    GRAY,
    /**
     * 一个像素占用1比特。
     *
     */
    MONO
}
/**
 * 位图标志常量定义。
 *
 */
export declare enum TBitmapFlag {
    /**
     * 无特殊标志。
     *
     */
    NONE,
    /**
     * 不透明图片。
     *
     */
    OPAQUE,
    /**
     * 图片内容不会变化。
     *
     */
    IMMUTABLE,
    /**
     * OpenGL Texture, bitmap的id是有效的texture id。
     *
     */
    TEXTURE,
    /**
     * 如果是MUTABLE的图片，更新时需要设置此标志，底层可能会做特殊处理，比如更新图片到GPU。
     *
     */
    CHANGED,
    /**
     * 预乘alpha。
     *
     */
    PREMULTI_ALPHA,
    /**
     * 位图数据已经处理了 lcd 旋转，同时说明 bitmap 的宽高和真实数据的宽高可能不一致
     *
     */
    LCD_ORIENTATION,
    /**
     * 该位图为 GPU 的 fbo 数据。
     *
     */
    GPU_FBO_TEXTURE
}
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
 *
 *>请参考：https://www.w3schools.com/tags/ref_canvas.asp
 *
 */
export declare class TVgcanvas {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 转换为vgcanvas对象(供脚本语言使用)。
     *
     * @param vg vgcanvas对象。
     *
     * @returns vgcanvas对象。
     */
    static cast(vg: TVgcanvas): TVgcanvas;
    /**
     * flush
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    flush(): TRet;
    /**
     * 清除之前的路径，并重新开始一条路径。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    beginPath(): TRet;
    /**
     * 移动当前点到指定点。
     *
     * @param x x坐标。
     * @param y y坐标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    moveTo(x: number, y: number): TRet;
    /**
     * 生成一条线段(从当前点到目标点)。
     *
     * @param x x坐标。
     * @param y y坐标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    lineTo(x: number, y: number): TRet;
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
    quadTo(cpx: number, cpy: number, x: number, y: number): TRet;
    /**
     * 生成一条三次贝塞尔曲线。
     *
     * @param cp1x 控制点1x坐标。
     * @param cp1y 控制点1y坐标。
     * @param cp2x 控制点2x坐标。
     * @param cp2y 控制点2y坐标。
     * @param x x坐标。
     * @param y y坐标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    bezierTo(cp1x: number, cp1y: number, cp2x: number, cp2y: number, x: number, y: number): TRet;
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
    arcTo(x1: number, y1: number, x2: number, y2: number, r: number): TRet;
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
    arc(x: number, y: number, r: number, start_angle: number, end_angle: number, ccw: boolean): TRet;
    /**
     * 检查点是否在当前路径中。
     *
     * @param x x坐标。
     * @param y y坐标。
     *
     * @returns 返回TRUE表示在，否则表示不在。
     */
    isPointInPath(x: number, y: number): boolean;
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
    rect(x: number, y: number, w: number, h: number): TRet;
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
    roundedRect(x: number, y: number, w: number, h: number, r: number): TRet;
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
    ellipse(x: number, y: number, rx: number, ry: number): TRet;
    /**
     * 闭合路径。
     *
     *>闭合路径是指把起点和终点连接起来，形成一个封闭的多边形。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    closePath(): TRet;
    /**
     * 设置路径填充实心与否。
     *
     *>CCW(1)为实心，CW(2)为镂空，设置其他则默认根据非零环绕规则判断(nonzero)。
     *
     * @param dir 填充方法。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    pathWinding(dir: boolean): TRet;
    /**
     * 旋转。
     *
     * @param rad 旋转角度(单位弧度)
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    rotate(rad: number): TRet;
    /**
     * 缩放。
     *
     * @param x x方向缩放比例。
     * @param y y方向缩放比例。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    scale(x: number, y: number): TRet;
    /**
     * 平移。
     *
     * @param x x方向偏移。
     * @param y y方向偏移。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    translate(x: number, y: number): TRet;
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
    transform(a: number, b: number, c: number, d: number, e: number, f: number): TRet;
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
    setTransform(a: number, b: number, c: number, d: number, e: number, f: number): TRet;
    /**
     * 使用当前的path裁剪。
     *>目前只有部分backend支持(如cairo)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    clipPath(): TRet;
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
    clipRect(x: number, y: number, w: number, h: number): TRet;
    /**
     * 矩形区域是否在矩形裁剪中。
     *
     * @param left 矩形区域左边。
     * @param top 矩形区域上边。
     * @param right 矩形区域右边。
     * @param bottom 矩形区域下边。
     *
     * @returns 返回 TURE 则在区域中，返回 FALSE 则不在区域中。
     */
    isRectfInClipRect(left: number, top: number, right: number, bottom: number): boolean;
    /**
     * 设置一个与前一个裁剪区做交集的矩形裁剪区。
     *如果下面这种情况，则不能直接调用 rect_intersect 函数来做矩形交集和 vgcanvas_clip_rect 函数设置裁剪区，而采用本函数做交集。
     *由于缩放和旋转以及平移会导致 vg 的坐标系和上一个裁剪区的坐标系不同，
     *导致直接使用做交集的话，裁剪区会出错。
     *
     *```
     *vgcanvas_clip_rect(vg, old_r.x, old_r.y, old_r.w, old_r.h);
     *vgcanvas_save(vg);
     *vgcanvas_scale(vg, scale_x, scale_y);
     *vgcanvas_rotate(vg, TK_D2R(15));
     *vgcanvas_intersect_clip_rect(vg, r.x, r.y, r.w, r.h);
     *..................
     *vgcanvas_restore(vg);
     *```
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param w 宽度。
     * @param h 高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    intersectClipRect(x: number, y: number, w: number, h: number): TRet;
    /**
     * 填充多边形。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    fill(): TRet;
    /**
     * 画线。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    stroke(): TRet;
    /**
     * 用图片填充/画多边形(可能存在可移植性问题，除非必要请勿使用)。
     *多边形的顶点必须在图片范围内，可以通过矩阵变化画到不同的位置。
     *
     * @param stroke TRUE表示画线FALSE表示填充。
     * @param img 图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    paint(stroke: boolean, img: TBitmap): TRet;
    /**
     * 设置字体的名称。
     *
     * @param font 字体名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFont(font: string): TRet;
    /**
     * 设置字体的大小。
     *
     * @param size 字体大小。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFontSize(size: number): TRet;
    /**
     * 设置文本水平对齐的方式。
     *
     * @param value 取值：left|center|right，必须为常量字符串。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTextAlign(value: string): TRet;
    /**
     * 设置文本垂直对齐的方式。
     *
     * @param value 取值：top|middle|bottom，必须为常量字符串。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTextBaseline(value: string): TRet;
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
    fillText(text: string, x: number, y: number, max_width: number): TRet;
    /**
     * 测量文本的宽度。
     *
     * @param text text
     *
     * @returns 返回text的宽度。
     */
    measureText(text: string): number;
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
    drawImage(img: TBitmap, sx: number, sy: number, sw: number, sh: number, dx: number, dy: number, dw: number, dh: number): TRet;
    /**
     * 绘制图片。
     *
     *备注：
     *当绘制区域大于原图区域时，多余的绘制区域会重复绘制原图区域的东西。（绘制图区按照绘制图片的宽高来绘制的）
     *当绘制图片的宽高和原图的不同，在重复绘制的同时加入缩放。
     *
     * @param img 图片。
     * @param sx 原图区域的 x
     * @param sy 原图区域的 y
     * @param sw 原图区域的 w
     * @param sh 原图区域的 h
     * @param dx 绘制区域的 x
     * @param dy 绘制区域的 y
     * @param dw 绘制区域的 w
     * @param dh 绘制区域的 h
     * @param dst_w 绘制图片的宽
     * @param dst_h 绘制图片的高
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    drawImageRepeat(img: TBitmap, sx: number, sy: number, sw: number, sh: number, dx: number, dy: number, dw: number, dh: number, dst_w: number, dst_h: number): TRet;
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
    drawIcon(img: TBitmap, sx: number, sy: number, sw: number, sh: number, dx: number, dy: number, dw: number, dh: number): TRet;
    /**
     * 设置是否启用反走样。
     *
     * @param value 是否启用反走样。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAntialias(value: any): TRet;
    /**
     * 设置全局透明度。
     *
     * @param alpha global alpha。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setGlobalAlpha(alpha: number): TRet;
    /**
     * 设置线条的宽度。
     *
     * @param value 线宽。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLineWidth(value: any): TRet;
    /**
     * 设置填充颜色。
     *
     * @param color 颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFillColor(color: string): TRet;
    /**
     * 设置线条颜色。
     *
     * @param str 颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setStrokeColor(str: string): TRet;
    /**
     * 设置line cap。
     *
     * @param value 取值：butt|round|square，必须为常量字符串。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLineCap(value: string): TRet;
    /**
     * 设置line join。
     *
     * @param value 取值：bevel|round|miter，必须为常量字符串。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLineJoin(value: string): TRet;
    /**
     * 设置miter limit。
     *
     * @param value miter limit
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMiterLimit(value: any): TRet;
    /**
     * 保存当前的状态。如颜色和矩阵等信息。
     *
     *> save/restore必须配套使用，否则可能导致状态混乱。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    save(): TRet;
    /**
     * 恢复上次save的状态。
     *
     *> save/restore必须配套使用，否则可能导致状态混乱。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    restore(): TRet;
    /**
     * canvas的宽度
     *
     */
    get w(): number;
    /**
     * canvas的高度
     *
     */
    get h(): number;
    /**
     * 一行占的字节
     *
     */
    get stride(): number;
    /**
     * 显示比例。
     *
     */
    get ratio(): number;
    /**
     * 是否启用反走样功能。
     *
     */
    get antiAlias(): boolean;
    /**
     * 线宽。
     *
     */
    get lineWidth(): number;
    set lineWidth(v: number);
    /**
     * 全局alpha。
     *
     */
    get globalAlpha(): number;
    set globalAlpha(v: number);
    /**
     * miter\_limit。
     *@see http://www.w3school.com.cn/tags/canvas_miterlimit.asp
     *
     */
    get miterLimit(): number;
    set miterLimit(v: number);
    /**
     * line\_cap。
     *@see http://www.w3school.com.cn/tags/canvas_linecap.asp
     *
     */
    get lineCap(): string;
    set lineCap(v: string);
    /**
     * line\_join。
     *@see http://www.w3school.com.cn/tags/canvas_linejoin.asp
     *
     */
    get lineJoin(): string;
    set lineJoin(v: string);
    /**
     * 字体。
     *
     */
    get font(): string;
    set font(v: string);
    /**
     * 字体大小。
     *
     */
    get fontSize(): number;
    set fontSize(v: number);
    /**
     * 文本对齐方式。
     *
     *@see http://www.w3school.com.cn/tags/canvas_textalign.asp
     *
     */
    get textAlign(): string;
    set textAlign(v: string);
    /**
     * 文本基线。
     *
     *@see http://www.w3school.com.cn/tags/canvas_textbaseline.asp
     *
     */
    get textBaseline(): string;
    set textBaseline(v: string);
}
/**
 * 线帽类型。
 *
 */
export declare enum TVgcanvasLineCap {
    /**
     * 圆头。
     *
     */
    ROUND,
    /**
     * 方头。
     *
     */
    SQUARE,
    /**
     * 平头。
     *
     */
    BUTT
}
/**
 * 线条连接类型。
 *
 */
export declare enum TVgcanvasLineJoin {
    /**
     * round。
     *
     */
    ROUND,
    /**
     * bevel。
     *
     */
    BEVEL,
    /**
     * mitter。
     *
     */
    MITTER
}
/**
 * 控件的属性。
 *
 */
export declare enum TWidgetProp {
    /**
     * 用于执行某些特殊的命令（比如控制动画的启停），主要是方便MVVM通过属性来控制动画。
     *
     */
    EXEC,
    /**
     * X坐标。
     *
     */
    X,
    /**
     * Y坐标。
     *
     */
    Y,
    /**
     * 宽度。
     *
     */
    W,
    /**
     * 高度。
     *
     */
    H,
    /**
     * 最大高度。
     *
     */
    MAX_H,
    /**
     * 窗口设计时宽度。
     *
     */
    DESIGN_W,
    /**
     * 窗口设计时宽度。
     *
     */
    DESIGN_H,
    /**
     * 窗口大小与设计时大小不同时，是否自动调整子控件的x坐标。
     *
     */
    AUTO_SCALE_CHILDREN_X,
    /**
     * 窗口大小与设计时大小不同时，是否自动调整子控件的y坐标。
     *
     */
    AUTO_SCALE_CHILDREN_Y,
    /**
     * 窗口大小与设计时大小不同时，是否自动调整子控件的宽度。
     *
     */
    AUTO_SCALE_CHILDREN_W,
    /**
     * 窗口大小与设计时大小不同时，是否自动调整子控件的高度。
     *
     */
    AUTO_SCALE_CHILDREN_H,
    /**
     * inputing。
     *
     */
    INPUTING,
    /**
     * always on top。
     *
     */
    ALWAYS_ON_TOP,
    /**
     * caret x。
     *
     */
    CARET_X,
    /**
     * caret y。
     *
     */
    CARET_Y,
    /**
     * 行高。
     *
     */
    LINE_HEIGHT,
    /**
     * 脏矩形超出控件本身大小的最大范围。
     *
     */
    DIRTY_RECT_TOLERANCE,
    /**
     * bidi type(rtl,ltr,auto,wrtl,wltr,lro,rlo)。
     *
     */
    BIDI,
    /**
     * Canvas。
     *
     */
    CANVAS,
    /**
     * Canvas。
     *
     */
    LOCALIZE_OPTIONS,
    /**
     * Native Window。
     *
     */
    NATIVE_WINDOW,
    /**
     * dialog highlight。
     *
     */
    HIGHLIGHT,
    /**
     * slider中的bar的的宽度或高度。
     *
     */
    BAR_SIZE,
    /**
     * 不透明度。
     *
     */
    OPACITY,
    /**
     * 最小宽度。
     *
     */
    MIN_W,
    /**
     * 最大宽度。
     *
     */
    MAX_W,
    /**
     * 根据子控件和文本自动调整大小。
     *
     */
    AUTO_ADJUST_SIZE,
    /**
     * 窗口是否保持单例。
     *
     */
    SINGLE_INSTANCE,
    /**
     * 点击非focusable控件时，是否让当前焦点控件失去焦点。比如点击窗口空白区域，是否让编辑器失去焦点。
     *
     */
    STRONGLY_FOCUS,
    /**
     * 子控件布局参数。
     *
     */
    CHILDREN_LAYOUT,
    /**
     * 子控件布局参数(过时)。
     *
     */
    LAYOUT,
    /**
     * 控件布局参数。
     *
     */
    SELF_LAYOUT,
    /**
     * layout宽度。
     *
     */
    LAYOUT_W,
    /**
     * layout高度。
     *
     */
    LAYOUT_H,
    /**
     * 虚拟宽度。
     *
     */
    VIRTUAL_W,
    /**
     * 虚拟高度。
     *
     */
    VIRTUAL_H,
    /**
     * 控件正在加载。
     *
     */
    LOADING,
    /**
     * 名称。
     *
     */
    NAME,
    /**
     * 类型。
     *
     */
    TYPE,
    /**
     * 是否可以关闭。
     *
     */
    CLOSABLE,
    /**
     * 鼠标指针。
     *
     */
    POINTER_CURSOR,
    /**
     * 值。
     *
     */
    VALUE,
    /**
     * 容易点击模式(目前用于spinbox)。
     *
     */
    EASY_TOUCH_MODE,
    /**
     * CheckButton是否单选。
     *
     */
    RADIO,
    /**
     * 进度条反向显示。
     *
     */
    REVERSE,
    /**
     * 长度。
     *
     */
    LENGTH,
    /**
     * 自动换行。
     *
     */
    LINE_WRAP,
    /**
     * 是否允许单词中换行。
     *
     */
    WORD_WRAP,
    /**
     * 是否省略。
     *
     */
    ELLIPSES,
    /**
     * 文本。
     *
     */
    TEXT,
    /**
     * 待翻译文本。
     *
     */
    TR_TEXT,
    /**
     * style。
     *
     */
    STYLE,
    /**
     * 状态。
     *
     */
    STATE,
    /**
     * 是否启用。
     *
     */
    ENABLE,
    /**
     * 是否启用按键音等反馈。
     *
     */
    FEEDBACK,
    /**
     * 是否启用floating布局。
     *
     */
    FLOATING,
    /**
     * 边距。
     *
     */
    MARGIN,
    /**
     * 间距。
     *
     */
    SPACING,
    /**
     * 左边距。
     *
     */
    LEFT_MARGIN,
    /**
     * 右边距。
     *
     */
    RIGHT_MARGIN,
    /**
     * 顶边距。
     *
     */
    TOP_MARGIN,
    /**
     * 底边距。
     *
     */
    BOTTOM_MARGIN,
    /**
     * 步长。
     *
     */
    STEP,
    /**
     * 是否可见。
     *
     */
    VISIBLE,
    /**
     * 是否接受用户事件。
     *
     */
    SENSITIVE,
    /**
     * 窗口所属的小应用程序(applet)名称。
     *
     */
    APPLET_NAME,
    /**
     * 控件动画。
     *
     */
    ANIMATION,
    /**
     * 窗口动画。
     *
     */
    ANIM_HINT,
    /**
     * 窗口设置为全部大小。
     *
     */
    FULLSCREEN,
    /**
     * 禁用窗口动画。
     *
     */
    DISABLE_ANIM,
    /**
     * 打开窗口时的动画。
     *
     */
    OPEN_ANIM_HINT,
    /**
     * 关闭窗口时的动画。
     *
     */
    CLOSE_ANIM_HINT,
    /**
     * 最小值。
     *
     */
    MIN,
    /**
     * 软键盘上action按钮的文本。
     *
     */
    ACTION_TEXT,
    /**
     * 提示信息。
     *
     */
    TIPS,
    /**
     * 需要翻译的提示信息。
     *
     */
    TR_TIPS,
    /**
     * 输入类型。
     *
     */
    INPUT_TYPE,
    /**
     * 自定义软键盘资源名称。
     *
     */
    KEYBOARD,
    /**
     * 缺省获得焦点的子控件(可用控件名或类型)。
     *
     */
    DEFAULT_FOCUSED_CHILD,
    /**
     * 只读模式。
     *
     */
    READONLY,
    /**
     * 是否可取消。
     *
     */
    CANCELABLE,
    /**
     * 密码是否可见。
     *
     */
    PASSWORD_VISIBLE,
    /**
     * 是否处于active状态。
     *
     */
    ACTIVE,
    /**
     * 当前页。
     *
     */
    CURR_PAGE,
    /**
     * 页面最大个数。
     *
     */
    PAGE_MAX_NUMBER,
    /**
     * 是否为垂直模式。
     *
     */
    VERTICAL,
    /**
     * 是否显示文本。
     *
     */
    SHOW_TEXT,
    /**
     * X方向的偏移。（如果控件有继承 get_offset 函数指针的话，一定要和 get_offset 返回值保持一致，否则容易出现问题）
     *详情请看 docs/how_to_use_offset_in_custom_widget.md
     *
     */
    XOFFSET,
    /**
     * Y方向的偏移。（如果控件有继承 get_offset 函数指针的话，一定要和 get_offset 返回值保持一致，否则容易出现问题）
     *详情请看 docs/how_to_use_offset_in_custom_widget.md
     *
     */
    YOFFSET,
    /**
     * 垂直对齐模式。
     *
     */
    ALIGN_V,
    /**
     * 水平对齐模式。
     *
     */
    ALIGN_H,
    /**
     * 是否自动播放或指定播放的时间(毫秒)。
     *
     */
    AUTO_PLAY,
    /**
     * 是否循环播放或循环播放的次数。
     *
     */
    LOOP,
    /**
     * 是否正在运行(播放)。
     *
     */
    RUNNING,
    /**
     * 是否启用自动更正功能。
     *
     */
    AUTO_FIX,
    /**
     * 编辑器在获得焦点时是否不选中文本。
     *
     */
    SELECT_NONE_WHEN_FOCUSED,
    /**
     * 编辑器在获得焦点时是否打开输入法。
     *
     */
    OPEN_IM_WHEN_FOCUSED,
    /**
     * 编辑器在失去焦点时是否关闭输入法。
     *
     */
    CLOSE_IM_WHEN_BLURED,
    /**
     * X最小值。
     *
     */
    X_MIN,
    /**
     * X最大值。
     *
     */
    X_MAX,
    /**
     * Y最小值。
     *
     */
    Y_MIN,
    /**
     * Y最大值。
     *
     */
    Y_MAX,
    /**
     * 最大值。
     *
     */
    MAX,
    /**
     * 让窗口管理器直接把按键发给自己。
     *
     */
    GRAB_KEYS,
    /**
     * 行数或每行的高度。
     *
     */
    ROW,
    /**
     * 控件状态。
     *
     */
    STATE_FOR_STYLE,
    /**
     * 窗体样式名称。
     *
     */
    THEME,
    /**
     * window stage
     *
     */
    STAGE,
    /**
     * 图片管理器。
     *
     */
    IMAGE_MANAGER,
    /**
     * 资源管理器。
     *
     */
    ASSETS_MANAGER,
    /**
     * locale_info。
     *
     */
    LOCALE_INFO,
    /**
     * 字体管理器。
     *
     */
    FONT_MANAGER,
    /**
     * 窗口的窗体样式对象。
     *
     */
    THEME_OBJ,
    /**
     * 缺省的窗体样式对象。
     *
     */
    DEFAULT_THEME_OBJ,
    /**
     * 项的宽度。
     *
     */
    ITEM_WIDTH,
    /**
     * 项的高度。
     *
     */
    ITEM_HEIGHT,
    /**
     * 项的缺省高度。
     *
     */
    DEFAULT_ITEM_HEIGHT,
    /**
     * X方向是否可拖动。
     *
     */
    XSLIDABLE,
    /**
     * Y方向是否可拖动。
     *
     */
    YSLIDABLE,
    /**
     * 重复次数。
     *
     */
    REPEAT,
    /**
     * 触发长按事件的时间(毫秒)。
     *
     */
    LONG_PRESS_TIME,
    /**
     * 是否启用长按。
     *
     */
    ENABLE_LONG_PRESS,
    /**
     * 是否启用预览。
     *
     */
    ENABLE_PREVIEW,
    /**
     * 是否启用点击穿透。
     *
     */
    CLICK_THROUGH,
    /**
     * 是否启用动画。
     *
     */
    ANIMATABLE,
    /**
     * 是否自动隐藏。
     *
     */
    AUTO_HIDE,
    /**
     * 是否自动隐藏滚动条。
     *
     */
    AUTO_HIDE_SCROLL_BAR,
    /**
     * 图片名称。
     *
     */
    IMAGE,
    /**
     * 显示格式。
     *
     */
    FORMAT,
    /**
     * 图片绘制类型。
     *
     */
    DRAW_TYPE,
    /**
     * 是否可选择。
     *
     */
    SELECTABLE,
    /**
     * 是否可点击。
     *
     */
    CLICKABLE,
    /**
     * X方向缩放比例。
     *
     */
    SCALE_X,
    /**
     * Y方向缩放比例。
     *
     */
    SCALE_Y,
    /**
     * x锚点。
     *
     */
    ANCHOR_X,
    /**
     * y锚点。
     *
     */
    ANCHOR_Y,
    /**
     * 选中角度(幅度)
     *
     */
    ROTATION,
    /**
     * 紧凑模式。
     *
     */
    COMPACT,
    /**
     * 是否支持滚动。
     *
     */
    SCROLLABLE,
    /**
     * 图标名称。
     *
     */
    ICON,
    /**
     * 选项集合。
     *
     */
    OPTIONS,
    /**
     * 是否被选中。
     *
     */
    SELECTED,
    /**
     * 是否被勾选。
     *
     */
    CHECKED,
    /**
     * active状态下的图标。
     *
     */
    ACTIVE_ICON,
    /**
     * 动态加载UI名字。
     *
     */
    LOAD_UI,
    /**
     * 要打开窗口的名称。
     *
     */
    OPEN_WINDOW,
    /**
     * ComboBox打开弹出窗口的主题。
     *
     */
    THEME_OF_POPUP,
    /**
     * 被选中项的索引。
     *
     */
    SELECTED_INDEX,
    /**
     * 点击窗口时关闭窗口。
     *
     */
    CLOSE_WHEN_CLICK,
    /**
     * 点击窗口外部时关闭窗口。
     *
     */
    CLOSE_WHEN_CLICK_OUTSIDE,
    /**
     * 超时后关闭窗口。
     *
     */
    CLOSE_WHEN_TIMEOUT,
    /**
     * 行间距。
     *
     */
    LINE_GAP,
    /**
     * 背景颜色(仅仅使用于color tile)。
     *
     */
    BG_COLOR,
    /**
     * 边框颜色(仅仅使用于color tile)。
     *
     */
    BORDER_COLOR,
    /**
     * 延迟时间(毫秒)
     *
     */
    DELAY,
    /**
     * 是否为键盘。
     *
     */
    IS_KEYBOARD,
    /**
     * 是否为焦点控件。
     *
     */
    FOCUSED,
    /**
     * (过时请用focused)。
     *
     */
    FOCUS,
    /**
     * 是否支持焦点停留。
     *
     */
    FOCUSABLE,
    /**
     * 是否支持焦点状态(如果希望style支持焦点状态，但又不希望焦点停留，可用本属性)。
     *
     */
    WITH_FOCUS_STATE,
    /**
     * 将焦点移到前一个的键值。
     *
     */
    MOVE_FOCUS_PREV_KEY,
    /**
     * 将焦点移到后一个的键值。
     *
     */
    MOVE_FOCUS_NEXT_KEY,
    /**
     * 将焦点向上移动的键值。
     *
     */
    MOVE_FOCUS_UP_KEY,
    /**
     * 将焦点向下移动的键值。
     *
     */
    MOVE_FOCUS_DOWN_KEY,
    /**
     * 将焦点向左移动的键值。
     *
     */
    MOVE_FOCUS_LEFT_KEY,
    /**
     * 将焦点向右移动的键值。
     *
     */
    MOVE_FOCUS_RIGHT_KEY,
    /**
     * 行数。
     *
     */
    ROWS,
    /**
     * 是否显示网格线。
     *
     */
    SHOW_GRID,
    /**
     * 各列的定义。
     *
     */
    COLUMNS_DEFINITION,
    /**
     * 拖拽临界值。
     *
     */
    DRAG_THRESHOLD,
    /**
     * 动画时间(毫秒)。
     *
     */
    ANIMATING_TIME,
    /**
     * 改变控件属性时附带动画的前缀。
     *
     */
    ANIMATE_PREFIX,
    /**
     * 改变控件属性时附带动画的播放时间(毫秒)。
     *
     */
    ANIMATE_ANIMATING_TIME,
    /**
     * 控件脏矩形区域。
     *
     */
    DIRTY_RECT,
    /**
     * 屏幕保护时间(毫秒)。
     *
     */
    SCREEN_SAVER_TIME,
    /**
     * 是否显示FPS。
     *
     */
    SHOW_FPS,
    /**
     * 最大FPS。
     *
     */
    MAX_FPS,
    /**
     * 数据校验脚本。
     *
     */
    VALIDATOR
}
/**
 * 控件的类型。
 *
 */
export declare enum TWidgetType {
    /**
     * 无特殊类型。
     *
     */
    NONE,
    /**
     * 窗口管理器。
     *
     */
    WINDOW_MANAGER,
    /**
     * 普通窗口。
     *
     */
    NORMAL_WINDOW,
    /**
     * overlay窗口。
     *
     */
    OVERLAY,
    /**
     * 工具条。
     *
     */
    TOOL_BAR,
    /**
     * 对话框。
     *
     */
    DIALOG,
    /**
     * 弹出窗口。
     *
     */
    POPUP,
    /**
     * system bar window
     *
     */
    SYSTEM_BAR,
    /**
     * system bar window ato bottom
     *
     */
    SYSTEM_BAR_BOTTOM,
    /**
     * 精灵窗口。
     *
     */
    SPRITE,
    /**
     * 键盘窗口。
     *
     */
    KEYBOARD,
    /**
     * 拖放状态窗口。
     *
     */
    DND,
    /**
     * 文本控件。
     *
     */
    LABEL,
    /**
     * 按钮控件。
     *
     */
    BUTTON,
    /**
     * 图片控件。
     *
     */
    IMAGE,
    /**
     * 图标控件。
     *
     */
    ICON,
    /**
     * 文本编辑控件。
     *
     */
    EDIT,
    /**
     * 进度条控件。
     *
     */
    PROGRESS_BAR,
    /**
     * 分组控件。
     *
     */
    GROUP_BOX,
    /**
     * 多选按钮控件。
     *
     */
    CHECK_BUTTON,
    /**
     * 单选按钮控件。
     *
     */
    RADIO_BUTTON,
    /**
     * 对话框标题。
     *
     */
    DIALOG_TITLE,
    /**
     * 对话框客户区域。
     *
     */
    DIALOG_CLIENT,
    /**
     * 滑块控件。
     *
     */
    SLIDER,
    /**
     * 视图控件。
     *
     */
    VIEW,
    /**
     * page控件。
     *
     */
    PAGE,
    /**
     * 下拉选择框控件。
     *
     */
    COMBO_BOX,
    /**
     * 下拉选择框的列表项控件。
     *
     */
    COMBO_BOX_ITEM,
    /**
     * 滑动视图控件。
     *
     */
    SLIDE_VIEW,
    /**
     * 滑动视图的指示器控件。
     *
     */
    SLIDE_INDICATOR,
    /**
     * 滑动视图的指示器控件（圆弧显示）。
     *
     */
    SLIDE_INDICATOR_ARC,
    /**
     * 多页控件。
     *
     */
    PAGES,
    /**
     * 标签按钮控件。
     *
     */
    TAB_BUTTON,
    /**
     * 标签控件。
     *
     */
    TAB_CONTROL,
    /**
     * 标签按钮分组控件。
     *
     */
    TAB_BUTTON_GROUP,
    /**
     * 按钮分组控件。
     *
     */
    BUTTON_GROUP,
    /**
     * 候选字控件。
     *
     */
    CANDIDATES,
    /**
     * 数值编辑控件。
     *
     */
    SPIN_BOX,
    /**
     * 拖动块控件。
     *
     */
    DRAGGER,
    /**
     * 滚动条控件。
     *
     */
    SCROLL_BAR,
    /**
     * 桌面版滚动条控件。
     *
     */
    SCROLL_BAR_DESKTOP,
    /**
     * 移动版滚动条控件。
     *
     */
    SCROLL_BAR_MOBILE,
    /**
     * 滚动视图控件。
     *
     */
    SCROLL_VIEW,
    /**
     * 列表视图控件。
     *
     */
    LIST_VIEW,
    /**
     * 水平列表视图控件。
     *
     */
    LIST_VIEW_H,
    /**
     * 列表项控件。
     *
     */
    LIST_ITEM,
    /**
     * 颜色选择器控件。
     *
     */
    COLOR_PICKER,
    /**
     * 颜色选择器组件控件。
     *
     */
    COLOR_COMPONENT,
    /**
     * 颜色块控件。
     *
     */
    COLOR_TILE,
    /**
     * 裁剪控件。
     *
     */
    CLIP_VIEW,
    /**
     * 富文本控件。
     *
     */
    RICH_TEXT,
    /**
     * AppBar控件。
     *
     */
    APP_BAR,
    /**
     * 网格控件。
     *
     */
    GRID,
    /**
     * 网格项目控件。
     *
     */
    GRID_ITEM,
    /**
     * 行控件。
     *
     */
    ROW,
    /**
     * 列控件。
     *
     */
    COLUMN,
    /**
     * 电阻屏校准窗口。
     *
     */
    CALIBRATION_WIN
}
/**
 * 窗口的生命周期常量定义。
 *
 */
export declare enum TWindowStage {
    /**
     * 初始状态。
     *
     */
    NONE,
    /**
     * 从UI资源加载完成。
     *
     */
    LOADED,
    /**
     * 创建完成。
     *
     */
    CREATED,
    /**
     * 窗口已经打开(窗口打开动画完成后)
     *
     */
    OPENED,
    /**
     * 窗口已关闭。
     *
     */
    CLOSED,
    /**
     * 窗口挂起状态。
     *
     */
    SUSPEND
}
/**
 * 窗口的closable常量定义。
 *
 */
export declare enum TWindowClosable {
    /**
     * 窗口可关闭。
     *
     */
    YES,
    /**
     * 窗口不可关闭。
     *
     */
    NO,
    /**
     * 窗口需要确认后才能关闭。
     *
     */
    CONFIRM
}
/**
 * 控件状态常量定义。
 *
 *这里指定常用的状态值，扩展控件可以在自己的头文件中定义私有的状态。
 *
 */
export declare enum TWidgetState {
    /**
     * 无效状态。
     *
     */
    NONE,
    /**
     * 正常状态。
     *
     */
    NORMAL,
    /**
     * 3/5keys模式时，进入激活状态(此时方向键用于修改值)。
     *
     */
    ACTIVATED,
    /**
     * 内容被修改的状态。
     *
     */
    CHANGED,
    /**
     * 指针按下状态。
     *
     */
    PRESSED,
    /**
     * 指针悬浮状态。
     *
     */
    OVER,
    /**
     * 禁用状态。
     *
     */
    DISABLE,
    /**
     * 聚焦状态。
     *
     */
    FOCUSED,
    /**
     * 勾选状态。
     *
     */
    CHECKED,
    /**
     * 没勾选状态。
     *
     */
    UNCHECKED,
    /**
     * 编辑器无内容状态。
     *
     */
    EMPTY,
    /**
     * 编辑器无内容同时聚焦的状态。
     *
     */
    EMPTY_FOCUS,
    /**
     * 编辑器无内容同时指针悬浮的状态。
     *
     */
    EMPTY_OVER,
    /**
     * 输入错误状态。
     *
     */
    ERROR,
    /**
     * 选中状态。
     *
     */
    SELECTED,
    /**
     * 正常状态(选中项)。
     *
     */
    NORMAL_OF_CHECKED,
    /**
     * 指针按下状态(选中项)。
     *
     */
    PRESSED_OF_CHECKED,
    /**
     * 指针悬浮状态(选中项)。
     *
     */
    OVER_OF_CHECKED,
    /**
     * 禁用状态(选中项)。
     *
     */
    DISABLE_OF_CHECKED,
    /**
     * 焦点状态(选中项)。
     *
     */
    FOCUSED_OF_CHECKED,
    /**
     * 正常状态(当前项)。
     *
     */
    NORMAL_OF_ACTIVE,
    /**
     * 指针按下状态(当前项)。
     *
     */
    PRESSED_OF_ACTIVE,
    /**
     * 指针悬浮状态(当前项)。
     *
     */
    OVER_OF_ACTIVE,
    /**
     * 禁用状态(当前项)。
     *
     */
    DISABLE_OF_ACTIVE,
    /**
     * 焦点状态(当前项)。
     *
     */
    FOCUSED_OF_ACTIVE
}
/**
 * 控件鼠标光标常量定义。
 *
 */
export declare enum TWidgetCursor {
    /**
     * 默认光标。
     *
     */
    CURSOR_DEFAULT,
    /**
     * 文本选择光标。
     *
     */
    CURSOR_EDIT,
    /**
     * 手指光标。
     *
     */
    CURSOR_HAND,
    /**
     * 等待光标。
     *
     */
    CURSOR_WAIT,
    /**
     * 叉光标。
     *
     */
    CURSOR_CROSS,
    /**
     * Slashed circle or crossbones。
     *
     */
    CURSOR_NO,
    /**
     * Double arrow pointing northwest and southeast。
     *
     */
    CURSOR_SIZENWSE,
    /**
     * Double arrow pointing northeast and southwest。
     *
     */
    CURSOR_SIZENESW,
    /**
     * Double arrow pointing west and east。
     *
     */
    CURSOR_SIZEWE,
    /**
     * Double arrow pointing north and south。
     *
     */
    CURSOR_SIZENS,
    /**
     * Four pointed arrow pointing north, south, east, and west。
     *
     */
    CURSOR_SIZEALL
}
/**
 * **widget_t** 是所有控件、窗口和窗口管理器的基类。
 ***widget_t**也是一个容器，可放其它**widget_t**到它的内部，形成一个树形结构。
 *
 *
 *
 *通常**widget_t**通过一个矩形区域向用户呈现一些信息，接受用户的输入，并据此做出适当的反应。
 *它负责控件的生命周期、通用状态、事件分发和Style的管理。
 *本类提供的接口(函数和属性)除非特别说明，一般都适用于子类控件。
 *
 *为了便于解释，这里特别说明一下几个术语：
 *
 ** **父控件与子控件**：父控件与子控件指的两个控件的组合关系(这是在运行时决定的)。
 *比如：在窗口中放一个按钮，此时，我们称按钮是窗口的子控件，窗口是按钮的父控件。
 *
 *
 *
 ** **子类控件与父类控件**：子类控件与父类控件指的两类控件的继承关系(这是在设计时决定的)。
 *比如：我们称**button_t**是**widget_t**的子类控件，**widget_t**是**button_t**的父类控件。
 *
 *
 *
 *widget相关的函数都只能在GUI线程中执行，如果需在非GUI线程中想调用widget相关函数，
 *请用idle\_queue或timer\_queue进行串行化。
 *请参考[demo thread](https://github.com/zlgopen/awtk/blob/master/demos/demo_thread_app.c)
 *
 ***widget\_t**是抽象类，不要直接创建**widget\_t**的实例。控件支持两种创建方式：
 *
 ** 通过XML创建。如：
 *
 *```xml
 *<button x="c" y="m" w="80" h="30" text="OK"/>
 *```
 *
 ** 通过代码创建。如：
 *
 *
 *
 */
export declare class TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 获取子控件的个数。
     *
     *
     * @returns 子控件的个数。
     */
    countChildren(): number;
    /**
     * 获取指定索引的子控件。
     *
     * @param index 索引。
     *
     * @returns 子控件。
     */
    getChild(index: number): TWidget;
    /**
     * 通过名称查找父控件。
     *
     * @param name 名称。
     *
     * @returns 父控件。
     */
    findParentByName(name: string): TWidget;
    /**
     * 通过类型查找父控件。
     *
     * @param type 类型。
     *
     * @returns 父控件。
     */
    findParentByType(type: string): TWidget;
    /**
     * 获取当前窗口中的焦点控件。
     *
     *
     * @returns 焦点控件。
     */
    getFocusedWidget(): TWidget;
    /**
     * 获取原生窗口对象。
     *
     *
     * @returns 原生窗口对象。
     */
    getNativeWindow(): TNativeWindow;
    /**
     * 获取控件在父控件中的索引编号。
     *
     *
     * @returns 在父控件中的索引编号。
     */
    indexOf(): number;
    /**
     * 关闭控件所在的窗口。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    closeWindow(): TRet;
    /**
     * 关闭控件所在的窗口。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    closeWindowForce(): TRet;
    /**
     * 请求返回到前一个窗口。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    back(): TRet;
    /**
     * 请求返回到home窗口。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    backToHome(): TRet;
    /**
     * 移动控件。
     *
     * @param x x坐标
     * @param y y坐标
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    move(x: number, y: number): TRet;
    /**
     * 移动控件到父控件中间。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    moveToCenter(): TRet;
    /**
     * 调整控件的大小。
     *
     * @param w 宽度
     * @param h 高度
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    resize(w: number, h: number): TRet;
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
    moveResize(x: number, y: number, w: number, h: number): TRet;
    /**
     * 移动控件并调整控件的大小。
     *
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     * @param update_layout 是否更新布局
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    moveResizeEx(x: number, y: number, w: number, h: number, update_layout: boolean): TRet;
    /**
     * 获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。
     *
     *
     * @returns 返回值。
     */
    getValue(): number;
    /**
     * 设置控件的值。
     *只是对widget\_set\_prop的包装，值的意义由子类控件决定。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 增加控件的值。
     *只是对widget\_set\_prop的包装，值的意义由子类控件决定。
     *
     * @param delta 增量。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    addValue(delta: number): TRet;
    /**
     * 获取控件的值。只是对widget\_get\_prop的包装，值的意义由子类控件决定。
     *
     *
     * @returns 返回值。
     */
    getValueInt(): number;
    /**
     * 设置控件的值。
     *只是对widget\_set\_prop的包装，值的意义由子类控件决定。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValueInt(value: any): TRet;
    /**
     * 增加控件的值。
     *只是对widget\_set\_prop的包装，值的意义由子类控件决定。
     *
     * @param delta 增量。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    addValueInt(delta: number): TRet;
    /**
     * 设置控件的值(以动画形式变化到指定的值)。
     *只是对widget\_set\_prop的包装，值的意义由子类控件决定。
     *
     * @param value 值。
     * @param duration 动画持续时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    animateValueTo(value: any, duration: number): TRet;
    /**
     * 查询指定的style是否存在。
     *
     * @param style_name style的名称（如果为 NULL，则默认为 default）。
     * @param state_name state的名称（如果为 NULL，则默认为 normal）。
     *
     * @returns 存在返回 TRUE，不存在返回 FALSE。
     */
    isStyleExist(style_name: string, state_name: string): boolean;
    /**
     * 判断widget是否支持高亮。
     *
     *
     * @returns 支持返回 TRUE，不支持返回 FALSE。
     */
    isSupportHighlighter(): boolean;
    /**
     * 判断widget拥有高亮属性。
     *
     *
     * @returns 拥有返回 TRUE，没有返回 FALSE。
     */
    hasHighlighter(): boolean;
    /**
     * 启用指定的style。
     *
     * @param style style的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    useStyle(style: string): TRet;
    /**
     * 设置控件的文本。（如果字符串相同，则不会重复设置以及触发事件）
     *
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setText(text: string): TRet;
    /**
     * 设置控件的文本。
     *
     * @param text 文本。
     * @param check_diff 是否检查设置的文本是否和控件中的文本一样。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTextEx(text: string, check_diff: boolean): TRet;
    /**
     * 设置子控件的文本。
     *只是对widget\_set\_prop的包装，文本的意义由子类控件决定。
     *
     * @param name 子控件的名称。
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setChildText(name: string, text: string): TRet;
    /**
     * 用一个浮点数去设置子控件的文本。
     *只是对widget\_set\_prop的包装，文本的意义由子类控件决定。
     *
     * @param name 子控件的名称。
     * @param format 格式字符串(如："%2.2lf")。
     * @param value 浮点数值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setChildTextWithDouble(name: string, format: string, value: any): TRet;
    /**
     * 用一个整数去设置子控件的文本。
     *只是对widget\_set\_prop的包装，文本的意义由子类控件决定。
     *
     * @param name 子控件的名称。
     * @param format 格式字符串(如："%d")。
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setChildTextWithInt(name: string, format: string, value: any): TRet;
    /**
     * 获取翻译之后的文本，然后调用widget_set_text。
     *
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTrText(text: string): TRet;
    /**
     * 获取控件enable属性值。
     *
     *
     * @returns 返回enable。
     */
    getEnable(): boolean;
    /**
     * 获取控件floating属性值。
     *
     *
     * @returns 返回floating。
     */
    getFloating(): boolean;
    /**
     * 获取控件auto_adjust_size属性值。
     *
     *
     * @returns 返回auto_adjust_size。
     */
    getAutoAdjustSize(): boolean;
    /**
     * 获取控件with_focus_state属性值。
     *
     *
     * @returns 返回with_focus_state。
     */
    getWithFocusState(): boolean;
    /**
     * 获取控件focusable属性值。
     *
     *
     * @returns 返回focusable。
     */
    getFocusable(): boolean;
    /**
     * 获取控件sensitive属性值。
     *
     *
     * @returns 返回sensitive。
     */
    getSensitive(): boolean;
    /**
     * 获取控件visible属性值。
     *
     *
     * @returns 返回visible。
     */
    getVisible(): boolean;
    /**
     * 获取控件feedback属性值。
     *
     *
     * @returns 返回feedback。
     */
    getFeedback(): boolean;
    /**
     * 获取控件的文本。
     *只是对widget\_get\_prop的包装，文本的意义由子类控件决定。
     *
     *如果希望获取UTF8格式的文本，可以参考下面的代码：
     *
     *
     *
     *
     * @returns 返回文本。
     */
    getText(): any;
    /**
     * 设置控件的名称。
     *
     * @param name 名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setName(name: string): TRet;
    /**
     * 设置theme的名称，用于动态切换主题。名称与当前主题名称相同，则重新加载全部资源。
     *
     * @param name 主题的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTheme(name: string): TRet;
    /**
     * 获取 theme 的名称
     *
     *
     * @returns 成功返回主题名称，失败否则 NULL。
     */
    getThemeName(): string;
    /**
     * 设置鼠标指针的图片名。
     *
     * @param cursor 图片名称(无扩展名)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPointerCursor(cursor: string): TRet;
    /**
     * 设置控件的动画参数(仅用于在UI文件使用)。
     *请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
     *
     * @param animation 动画参数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAnimation(animation: string): TRet;
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
    createAnimator(animation: string): TRet;
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
    startAnimator(name: string): TRet;
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
    setAnimatorTimeScale(name: string, time_scale: number): TRet;
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
    pauseAnimator(name: string): TRet;
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
    stopAnimator(name: string): TRet;
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
    destroyAnimator(name: string): TRet;
    /**
     * 设置控件的可用性。
     *
     * @param enable 是否可用性。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setEnable(enable: boolean): TRet;
    /**
     * 设置控件是否启用反馈。
     *
     * @param feedback 是否启用反馈。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFeedback(feedback: boolean): TRet;
    /**
     * 设置控件是否根据子控件和文本自动调整控件自身大小。
     *
     * @param auto_adjust_size 是否根据子控件和文本自动调整控件自身大小。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAutoAdjustSize(auto_adjust_size: boolean): TRet;
    /**
     * 设置控件的floating标志。
     *> floating的控件不受父控件的子控件布局参数的影响。
     *
     * @param floating 是否启用floating布局。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFloating(floating: boolean): TRet;
    /**
     * 设置控件是否获得焦点。
     *
     * @param focused 是否获得焦点。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFocused(focused: boolean): TRet;
    /**
     * 设置控件是否可获得焦点。
     *
     * @param focusable 是否可获得焦点。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFocusable(focusable: boolean): TRet;
    /**
     * 设置控件的状态。
     *
     * @param state 状态。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setState(state: string): TRet;
    /**
     * 设置控件的不透明度。
     *
     *>在嵌入式平台，半透明效果会使性能大幅下降，请谨慎使用。
     *
     * @param opacity 不透明度(取值0-255，0表示完全透明，255表示完全不透明)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setOpacity(opacity: number): TRet;
    /**
     * 设置控件脏矩形超出控件本身大小的最大范围(一般不用指定)。
     *
     * @param dirty_rect_tolerance 控件脏脏矩形超出控件本身大小的最大范。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDirtyRectTolerance(dirty_rect_tolerance: number): TRet;
    /**
     * 销毁全部子控件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    destroyChildren(): TRet;
    /**
     * 加入一个子控件。
     *
     * @param child 子控件对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    addChild(child: TWidget): TRet;
    /**
     * 移出指定的子控件(并不销毁)。
     *
     * @param child 子控件对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    removeChild(child: TWidget): TRet;
    /**
     * 插入子控件到指定的位置。
     *
     * @param index 位置序数(大于等于总个数，则放到最后)。
     * @param child 子控件对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    insertChild(index: number, child: TWidget): TRet;
    /**
     * 调整控件在父控件中的位置序数。
     *
     * @param index 位置序数(大于等于总个数，则放到最后)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    restack(index: number): TRet;
    /**
     * 查找指定名称的子控件(同widget_lookup(widget, name, FALSE))。
     *
     * @param name 子控件的名称。
     *
     * @returns 子控件或NULL。
     */
    child(name: string): TWidget;
    /**
     * 查找指定名称的子控件(返回第一个)。
     *
     * @param name 子控件的名称。
     * @param recursive 是否递归查找全部子控件。
     *
     * @returns 子控件或NULL。
     */
    lookup(name: string, recursive: boolean): TWidget;
    /**
     * 查找指定类型的子控件(返回第一个)。
     *
     * @param type 子控件的名称。
     * @param recursive 是否递归查找全部子控件。
     *
     * @returns 子控件或NULL。
     */
    lookupByType(type: string, recursive: boolean): TWidget;
    /**
     * 设置控件的可见性。
     *
     * @param visible 是否可见。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setVisible(visible: boolean): TRet;
    /**
     * 设置控件的可见性(不触发repaint和relayout)。
     *
     * @param visible 是否可见。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setVisibleOnly(visible: boolean): TRet;
    /**
     * 设置控件是否接受用户事件。
     *
     * @param sensitive 是否接受用户事件。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSensitive(sensitive: boolean): TRet;
    /**
     * 注册指定事件的处理函数。
     *使用示例：
     *
     *
     *
     * @param type 事件类型。
     * @param on_event 事件处理函数。
     * @param ctx 事件处理函数上下文。
     *
     * @returns 返回id，用于widget_off。
     */
    on(type: number, on_event: Function, ctx: any): number;
    /**
     * 注销指定事件的处理函数。
     *
     * @param id widget_on返回的ID。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    off(id: number): TRet;
    /**
     * 请求强制重绘控件。
     *
     * @param r 矩形对象(widget本地坐标)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    invalidateForce(r: TRect): TRet;
    /**
     * 获取控件指定属性的值。
     *
     * @param name 属性的名称。
     * @param v 返回属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    getProp(name: string, v: TValue): TRet;
    /**
     * 设置控件指定属性的值。
     *
     * @param name 属性的名称。
     * @param v 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setProp(name: string, v: TValue): TRet;
    /**
     * 设置多个参数。
     *>参数之间用&分隔，名称和值之间用=分隔。如: name=awtk&min=10&max=100
     *
     * @param params 参数列表。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setProps(params: string): TRet;
    /**
     * 设置字符串格式的属性。
     *
     * @param name 属性的名称。
     * @param v 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropStr(name: string, v: string): TRet;
    /**
     * 获取字符串格式的属性。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回属性的值。
     */
    getPropStr(name: string, defval: string): string;
    /**
     * 设置指针格式的属性。
     *
     * @param name 属性的名称。
     * @param v 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropPointer(name: string, v: any): TRet;
    /**
     * 获取指针格式的属性。
     *
     * @param name 属性的名称。
     *
     * @returns 返回属性的值。
     */
    getPropPointer(name: string): any;
    /**
     * 设置浮点数格式的属性。
     *
     * @param name 属性的名称。
     * @param v 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropFloat(name: string, v: number): TRet;
    /**
     * 获取浮点数格式的属性。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回属性的值。
     */
    getPropFloat(name: string, defval: number): number;
    /**
     * 设置整数格式的属性。
     *
     * @param name 属性的名称。
     * @param v 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropInt(name: string, v: number): TRet;
    /**
     * 获取整数格式的属性。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回属性的值。
     */
    getPropInt(name: string, defval: number): number;
    /**
     * 设置布尔格式的属性。
     *
     * @param name 属性的名称。
     * @param v 属性的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPropBool(name: string, v: boolean): TRet;
    /**
     * 获取布尔格式的属性。
     *
     * @param name 属性的名称。
     * @param defval 缺省值。
     *
     * @returns 返回属性的值。
     */
    getPropBool(name: string, defval: boolean): boolean;
    /**
     * 判断当前控件所在的窗口是否已经打开。
     *
     *
     * @returns 返回当前控件所在的窗口是否已经打开。
     */
    isWindowOpened(): boolean;
    /**
     * 判断窗口及子控件创建或加载是否完成。
     *
     *
     * @returns 返回创建或加载是否完成。
     */
    isWindowCreated(): boolean;
    /**
     * 判断当前控件是否是指定控件的父控件(包括非直系)。
     *
     * @param child 控件对象。
     *
     * @returns 返回TRUE表示是，否则表示不是。
     */
    isParentOf(child: TWidget): boolean;
    /**
     * 判断当前控件是否是指定控件的直系父控件。
     *
     * @param child 控件对象。
     *
     * @returns 返回TRUE表示是，否则表示不是。
     */
    isDirectParentOf(child: TWidget): boolean;
    /**
     * 判断当前控件是否是窗口。
     *
     *
     * @returns 返回当前控件是否是窗口。
     */
    isWindow(): boolean;
    /**
     * 检查控件是否是system bar类型。
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    isSystemBar(): boolean;
    /**
     * 检查控件是否是普通窗口类型。
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    isNormalWindow(): boolean;
    /**
     * 检查控件是否是全屏窗口。
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    isFullscreenWindow(): boolean;
    /**
     * 检查控件是否是对话框类型。
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    isDialog(): boolean;
    /**
     * 检查控件是否是弹出窗口类型。
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    isPopup(): boolean;
    /**
     * 检查控件是否是overlay窗口类型。
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    isOverlay(): boolean;
    /**
     * 检查控件是否总在最上层。
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    isAlwaysOnTop(): boolean;
    /**
     * 检查控件弹出对话框控件是否已经打开了（而非挂起状态）。
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    isOpenedDialog(): boolean;
    /**
     * 检查控件弹出窗口控件是否已经打开了（而非挂起状态）。
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    isOpenedPopup(): boolean;
    /**
     * 判断当前控件是否是keyboard。
     *
     *> keyboard收到pointer事件时，不会让当前控件失去焦点。
     *
     *在自定义软键盘时，将所有按钮放到一个容器当中，并设置为is_keyboard。
     *
     *
     *
     *
     * @returns 返回FALSE表示不是，否则表示是。
     */
    isKeyboard(): boolean;
    /**
     * 判断当前控件是否是设计窗口。
     *
     *
     * @returns 返回当前控件是否是设计窗口。
     */
    isDesigningWindow(): boolean;
    /**
     * 判断当前控件是否是窗口管理器。
     *
     *
     * @returns 返回当前控件是否是窗口管理器。
     */
    isWindowManager(): boolean;
    /**
     * 遍历当前控件及子控件。
     *
     * @param visit 遍历的回调函数。
     * @param ctx 回调函数的上下文。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    foreach(visit: Function, ctx: any): TRet;
    /**
     * 获取当前控件所在的窗口。
     *
     *
     * @returns 窗口对象。
     */
    getWindow(): TWidget;
    /**
     * 获取当前的窗口管理器。
     *
     *
     * @returns 窗口管理器对象。
     */
    getWindowManager(): TWidget;
    /**
     * 获取当前控件的类型名称。
     *
     *
     * @returns 返回类型名。
     */
    getType(): string;
    /**
     * clone。
     *
     * @param parent clone新控件的parent对象。
     *
     * @returns 返回clone的对象。
     */
    clone(parent: TWidget): TWidget;
    /**
     * 判断两个widget是否相同。
     *
     * @param other 要比较的控件对象。
     *
     * @returns 返回TRUE表示相同，否则表示不同。
     */
    equal(other: TWidget): boolean;
    /**
     * 转换为widget对象(供脚本语言使用)。
     *
     * @param widget widget对象。
     *
     * @returns widget对象。
     */
    static cast(widget: TWidget): TWidget;
    /**
     * 从父控件中移除控件，并调用unref函数销毁控件。
     *
     *> 一般无需直接调用，关闭窗口时，自动销毁相关控件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    destroy(): TRet;
    /**
     * 从父控件中移除控件，并调用unref函数销毁控件。
     *
     *> 一般无需直接调用，关闭窗口时，自动销毁相关控件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    destroyAsync(): TRet;
    /**
     * 减少控件的引用计数。引用计数为0时销毁控件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    unref(): TRet;
    /**
     * 根据控件的style绘制边框矩形。
     *
     * @param c 画布对象。
     * @param r 矩形区域。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    strokeBorderRect(c: TCanvas, r: TRect): TRet;
    /**
     * 根据控件的style绘制背景矩形。
     *
     * @param c 画布对象。
     * @param r 矩形区域。
     * @param draw_type 图片缺省绘制方式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    fillBgRect(c: TCanvas, r: TRect, draw_type: TImageDrawType): TRet;
    /**
     * 根据控件的style绘制前景矩形。
     *
     * @param c 画布对象。
     * @param r 矩形区域。
     * @param draw_type 图片缺省绘制方式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    fillFgRect(c: TCanvas, r: TRect, draw_type: TImageDrawType): TRet;
    /**
     * 递归的分发一个事件到所有target子控件。
     *
     * @param e 事件。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    dispatchToTarget(e: TEvent): TRet;
    /**
     * 递归的分发一个事件到所有key_target子控件。
     *
     * @param e 事件。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    dispatchToKeyTarget(e: TEvent): TRet;
    /**
     * 获取 widget 对应风格类型
     *
     *
     * @returns 返回 widget 的对应风格类型。
     */
    getStyleType(): string;
    /**
     * 让控件根据自己当前状态更新style。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    updateStyle(): TRet;
    /**
     * 让控件及子控件根据自己当前状态更新style。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    updateStyleRecursive(): TRet;
    /**
     * 递归的把父控件的key_target设置为自己。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAsKeyTarget(): TRet;
    /**
     * 把焦点移动下一个控件。
     *
     *>widget必须是当前焦点控件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    focusNext(): TRet;
    /**
     * 把焦点移动前一个控件。
     *
     *>widget必须是当前焦点控件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    focusPrev(): TRet;
    /**
     * 把控件的状态转成获取style选要的状态，一般只在子类中使用。
     *
     * @param active 控件是否为当前项。
     * @param checked 控件是否为选中项。
     *
     * @returns 返回状态值。
     */
    getStateForStyle(active: boolean, checked: boolean): string;
    /**
     * 布局当前控件及子控件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    layout(): TRet;
    /**
     * 设置控件自己的布局参数。
     *备注：下一帧才会生效数据
     *
     * @param params 布局参数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSelfLayout(params: string): TRet;
    /**
     * 设置子控件的布局参数。
     *备注：下一帧才会生效数据
     *
     * @param params 布局参数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setChildrenLayout(params: string): TRet;
    /**
     * 设置控件自己的布局(缺省布局器)参数(过时，请用widget\_set\_self\_layout)。
     *备注：下一帧才会生效数据
     *
     * @param x x参数。
     * @param y y参数。
     * @param w w参数。
     * @param h h参数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSelfLayoutParams(x: string, y: string, w: string, h: string): TRet;
    /**
     * 设置整数类型的style。
     *
     *> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
     *> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)
     *
     * @param state_and_name 状态和名字，用英文的冒号分隔。
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setStyleInt(state_and_name: string, value: any): TRet;
    /**
     * 设置字符串类型的style。
     *
     *> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
     *> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)
     *
     * @param state_and_name 状态和名字，用英文的冒号分隔。
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setStyleStr(state_and_name: string, value: string): TRet;
    /**
     * 设置颜色类型的style。
     *
     *> * [state 的取值](https://github.com/zlgopen/awtk/blob/master/docs/manual/widget_state_t.md)
     *> * [name 的取值](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)
     *
     *
     *在下面这个例子中，R=0x11 G=0x22 B=0x33 A=0xFF
     *
     *
     *
     * @param state_and_name 状态和名字，用英文的冒号分隔。
     * @param value 值。颜色值一般用十六进制表示，每两个数字表示一个颜色通道，从高位到低位，依次是ABGR。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setStyleColor(state_and_name: string, value: any): TRet;
    /**
     * 加入一个子控件默认实现(供子类调用)。
     *
     * @param child 子控件对象。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    addChildDefault(child: TWidget): TRet;
    /**
     * x坐标(相对于父控件的x坐标)。
     *
     */
    get x(): number;
    /**
     * y坐标(相对于父控件的y坐标)。
     *
     */
    get y(): number;
    /**
     * 宽度。
     *
     */
    get w(): number;
    /**
     * 高度。
     *
     */
    get h(): number;
    /**
     * 控件名字。
     *
     */
    get name(): string;
    set name(v: string);
    /**
     * 鼠标光标图片名称。
     *
     */
    get pointerCursor(): string;
    set pointerCursor(v: string);
    /**
     * 保存用于翻译的字符串。
     *
     */
    get trText(): string;
    set trText(v: string);
    /**
     * style的名称。
     *
     */
    get style(): string;
    /**
     * 动画参数。请参考[控件动画](https://github.com/zlgopen/awtk/blob/master/docs/widget_animator.md)
     *
     */
    get animation(): string;
    set animation(v: string);
    /**
     * 启用/禁用状态。
     *
     */
    get enable(): boolean;
    set enable(v: boolean);
    /**
     * 是否启用按键音、触屏音和震动等反馈。
     *
     */
    get feedback(): boolean;
    set feedback(v: boolean);
    /**
     * 是否可见。
     *
     */
    get visible(): boolean;
    set visible(v: boolean);
    /**
     * 是否接受用户事件。
     *
     */
    get sensitive(): boolean;
    set sensitive(v: boolean);
    /**
     * 是否支持焦点停留。
     *
     */
    get focusable(): boolean;
    set focusable(v: boolean);
    /**
     * 是否支持焦点状态。
     *> 如果希望style支持焦点状态，但又不希望焦点停留，可用本属性。
     *
     */
    get withFocusState(): boolean;
    /**
     * 是否根据子控件和文本自动调整控件自身大小。
     *
     *> 为true时，最好不要使用 layout 的相关东西，否则可能有冲突。
     *> 注意：只是调整控件的本身的宽高，不会修改控件本身的位置。
     *
     */
    get autoAdjustSize(): boolean;
    set autoAdjustSize(v: boolean);
    /**
     * 标识控件是否启用浮动布局，不受父控件的children_layout的控制。
     *
     */
    get floating(): boolean;
    set floating(v: boolean);
    /**
     * 不透明度(0-255)，0完全透明，255完全不透明。
     *
     */
    get opacity(): number;
    set opacity(v: number);
    /**
     * 脏矩形超出控件本身大小的最大范围(一般不用指定)。
     *
     *> 如果 border 太粗或 offset 太大等原因，导致脏矩形超出控件本身大小太多（大于缺省值）时，才需要指定。
     *
     */
    get dirtyRectTolerance(): number;
    set dirtyRectTolerance(v: number);
    /**
     * 父控件
     *
     */
    get parent(): TWidget;
}
/**
 * 应用程序的配置信息。
 *
 *底层实现可以是任何格式，比如INI，XML，JSON和UBJSON。
 *
 *对于树状的文档，key可以是多级的，用.分隔。如network.ip。
 *
 *conf-io是可选组件，需要自己包含头文件，否则64位数据类型会被截断成32位的数据。
 *
 *
 *
 */
export declare class TAppConf {
    /**
     * 持久保存配置。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static save(): TRet;
    /**
     * 重新加载配置(内存中的配置丢失)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static reload(): TRet;
    /**
     * 释放conf对象。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static deinit(): TRet;
    /**
     * 检查配置项是否存在。
     *
     * @param key 配置项的名称。
     *
     * @returns 返回TRUE表示存在，FALSE表示不存在。
     */
    static exist(key: string): boolean;
    /**
     * 设置整数类型配置项的值。
     *
     * @param key 配置项的名称。
     * @param v 配置项的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static setInt(key: string, v: number): TRet;
    /**
     * 设置64位整数类型配置项的值。
     *
     * @param key 配置项的名称。
     * @param v 配置项的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static setInt64(key: string, v: number): TRet;
    /**
     * 设置bool类型配置项的值。
     *
     * @param key 配置项的名称。
     * @param v 配置项的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static setBool(key: string, v: boolean): TRet;
    /**
     * 设置双精度类型配置项的值。
     *
     * @param key 配置项的名称。
     * @param v 配置项的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static setDouble(key: string, v: number): TRet;
    /**
     * 设置字符串类型配置项的值。
     *
     * @param key 配置项的名称。
     * @param v 配置项的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static setStr(key: string, v: string): TRet;
    /**
     * 获取整数类型配置项的值。
     *
     * @param key 配置项的名称。
     * @param defval 缺省值。
     *
     * @returns 返回配置项的值（如果不存在返回缺省值）。
     */
    static getInt(key: string, defval: number): number;
    /**
     * 获取64位整数类型配置项的值。
     *
     * @param key 配置项的名称。
     * @param defval 缺省值。
     *
     * @returns 返回配置项的值（如果不存在返回缺省值）。
     */
    static getInt64(key: string, defval: number): number;
    /**
     * 获取bool类型配置项的值。
     *
     * @param key 配置项的名称。
     * @param defval 缺省值。
     *
     * @returns 返回配置项的值（如果不存在返回缺省值）。
     */
    static getBool(key: string, defval: boolean): boolean;
    /**
     * 获取单精度浮点数类型配置项的值。
     *
     * @param key 配置项的名称。
     * @param defval 缺省值。
     *
     * @returns 返回配置项的值（如果不存在返回缺省值）。
     */
    static getDouble(key: string, defval: number): number;
    /**
     * 获取字符串类型配置项的值。
     *
     * @param key 配置项的名称。
     * @param defval 缺省值。
     *
     * @returns 返回配置项的值（如果不存在返回缺省值）。
     */
    static getStr(key: string, defval: string): string;
    /**
     * 删除配置项。
     *
     * @param key 配置项的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static remove(key: string): TRet;
}
/**
 * 扩展控件。
 *
 */
export declare class TExtWidgets {
    /**
     * 初始化AWTK扩展控件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static init(): TRet;
}
/**
 * 指示器默认绘制的类型。
 *
 */
export declare enum TIndicatorDefaultPaint {
    /**
     * 自动选择。
     *
     */
    AUTO,
    /**
     * 实心圆点指示器，当前项填充selected_fg_color，其他填充fg_color。
     *
     */
    FILL_DOT,
    /**
     * 镂空圆点指示器，当前项填充selected_fg_color，其他镂空fg_color。
     *
     */
    STROKE_DOT,
    /**
     * 实心矩形指示器，当前项填充selected_fg_color，其他填充fg_color。
     *
     */
    FILL_RECT,
    /**
     * 镂空矩形指示器，当前项填充selected_fg_color，其他镂空fg_color。
     *
     */
    STROKE_RECT
}
/**
 * 虚拟页面的事件。
 *
 */
export declare enum TVpageEvent {
    /**
     * 页面即将打开(动画前)。
     *
     */
    VPAGE_WILL_OPEN,
    /**
     * 页面打开完成(动画后)。
     *
     */
    VPAGE_OPEN,
    /**
     * 页面已经关闭(动画后)。
     *
     */
    VPAGE_CLOSE
}
/**
 * 资源类型常量定义。
 *
 */
export declare enum TAssetType {
    /**
     * 无效资源。
     *
     */
    NONE,
    /**
     * 字体资源。
     *
     */
    FONT,
    /**
     * 图片资源。
     *
     */
    IMAGE,
    /**
     * 窗体样式资源。
     *
     */
    STYLE,
    /**
     * UI数据资源。
     *
     */
    UI,
    /**
     * XML数据资源。
     *
     */
    XML,
    /**
     * 字符串数据资源。
     *
     */
    STRINGS,
    /**
     * JS等脚本资源。
     *
     */
    SCRIPT,
    /**
     * 流图资源。
     *
     */
    FLOW,
    /**
     * 其它数据资源。
     *
     */
    DATA
}
/**
 * 单个资源的描述信息。
 *
 */
export declare class TAssetInfo {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 获取类型。
     *
     *
     * @returns 返回类型。
     */
    getType(): number;
    /**
     * 获取名称。
     *
     *
     * @returns 返回名称。
     */
    getName(): string;
    /**
     * 资源是否在ROM中。
     *
     *
     * @returns 返回 TRUE 为在 ROM 中，返回 FALSE 则不在。
     */
    isInRom(): boolean;
    /**
     * 设置资源是否在ROM中的标记位。
     *
     * @param is_in_rom 资源是否在ROM中。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setIsInRom(is_in_rom: boolean): TRet;
    /**
     * 类型。
     *
     */
    get type(): number;
    /**
     * 子类型。
     *
     */
    get subtype(): number;
    /**
     * 资源标志。
     *
     */
    get flags(): number;
    /**
     * 大小。
     *
     */
    get size(): number;
    /**
     * 引用计数。
     *is\_in\_rom == FALSE时才有效。
     *
     */
    get refcount(): number;
}
/**
 * 颜色。
 *
 */
export declare class TColor {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建color对象。
     *
     *> 主要供脚本语言使用。
     *
     * @param r 红色通道。
     * @param g 绿色通道。
     * @param b 蓝色通道。
     * @param a alpha通道。
     *
     * @returns color对象。
     */
    static create(r: number, g: number, b: number, a: number): TColor;
    /**
     * 创建color对象。
     *
     *> 主要供脚本语言使用。
     *
     * @param str css类似的颜色值。
     *
     * @returns color对象。
     */
    fromStr(str: string): TColor;
    /**
     * 获取红色通道的值。
     *
     *> 主要供脚本语言使用。
     *
     *
     * @returns 返回红色通道的值。
     */
    r(): number;
    /**
     * 获取绿色通道的值。
     *
     *> 主要供脚本语言使用。
     *
     *
     * @returns 返回绿色通道的值。
     */
    g(): number;
    /**
     * 获取蓝色通道的值。
     *
     *> 主要供脚本语言使用。
     *
     *
     * @returns 返回蓝色通道的值。
     */
    b(): number;
    /**
     * 获取alpha通道的值。
     *
     *> 主要供脚本语言使用。
     *
     *
     * @returns 返回alpha通道的值。
     */
    a(): number;
    /**
     * 获取颜色值。
     *
     *> 主要供脚本语言使用。
     *
     *
     * @returns 返回颜色值。
     */
    getColor(): number;
    /**
     * 转换为color对象。
     *
     *> 供脚本语言使用。
     *
     * @param color color对象。
     *
     * @returns color对象。
     */
    static cast(color: TColor): TColor;
    /**
     * 销毁color对象。
     *> 主要供脚本语言使用。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    destroy(): TRet;
    /**
     * 颜色的数值。
     *
     */
    get color(): number;
    set color(v: number);
}
/**
 * 日期时间。
 *
 *> 在嵌入式平台中，在系统初始时，需要调用date\_time\_global\_init设置实际获取/设置系统时间的函数。
 *
 */
export declare class TDateTime {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建date_time对象，并初始为当前日期和时间(一般供脚本语言中使用)。
     *
     *
     * @returns 返回date_time对象。
     */
    static create(): TDateTime;
    /**
     * 设置年。
     *
     * @param year 年。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setYear(year: number): TRet;
    /**
     * 设置月。
     *
     * @param month 月。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMonth(month: number): TRet;
    /**
     * 设置日。
     *
     * @param day 日。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDay(day: number): TRet;
    /**
     * 设置小时。
     *
     * @param hour 小时。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setHour(hour: number): TRet;
    /**
     * 设置分钟。
     *
     * @param minute 分钟。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMinute(minute: number): TRet;
    /**
     * 设置秒。
     *
     * @param second 秒。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSecond(second: number): TRet;
    /**
     * 设置当前时间。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    set(): TRet;
    /**
     * 从time转换而来(按GMT转换)。
     *
     * @param time 时间。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    fromTime(time: number): TRet;
    /**
     * 转换成time(按GMT转换)。
     *
     *
     * @returns 返回time。
     */
    toTime(): number;
    /**
     * 加上一个偏移量(s)。
     *
     * @param delta 偏移量(s)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    addDelta(delta: number): TRet;
    /**
     * 是否是闰年。
     *
     * @param year 年份。
     *
     * @returns 返回TRUE表示是，否则表示否。
     */
    static isLeap(year: number): boolean;
    /**
     * 获取指定年份月份的天数。
     *
     * @param year 年份。
     * @param month 月份(1-12)。
     *
     * @returns 返回大于0表示天数，否则表示失败。
     */
    static getDays(year: number, month: number): number;
    /**
     * 获取指定日期是周几(0-6, Sunday = 0)。。
     *
     * @param year 年份。
     * @param month 月份(1-12)。
     * @param day 日(1-31)。
     *
     * @returns 返回大于等于0表示周几(0-6)，否则表示失败。
     */
    static getWday(year: number, month: number, day: number): number;
    /**
     * 获取指定月份的英文名称(简写)。
     *
     * @param month 月份(1-12)。
     *
     * @returns 返回指定月份的英文名称(简写)。
     */
    static getMonthName(month: number): string;
    /**
     * 获取周几的英文名称(简写)。
     *
     * @param wday 星期几(0-6, Sunday = 0)。
     *
     * @returns 返回指定周几的英文名称(简写)。
     */
    static getWdayName(wday: number): string;
    /**
     * 销毁date_time对象(一般供脚本语言中使用)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    destroy(): TRet;
    /**
     * 秒(0 - 59)。
     *
     */
    get second(): number;
    set second(v: number);
    /**
     * 分(0 - 59)。
     *
     */
    get minute(): number;
    set minute(v: number);
    /**
     * 时(0 - 23)。
     *
     */
    get hour(): number;
    set hour(v: number);
    /**
     * 日(1-31)。
     *
     */
    get day(): number;
    set day(v: number);
    /**
     * 星期几(0-6, Sunday = 0)。
     *
     */
    get wday(): number;
    /**
     * 月(1-12)。
     *
     */
    get month(): number;
    set month(v: number);
    /**
     * 年。
     *
     */
    get year(): number;
    set year(v: number);
}
/**
 * 缓动作动画常量定义。
 *
 */
export declare enum TEasingType {
    /**
     * EASING_LINEAR。
     *
     */
    LINEAR,
    /**
     * EASING_QUADRATIC_IN
     *
     */
    QUADRATIC_IN,
    /**
     * EASING_QUADRATIC_OUT
     *
     */
    QUADRATIC_OUT,
    /**
     * EASING_QUADRATIC_INOUT
     *
     */
    QUADRATIC_INOUT,
    /**
     * EASING_CUBIC_IN
     *
     */
    CUBIC_IN,
    /**
     * EASING_CUBIC_OUT
     *
     */
    CUBIC_OUT,
    /**
     * EASING_SIN_IN
     *
     */
    SIN_IN,
    /**
     * EASING_SIN_OUT
     *
     */
    SIN_OUT,
    /**
     * EASING_SIN_OUT
     *
     */
    SIN_INOUT,
    /**
     * EASING_POW_IN
     *
     */
    POW_IN,
    /**
     * EASING_POW_OUT
     *
     */
    POW_OUT,
    /**
     * EASING_POW_INOUT
     *
     */
    POW_INOUT,
    /**
     * EASING_CIRCULAR_IN
     *
     */
    CIRCULAR_IN,
    /**
     * EASING_CIRCULAR_OUT
     *
     */
    CIRCULAR_OUT,
    /**
     * EASING_CIRCULAR_INOUT
     *
     */
    CIRCULAR_INOUT,
    /**
     * EASING_ELASTIC_IN
     *
     */
    ELASTIC_IN,
    /**
     * EASING_ELASTIC_OUT
     *
     */
    ELASTIC_OUT,
    /**
     * EASING_ELASTIC_INOUT
     *
     */
    ELASTIC_INOUT,
    /**
     * EASING_BACK_IN
     *
     */
    BACK_IN,
    /**
     * EASING_BACK_OUT
     *
     */
    BACK_OUT,
    /**
     * EASING_BACK_INOUT
     *
     */
    BACK_INOUT,
    /**
     * EASING_BOUNCE_IN
     *
     */
    BOUNCE_IN,
    /**
     * EASING_BOUNCE_OUT
     *
     */
    BOUNCE_OUT,
    /**
     * EASING_BOUNCE_INOUT
     *
     */
    BOUNCE_INOUT
}
/**
 * idle_manager_t管理器。
 *
 */
export declare class TIdleManager {
    nativeObj: any;
    constructor(nativeObj: any);
}
/**
 * MIME_TYPE。
 *
 */
export declare enum TMIME_TYPE {
    /**
     * "application/envoy"。
     *
     */
    APPLICATION_ENVOY,
    /**
     * "application/fractals"。
     *
     */
    APPLICATION_FRACTALS,
    /**
     * "application/futuresplash"。
     *
     */
    APPLICATION_FUTURESPLASH,
    /**
     * "application/hta"。
     *
     */
    APPLICATION_HTA,
    /**
     * "application/json"。
     *
     */
    APPLICATION_JSON,
    /**
     * "application/ubjson"。
     *
     */
    APPLICATION_UBJSON,
    /**
     * "application/mac-binhex40"。
     *
     */
    APPLICATION_MAC_BINHEX40,
    /**
     * "application/msword"。
     *
     */
    APPLICATION_MSWORD,
    /**
     * "application/octet-stream"。
     *
     */
    APPLICATION_OCTET_STREAM,
    /**
     * "application/oda"。
     *
     */
    APPLICATION_ODA,
    /**
     * "application/olescript"。
     *
     */
    APPLICATION_OLESCRIPT,
    /**
     * "application/pdf"。
     *
     */
    APPLICATION_PDF,
    /**
     * "application/pics-rules"。
     *
     */
    APPLICATION_PICS_RULES,
    /**
     * "application/pkcs10"。
     *
     */
    APPLICATION_PKCS10,
    /**
     * "application/pkix-crl"。
     *
     */
    APPLICATION_PKIX_CRL,
    /**
     * "application/postscript"。
     *
     */
    APPLICATION_POSTSCRIPT,
    /**
     * "application/rtf"。
     *
     */
    APPLICATION_RTF,
    /**
     * "application/vnd.ms-excel"。
     *
     */
    APPLICATION_VND_MS_EXCEL,
    /**
     * "application/vnd.ms-outlook"。
     *
     */
    APPLICATION_VND_MS_OUTLOOK,
    /**
     * "application/vnd.ms-pkicertstore"。
     *
     */
    APPLICATION_VND_MS_PKICERTSTORE,
    /**
     * "application/vnd.ms-pkiseccat"。
     *
     */
    APPLICATION_VND_MS_PKISECCAT,
    /**
     * "application/vnd.ms-pkistl"。
     *
     */
    APPLICATION_VND_MS_PKISTL,
    /**
     * "application/vnd.ms-powerpoint"。
     *
     */
    APPLICATION_VND_MS_POWERPOINT,
    /**
     * "application/vnd.ms-project"。
     *
     */
    APPLICATION_VND_MS_PROJECT,
    /**
     * "application/vnd.ms-works"。
     *
     */
    APPLICATION_VND_MS_WORKS,
    /**
     * "application/winhlp"。
     *
     */
    APPLICATION_WINHLP,
    /**
     * "application/x-bcpio"。
     *
     */
    APPLICATION_X_BCPIO,
    /**
     * "application/x-cdf"。
     *
     */
    APPLICATION_X_CDF,
    /**
     * "application/x-compress"。
     *
     */
    APPLICATION_X_COMPRESS,
    /**
     * "application/x-compressed"。
     *
     */
    APPLICATION_X_COMPRESSED,
    /**
     * "application/x-cpio"。
     *
     */
    APPLICATION_X_CPIO,
    /**
     * "application/x-csh"。
     *
     */
    APPLICATION_X_CSH,
    /**
     * "application/x-director"。
     *
     */
    APPLICATION_X_DIRECTOR,
    /**
     * "application/x-dvi"。
     *
     */
    APPLICATION_X_DVI,
    /**
     * "application/x-gtar"。
     *
     */
    APPLICATION_X_GTAR,
    /**
     * "application/x-gzip"。
     *
     */
    APPLICATION_X_GZIP,
    /**
     * "application/x-hdf"。
     *
     */
    APPLICATION_X_HDF,
    /**
     * "application/x-iphone"。
     *
     */
    APPLICATION_X_IPHONE,
    /**
     * "application/x-javascript"。
     *
     */
    APPLICATION_X_JAVASCRIPT,
    /**
     * "application/x-latex"。
     *
     */
    APPLICATION_X_LATEX,
    /**
     * "application/x-msaccess"。
     *
     */
    APPLICATION_X_MSACCESS,
    /**
     * "application/x-mscardfile"。
     *
     */
    APPLICATION_X_MSCARDFILE,
    /**
     * "application/x-msclip"。
     *
     */
    APPLICATION_X_MSCLIP,
    /**
     * "application/x-msdownload"。
     *
     */
    APPLICATION_X_MSDOWNLOAD,
    /**
     * "application/x-msmediaview"。
     *
     */
    APPLICATION_X_MSMEDIAVIEW,
    /**
     * "application/x-msmetafile"。
     *
     */
    APPLICATION_X_MSMETAFILE,
    /**
     * "application/x-msmoney"。
     *
     */
    APPLICATION_X_MSMONEY,
    /**
     * "application/x-mspublisher"。
     *
     */
    APPLICATION_X_MSPUBLISHER,
    /**
     * "application/x-msschedule"。
     *
     */
    APPLICATION_X_MSSCHEDULE,
    /**
     * "application/x-msterminal"。
     *
     */
    APPLICATION_X_MSTERMINAL,
    /**
     * "application/x-mswrite"。
     *
     */
    APPLICATION_X_MSWRITE,
    /**
     * "application/x-netcdf"。
     *
     */
    APPLICATION_X_NETCDF,
    /**
     * "application/x-perfmon"。
     *
     */
    APPLICATION_X_PERFMON,
    /**
     * "application/x-pkcs12"。
     *
     */
    APPLICATION_X_PKCS12,
    /**
     * "application/x-sh"。
     *
     */
    APPLICATION_X_SH,
    /**
     * "application/x-shar"。
     *
     */
    APPLICATION_X_SHAR,
    /**
     * "application/x-shockwave-flash"。
     *
     */
    APPLICATION_X_SHOCKWAVE_FLASH,
    /**
     * "application/x-stuffit"。
     *
     */
    APPLICATION_X_STUFFIT,
    /**
     * "application/x-sv4cpio"。
     *
     */
    APPLICATION_X_SV4CPIO,
    /**
     * "application/x-sv4crc"。
     *
     */
    APPLICATION_X_SV4CRC,
    /**
     * "application/x-tar"。
     *
     */
    APPLICATION_X_TAR,
    /**
     * "application/x-tcl"。
     *
     */
    APPLICATION_X_TCL,
    /**
     * "application/x-tex"。
     *
     */
    APPLICATION_X_TEX,
    /**
     * "application/x-texinfo"。
     *
     */
    APPLICATION_X_TEXINFO,
    /**
     * "application/x-troff"。
     *
     */
    APPLICATION_X_TROFF,
    /**
     * "application/x-ustar"。
     *
     */
    APPLICATION_X_USTAR,
    /**
     * "application/zip"。
     *
     */
    APPLICATION_ZIP,
    /**
     * "audio/basic"。
     *
     */
    AUDIO_BASIC,
    /**
     * "audio/mid"。
     *
     */
    AUDIO_MID,
    /**
     * "audio/mpeg"。
     *
     */
    AUDIO_MPEG,
    /**
     * "audio/x-aiff"。
     *
     */
    AUDIO_X_AIFF,
    /**
     * "audio/x-mpegurl"。
     *
     */
    AUDIO_X_MPEGURL,
    /**
     * "audio/x-wav"。
     *
     */
    AUDIO_X_WAV,
    /**
     * "image/bmp"。
     *
     */
    IMAGE_BMP,
    /**
     * "image/cis-cod"。
     *
     */
    IMAGE_CIS_COD,
    /**
     * "image/gif"。
     *
     */
    IMAGE_GIF,
    /**
     * "image/ief"。
     *
     */
    IMAGE_IEF,
    /**
     * "image/jpeg"。
     *
     */
    IMAGE_JPEG,
    /**
     * "image/pipeg"。
     *
     */
    IMAGE_PIPEG,
    /**
     * "image/svg+xml"。
     *
     */
    IMAGE_SVG_XML,
    /**
     * "image/tiff"。
     *
     */
    IMAGE_TIFF,
    /**
     * "image/x-cmx"。
     *
     */
    IMAGE_X_CMX,
    /**
     * "image/x-icon"。
     *
     */
    IMAGE_X_ICON,
    /**
     * "image/x-rgb"。
     *
     */
    IMAGE_X_RGB,
    /**
     * "image/x-xbitmap"。
     *
     */
    IMAGE_X_XBITMAP,
    /**
     * "image/x-xpixmap"。
     *
     */
    IMAGE_X_XPIXMAP,
    /**
     * "image/x-xwindowdump"。
     *
     */
    IMAGE_X_XWINDOWDUMP,
    /**
     * "message/rfc822"。
     *
     */
    MESSAGE_RFC822,
    /**
     * "text/css"。
     *
     */
    TEXT_CSS,
    /**
     * "text/h323"。
     *
     */
    TEXT_H323,
    /**
     * "text/html"。
     *
     */
    TEXT_HTML,
    /**
     * "text/iuls"。
     *
     */
    TEXT_IULS,
    /**
     * "text/plain"。
     *
     */
    TEXT_PLAIN,
    /**
     * "text/richtext"。
     *
     */
    TEXT_RICHTEXT,
    /**
     * "text/scriptlet"。
     *
     */
    TEXT_SCRIPTLET,
    /**
     * "text/webviewhtml"。
     *
     */
    TEXT_WEBVIEWHTML,
    /**
     * "text/x-component"。
     *
     */
    TEXT_X_COMPONENT,
    /**
     * "text/x-setext"。
     *
     */
    TEXT_X_SETEXT,
    /**
     * "text/x-vcard"。
     *
     */
    TEXT_X_VCARD,
    /**
     * "video/mpeg"。
     *
     */
    VIDEO_MPEG,
    /**
     * "video/quicktime"。
     *
     */
    VIDEO_QUICKTIME,
    /**
     * "video/x-msvideo"。
     *
     */
    VIDEO_X_MSVIDEO
}
/**
 * 命名的值。
 *
 */
export declare class TNamedValue {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建named_value对象。
     *
     *
     * @returns 返回named_value对象。
     */
    static create(): TNamedValue;
    /**
     * 转换为named_value对象(供脚本语言使用)。
     *
     * @param nv named_value对象。
     *
     * @returns 返回named_value对象。
     */
    static cast(nv: TNamedValue): TNamedValue;
    /**
     * 设置名称。
     *
     * @param name 名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setName(name: string): TRet;
    /**
     * 设置值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: TValue): TRet;
    /**
     * 获取值对象(主要给脚本语言使用)。
     *
     *
     * @returns 返回值对象。
     */
    getValue(): TValue;
    /**
     * 销毁named_value对象。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    destroy(): TRet;
    /**
     * 名称。
     *
     */
    get name(): string;
    set name(v: string);
}
/**
 * 对象常见命令定义
 *
 */
export declare enum TObjectCmd {
    /**
     * 保存命令
     *
     */
    SAVE,
    /**
     * 重新加载命令
     *
     */
    RELOAD,
    /**
     * 和前一个属性交换位置
     *>参数为属性的名称或路径。
     *
     */
    MOVE_UP,
    /**
     * 和后一个属性交换位置
     *>参数为属性的名称或路径。
     *
     */
    MOVE_DOWN,
    /**
     * 删除属性。
     *>参数为属性的名称或路径。
     *
     */
    REMOVE,
    /**
     * 删除勾选的属性。
     *>参数为属性的名称或路径。
     *
     */
    REMOVE_CHECKED,
    /**
     * 清除全部属性。
     *>参数为属性的名称或路径。
     *
     */
    CLEAR,
    /**
     * 增加子项。
     *>参数为属性的名称或路径。
     *
     */
    ADD,
    /**
     * 显示对象详细信息。
     *>参数为属性的名称或路径。
     *
     */
    DETAIL,
    /**
     * 编辑子项。
     *>参数为属性的名称或路径。
     *
     */
    EDIT
}
/**
 * 对象常见属性定义
 *
 */
export declare enum TObjectProp {
    /**
     * 属性的个数。
     *
     */
    SIZE,
    /**
     * 属性是否勾选。
     *
     */
    CHECKED,
    /**
     * 选中的索引。
     *
     */
    SELECTED_INDEX
}
/**
 * 循环记录日志(支持多线程访问)。
 *如果我们把日志写入文件中，随着时间的推移，日志文件会越来越大，最终占满这个磁盘，出现不可预料的错误。
 *rlog提供一个循环记录日志的功能，让日志文件始终不会超出指定的大小，达到指定大小后再从头开始写。
 *
 *> 为了实现简单，我们把日志文件分成0和1两个文件，先写文件0，到达指定最大值的一半时，再写文件1。
 *> 文件1到达指定最大值的一半时，删除文件0，并将文件1改名为文件0，重新创建文件1，继续写文件1，重复此过程。
 *
 */
export declare class TRlog {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建rlog对象。
     *
     *
     *
     * @param filename_pattern 用来确定文件名的路径和文件名。
     * @param max_size log文件占用最大磁盘空间(字节)。
     * @param buff_size 用于指定print时的buff大小。
     *
     * @returns 返回rlog对象。
     */
    static create(filename_pattern: string, max_size: number, buff_size: number): TRlog;
    /**
     * 写入一条日志记录。
     *
     * @param str 日志字符串。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    write(str: string): TRet;
}
/**
 * 获取当前时间的函数。
 *这里的当前时间是相对的，在嵌入式系统一般相对于开机时间(毫秒)。
 *它本身并没有任何意义，一般用来计算时间间隔，如实现定时器和动画等等。
 *
 */
export declare class TTimeNow {
    /**
     * 获取当前时间(秒)。
     *
     *备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。
     *
     *
     * @returns 返回当前时间(秒)。
     */
    static s(): number;
    /**
     * 获取当前时间(毫秒)。
     *
     *备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。
     *
     *
     * @returns 返回当前时间(毫秒)。
     */
    static ms(): number;
    /**
     * 获取当前时间(微秒)。
     *
     *备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。
     *
     *
     * @returns 返回当前时间(微秒)。
     */
    static us(): number;
}
/**
 * 定时器管理器。
 *
 */
export declare class TTimerManager {
    nativeObj: any;
    constructor(nativeObj: any);
}
/**
 * 函数返回值常量定义。
 *
 */
export declare enum TRet {
    /**
     * 成功。
     *
     */
    OK,
    /**
     * Out of memory。
     *
     */
    OOM,
    /**
     * 失败。
     *
     */
    FAIL,
    /**
     * 没有实现/不支持。
     *
     */
    NOT_IMPL,
    /**
     * 退出。通常用于主循环。
     *
     */
    QUIT,
    /**
     * 找到。
     *
     */
    FOUND,
    /**
     * 对象忙。
     *
     */
    BUSY,
    /**
     * 移出。通常用于定时器。
     *
     */
    REMOVE,
    /**
     * 重复。通常用于定时器。
     *
     */
    REPEAT,
    /**
     * 没找到。
     *
     */
    NOT_FOUND,
    /**
     * 操作完成。
     *
     */
    DONE,
    /**
     * 停止后续操作。
     *
     */
    STOP,
    /**
     * 跳过当前项。
     *
     */
    SKIP,
    /**
     * 继续后续操作。
     *
     */
    CONTINUE,
    /**
     * 对象属性变化。
     *
     */
    OBJECT_CHANGED,
    /**
     * 集合数目变化。
     *
     */
    ITEMS_CHANGED,
    /**
     * 无效参数。
     *
     */
    BAD_PARAMS,
    /**
     * 超时。
     *
     */
    TIMEOUT,
    /**
     * CRC错误。
     *
     */
    CRC,
    /**
     * IO错误。
     *
     */
    IO,
    /**
     * End of Stream
     *
     */
    EOS,
    /**
     * 没有改变。
     *
     */
    NOT_MODIFIED,
    /**
     * 没有权限。
     *
     */
    NO_PERMISSION,
    /**
     * 无效地址。
     *
     */
    INVALID_ADDR,
    /**
     * 超出范围。
     *
     */
    EXCEED_RANGE,
    /**
     * 最大值。
     *
     */
    MAX_NR
}
/**
 * 类型常量定义。
 *
 */
export declare enum TValueType {
    /**
     * 无效类型。
     *
     */
    INVALID,
    /**
     * BOOL类型。
     *
     */
    BOOL,
    /**
     * int8_t类型。
     *
     */
    INT8,
    /**
     * uint8_t类型。
     *
     */
    UINT8,
    /**
     * int16_t类型。
     *
     */
    INT16,
    /**
     * uint16_t类型。
     *
     */
    UINT16,
    /**
     * int32_t类型。
     *
     */
    INT32,
    /**
     * uint32_t类型。
     *
     */
    UINT32,
    /**
     * int64_t类型。
     *
     */
    INT64,
    /**
     * uint64_t类型。
     *
     */
    UINT64,
    /**
     * void*类型。
     *
     */
    POINTER,
    /**
     * float_t类型。
     *
     */
    FLOAT,
    /**
     * float类型。
     *
     */
    FLOAT32,
    /**
     * double类型。
     *
     */
    DOUBLE,
    /**
     * char*类型。
     *
     */
    STRING,
    /**
     * wchar_t*类型。
     *
     */
    WSTRING,
    /**
     * tk_object_t*类型。
     *
     */
    OBJECT,
    /**
     * 带长度的字符串。
     *
     */
    SIZED_STRING,
    /**
     * 二进制数据。
     *
     */
    BINARY,
    /**
     * 二进制数据(UBJSON)。
     *
     */
    UBJSON,
    /**
     * 特殊用途。
     *
     */
    TOKEN,
    /**
     * 渐变颜色。
     *
     */
    GRADIENT,
    /**
     * id。
     *
     */
    ID,
    /**
     * func。
     *
     */
    FUNC,
    /**
     * func definition。
     *
     */
    FUNC_DEF,
    /**
     * void*类型。
     *
     */
    POINTER_REF,
    /**
     * 位图类型。
     *
     */
    BITMAP,
    /**
     * 矩形类型。
     *
     */
    RECT
}
/**
 * 资源管理器。
 *这里的资源管理器并非Windows下的文件浏览器，而是负责对各种资源，比如字体、窗体样式、图片、界面数据、字符串和其它数据的进行集中管理的组件。引入资源管理器的目的有以下几个：
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
 *不同类型的资源使用方式是不一样的，比如字体和窗体样式加载之后会一直使用，UI文件在生成界面之后就暂时不需要了，PNG文件解码之后就只需要保留解码的位图数据即可。资源管理器配合图片管理器等其它组件实现资源的自动缓存。
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
 *styles  窗体样式数据。
 *ui      UI描述数据。
 *```
 *
 */
export declare class TAssetsManager extends TEmitter {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 获取缺省资源管理器。
     *
     *
     * @returns 返回asset manager对象。
     */
    static instance(): TAssetsManager;
    /**
     * 设置当前的主题。
     *
     * @param theme 主题名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTheme(theme: string): TRet;
    /**
     * 在资源管理器的缓存中查找指定的资源并引用它，如果缓存中不存在，尝试加载该资源。
     *
     * @param type 资源的类型。
     * @param name 资源的名称。
     *
     * @returns 返回资源。
     */
    ref(type: TAssetType, name: string): TAssetInfo;
    /**
     * 在资源管理器的缓存中查找指定的资源并引用它，如果缓存中不存在，尝试加载该资源。
     *
     * @param type 资源的类型。
     * @param subtype 资源的子类型。
     * @param name 资源的名称。
     *
     * @returns 返回资源。
     */
    refEx(type: TAssetType, subtype: number, name: string): TAssetInfo;
    /**
     * 释放指定的资源。
     *
     * @param info 资源。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    unref(info: TAssetInfo): TRet;
}
/**
 * 控件动画事件。
 *
 */
export declare class TWidgetAnimatorEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转widget_animator_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    static cast(event: TEvent): TWidgetAnimatorEvent;
    /**
     * 控件对象。
     *
     */
    get widget(): TWidget;
    /**
     * 控件动画句柄。
     *
     */
    get animator(): any;
}
/**
 * model变化事件。
 *
 */
export declare class TModelEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转model_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    static cast(event: TEvent): TModelEvent;
    /**
     * 模型名称。
     *
     */
    get name(): string;
    /**
     * 变化类型(update/add/remove)。
     *
     */
    get changeType(): string;
    /**
     * 模型。
     *
     */
    get model(): TObject;
}
/**
 * 滚轮事件。
 *
 */
export declare class TWheelEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转wheel_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    static cast(event: TEvent): TWheelEvent;
    /**
     * x坐标。
     *
     */
    get x(): number;
    /**
     * y坐标。
     *
     */
    get y(): number;
    /**
     * 滚轮的y值。
     *
     */
    get dy(): number;
    /**
     * alt键是否按下。
     *
     */
    get alt(): boolean;
    /**
     * ctrl键是否按下。
     *
     */
    get ctrl(): boolean;
    /**
     * shift键是否按下。
     *
     */
    get shift(): boolean;
}
/**
 * 滚轮事件。
 *
 */
export declare class TOrientationEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转orientation_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    static cast(event: TEvent): TOrientationEvent;
    /**
     * 屏幕方向。
     *
     */
    get orientation(): any;
    /**
     * 旧的屏幕方向。
     *
     */
    get oldOrientation(): any;
}
/**
 * offset变化事件。
 *
 */
export declare class TOffsetChangeEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转offset_change_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    static cast(event: TEvent): TOffsetChangeEvent;
}
/**
 * 指针事件。
 *
 */
export declare class TPointerEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转pointer_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    static cast(event: TEvent): TPointerEvent;
    /**
     * x坐标。
     *
     */
    get x(): number;
    /**
     * y坐标。
     *
     */
    get y(): number;
    /**
     * button。
     *在不同的平台，该属性会发生变化，
     *PC ：左键为 1，中键为 2，右键为 3
     *嵌入式：默认为 1
     *
     */
    get button(): number;
    /**
     * 指针是否按下。
     *
     */
    get pressed(): boolean;
    /**
     * alt键是否按下。
     *
     */
    get alt(): boolean;
    /**
     * ctrl键是否按下。
     *
     */
    get ctrl(): boolean;
    /**
     * cmd键是否按下。
     *
     */
    get cmd(): boolean;
    /**
     * menu键是否按下。
     *
     */
    get menu(): boolean;
    /**
     * shift键是否按下。
     *
     */
    get shift(): boolean;
}
/**
 * 按键事件。
 *
 */
export declare class TKeyEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转key_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    static cast(event: TEvent): TKeyEvent;
    /**
     * 键值。
     *
     */
    get key(): number;
    /**
     * alt键是否按下。
     *
     */
    get alt(): boolean;
    /**
     * left alt键是否按下。
     *
     */
    get lalt(): boolean;
    /**
     * right alt键是否按下。
     *
     */
    get ralt(): boolean;
    /**
     * ctrl键是否按下。
     *
     */
    get ctrl(): boolean;
    /**
     * left ctrl键是否按下。
     *
     */
    get lctrl(): boolean;
    /**
     * right ctrl键是否按下。
     *
     */
    get rctrl(): boolean;
    /**
     * shift键是否按下。
     *
     */
    get shift(): boolean;
    /**
     * left shift键是否按下。
     *
     */
    get lshift(): boolean;
    /**
     * right shift键是否按下。
     *
     */
    get rshift(): boolean;
    /**
     * cmd/win键是否按下。
     *
     */
    get cmd(): boolean;
    /**
     * menu键是否按下。
     *
     */
    get menu(): boolean;
    /**
     * capslock键是否按下。
     *
     */
    get capslock(): boolean;
    /**
     * numlock键是否按下。
     *
     */
    get numlock(): boolean;
}
/**
 * 绘制事件。
 *
 */
export declare class TPaintEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转paint_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event 对象。
     */
    static cast(event: TEvent): TPaintEvent;
    /**
     * canvas。
     *
     */
    get c(): TCanvas;
}
/**
 * 窗口事件，由窗口管理器触发。
 *
 */
export declare class TWindowEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转window_event_t对象。
     *
     * @param event event对象。
     *
     * @returns 对象。
     */
    static cast(event: TEvent): TWindowEvent;
    /**
     * canvas。
     *
     */
    get window(): TWidget;
}
/**
 * 多点触摸手势事件。
 *
 */
export declare class TMultiGestureEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转multi_gesture_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    static cast(event: TEvent): TMultiGestureEvent;
    /**
     * 中心点x坐标。
     *
     */
    get x(): number;
    /**
     * 中心点y坐标。
     *
     */
    get y(): number;
    /**
     * 旋转角度(幅度)增量。（单位弧度）
     *
     */
    get rotation(): number;
    /**
     * 两点间的距离增量。(-1,0)表示缩小，(0-1)表示增加。
     *
     */
    get distance(): number;
}
/**
 * 主题变化事件。
 *
 */
export declare class TThemeChangeEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转theme_change_event_t对象。
     *
     * @param event event对象。
     *
     * @returns 返回event对象。
     */
    static cast(event: TEvent): TThemeChangeEvent;
    /**
     * 主题名称。
     *
     */
    get name(): string;
}
/**
 * 文件拖入事件。
 *
 */
export declare class TDropFileEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转drop_file_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event 对象。
     */
    static cast(event: TEvent): TDropFileEvent;
    /**
     * 文件名。
     *
     */
    get filename(): string;
}
/**
 * 系统事件。
 *
 */
export declare class TSystemEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转system_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event 对象。
     */
    static cast(event: TEvent): TSystemEvent;
    /**
     * SDL_Event。
     *
     */
    get sdlEvent(): any;
}
/**
 * UI加载完成事件。
 *
 */
export declare class TUiLoadEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转ui_load_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event 对象。
     */
    static cast(event: TEvent): TUiLoadEvent;
    /**
     * UI的根控件对象。
     *
     */
    get root(): TWidget;
    /**
     * UI的名称。
     *
     */
    get name(): string;
}
/**
 * 字体管理器，负责字体的加载和缓存管理。
 *(如果使用nanovg，字体由nanovg内部管理)
 *
 */
export declare class TFontManager extends TEmitter {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 卸载指定的字体。
     *
     * @param name 字体名，为NULL时使用缺省字体。
     * @param size 字体的大小(矢量字体指定为0即可)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    unloadFont(name: string, size: number): TRet;
    /**
     * 清除最久没有被使用的缓冲字模。
     *
     * @param cache_size 每种字体保留缓存字模的个数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    shrinkCache(cache_size: number): TRet;
    /**
     * 卸载全部字体。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    unloadAll(): TRet;
}
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
 *<image draw_type="center" image="file://./design/default/images/xx/flag_CN.png" />
 *<gif image="file://./design/default/images/x2/bee.gif" />
 *<svg image="file://./design/default/images/svg/china.bsvg" />
 *```
 *
 */
export declare class TImageBase extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 设置控件的图片名称。
     *
     *> 如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。
     *
     * @param name 图片名称，该图片必须存在于资源管理器。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setImage(name: string): TRet;
    /**
     * 设置控件的旋转角度(仅在WITH_VGCANVAS定义时生效)。
     *
     * @param rotation 旋转角度(幅度)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setRotation(rotation: number): TRet;
    /**
     * 设置控件的缩放比例(仅在WITH_VGCANVAS定义时生效)。
     *
     * @param scale_x X方向缩放比例。
     * @param scale_y Y方向缩放比例。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setScale(scale_x: number, scale_y: number): TRet;
    /**
     * 设置控件的锚点(仅在WITH_VGCANVAS定义时生效)。
     *
     * @param anchor_x 锚点X(0-1)。0在控件左边，0.5在控件中间，1在控件右边。
     * @param anchor_y 锚点Y(0-1)。0在控件顶部，0.5在控件中间，1在控件底部。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAnchor(anchor_x: number, anchor_y: number): TRet;
    /**
     * 设置控件的选中状态。
     *
     * @param selected 是否被选中。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSelected(selected: boolean): TRet;
    /**
     * 设置控件是否可以被选中。
     *
     * @param selectable 是否可以被选中。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSelectable(selectable: boolean): TRet;
    /**
     * 设置控件是否可以被点击。
     *
     * @param clickable 是否可以被点击。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setClickable(clickable: boolean): TRet;
    /**
     * 转换为image_base对象(供脚本语言使用)。
     *
     * @param widget image_base对象。
     *
     * @returns image_base对象。
     */
    static cast(widget: TWidget): TImageBase;
    /**
     * 图片的名称。
     *
     */
    get image(): string;
    set image(v: string);
    /**
     * 锚点X(0-1)。0在控件左边，0.5在控件中间，1在控件右边。
     *
     */
    get anchorX(): number;
    /**
     * 锚点Y(0-1)。0在控件顶部，0.5在控件中间，1在控件底部。
     *
     */
    get anchorY(): number;
    /**
     * 控件在X方向上的缩放比例。
     *
     */
    get scaleX(): number;
    /**
     * 控件在Y方向上的缩放比例。
     *
     */
    get scaleY(): number;
    /**
     * 控件的旋转角度(幅度)。
     *
     */
    get rotation(): number;
    set rotation(v: number);
    /**
     * 点击时，是否触发EVT_CLICK事件。
     *
     */
    get clickable(): boolean;
    set clickable(v: boolean);
    /**
     * 是否设置选中状态。
     *
     */
    get selectable(): boolean;
    set selectable(v: boolean);
    /**
     * 当前是否被选中。
     *
     */
    get selected(): boolean;
    set selected(v: boolean);
}
/**
 * 可变的style(可实时修改并生效，主要用于在designer中被编辑的控件，或者一些特殊控件)。
 *
 *style\_mutable也对style\_const进行了包装，当用户没修改某个值时，便从style\_const中获取。
 *
 */
export declare class TStyleMutable extends TStyle {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 设置style的名称。
     *
     * @param name 名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setName(name: string): TRet;
    /**
     * 设置指定名称整数格式的值。
     *
     * @param state 控件状态。
     * @param name 属性名。
     * @param val 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setInt(state: string, name: string, val: number): TRet;
    /**
     * 转换为style_mutable对象。
     *
     * @param s style对象。
     *
     * @returns style对象。
     */
    static cast(s: TStyle): TStyleMutable;
    /**
     * 创建style\_mutable对象。
     *
     *> 除了测试程序外不需要直接调用，widget会通过style\_factory\_create创建。
     *
     * @param default_style 缺省的style。
     *
     * @returns style对象。
     */
    static create(default_style: TStyle): TStyleMutable;
    /**
     * 名称。
     *
     */
    get name(): string;
    set name(v: string);
}
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
export declare class TWindowBase extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 转换为window_base对象(供脚本语言使用)。
     *
     * @param widget window_base对象。
     *
     * @returns window_base对象。
     */
    static cast(widget: TWidget): TWindowBase;
    /**
     * 窗体样式资源的名称。
     *每个窗口都可以有独立的窗体样式文件，如果没指定，则使用系统缺省的窗体样式文件。
     *窗体样式是一个XML文件，放在assets/raw/styles目录下。
     *请参考[窗体样式](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)
     *
     */
    get theme(): string;
    /**
     * 设计时宽度。
     *
     */
    get designW(): number;
    /**
     * 设计时高度。
     *
     */
    get designH(): number;
    /**
     * 窗口大小与设计时大小不同时，是否自动调整子控件的x坐标。
     *
     */
    get autoScaleChildrenX(): boolean;
    /**
     * 窗口大小与设计时大小不同时，是否自动调整子控件的y坐标。
     *
     */
    get autoScaleChildrenY(): boolean;
    /**
     * 窗口大小与设计时大小不同时，是否自动调整子控件的宽度。
     *
     */
    get autoScaleChildrenW(): boolean;
    /**
     * 窗口大小与设计时大小不同时，是否自动调整子控件的高度。
     *
     */
    get autoScaleChildrenH(): boolean;
    /**
     * 禁用窗口动画。
     *
     */
    get disableAnim(): boolean;
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
    get closable(): TWindowClosable;
    /**
     * 打开窗口动画的名称。
     *请参考[窗口动画](https://github.com/zlgopen/awtk/blob/master/docs/window_animator.md)
     *
     */
    get openAnimHint(): string;
    /**
     * 关闭窗口动画的名称。
     *请参考[窗口动画](https://github.com/zlgopen/awtk/blob/master/docs/window_animator.md)
     *
     */
    get closeAnimHint(): string;
    /**
     * 向前移动焦点的键值。
     *
     *请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)
     *
     */
    get moveFocusPrevKey(): string;
    /**
     * 向后移动焦点的键值。
     *
     *请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)
     *
     */
    get moveFocusNextKey(): string;
    /**
     * 向上移动焦点的键值。
     *
     *请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)
     *
     */
    get moveFocusUpKey(): string;
    /**
     * 向下移动焦点的键值。
     *
     *请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)
     *
     */
    get moveFocusDownKey(): string;
    /**
     * 向左移动焦点的键值。
     *
     *请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)
     *
     */
    get moveFocusLeftKey(): string;
    /**
     * 向右移动焦点的键值。
     *
     *请参考[控件焦点](https://github.com/zlgopen/awtk/blob/master/docs/widget_focus.md)
     *
     */
    get moveFocusRightKey(): string;
    /**
     * 小应用程序(applet)的名称。
     *
     *> 如果该窗口属于某个独立的小程序应用(applet)，需要指定它的名称，以便到对应的资源目录查找资源。
     *
     */
    get appletName(): string;
    /**
     * 单例。如果窗口存在，先关闭再打开。
     *
     */
    get singleInstance(): boolean;
    /**
     * 点击非focusable控件时，是否让当前焦点控件失去焦点。比如点击窗口空白区域，是否让编辑器失去焦点。
     *
     */
    get stronglyFocus(): boolean;
}
/**
 * 窗口管理器。
 *
 */
export declare class TWindowManager extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 获取全局window_manager对象
     *
     *
     * @returns 对象。
     */
    static instance(): TWindowManager;
    /**
     * 转换为window_manager对象(供脚本语言使用)。
     *
     * @param widget window_manager对象。
     *
     * @returns window_manager对象。
     */
    static cast(widget: TWidget): TWindowManager;
    /**
     * 获取最上面的主窗口。
     *
     *
     * @returns 返回窗口对象。
     */
    getTopMainWindow(): TWidget;
    /**
     * 获取最上面的窗口。
     *
     *
     * @returns 返回窗口对象。
     */
    getTopWindow(): TWidget;
    /**
     * 获取前一个的窗口。
     *
     *
     * @returns 返回窗口对象。
     */
    getPrevWindow(): TWidget;
    /**
     * 获取指针当前的X坐标。
     *
     *
     * @returns 返回指针当前的X坐标。
     */
    getPointerX(): number;
    /**
     * 获取指针当前的Y坐标。
     *
     *
     * @returns 返回指针当前的X坐标。
     */
    getPointerY(): number;
    /**
     * 获取指针当前是否按下。
     *
     *
     * @returns 返回指针当前是否按下。
     */
    getPointerPressed(): boolean;
    /**
     * 获取当前窗口动画是否正在播放。
     *
     *
     * @returns 返回TRUE表示正在播放，FALSE表示没有播放。
     */
    isAnimating(): boolean;
    /**
     * 设置是否显示FPS。
     *
     * @param show_fps 是否显示FPS。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setShowFps(show_fps: boolean): TRet;
    /**
     * 设置显示FPS的起始坐标。
     *
     * @param x 左上角x坐标。
     * @param y 左上角x坐标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setShowFpsPosition(x: number, y: number): TRet;
    /**
     * 限制最大帧率。
     *
     *> TK\_MAX\_LOOP\_FPS/max\_fps最好是整数，比如TK\_MAX\_LOOP\_FPS为120，max\_fps可取60/30/20/10等。
     *
     * @param max_fps 最大帧率。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMaxFps(max_fps: number): TRet;
    /**
     * 设置是否忽略用户输入事件。
     *
     * @param ignore_input_events 是否忽略用户输入事件。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setIgnoreInputEvents(ignore_input_events: boolean): TRet;
    /**
     * 设置屏保时间(毫秒)。
     *
     * @param screen_saver_time 屏保时间(单位毫秒), 为0关闭屏保。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setScreenSaverTime(screen_saver_time: number): TRet;
    /**
     * 设置鼠标指针。
     *
     * @param cursor 图片名称(从图片管理器中加载)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCursor(cursor: string): TRet;
    /**
     * 请求关闭顶层窗口。
     *
     *> 如果顶层窗口时模态对话框，用DIALOG\_QUIT\_NONE调用dialog\_quit。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    back(): TRet;
    /**
     * 回到主窗口，关闭之上的全部窗口。
     *
     *> 如果顶层窗口时模态对话框，用DIALOG\_QUIT\_NONE调用dialog\_quit。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    backToHome(): TRet;
    /**
     * 回到指定的窗口，关闭之上的全部窗口。
     *
     *> 如果顶层窗口时模态对话框，用DIALOG\_QUIT\_NONE调用dialog\_quit。
     *
     * @param target 目标窗口的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    backTo(target: string): TRet;
    /**
     * 调整原生窗口的大小。
     *
     * @param w 宽度
     * @param h 高度
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    resize(w: number, h: number): TRet;
    /**
     * 设置原生窗口是否全屏。
     *
     * @param fullscreen 是否全屏
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFullscreen(fullscreen: boolean): TRet;
    /**
     * 关闭全部窗口。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    closeAll(): TRet;
}
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
 *[canvas_widget.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/vgcanvas.xml)
 *
 *在c代码中使用函数canvas\_widget\_create创建画布控件。如：
 *
 *
 *
 *> 创建之后，需要用widget\_on注册EVT\_PAINT事件，并在EVT\_PAINT事件处理函数中绘制。
 *
 *
 *
 *绘制时，可以通过canvas接口去绘制，也可以通过vgcanvas接口去绘制。
 *先从evt获取canvas对象，再通过canvas\_get\_vgcanvas从canvas中获取vgcanvas对象。
 *
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
export declare class TCanvasWidget extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TCanvasWidget;
    /**
     * 转换为canvas_widget对象(供脚本语言使用)。
     *
     * @param widget canvas_widget对象。
     *
     * @returns canvas_widget对象。
     */
    static cast(widget: TWidget): TCanvasWidget;
}
/**
 * 颜色选择器的颜色分量。
 *控件的名称有严格规定：
 *COLOR_PICKER_CHILD_SV: 水平为Value/Brightness(递增)，垂直为Saturation(递减)。
 *COLOR_PICKER_CHILD_H: 水平为同色，垂直为Hue(递减)。
 *
 */
export declare class TColorComponent extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建color_component对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TColorComponent;
    /**
     * 转换为color_component对象(供脚本语言使用)。
     *
     * @param widget color_component对象。
     *
     * @returns color_component对象。
     */
    static cast(widget: TWidget): TColorComponent;
}
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
 *[color\_picker](https://github.com/zlgopen/awtk/blob/master/design/default/ui/color_picker.xml)
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
export declare class TColorPicker extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TColorPicker;
    /**
     * 设置颜色。
     *
     * @param color 颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setColor(color: string): TRet;
    /**
     * 转换为color_picker对象(供脚本语言使用)。
     *
     * @param widget color_picker对象。
     *
     * @returns color_picker对象。
     */
    static cast(widget: TWidget): TColorPicker;
    /**
     * 颜色。
     *
     */
    get value(): string;
}
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
 *[draggable.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/draggable.xml)
 *
 *在c代码中使用函数draggable\_create创建按钮控件。如：
 *
 *
 *
 *> draggable本身不可见，故无需style。
 *
 */
export declare class TDraggable extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TDraggable;
    /**
     * 转换为draggable对象(供脚本语言使用)。
     *
     * @param widget draggable对象。
     *
     * @returns draggable对象。
     */
    static cast(widget: TWidget): TDraggable;
    /**
     * 设置top。
     *
     * @param top 拖动范围的顶部限制。缺省为父控件的顶部。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTop(top: number): TRet;
    /**
     * 设置bottom。
     *
     * @param bottom 拖动范围的底部限制。缺省为父控件的底部。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setBottom(bottom: number): TRet;
    /**
     * 设置left。
     *
     * @param left 拖动范围的左边限制。缺省为父控件的左边。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLeft(left: number): TRet;
    /**
     * 设置right。
     *
     * @param right 拖动范围的右边限制。缺省为父控件的右边边。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setRight(right: number): TRet;
    /**
     * 设置vertical_only。
     *
     * @param vertical_only 只允许垂直拖动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setVerticalOnly(vertical_only: boolean): TRet;
    /**
     * 设置horizontal_only。
     *
     * @param horizontal_only 只允许水平拖动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setHorizontalOnly(horizontal_only: boolean): TRet;
    /**
     * 设置是否无范围限制拖动。
     *备注：可以让窗口拖动到外面去。
     *
     * @param allow_out_of_screen 是否无范围限制拖动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAllowOutOfScreen(allow_out_of_screen: boolean): TRet;
    /**
     * 设置drag_window。
     *拖动窗口而不是父控件。比如放在对话框的titlebar上，拖动titlebar其实是希望拖动对话框。
     *
     * @param drag_window 是否拖动窗口。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDragWindow(drag_window: boolean): TRet;
    /**
     * 设置drag_native_window。
     *
     * @param drag_native_window 是否拖动原生窗口。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDragNativeWindow(drag_native_window: boolean): TRet;
    /**
     * 设置drag_parent。
     *拖动窗口而不是父控件。比如放在对话框的titlebar上，拖动titlebar其实是希望拖动对话框。
     *
     * @param drag_parent 0表示直系父控件，1表示父控件的父控件，依次类推。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDragParent(drag_parent: number): TRet;
    /**
     * 拖动范围的顶部限制。缺省为父控件的顶部。
     *
     */
    get top(): number;
    set top(v: number);
    /**
     * 拖动范围的底部限制。缺省为父控件的底部。
     *
     */
    get bottom(): number;
    set bottom(v: number);
    /**
     * 拖动范围的左边限制。缺省为父控件的左边。
     *
     */
    get left(): number;
    set left(v: number);
    /**
     * 拖动范围的右边限制。缺省为父控件的右边边。
     *
     */
    get right(): number;
    set right(v: number);
    /**
     * 支持超出原生窗口边界拖动。（无法完全移出原生窗口，同时优先受到拖动范围限制的影响）
     *
     */
    get allowOutOfScreen(): boolean;
    set allowOutOfScreen(v: boolean);
    /**
     * 只允许垂直拖动。
     *
     */
    get verticalOnly(): boolean;
    set verticalOnly(v: boolean);
    /**
     * 只允许水平拖动。
     *
     */
    get horizontalOnly(): boolean;
    set horizontalOnly(v: boolean);
    /**
     * 拖动窗口而不是父控件。比如放在对话框的titlebar上，拖动titlebar其实是希望拖动对话框。
     *
     */
    get dragWindow(): boolean;
    set dragWindow(v: boolean);
    /**
     * 拖动原生窗口。
     *
     */
    get dragNativeWindow(): boolean;
    set dragNativeWindow(v: boolean);
    /**
     * 拖动父控件。0表示直系父控件，1表示父控件的父控件，依次类推。
     *
     */
    get dragParent(): number;
    set dragParent(v: number);
}
/**
 * 文件管理/浏览/选择控件。
 *
 *file\_browser\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于file\_browser\_view\_t控件。
 *
 *考虑到文件浏览器界面呈现的多样性，界面呈现工作完全有子控件来完成。
 *
 *file\_browser\_view\_t负责关联文件/文件夹数据到子控件上，子控件需要特定的规范命名。
 *
 ** 名为 "cwd" 的子控件用于显示当前路径。
 *
 ** 名为 "selected_file" 的子控件用于显示当前选择的文件。
 *
 ** 名为 "file" 的子控件用于显示文件项的模板控件。
 *
 ** 名为 "folder" 的子控件用于显示文件夹项的模板控件。
 *
 ** 名为 "return_up" 的子控件用于返回上一级文件夹的模板控件。
 *
 ** 名为 "container" 的子控件为容器控件，通常是scrollview。
 *
 ** 名为 "name" 的子控件用于显示文件和文件夹的名称(放在列表项目内)。
 *
 ** 名为 "size" 的子控件用于显示文件和文件夹的大小(放在列表项目内)。
 *
 ** 名为 "mtime" 的子控件用于显示文件和文件夹的修改时间(放在列表项目内)。
 *
 ** 名为 "ctime" 的子控件用于显示文件和文件夹的创建时间(放在列表项目内)。
 *
 ** 名为 "icon" 的子控件用于显示文件和文件夹的图标(放在列表项目内)。
 *
 ** 类型为 "check_button" 的子控件用于选择(放在列表项目内)。
 *
 *完整示例请参考：
 *
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/file_chooser_for_open.xml
 *
 */
export declare class TFileBrowserView extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建file_browser_view对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TFileBrowserView;
    /**
     * 转换为file_browser_view对象(供脚本语言使用)。
     *
     * @param widget file_browser_view对象。
     *
     * @returns file_browser_view对象。
     */
    static cast(widget: TWidget): TFileBrowserView;
    /**
     * 设置 初始文件夹。
     *
     * @param init_dir 初始文件夹。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setInitDir(init_dir: string): TRet;
    /**
     * 设置 顶层文件夹。
     *
     * @param top_dir 初始文件夹。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTopDir(top_dir: string): TRet;
    /**
     * 设置 过滤规则。
     *> files_only 表示只列出文件，dir_only 表示只列出目录，其它表示只列出满足扩展名文件集合(如：.jpg.png.gif)。
     *
     * @param filter 过滤规则。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFilter(filter: string): TRet;
    /**
     * 重新加载。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    reload(): TRet;
    /**
     * 设置 忽略隐藏文件。
     *
     * @param ignore_hidden_files 忽略隐藏文件。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setIgnoreHiddenFiles(ignore_hidden_files: boolean): TRet;
    /**
     * 设置 是否为升序排序。
     *
     * @param sort_ascending 是否为升序排序。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSortAscending(sort_ascending: boolean): TRet;
    /**
     * 设置 是否显示checkbutton。
     *
     * @param show_check_button 是否显示checkbutton。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setShowCheckButton(show_check_button: boolean): TRet;
    /**
     * 设置 排序方式。可选值(name, size, mtime, type)。
     *
     * @param sort_by 排序方式。可选值(name, size, mtime, type)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSortBy(sort_by: string): TRet;
    /**
     * 设置 奇数项样式。
     *
     * @param odd_item_style 奇数项样式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setOddItemStyle(odd_item_style: string): TRet;
    /**
     * 设置 偶数项样式。
     *
     * @param even_item_style 奇数项样式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setEvenItemStyle(even_item_style: string): TRet;
    /**
     * 获取当前路径。
     *
     *
     * @returns 返回当前路径。
     */
    getCwd(): string;
    /**
     * 在当前文件夹创建子文件夹。
     *
     * @param name 子文件夹名。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    createDir(name: string): TRet;
    /**
     * 在当前文件夹创建文件。
     *
     * @param name 文件名。
     * @param data 数据。
     * @param size 数据长度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    createFile(name: string, data: string, size: number): TRet;
    /**
     * 初始文件夹。
     *
     */
    get initDir(): string;
    set initDir(v: string);
    /**
     * 最顶层目录。到达本目录后，不允许往上。
     *
     */
    get topDir(): string;
    set topDir(v: string);
    /**
     * 过滤规则。
     *
     */
    get filter(): string;
    set filter(v: string);
    /**
     * 是否忽略隐藏文件。
     *
     */
    get ignoreHiddenFiles(): boolean;
    set ignoreHiddenFiles(v: boolean);
    /**
     * 是否为升序排序。
     *
     */
    get sortAscending(): boolean;
    set sortAscending(v: boolean);
    /**
     * 是否显示checkbutton。
     *
     */
    get showCheckButton(): boolean;
    set showCheckButton(v: boolean);
    /**
     * 排序方式。可选值(name, size, mtime, type)。
     *
     */
    get sortBy(): string;
    set sortBy(v: string);
    /**
     * 奇数项样式。
     *
     */
    get oddItemStyle(): string;
    set oddItemStyle(v: string);
    /**
     * 偶数项样式。
     *
     */
    get evenItemStyle(): string;
    set evenItemStyle(v: string);
}
/**
 * 文件/目录选择器
 *
 */
export declare class TFileChooser extends TEmitter {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建file_chooser对象
     *
     *
     * @returns 对象。
     */
    static create(): TFileChooser;
    /**
     * 设置初始目录。
     *
     * @param init_dir 初始目录
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setInitDir(init_dir: string): TRet;
    /**
     * 设置初始目录。
     *
     * @param top_dir 初始目录
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTopDir(top_dir: string): TRet;
    /**
     * 设置过滤规则。
     *> files_only 表示只列出文件，dir_only 表示只列出目录，其它表示只列出满足扩展名文件集合(如：.jpg.png.gif)。
     *
     * @param filter 过滤规则。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFilter(filter: string): TRet;
    /**
     * 转换为file_chooser对象(供脚本语言使用)。
     *
     * @param chooser file_chooser对象。
     *
     * @returns 对象。
     */
    static cast(chooser: TFileChooser): TFileChooser;
    /**
     * 为了保存而选择文件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    chooseFileForSave(): TRet;
    /**
     * 为了打开而选择文件。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    chooseFileForOpen(): TRet;
    /**
     * 选择目录。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    chooseFolder(): TRet;
    /**
     * 获取目录。
     *
     *
     * @returns 返回选择的目录。
     */
    getDir(): string;
    /**
     * 获取文件名。
     *
     *
     * @returns 返回选择的文件名。
     */
    getFilename(): string;
    /**
     * 用户是否取消了选择。
     *
     *
     * @returns 返回用户是否取消了选择。
     */
    isAborted(): boolean;
}
/**
 * 仪表指针控件。
 *
 *仪表指针就是一张旋转的图片，图片可以是普通图片也可以是SVG图片。
 *
 *在嵌入式平台上，对于旋转的图片，SVG图片的效率比位图高数倍，所以推荐使用SVG图片。
 *
 *gauge\_pointer\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于gauge\_pointer\_t控件。
 *
 *在xml中使用"gauge\_pointer"标签创建仪表指针控件。如：
 *
 *```xml
 *<gauge_pointer x="c" y="50" w="24" h="140" value="-128" image="gauge_pointer" />
 *```
 *
 *> 更多用法请参考：
 *[gauge.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/gauge.xml)
 *
 *在c代码中使用函数gauge\_pointer\_create创建仪表指针控件。如：
 *
 *
 *
 *> 创建之后，需要用gauge\_pointer\_set\_image设置仪表指针图片。
 *
 */
export declare class TGaugePointer extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建gauge_pointer对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TGaugePointer;
    /**
     * 转换为gauge_pointer对象(供脚本语言使用)。
     *
     * @param widget gauge_pointer对象。
     *
     * @returns gauge_pointer对象。
     */
    static cast(widget: TWidget): TGaugePointer;
    /**
     * 设置指针角度。12点钟方向为0度，顺时钟方向为正，单位为度。
     *
     * @param angle 指针角度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAngle(angle: number): TRet;
    /**
     * 设置指针的图片。
     *
     * @param image 指针的图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setImage(image: string): TRet;
    /**
     * 设置指针的旋转锚点。
     *
     * @param anchor_x 指针的锚点坐标x。(后面加上px为像素点，不加px为相对百分比坐标)
     * @param anchor_y 指针的锚点坐标y。(后面加上px为像素点，不加px为相对百分比坐标)
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAnchor(anchor_x: string, anchor_y: string): TRet;
    /**
     * 指针角度。12点钟方向为0度，顺时钟方向为正，单位为度。
     *
     */
    get angle(): number;
    set angle(v: number);
    /**
     * 指针图片。
     *
     *图片须垂直向上，图片的中心点为旋转方向。
     *
     */
    get image(): string;
    set image(v: string);
    /**
     * 图片旋转锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
     *
     */
    get anchorX(): string;
    /**
     * 图片旋转锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
     *
     */
    get anchorY(): string;
}
/**
 * 表盘控件。
 *
 *表盘控件就是一张图片。
 *
 *gauge\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于gauge\_t控件。
 *
 *在xml中使用"gauge"标签创建表盘控件。如：
 *
 *```xml
 *<gauge x="c" y="10" w="240" h="240" image="gauge_bg"
 *```
 *
 *> 更多用法请参考：
 *[gauge.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/gauge.xml)
 *
 *在c代码中使用函数gauge\_create创建表盘控件。如：
 *
 *
 *
 *可用通过style来设置控件的显示风格，如背景和边框等。如：
 *
 *```xml
 *<gauge>
 *<style name="border">
 *<normal border_color="#000000" bg_color="#e0e0e0" text_color="black"/>
 *</style>
 *</gauge>
 *```
 *
 *> 更多用法请参考：
 *[theme
 *default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml)
 *
 */
export declare class TGauge extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建gauge对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TGauge;
    /**
     * 转换为gauge对象(供脚本语言使用)。
     *
     * @param widget gauge对象。
     *
     * @returns gauge对象。
     */
    static cast(widget: TWidget): TGauge;
    /**
     * 设置背景图片的名称。
     *
     * @param name 图片名称，该图片必须存在于资源管理器。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setImage(name: string): TRet;
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
    setDrawType(draw_type: TImageDrawType): TRet;
    /**
     * 背景图片。
     *
     */
    get image(): string;
    set image(v: string);
    /**
     * 图片的绘制方式。
     *
     */
    get drawType(): TImageDrawType;
    set drawType(v: TImageDrawType);
}
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
 *[image_animation.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/image_animation.xml)
 *
 *在c代码中使用函数image\_animation\_create创建图片动画控件。如：
 *
 *
 *
 *> 完整示例请参考：
 *[image_animation
 *demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/image_animation.c)
 *
 *可用通过style来设置控件的显示风格，如背景颜色和边框等等，不过一般情况并不需要。
 *
 */
export declare class TImageAnimation extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TImageAnimation;
    /**
     * 设置是否循环播放。
     *
     * @param loop 是否循环播放。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLoop(loop: boolean): TRet;
    /**
     * 设置图片前缀。
     *
     * @param image 图片前缀。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setImage(image: string): TRet;
    /**
     * 设置播放间隔时间(毫秒)。
     *
     * @param interval 间隔时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setInterval(interval: number): TRet;
    /**
     * 设置延迟播放时间(仅适用于自动播放)。
     *
     * @param delay 延迟播放时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDelay(delay: number): TRet;
    /**
     * 设置是否自动播放。
     *
     * @param auto_play 是否自动播放。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAutoPlay(auto_play: boolean): TRet;
    /**
     * 设置播放序列。比如image为"fire"，sequence为"12223", 将依次播放"fire1", "fire2", "fire2", "fire2",
     *"fire3"。
     *
     * @param sequence 播放序列。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSequence(sequence: string): TRet;
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
    setRangeSequence(start_index: number, end_index: number): TRet;
    /**
     * 播放。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    play(): TRet;
    /**
     * 停止(并重置index为-1)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    stop(): TRet;
    /**
     * 暂停。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    pause(): TRet;
    /**
     * 手动切换到下一张图片。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    next(): TRet;
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
    setFormat(format: string): TRet;
    /**
     * 设置绘制完成后unload图片，以释放内存空间。
     *
     * @param unload_after_paint 是否绘制完成后unload图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setUnloadAfterPaint(unload_after_paint: boolean): TRet;
    /**
     * 设置是否倒序播放。
     *
     * @param reverse 是否倒序播放。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setReverse(reverse: boolean): TRet;
    /**
     * 设置结束播放后是否保持显示最后一帧。
     *
     * @param show_when_done 是否继续显示最后一帧。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setShowWhenDone(show_when_done: boolean): TRet;
    /**
     * 转换为image_animation对象(供脚本语言使用)。
     *
     * @param widget image_animation对象。
     *
     * @returns image_animation对象。
     */
    static cast(widget: TWidget): TImageAnimation;
    /**
     * 判断是否在播放。
     *
     *
     * @returns 返回TRUE表示是，否则表示否。
     */
    isPlaying(): boolean;
    /**
     * 图片名称的前缀。
     *
     */
    get image(): string;
    set image(v: string);
    /**
     * 播放的序列，字符可选值为数字和英文大小写字母，字符可以重复。如：0123456789或者123123abcd。
     *
     */
    get sequence(): string;
    set sequence(v: string);
    /**
     * 图片起始序数。
     *
     */
    get startIndex(): number;
    /**
     * 图片结束序数。
     *
     */
    get endIndex(): number;
    /**
     * 是否倒序播放。
     *
     */
    get reverse(): boolean;
    set reverse(v: boolean);
    /**
     * 是否循环播放。
     *
     */
    get loop(): boolean;
    set loop(v: boolean);
    /**
     * 是否自动播放。
     *
     */
    get autoPlay(): boolean;
    set autoPlay(v: boolean);
    /**
     * 绘制完成后unload图片，以释放内存空间。
     *
     */
    get unloadAfterPaint(): boolean;
    set unloadAfterPaint(v: boolean);
    /**
     * 索引到图片名转换时的格式，缺省为"%s%d"。
     *
     */
    get format(): string;
    set format(v: string);
    /**
     * 每张图片播放的时间(毫秒)。
     *
     */
    get interval(): number;
    set interval(v: number);
    /**
     * 自动播放时延迟播放的时间(毫秒)。
     *
     */
    get delay(): number;
    set delay(v: number);
    /**
     * 结束后是否继续显示最后一帧。
     *
     */
    get showWhenDone(): boolean;
    set showWhenDone(v: boolean);
}
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
 *如果设置click\_add\_delta为非0，那么点击时自动增加指定的增量，值超过最大值时回到最小值,
 *或者值超过最小值时回到最大值。
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
 *[image\_value](https://github.com/zlgopen/awtk/blob/master/design/default/ui/image_value.xml)
 *
 *在c代码中使用函数image\_value\_create创建图片值控件。如：
 *
 *
 *
 *> 完整示例请参考：
 *[image_value demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/image_value.c)
 *
 *可用通过style来设置控件的显示风格，如背景颜色和边框等等，不过一般情况并不需要。
 *
 */
export declare class TImageValue extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TImageValue;
    /**
     * 设置图片前缀。
     *
     * @param image 图片前缀。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setImage(image: string): TRet;
    /**
     * 设置格式。
     *
     * @param format 格式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFormat(format: string): TRet;
    /**
     * 设置点击时加上的增量。
     *
     * @param click_add_delta 增量。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setClickAddDelta(click_add_delta: number): TRet;
    /**
     * 设置值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 设置最小值。
     *
     * @param min 最小值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMin(min: number): TRet;
    /**
     * 设置最大值。
     *
     * @param max 最大值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMax(max: number): TRet;
    /**
     * 转换为image_value对象(供脚本语言使用)。
     *
     * @param widget image_value对象。
     *
     * @returns image_value对象。
     */
    static cast(widget: TWidget): TImageValue;
    /**
     * 图片名称的前缀。
     *
     */
    get image(): string;
    set image(v: string);
    /**
     * 数值到字符串转换时的格式，缺省为"%d"。
     *
     */
    get format(): string;
    set format(v: string);
    /**
     * 点击时加上一个增量。
     *
     */
    get clickAddDelta(): number;
    set clickAddDelta(v: number);
    /**
     * 值。
     *
     */
    get value(): number;
    set value(v: number);
    /**
     * 最小值(如果设置了click\_add\_delta，到达最小值后回到最大值)。
     *
     */
    get min(): number;
    set min(v: number);
    /**
     * 最大值(如果设置了click\_add\_delta，到达最大值后回到最小值)。
     *
     */
    get max(): number;
    set max(v: number);
}
/**
 * 输入法候选字词控件。
 *
 *如果希望启用用数字选择对应的候选字，请设置属性grab_keys="true"。如：
 *
 *```xml
 *<candidates x="0" y="0" w="100%" h="30" grab_keys="true"/>
 *```
 *
 *>相关文件： assets/default/raw/ui/kb_default.xml
 *
 *如果希望通过左右键切换不同的候选字，除了设置属性grab_keys="true"，还需要设置按钮的focused状态的style。
 *
 *```xml
 *<style name="candidates" text_color="black">
 *<normal  />
 *<pressed    bg_color="#c0c0c0" border_color="#a0a0a0"/>
 *<over       bg_color="#e0e0e0" border_color="#a0a0a0"/>
 *<focused    border_color="#a0a0a0"/>
 *</style>
 *```
 *
 *>相关文件：assets/default/raw/styles/keyboard.xml
 *
 */
export declare class TCandidates extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建candidates对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TCandidates;
    /**
     * 转换为candidates对象(供脚本语言使用)。
     *
     * @param widget candidates对象。
     *
     * @returns candidates对象。
     */
    static cast(widget: TWidget): TCandidates;
    /**
     * 设置是否为预候选字列表。
     *
     *> 为预候选字列表则注册EVT\_IM\_SHOW\_PRE\_CANDIDATES，否则注册EVT\_IM\_SHOW\_CANDIDATES事件。
     *
     * @param pre 是否为预候选字列表。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPre(pre: boolean): TRet;
    /**
     * 设置是否启用用数字选择候选字。
     *
     * @param select_by_num 是否启用用数字选择候选字。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSelectByNum(select_by_num: boolean): TRet;
    /**
     * 设置是否自动隐藏。
     *
     * @param auto_hide 是否自动隐藏。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAutoHide(auto_hide: boolean): TRet;
    /**
     * 设置按钮的style名称。
     *
     * @param button_style 按钮的style名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setButtonStyle(button_style: string): TRet;
    /**
     * 是否为预候选字。
     *
     *> 预候选字: 在有的输入法中，比如T9硬键盘输入时，按下12两个键时，预候选字会显示可用的拼音列表。
     *> 从预候选字列表中选择拼音，再查询拼音对应的候选字列表。
     *
     */
    get pre(): boolean;
    set pre(v: boolean);
    /**
     * 是否启用用数字选择候选字。比如按下1选择第1个候选字，按下2选择第2个候选字。
     *
     */
    get selectByNum(): boolean;
    set selectByNum(v: boolean);
    /**
     * 没有候选字时，是否自动隐藏控件。
     *
     */
    get autoHide(): boolean;
    set autoHide(v: boolean);
    /**
     * 按钮的style名称。
     *
     */
    get buttonStyle(): string;
    set buttonStyle(v: string);
    /**
     * 是否启用候选字预览。
     *
     */
    get enablePreview(): boolean;
}
/**
 * 输入法语言指示器。
 *
 *用于显示输入法的输入语言或类型，主要用于T9输入法。
 *
 *lang_indicator\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于lang_indicator\_t控件。
 *
 *在xml中使用"lang_indicator"标签创建lang_indicator。如：
 *
 *```xml
 *<lang_indicator x="0" y="0" w="100%" h="100%" children_layout="default(c=2,r=2,m=5,s=5)">
 *</lang_indicator>
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
export declare class TLangIndicator extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建lang_indicator对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TLangIndicator;
    /**
     * 设置缺省获得焦点的子控件(可用控件名或类型)。
     *
     * @param image 缺省获得焦点的子控件(可用控件名或类型)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setImage(image: string): TRet;
    /**
     * 转换为lang_indicator对象(供脚本语言使用)。
     *
     * @param widget lang_indicator对象。
     *
     * @returns lang_indicator对象。
     */
    static cast(widget: TWidget): TLangIndicator;
    /**
     * 如果希望用图片格式显示，本属性用于指定图片的前缀。
     *
     */
    get image(): string;
    set image(v: string);
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/mledit.xml)
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L556)
 *
 */
export declare class TLineNumber extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TLineNumber;
    /**
     * 设置顶部边距。
     *
     * @param top_margin 顶部边距。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTopMargin(top_margin: number): TRet;
    /**
     * 设置顶部边距。
     *
     * @param bottom_margin 顶部边距。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setBottomMargin(bottom_margin: number): TRet;
    /**
     * 设置行高。
     *
     * @param line_height 行高。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLineHeight(line_height: number): TRet;
    /**
     * 设置y偏移。
     *
     * @param yoffset 行高。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setYoffset(yoffset: number): TRet;
    /**
     * 转换为line_number对象(供脚本语言使用)。
     *
     * @param widget line_number对象。
     *
     * @returns line_number对象。
     */
    static cast(widget: TWidget): TLineNumber;
    /**
     * 增加高亮行。
     *
     * @param line 行号。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    addHighlightLine(line: number): TRet;
    /**
     * 设置active行。
     *
     * @param line 行号。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setActiveLine(line: number): TRet;
    /**
     * 清除高亮行。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    clearHighlight(): TRet;
    /**
     * 判断指定行是否是高亮行。
     *
     * @param line 行号。
     *
     * @returns 返回TRUE表示是，否则不是。
     */
    isHighlightLine(line: number): boolean;
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/mledit.xml)
 *
 *在c代码中使用函数mledit\_create创建多行编辑器控件。如：
 *
 *
 *
 *> 完整示例请参考：[mledit demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/mledit.c)
 *
 *time\_clock一般不需要设置style。
 *
 */
export declare class TMledit extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TMledit;
    /**
     * 设置编辑器是否为只读。
     *
     * @param readonly 只读。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setReadonly(readonly: boolean): TRet;
    /**
     * 设置编辑器是否为可撤销修改。
     *
     * @param cancelable 是否为可撤销修。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCancelable(cancelable: boolean): TRet;
    /**
     * 设置为焦点。
     *
     * @param focus 是否为焦点。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFocus(focus: boolean): TRet;
    /**
     * 设置编辑器是否自动折行。
     *
     * @param wrap_word 是否自动折行。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setWrapWord(wrap_word: boolean): TRet;
    /**
     * 设置编辑器是否启用覆盖行（在行数达到最大行数时，可继续新增行，但最早的行将会消失）。
     *
     * @param overwrite 是否启用覆盖行。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setOverwrite(overwrite: boolean): TRet;
    /**
     * 设置编辑器的最大行数。
     *
     * @param max_lines 最大行数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMaxLines(max_lines: number): TRet;
    /**
     * 设置编辑器的最大字符数（0 为不限制字符数）。
     *
     * @param max_chars 最大字符数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMaxChars(max_chars: number): TRet;
    /**
     * 设置编辑器的输入提示。
     *
     * @param tips 输入提示。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTips(tips: string): TRet;
    /**
     * 获取翻译之后的文本，然后调用mledit_set_tips。
     *
     * @param tr_tips 提示信息。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTrTips(tr_tips: string): TRet;
    /**
     * 设置自定义软键盘名称。
     *
     * @param keyboard 键盘名称(相应UI资源必须存在)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setKeyboard(keyboard: string): TRet;
    /**
     * 设置编辑器光标位置。
     *
     * @param cursor 光标位置。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCursor(cursor: number): TRet;
    /**
     * 获取编辑器光标位置。
     *
     *
     * @returns 返回光标位置。
     */
    getCursor(): number;
    /**
     * 设置编辑器滚动速度。
     *
     * @param scroll_line 滚动行数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setScrollLine(scroll_line: number): TRet;
    /**
     * 设置编辑器滚动到指定偏移位置。
     *
     * @param offset 偏移位置。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    scrollToOffset(offset: number): TRet;
    /**
     * 设置编辑器是否在获得焦点时打开输入法。
     *
     *> * 设置默认焦点时，打开窗口时不弹出软键盘。
     *> * 用键盘切换焦点时，编辑器获得焦点时不弹出软键盘。
     *
     * @param open_im_when_focused 是否在获得焦点时打开输入法。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setOpenImWhenFocused(open_im_when_focused: boolean): TRet;
    /**
     * 设置编辑器是否在失去焦点时关闭输入法。
     *
     * @param close_im_when_blured 是否是否在失去焦点时关闭输入法。在失去焦点时关闭输入法。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCloseImWhenBlured(close_im_when_blured: boolean): TRet;
    /**
     * 选择编辑器中指定范围的文本。
     *
     * @param start 起始偏移。
     * @param end 结束偏移。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSelect(start: number, end: number): TRet;
    /**
     * 获取选中的文本。
     *使用完后需调用 TKMEM_FREE() 进行释放文本占有内存。
     *
     *
     * @returns 返回选中文本。
     */
    getSelectedText(): string;
    /**
     * 插入一段文本。
     *
     * @param offset 插入的偏移位置。
     * @param text 待插入的文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    insertText(offset: number, text: string): TRet;
    /**
     * 转换为mledit对象(供脚本语言使用)。
     *
     * @param widget mledit对象。
     *
     * @returns mledit对象。
     */
    static cast(widget: TWidget): TMledit;
    /**
     * 输入提示。
     *
     */
    get tips(): string;
    set tips(v: string);
    /**
     * 保存用于翻译的提示信息。
     *
     */
    get trTips(): string;
    set trTips(v: string);
    /**
     * 自定义软键盘名称。
     *
     */
    get keyboard(): string;
    set keyboard(v: string);
    /**
     * 最大行数。
     *
     */
    get maxLines(): number;
    set maxLines(v: number);
    /**
     * 最大字符数。
     *
     */
    get maxChars(): number;
    set maxChars(v: number);
    /**
     * 鼠标一次滚动行数。
     *
     */
    get scrollLine(): number;
    set scrollLine(v: number);
    /**
     * 是否启用覆盖行。
     *
     */
    get overwrite(): boolean;
    set overwrite(v: boolean);
    /**
     * 是否自动折行。
     *
     */
    get wrapWord(): boolean;
    set wrapWord(v: boolean);
    /**
     * 编辑器是否为只读。
     *
     */
    get readonly(): boolean;
    set readonly(v: boolean);
    /**
     * 是否支持撤销编辑。如果为TRUE，在失去焦点之前可以撤销所有修改(恢复获得焦点之前的内容)。
     *
     *> * 1.一般配合keyboard的"cancel"按钮使用。
     *> * 2.为TRUE时，如果内容有变化，会设置编辑器的状态为changed，所以此时编辑器需要支持changed状态的style。
     *
     */
    get cancelable(): boolean;
    set cancelable(v: boolean);
    /**
     * 获得焦点时打开输入法。
     *
     *> 主要用于没有指针设备的情况，否则每次切换焦点时都打开输入法。
     *
     */
    get openImWhenFocused(): boolean;
    set openImWhenFocused(v: boolean);
    /**
     * 是否在失去焦点时关闭输入法(默认是)。
     *
     */
    get closeImWhenBlured(): boolean;
    set closeImWhenBlured(v: boolean);
}
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
 *[progress_circle.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/progress_circle.xml)
 *
 *在c代码中使用函数progress\_circle\_create创建进度圆环控件。如：
 *
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
 *default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L467)
 *
 */
export declare class TProgressCircle extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TProgressCircle;
    /**
     * 转换为progress_circle对象(供脚本语言使用)。
     *
     * @param widget progress_circle对象。
     *
     * @returns progress_circle对象。
     */
    static cast(widget: TWidget): TProgressCircle;
    /**
     * 设置值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 设置最大值。
     *
     * @param max 最大值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMax(max: number): TRet;
    /**
     * 设置格式。
     *
     * @param format 格式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFormat(format: string): TRet;
    /**
     * 设置环线的厚度。
     *
     * @param line_width 环线的厚度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLineWidth(line_width: number): TRet;
    /**
     * 设置起始角度。
     *
     * @param start_angle 起始角度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setStartAngle(start_angle: number): TRet;
    /**
     * 设置线帽类型。
     *
     * @param line_cap 线帽类型(round:圆头，square:方头)。。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLineCap(line_cap: string): TRet;
    /**
     * 设置是否显示文本。
     *
     * @param show_text 是否显示文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setShowText(show_text: boolean): TRet;
    /**
     * 设置是否为逆时针方向。
     *
     * @param counter_clock_wise 是否为逆时针方向。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCounterClockWise(counter_clock_wise: boolean): TRet;
    /**
     * 值(缺省为0)。
     *
     */
    get value(): number;
    set value(v: number);
    /**
     * 最大值(缺省为100)。
     *
     */
    get max(): number;
    set max(v: number);
    /**
     * 数值到字符串转换时的格式，缺省为"%d"。
     *
     */
    get format(): string;
    set format(v: string);
    /**
     * 起始角度(单位为度，缺省-90)。
     *
     */
    get startAngle(): number;
    set startAngle(v: number);
    /**
     * 环线的厚度(缺省为8)，line_width r/2时，使用扇形绘制。
     *
     */
    get lineWidth(): number;
    set lineWidth(v: number);
    /**
     * 线帽类型(round:圆头，square:方头，butt:平头)。
     *
     */
    get lineCap(): string;
    set lineCap(v: string);
    /**
     * 是否为逆时针方向(缺省为FALSE)。
     *
     */
    get counterClockWise(): boolean;
    set counterClockWise(v: boolean);
    /**
     * 是否显示文本(缺省为TRUE)。
     *
     */
    get showText(): boolean;
    set showText(v: boolean);
}
/**
 * rich_text_view是一个专用容器，用来放rich text和 scroll bar，并在两者之间建立联系。
 *
 *rich_text_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于rich_text_view\_t控件。
 *
 *在xml中使用"rich_text_view"标签创建rich_text_view。如：
 *
 *```xml
 *<rich_text_view x="0" y="10" w="100%" h="300">
 *<rich_text line_gap="5" x="0" y="10" w="-12" h="100%" margin="10">
 *...
 *</rich_text>
 *<scroll_bar_d name="bar" x="right" y="0" w="12" h="100%" value="0"/>
 *</rich_text_view>
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
export declare class TRichTextView extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建rich_text_view对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TRichTextView;
    /**
     * 转换为rich_text_view对象(供脚本语言使用)。
     *
     * @param widget rich_text_view对象。
     *
     * @returns rich_text_view对象。
     */
    static cast(widget: TWidget): TRichTextView;
}
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
 *[rich_text.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/rich_text.xml)
 *
 *在c代码中使用函数rich\_text\_create创建图文混排控件。如：
 *
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
export declare class TRichText extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TRichText;
    /**
     * 设置文本。
     *
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setText(text: string): TRet;
    /**
     * 设置是否允许y方向滑动。
     *
     * @param yslidable 是否允许滑动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setYslidable(yslidable: boolean): TRet;
    /**
     * 转换为rich_text对象(供脚本语言使用)。
     *
     * @param widget rich_text对象。
     *
     * @returns rich_text对象。
     */
    static cast(widget: TWidget): TRichText;
    /**
     * 行间距。
     *
     */
    get lineGap(): number;
    /**
     * 标识控件是否允许上下拖动。
     *
     */
    get yslidable(): boolean;
    set yslidable(v: boolean);
}
/**
 * 可水平滚动的文本控件，方便实现长文本滚动。
 *
 *
 *hscroll\_label\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于hscroll\_label\_t控件。
 *
 *> 更多用法请参考：[hscroll_label.xml](
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/hscroll_label.xml)
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml)
 *
 */
export declare class THscrollLabel extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): THscrollLabel;
    /**
     * 设置lull。
     *
     * @param lull 间歇时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLull(lull: number): TRet;
    /**
     * 设置duration。
     *
     * @param duration 滚动时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDuration(duration: number): TRet;
    /**
     * 设置speed（设置后 duration 不生效）。
     *
     * @param speed 滚动速度(px/ms)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSpeed(speed: number): TRet;
    /**
     * 设置only_focus。
     *
     * @param only_focus 是否只有处于focus时才滚动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setOnlyFocus(only_focus: boolean): TRet;
    /**
     * 设置only_parent_focus。
     *
     * @param only_parent_focus 是否只有处于focus时才滚动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setOnlyParentFocus(only_parent_focus: boolean): TRet;
    /**
     * 设置loop。
     *
     * @param loop 是否循环滚动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLoop(loop: boolean): TRet;
    /**
     * 设置yoyo。
     *
     * @param yoyo 是否往返滚动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setYoyo(yoyo: boolean): TRet;
    /**
     * 设置ellipses。
     *
     * @param ellipses 是否在文本超长时在行尾显示"..."。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setEllipses(ellipses: boolean): TRet;
    /**
     * 设置stop_at_begin。
     *
     * @param stop_at_begin 是否在滚动完毕后停在文本结尾。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setStopAtBegin(stop_at_begin: boolean): TRet;
    /**
     * 设置开始延迟时间。
     *
     * @param delay 开始延迟时间。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDelay(delay: number): TRet;
    /**
     * 设置滚动文本结尾和文本开头间隔距离
     *
     * @param loop_interval_distance 间隔距离。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLoopIntervalDistance(loop_interval_distance: number): TRet;
    /**
     * 设置x偏移(一般无需用户调用)。。
     *
     * @param xoffset x偏移。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setXoffset(xoffset: number): TRet;
    /**
     * 启动(一般无需用户调用)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    start(): TRet;
    /**
     * 停止(一般无需用户调用)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    stop(): TRet;
    /**
     * 转换为hscroll_label对象(供脚本语言使用)。
     *
     * @param widget hscroll_label对象。
     *
     * @returns hscroll_label对象。
     */
    static cast(widget: TWidget): THscrollLabel;
    /**
     * 只有处于focus时才滚动(缺省否)。
     *
     */
    get onlyFocus(): boolean;
    set onlyFocus(v: boolean);
    /**
     * 只有父控件处于focus时才滚动(缺省否)。
     *
     */
    get onlyParentFocus(): boolean;
    set onlyParentFocus(v: boolean);
    /**
     * loop是否循环滚动(缺省FALSE)。
     *
     */
    get loop(): boolean;
    set loop(v: boolean);
    /**
     * 是否往返滚动(缺省FALSE)。
     *
     */
    get yoyo(): boolean;
    set yoyo(v: boolean);
    /**
     * 文本显示不下时，在行尾显示省略号(缺省FALSE)。
     *
     */
    get ellipses(): boolean;
    set ellipses(v: boolean);
    /**
     * 滚动之间的间歇时间(毫秒)，缺省3000ms。
     *
     */
    get lull(): number;
    set lull(v: number);
    /**
     * 滚动一次需要的时间(毫秒)，缺省5000ms。
     *
     */
    get duration(): number;
    set duration(v: number);
    /**
     * 延迟多久才开始滚动，缺省0ms。
     *
     */
    get delay(): number;
    set delay(v: number);
    /**
     * 滚动速度(px/ms)（设置后 duration 不生效）。
     *
     */
    get speed(): number;
    set speed(v: number);
    /**
     * 偏移量。
     *
     */
    get xoffset(): number;
    set xoffset(v: number);
    /**
     * 文本的宽度。
     *
     */
    get textW(): number;
    /**
     * 滚动完毕后停在文本开头(缺省FALSE)。
     *> 注：yoyo 为 TRUE 时，该功能失效。
     *
     */
    get stopAtBegin(): boolean;
    set stopAtBegin(v: boolean);
    /**
     * 滚动文本结尾和文本开头间隔距离(缺省值为 -1，小于 0 视为使用控件宽度作为间隔距离)。
     *
     */
    get loopIntervalDistance(): number;
    set loopIntervalDistance(v: number);
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/list_view_m.xml)
 *
 *在c代码中使用函数list\_item\_create创建列表项控件。如：
 *
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L372)
 *
 */
export declare class TListItem extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TListItem;
    /**
     * 转换为list_item对象(供脚本语言使用)。
     *
     * @param widget list_item对象。
     *
     * @returns list_item对象。
     */
    static cast(widget: TWidget): TListItem;
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/list_view_h.xml)
 *
 *在c代码中使用函数list\_view\_h\_create创建水平列表视图控件。如：
 *
 *
 *
 *用代码构造列表视图是比较繁琐的事情，最好用XML来构造。
 *如果需要动态修改，可以使用widget\_clone来增加列表项，使用widget\_remove\_child来移出列表项。
 *
 *可用通过style来设置控件的显示风格，如背景颜色和边框颜色等(一般情况不需要)。
 *
 */
export declare class TListViewH extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TListViewH;
    /**
     * 设置列表项的宽度。
     *
     * @param item_width 列表项的宽度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setItemWidth(item_width: number): TRet;
    /**
     * 设置列表项的间距。
     *
     * @param spacing 列表项的间距。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSpacing(spacing: number): TRet;
    /**
     * 转换为list_view_h对象(供脚本语言使用)。
     *
     * @param widget list_view_h对象。
     *
     * @returns list_view_h对象。
     */
    static cast(widget: TWidget): TListViewH;
    /**
     * 列表项的宽度。
     *
     */
    get itemWidth(): number;
    set itemWidth(v: number);
    /**
     * 间距。
     *
     */
    get spacing(): number;
    set spacing(v: number);
}
/**
 * 列表视图控件。
 *
 *列表视图控件是一个可以垂直滚动的列表控件。
 *
 *如果不需要滚动，可以用view控件配置适当的layout参数作为列表控件。
 *
 *列表视图中的列表项可以固定高度，也可以使用不同高度。请参考[变高列表项](
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/list_view_vh.xml)
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/list_view_m.xml)
 *
 *在c代码中使用函数list\_view\_create创建列表视图控件。如：
 *
 *
 *
 *用代码构造列表视图是比较繁琐的事情，最好用XML来构造。
 *如果需要动态修改，可以使用widget\_clone来增加列表项，使用widget\_remove\_child来移出列表项。
 *
 *可用通过style来设置控件的显示风格，如背景颜色和边框颜色等(一般情况不需要)。
 *
 *备注：list_view 下的 scroll_view 控件不支持遍历所有子控件的效果。
 *
 *下面是针对 scroll_bar_d （桌面版）有效果，scroll_bar_m（移动版）没有效果。
 *如果 floating_scroll_bar 属性为 TRUE 和 auto_hide_scroll_bar 属性为 TRUE，scroll_view 宽默认为 list_view 的 100% 宽，鼠标在 list_view 上滚动条才显示，不在的就自动隐藏，如果 scroll_view 的高比虚拟高要大的话，滚动条变成不可见，scroll_view 宽不会变。
 *如果 floating_scroll_bar 属性为 TRUE 和 auto_hide_scroll_bar 属性为 FALSE ，scroll_view 宽默认为 list_view 的 100% 宽，滚动条不隐藏，如果 scroll_view 的高比虚拟高要大的话，滚动条变成不可见，scroll_view 宽不会变。
 *如果 floating_scroll_bar 属性为 FALSE 和 auto_hide_scroll_bar 属性为 FALSE，如果 scroll_view 的高比虚拟高要大的话，滚动条变成不可用，scroll_view 宽不会变。
 *如果 floating_scroll_bar 属性为 FALSE 和 auto_hide_scroll_bar 属性为 TRUE，如果 scroll_view 的高比虚拟高要大的话，滚动条变成不可见，scroll_view 宽会合并原来滚动条的宽。
 *
 */
export declare class TListView extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TListView;
    /**
     * 设置列表项的高度。
     *
     * @param item_height 列表项的高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setItemHeight(item_height: number): TRet;
    /**
     * 设置列表项的缺省高度。
     *
     * @param default_item_height 列表项的高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDefaultItemHeight(default_item_height: number): TRet;
    /**
     * 设置是否自动隐藏滚动条。
     *
     * @param auto_hide_scroll_bar 是否自动隐藏滚动条。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAutoHideScrollBar(auto_hide_scroll_bar: boolean): TRet;
    /**
     * 设置滚动条是否悬浮在 scroll_view 上面。
     *
     * @param floating_scroll_bar 滚动条是否悬浮在 scroll_view 上面。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFloatingScrollBar(floating_scroll_bar: boolean): TRet;
    /**
     * 转换为list_view对象(供脚本语言使用)。
     *
     * @param widget list_view对象。
     *
     * @returns list_view对象。
     */
    static cast(widget: TWidget): TListView;
    /**
     * list_view重新初始化。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    reinit(): TRet;
    /**
     * 列表项的高度。如果 item_height 0，所有列表项使用固定高度，否则使用列表项自身的高度。
     *
     */
    get itemHeight(): number;
    set itemHeight(v: number);
    /**
     * 列表项的缺省高度。如果item_height <= 0 而且列表项自身的高度 <= 0，则使用缺省高度。
     *
     */
    get defaultItemHeight(): number;
    set defaultItemHeight(v: number);
    /**
     * 如果不需要滚动条时，自动隐藏滚动条。
     *
     */
    get autoHideScrollBar(): boolean;
    set autoHideScrollBar(v: boolean);
    /**
     * 滚动条是否悬浮在 scroll_view 上面
     *
     */
    get floatingScrollBar(): boolean;
    set floatingScrollBar(v: boolean);
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/list_view_m.xml)
 *
 *在c代码中使用函数scroll\_bar\_create创建列表项控件。如：
 *
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L350)
 *
 */
export declare class TScrollBar extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TScrollBar;
    /**
     * 转换为scroll_bar对象(供脚本语言使用)。
     *
     * @param widget scroll_bar对象。
     *
     * @returns scroll_bar对象。
     */
    static cast(widget: TWidget): TScrollBar;
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
    static createMobile(parent: TWidget, x: number, y: number, w: number, h: number): TScrollBar;
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
    static createDesktop(parent: TWidget, x: number, y: number, w: number, h: number): TScrollBar;
    /**
     * 设置参数。
     *
     * @param virtual_size 虚拟高度。
     * @param row 每一行的高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setParams(virtual_size: number, row: number): TRet;
    /**
     * 滚动到指定的值。
     *
     * @param value 值。
     * @param duration 动画持续时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    scrollTo(value: any, duration: number): TRet;
    /**
     * 设置值，并触发EVT_VALUE_CHANGED事件。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 在当前的值上增加一个值，并触发EVT_VALUE_CHANGED事件。
     *
     * @param delta 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    addDelta(delta: number): TRet;
    /**
     * 设置值，但不触发EVT_VALUE_CHANGED事件。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValueOnly(value: any): TRet;
    /**
     * 设置auto_hide属性。
     *
     *>仅对mobile风格的滚动条有效
     *
     * @param auto_hide 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAutoHide(auto_hide: boolean): TRet;
    /**
     * 判断是否是mobile风格的滚动条。
     *
     *
     * @returns 返回TRUE表示是mobile风格的，否则表示不是mobile风格的。
     */
    isMobile(): boolean;
    /**
     * 设置翻页滚动动画时间(毫秒)。
     *
     * @param animator_time 时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAnimatorTime(animator_time: number): TRet;
    /**
     * 通过动画隐藏滚动条。
     *
     * @param duration 动画持续时间(毫秒)。
     * @param delay 动画执行时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    hideByOpacityAnimation(duration: number, delay: number): TRet;
    /**
     * 通过动画显示滚动条。
     *
     * @param duration 动画持续时间(毫秒)。
     * @param delay 动画执行时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    showByOpacityAnimation(duration: number, delay: number): TRet;
    /**
     * 设置鼠标滚轮是否滚动(仅对desktop风格的滚动条有效)。
     *
     * @param scroll 是否设置该功能。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setWheelScroll(scroll: boolean): TRet;
    /**
     * 设置鼠标滚轮幅度(仅对desktop风格的滚动条有效)。
     *
     * @param scroll_delta 滚动幅度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setScrollDelta(scroll_delta: number): TRet;
    /**
     * 虚拟宽度或高度。
     *
     */
    get virtualSize(): number;
    /**
     * 当前的值。
     *
     */
    get value(): number;
    set value(v: number);
    /**
     * 行的高度。
     *
     */
    get row(): number;
    /**
     * 翻页滚动动画时间(毫秒)。
     *
     */
    get animatorTime(): number;
    set animatorTime(v: number);
    /**
     * 每次鼠标滚动值。（缺省值为0，0 则使用鼠标滚动默认值）
     *
     */
    get scrollDelta(): number;
    set scrollDelta(v: number);
    /**
     * 滚动时是否启用动画。
     *
     */
    get animatable(): boolean;
    /**
     * 是否自动隐藏(仅对mobile风格的滚动条有效)。
     *
     */
    get autoHide(): boolean;
    set autoHide(v: boolean);
    /**
     * 设置鼠标滚轮是否滚动(仅对desktop风格的滚动条有效)（垂直滚动条缺省值为TRUE，水平滚动条缺省值为FALSE）。
     *
     */
    get wheelScroll(): boolean;
    set wheelScroll(v: boolean);
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/list_view_m.xml)
 *
 *在c代码中使用函数scroll\_view\_create创建列表视图控件。如：
 *
 *
 *
 *可用通过style来设置控件的显示风格，如背景颜色和边框颜色等(一般情况不需要)。
 *
 */
export declare class TScrollView extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TScrollView;
    /**
     * 转换为scroll_view对象(供脚本语言使用)。
     *
     * @param widget scroll_view对象。
     *
     * @returns scroll_view对象。
     */
    static cast(widget: TWidget): TScrollView;
    /**
     * 设置虚拟宽度。
     *
     * @param w 虚拟宽度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setVirtualW(w: number): TRet;
    /**
     * 设置虚拟高度。
     *
     * @param h 虚拟高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setVirtualH(h: number): TRet;
    /**
     * 设置是否允许x方向滑动。
     *
     * @param xslidable 是否允许滑动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setXslidable(xslidable: boolean): TRet;
    /**
     * 设置是否允许y方向滑动。
     *
     * @param yslidable 是否允许滑动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setYslidable(yslidable: boolean): TRet;
    /**
     * 设置滚动时offset是否按页面对齐。
     *
     * @param snap_to_page 是否按页面对齐。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSnapToPage(snap_to_page: boolean): TRet;
    /**
     * 设置滚动时是否每次翻一页
     *备注：当 snap_to_page 为ture 的时候才有效果，主要用于区分一次翻一页还是一次翻多页。
     *
     * @param move_to_page 是否每次翻一页。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMoveToPage(move_to_page: boolean): TRet;
    /**
     * 设置是否递归查找全部子控件。
     *
     * @param recursive 是否递归查找全部子控件。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setRecursive(recursive: boolean): TRet;
    /**
     * 设置是否递归查找全部子控件。(不触发repaint和relayout)。
     *
     * @param recursive 是否递归查找全部子控件。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setRecursiveOnly(recursive: boolean): TRet;
    /**
     * 设置偏移量。
     *
     * @param xoffset x偏移量。
     * @param yoffset y偏移量。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setOffset(xoffset: number, yoffset: number): TRet;
    /**
     * 设置偏移速度比例。
     *
     * @param xspeed_scale x偏移速度比例。
     * @param yspeed_scale y偏移速度比例。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSpeedScale(xspeed_scale: number, yspeed_scale: number): TRet;
    /**
     * 设置滑动到极限时可继续滑动区域的占比。
     *
     * @param slide_limit_ratio 滑动到极限时可继续滑动区域的占比。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSlideLimitRatio(slide_limit_ratio: number): TRet;
    /**
     * 滚动到指定的偏移量。
     *
     * @param xoffset_end x偏移量。
     * @param yoffset_end y偏移量。
     * @param duration 时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    scrollTo(xoffset_end: number, yoffset_end: number, duration: number): TRet;
    /**
     * 滚动到指定的偏移量。
     *
     * @param xoffset_delta x偏移量。
     * @param yoffset_delta y偏移量。
     * @param duration 时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    scrollDeltaTo(xoffset_delta: number, yoffset_delta: number, duration: number): TRet;
    /**
     * 虚拟宽度。
     *
     */
    get virtualW(): number;
    set virtualW(v: number);
    /**
     * 虚拟高度。
     *
     */
    get virtualH(): number;
    set virtualH(v: number);
    /**
     * x偏移量。
     *
     */
    get xoffset(): number;
    /**
     * y偏移量。
     *
     */
    get yoffset(): number;
    /**
     * x偏移速度比例。
     *
     */
    get xspeedScale(): number;
    /**
     * y偏移速度比例。
     *
     */
    get yspeedScale(): number;
    /**
     * 是否允许x方向滑动。
     *
     */
    get xslidable(): boolean;
    set xslidable(v: boolean);
    /**
     * 是否允许y方向滑动。
     *
     */
    get yslidable(): boolean;
    set yslidable(v: boolean);
    /**
     * 滚动时offset是否按页面对齐。
     *
     */
    get snapToPage(): boolean;
    set snapToPage(v: boolean);
    /**
     * 是否每次翻一页（当 move_to_page 为ture 的时候才有效果，主要用于区分一次翻一页还是一次翻多页）。
     *
     */
    get moveToPage(): boolean;
    set moveToPage(v: boolean);
    /**
     * 是否递归查找全部子控件。
     *
     */
    get recursive(): boolean;
    set recursive(v: boolean);
    /**
     * 滑动到极限时可继续滑动区域的占比。
     *
     */
    get slideLimitRatio(): number;
    set slideLimitRatio(v: number);
}
/**
 * 用于串口通信的控件
 *在xml中使用"serial"标签创建控件。如：
 *
 *```xml
 *<!-- ui -->
 *<serial device="COM1" baudrate="115200"/>
 *```
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *> 本控件默认不可见，无需指定style。
 *
 *```xml
 *<!-- style -->
 *<serial>
 *<style name="default" font_size="32">
 *<normal text_color="black" />
 *</style>
 *</serial>
 *```
 *
 */
export declare class TSerialWidget extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建serial_widget对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns serial_widget对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TSerialWidget;
    /**
     * 转换为serial_widget对象(供脚本语言使用)。
     *
     * @param widget serial_widget对象。
     *
     * @returns serial_widget对象。
     */
    static cast(widget: TWidget): TSerialWidget;
    /**
     * 设置 波特率。
     *
     * @param baudrate 波特率。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setBaudrate(baudrate: number): TRet;
    /**
     * 设置 设备。
     *
     * @param device 设备。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDevice(device: string): TRet;
    /**
     * 设置 字节位数。
     *
     * @param bytesize 字节位数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setBytesize(bytesize: number): TRet;
    /**
     * 设置 奇偶校验。
     *
     * @param parity 奇偶校验。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setParity(parity: number): TRet;
    /**
     * 设置 停止位。
     *
     * @param stopbits 停止位。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setStopbits(stopbits: number): TRet;
    /**
     * 设置 流控。
     *
     * @param flowcontrol 流控。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFlowcontrol(flowcontrol: number): TRet;
    /**
     * 设置 轮询时间(毫秒)。
     *
     * @param check_interval 轮询时间（单位：ms）。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCheckInterval(check_interval: number): TRet;
    /**
     * 设备(文件)名。
     *
     */
    get device(): string;
    set device(v: string);
    /**
     * 波特率。
     *
     */
    get baudrate(): number;
    set baudrate(v: number);
    /**
     * 字节位数。
     *
     */
    get bytesize(): number;
    set bytesize(v: number);
    /**
     * 奇偶校验。
     *
     */
    get parity(): number;
    set parity(v: number);
    /**
     * 停止位。
     *
     */
    get stopbits(): number;
    set stopbits(v: number);
    /**
     * 流控。
     *
     */
    get flowcontrol(): number;
    set flowcontrol(v: number);
    /**
     * 轮询时间（单位：ms）。
     *> 仅在不支持用select等待串口数据的嵌入式设备上有效。
     *
     */
    get checkInterval(): number;
    set checkInterval(v: number);
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/slide_menu.xml)
 *
 *在c代码中使用函数slide\_menu\_create创建左右滑动菜单控件。如：
 *
 *
 *
 *可按下面的方法关注当前项改变的事件：
 *
 *
 *
 *可按下面的方法关注当前按钮被点击的事件：
 *
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L493)
 *
 */
export declare class TSlideMenu extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TSlideMenu;
    /**
     * 转换slide_menu对象(供脚本语言使用)。
     *
     * @param widget slide_menu对象。
     *
     * @returns slide_menu对象。
     */
    static cast(widget: TWidget): TSlideMenu;
    /**
     * 设置当前项。
     *
     * @param value 当前项的索引。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 设置垂直对齐方式。
     *
     * @param align_v 对齐方式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAlignV(align_v: TAlignV): TRet;
    /**
     * 设置最小缩放比例。
     *
     * @param min_scale 最小缩放比例，范围[0.5-1]。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMinScale(min_scale: number): TRet;
    /**
     * 设置菜单项之间的间距。
     *
     * @param spacer 菜单项之间的间距。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSpacer(spacer: number): TRet;
    /**
     * 设置菜单项的宽度。
     *
     * @param menu_w 菜单项的宽度。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)(空字符串则使用控件高度)
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMenuW(menu_w: string): TRet;
    /**
     * 设置是否动态裁剪菜单项。
     *
     * @param clip 是否动态裁剪菜单项。(关闭后，如果显示偶数项，左边会多一项)
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setClip(clip: boolean): TRet;
    /**
     * 切换至上一项。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    scrollToPrev(): TRet;
    /**
     * 切换至下一项。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    scrollToNext(): TRet;
    /**
     * 值。代表当前选中项的索引。
     *
     */
    get value(): number;
    set value(v: number);
    /**
     * 垂直对齐方式。
     *
     */
    get alignV(): TAlignV;
    set alignV(v: TAlignV);
    /**
     * 最小缩放比例。
     *
     */
    get minScale(): number;
    set minScale(v: number);
    /**
     * 菜单项之间的间距。
     *
     */
    get spacer(): number;
    set spacer(v: number);
    /**
     * 菜单项的宽度(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)(空字符串则使用控件高度)。
     *
     */
    get menuW(): string;
    set menuW(v: string);
    /**
     * 是否动态裁剪菜单项(默认裁剪，不裁剪时，如果显示偶数项，左边会多一项)。
     *
     */
    get clip(): boolean;
    set clip(v: boolean);
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/slide_view.xml)
 *
 *在c代码中使用函数slide\_indicator\_create创建指示器控件。如：
 *
 *
 *
 *```xml
 *<style name="default">
 *<normal fg_color="#FFFFFF80" selected_fg_color="#FFFFFF"/>
 *</style>
 *```
 *
 *> 更多用法请参考：[theme default](
 *https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L350)
 *
 */
export declare class TSlideIndicator extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TSlideIndicator;
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
    static createLinear(parent: TWidget, x: number, y: number, w: number, h: number): TSlideIndicator;
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
    static createArc(parent: TWidget, x: number, y: number, w: number, h: number): TSlideIndicator;
    /**
     * 转换为slide_indicator对象(供脚本语言使用)。
     *
     * @param widget slide_indicator对象。
     *
     * @returns slide_indicator对象。
     */
    static cast(widget: TWidget): TSlideIndicator;
    /**
     * 设置当前页的序号。
     *
     * @param value 当前项的序号。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 设置指示器的数量。
     *
     * @param max 数量。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMax(max: number): TRet;
    /**
     * 设置指示器的默认绘制类型。
     *
     * @param default_paint 默认绘制类型。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDefaultPaint(default_paint: TIndicatorDefaultPaint): TRet;
    /**
     * 设置指示器是否自动隐藏。
     *
     * @param auto_hide 0表示禁止，非0表示无操作后延迟多久隐藏。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAutoHide(auto_hide: number): TRet;
    /**
     * 设置指示器的边距(默认为10像素)。
     *
     * @param margin 指示器的边距。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMargin(margin: number): TRet;
    /**
     * 设置指示器的间距(指示器有弧度时为角度值，否则为直线间距)。
     *
     * @param spacing 指示器的间距。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSpacing(spacing: number): TRet;
    /**
     * 设置指示器的大小(默认为8)。
     *
     * @param size 指示器的大小。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSize(size: number): TRet;
    /**
     * 设置旋转锚点。
     *
     * @param anchor_x 锚点坐标x。(后面加上px为像素点，不加px为相对百分比坐标)
     * @param anchor_y 锚点坐标y。(后面加上px为像素点，不加px为相对百分比坐标)
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAnchor(anchor_x: string, anchor_y: string): TRet;
    /**
     * 设置指示器指示的目标。
     *
     * @param target_name 指示器指示的目标控件的名称
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setIndicatedTarget(target_name: string): TRet;
    /**
     * 设置是否启用过渡效果。
     *
     * @param transition 是否启用过渡效果
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTransition(transition: boolean): TRet;
    /**
     * 值(缺省为0)。
     *
     */
    get value(): number;
    set value(v: number);
    /**
     * 最大值(缺省为100)。
     *
     */
    get max(): number;
    set max(v: number);
    /**
     * 指示器的类型。
     *
     */
    get defaultPaint(): TIndicatorDefaultPaint;
    set defaultPaint(v: TIndicatorDefaultPaint);
    /**
     * 自动隐藏。0表示禁止，非0表示无操作后延迟多久隐藏。
     *
     */
    get autoHide(): number;
    set autoHide(v: number);
    /**
     * 指示器与边缘的边距。
     *
     */
    get margin(): number;
    set margin(v: number);
    /**
     * 指示器的中心之间的间距（圆弧显示时，间距的单位为弧度，否则为像素）。
     *
     */
    get spacing(): number;
    set spacing(v: number);
    /**
     * 指示器的大小。
     *
     */
    get size(): number;
    set size(v: number);
    /**
     * 锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
     *
     */
    get anchorX(): string;
    /**
     * 锚点y坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
     *
     */
    get anchorY(): string;
    /**
     * 指示器指示的目标控件的名称。
     *
     */
    get indicatedTarget(): string;
    set indicatedTarget(v: string);
    /**
     * 是否启用过渡效果。
     *
     */
    get transition(): boolean;
    set transition(v: boolean);
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/slide_view.xml)
 *
 *在c代码中使用函数slide\_view\_create创建滑动视图控件。如：
 *
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L458)
 *
 */
export declare class TSlideView extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TSlideView;
    /**
     * 转换为slide_view对象(供脚本语言使用)。
     *
     * @param widget slide_view对象。
     *
     * @returns slide_view对象。
     */
    static cast(widget: TWidget): TSlideView;
    /**
     * 设置为自动播放模式。
     *
     * @param auto_play 0表示禁止自动播放，非0表示自动播放时每一页播放的时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAutoPlay(auto_play: number): TRet;
    /**
     * 设置当前页的序号(默认启用动画)。
     *
     * @param index 当前页的序号。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setActive(index: number): TRet;
    /**
     * 设置当前页的序号。
     *
     * @param index 当前页的序号。
     * @param animate 是否启用动画。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setActiveEx(index: number, animate: boolean): TRet;
    /**
     * 设置为上下滑动(缺省为左右滑动)。
     *
     * @param vertical TRUE表示上下滑动，FALSE表示左右滑动。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setVertical(vertical: boolean): TRet;
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
    setAnimHint(anim_hint: string): TRet;
    /**
     * 设置循环切换模式。
     *
     * @param loop 是否启用循环切换模式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLoop(loop: boolean): TRet;
    /**
     * 设置拖拽临界值。
     *
     * @param drag_threshold 拖动临界值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDragThreshold(drag_threshold: number): TRet;
    /**
     * 设置动画时间(毫秒)。
     *
     * @param animating_time 动画时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAnimatingTime(animating_time: number): TRet;
    /**
     * 删除指定序号页面。
     *
     * @param index 删除页面的序号。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    removeIndex(index: number): TRet;
    /**
     * 是否为上下滑动模式。
     *
     */
    get vertical(): boolean;
    set vertical(v: boolean);
    /**
     * 自动播放。0表示禁止自动播放，非0表示自动播放时每一页播放的时间(毫秒)。
     *
     */
    get autoPlay(): number;
    set autoPlay(v: number);
    /**
     * 循环切换模式。
     *
     *向后切换：切换到最后一页时，再往后切换就到第一页。
     *向前切换：切换到第一页时，再往前切换就到最后一页。
     *
     */
    get loop(): boolean;
    set loop(v: boolean);
    /**
     * 页面切换效果。
     *
     */
    get animHint(): string;
    set animHint(v: string);
    /**
     * 拖动临界值。
     *
     */
    get dragThreshold(): number;
    set dragThreshold(v: number);
    /**
     * 动画时间（单位：毫秒）。
     *
     */
    get animatingTime(): number;
    set animatingTime(v: number);
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/switch.xml)
 *
 *在c代码中使用函数switch\_create创建开关控件。如：
 *
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L452)
 *
 */
export declare class TSwitch extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TSwitch;
    /**
     * 设置控件的值。
     *
     * @param value 值
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 转换switch对象(供脚本语言使用)。
     *
     * @param widget switch对象。
     *
     * @returns switch对象。
     */
    static cast(widget: TWidget): TSwitch;
    /**
     * 值。
     *
     */
    get value(): boolean;
    set value(v: boolean);
    /**
     * 当开关处于关闭时，图片偏移相对于图片宽度的比例(缺省为1/3)。
     *
     */
    get maxXoffsetRatio(): number;
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/text_selector.xml)
 *
 *在c代码中使用函数text\_selector\_create创建文本选择器控件。如：
 *
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L443)
 *
 */
export declare class TTextSelector extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TTextSelector;
    /**
     * 转换text_selector对象(供脚本语言使用)。
     *
     * @param widget text_selector对象。
     *
     * @returns text_selector对象。
     */
    static cast(widget: TWidget): TTextSelector;
    /**
     * 重置所有选项。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    resetOptions(): TRet;
    /**
     * 获取选项个数。
     *
     *
     * @returns 返回选项个数。
     */
    countOptions(): number;
    /**
     * 追加一个选项。
     *
     * @param value 值。
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    appendOption(value: any, text: string): TRet;
    /**
     * 设置选项。
     *
     * @param options 选项。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setOptions(options: string): TRet;
    /**
     * 设置一系列的整数选项。
     *
     * @param start 起始值。
     * @param nr 个数。
     * @param step 步长。
     * @param format 选项的格式化。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setRangeOptionsEx(start: number, nr: number, step: number, format: string): TRet;
    /**
     * 设置一系列的整数选项。
     *
     * @param start 起始值。
     * @param nr 个数。
     * @param step 步长。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setRangeOptions(start: number, nr: number, step: number): TRet;
    /**
     * 获取text_selector的值。
     *
     *
     * @returns 返回值。
     */
    getValueInt(): number;
    /**
     * 设置text_selector的值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 获取text_selector的文本。
     *
     *
     * @returns 返回文本。
     */
    getTextValue(): string;
    /**
     * 设置text_selector的文本。
     *
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setText(text: string): TRet;
    /**
     * 设置第index个选项为当前选中的选项。
     *
     * @param index 选项的索引。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSelectedIndex(index: number): TRet;
    /**
     * 设置可见的选项数。
     *
     * @param visible_nr 选项数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setVisibleNr(visible_nr: number): TRet;
    /**
     * 设置是否本地化(翻译)选项。
     *
     * @param localize_options 是否本地化(翻译)选项。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLocalizeOptions(localize_options: boolean): TRet;
    /**
     * 设置是否循环选项。
     *
     * @param loop_options 是否循环选项。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLoopOptions(loop_options: boolean): TRet;
    /**
     * 设置Y轴偏移速度比例。
     *
     * @param yspeed_scale y偏移速度比例。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setYspeedScale(yspeed_scale: number): TRet;
    /**
     * 设置滚动动画播放时间。
     *
     * @param animating_time 滚动动画播放时间。(单位毫秒)
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAnimatingTime(animating_time: number): TRet;
    /**
     * 设置是否修改值时启用动画。
     *
     * @param enable_value_animator 是否修改值时启用动画
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setEnableValueAnimator(enable_value_animator: boolean): TRet;
    /**
     * 设置绘制蒙版的变化趋势。
     *
     * @param mask_easing 绘制蒙版的变化趋势。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMaskEasing(mask_easing: TEasingType): TRet;
    /**
     * 设置绘制蒙版的区域占比（范围0~1）。
     *
     * @param mask_area_scale 绘制蒙版的区域占比（范围0~1）。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMaskAreaScale(mask_area_scale: number): TRet;
    /**
     * 是否开启缩写，开启后，当文字长度操作控件长度后，自动变为...
     *
     * @param ellipses 是否开启缩写。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setEllipses(ellipses: boolean): TRet;
    /**
     * 可见的选项数量(只能是1或者3或者5，缺省为5)。
     *
     */
    get visibleNr(): number;
    set visibleNr(v: number);
    /**
     * 当前选中的选项。
     *
     */
    get selectedIndex(): number;
    set selectedIndex(v: number);
    /**
     * 设置可选项(英文冒号(:)分隔值和文本，英文分号(;)分隔选项，如:1:red;2:green;3:blue)。
     *对于数值选项，也可以指定一个范围，用英文负号(-)分隔起始值、结束值和格式。
     *如："1-7-%02d"表示1到7，格式为『02d』，格式为可选，缺省为『%d』。
     *> 如果数据本身中有英文冒号(:)、英文分号(;)和英文负号(-)。请用16进制转义。
     *> * 英文冒号(:)写为\\x3a
     *> * 英文冒号(;)写为\\x3b
     *> * 英文冒号(-)写为\\x2d
     *
     */
    get options(): string;
    set options(v: string);
    /**
     * y偏移速度比例。
     *
     */
    get yspeedScale(): number;
    set yspeedScale(v: number);
    /**
     * 滚动动画播放时间。(单位毫秒)
     *
     */
    get animatingTime(): number;
    set animatingTime(v: number);
    /**
     * 是否本地化(翻译)选项(缺省为FALSE)。
     *
     */
    get localizeOptions(): boolean;
    set localizeOptions(v: boolean);
    /**
     * 是否循环选项(缺省为FALSE)。
     *
     */
    get loopOptions(): boolean;
    set loopOptions(v: boolean);
    /**
     * 是否修改值时启用动画。
     *
     */
    get enableValueAnimator(): boolean;
    set enableValueAnimator(v: boolean);
    /**
     * 是否开启缩写，开启后，当文字长度操作控件长度后，自动变为...
     *
     */
    get ellipses(): boolean;
    set ellipses(v: boolean);
    /**
     * 绘制蒙版的变化趋势。
     *
     */
    get maskEasing(): TEasingType;
    set maskEasing(v: TEasingType);
    /**
     * 绘制蒙版的区域占比（范围0~1）。
     *
     */
    get maskAreaScale(): number;
    set maskAreaScale(v: number);
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/time_clock.xml)
 *
 *在c代码中使用函数time\_clock\_create创建模拟时钟控件。如：
 *
 *
 *
 *> 完整示例请参考：[time_clock demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/time_clock.c)
 *
 *time\_clock一般不需要设置style。
 *
 */
export declare class TTimeClock extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TTimeClock;
    /**
     * 转换为time_clock对象(供脚本语言使用)。
     *
     * @param widget time_clock对象。
     *
     * @returns time_clock对象。
     */
    static cast(widget: TWidget): TTimeClock;
    /**
     * 设置小时的值。
     *
     * @param hour 小时的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setHour(hour: number): TRet;
    /**
     * 设置分钟的值。
     *
     * @param minute 分钟的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMinute(minute: number): TRet;
    /**
     * 设置秒的值。
     *
     * @param second 秒的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSecond(second: number): TRet;
    /**
     * 设置小时的图片。
     *
     * @param hour 小时的图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setHourImage(hour: string): TRet;
    /**
     * 设置分钟的图片。
     *
     * @param minute_image 分钟的图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMinuteImage(minute_image: string): TRet;
    /**
     * 设置秒的图片。
     *
     * @param second_image 秒的图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSecondImage(second_image: string): TRet;
    /**
     * 设置背景图片。
     *
     * @param bg_image 背景图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setBgImage(bg_image: string): TRet;
    /**
     * 设置中心图片。
     *
     * @param image 图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setImage(image: string): TRet;
    /**
     * 设置小时指针的旋转锚点。
     *> 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
     *
     * @param anchor_x 指针的锚点坐标x。
     * @param anchor_y 指针的锚点坐标y。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setHourAnchor(anchor_x: string, anchor_y: string): TRet;
    /**
     * 设置分钟指针的旋转锚点。
     *> 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
     *
     * @param anchor_x 指针的锚点坐标x。
     * @param anchor_y 指针的锚点坐标y。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMinuteAnchor(anchor_x: string, anchor_y: string): TRet;
    /**
     * 设置秒钟指针的旋转锚点。
     *> 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
     *
     * @param anchor_x 指针的锚点坐标x。
     * @param anchor_y 指针的锚点坐标y。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSecondAnchor(anchor_x: string, anchor_y: string): TRet;
    /**
     * 小时。
     *
     */
    get hour(): number;
    set hour(v: number);
    /**
     * 分钟。
     *
     */
    get minute(): number;
    set minute(v: number);
    /**
     * 秒。
     *
     */
    get second(): number;
    set second(v: number);
    /**
     * 中心图片。
     *
     */
    get image(): string;
    set image(v: string);
    /**
     * 背景图片。
     *
     */
    get bgImage(): string;
    set bgImage(v: string);
    /**
     * 时针图片。
     *
     */
    get hourImage(): string;
    set hourImage(v: string);
    /**
     * 分针图片。
     *
     */
    get minuteImage(): string;
    set minuteImage(v: string);
    /**
     * 秒针图片。
     *
     */
    get secondImage(): string;
    set secondImage(v: string);
    /**
     * 时针图片旋转锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
     *
     */
    get hourAnchorX(): string;
    /**
     * 时针图片旋转锚点y坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
     *
     */
    get hourAnchorY(): string;
    /**
     * 分针图片旋转锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
     *
     */
    get minuteAnchorX(): string;
    /**
     * 分针图片旋转锚点y坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
     *
     */
    get minuteAnchorY(): string;
    /**
     * 秒针图片旋转锚点x坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
     *
     */
    get secondAnchorX(): string;
    /**
     * 秒针图片旋转锚点y坐标。(后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f)
     *
     */
    get secondAnchorY(): string;
}
/**
 * 定时器。
 *> 主要目的是方便以拖拽的方式创建定时器，并用AWBlock编写简单的事件处理程序。
 *在xml中使用"timer"标签创建控件。如：
 *
 *```xml
 *<!-- ui -->
 *<timer x="c" y="50" w="100" h="100" duration="1000"/>
 *```
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *> 本控件默认不可见，无需指定style。
 *
 *```xml
 *<!-- style -->
 *<timer>
 *<style name="default" font_size="32">
 *<normal text_color="black" />
 *</style>
 *</timer>
 *```
 *
 */
export declare class TTimerWidget extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建timer_widget对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns timer_widget对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TTimerWidget;
    /**
     * 转换为timer_widget对象(供脚本语言使用)。
     *
     * @param widget timer_widget对象。
     *
     * @returns timer_widget对象。
     */
    static cast(widget: TWidget): TTimerWidget;
    /**
     * 设置 时长(毫秒)。
     *
     * @param duration 时长(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDuration(duration: number): TRet;
    /**
     * 时长(毫秒)。
     *
     */
    get duration(): number;
    set duration(v: number);
}
/**
 * 虚拟页面(根据情况自动加载/卸载页面，并提供入场/出场动画)。
 *
 *> 虚拟页面只能作为pages的直接子控件使用。
 *
 *如果指定了ui_asset:
 *
 ** 当页面切换到后台时自动卸载，并触发EVT\_VPAGE\_CLOSE消息。
 ** 当页面切换到前台时自动加载，在动画前出发EVT\_VPAGE\_WILL\_OPEN消息，在动画完成时触发 EVT\_VPAGE\_CLOSE消息。
 *
 *vpage\_t也可以当作普通view嵌入到pages中，让tab控件在切换时具有动画效果。
 *
 *在xml中使用"vpage"标签创建控件。如：
 *
 *```xml
 *<!-- ui -->
 *<vpage x="c" y="50" w="100" h="100" ui_asset="mypage"/>
 *```
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等(一般无需指定)。如：
 *
 *```xml
 *<!-- style -->
 *<vpage>
 *<style name="default">
 *<normal />
 *</style>
 *</vpage>
 *```
 *
 */
export declare class TVpage extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建vpage对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns vpage对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TVpage;
    /**
     * 转换为vpage对象(供脚本语言使用)。
     *
     * @param widget vpage对象。
     *
     * @returns vpage对象。
     */
    static cast(widget: TWidget): TVpage;
    /**
     * 设置 UI资源名称。
     *
     * @param ui_asset UI资源名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setUiAsset(ui_asset: string): TRet;
    /**
     * 设置动画类型(vtranslate: 垂直平移，htranslate: 水平平移)。
     *
     * @param anim_hint 动画类型。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAnimHint(anim_hint: string): TRet;
    /**
     * UI资源名称。
     *
     */
    get uiAsset(): string;
    set uiAsset(v: string);
    /**
     * 动画类型(目前支持：vtranslate: 垂直平移，htranslate: 水平平移)。
     *
     */
    get animHint(): string;
    set animHint(v: string);
}
/**
 * 对象属性变化事件。
 *
 */
export declare class TPropChangeEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转prop_change_event_t对象。
     *
     * @param event event对象。
     *
     * @returns 返回event对象。
     */
    static cast(event: TEvent): TPropChangeEvent;
    /**
     * 属性的名称。
     *
     */
    get name(): string;
    /**
     * 属性的值。
     *
     */
    get value(): TValue;
}
/**
 * 进度变化事件。
 *
 */
export declare class TProgressEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转progress_event_t对象。
     *
     * @param event event对象。
     *
     * @returns 返回event对象。
     */
    static cast(event: TEvent): TProgressEvent;
    /**
     * 进度百分比。
     *
     */
    get percent(): number;
}
/**
 * 执行完成事件。
 *
 */
export declare class TDoneEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转done_event_t对象。
     *
     * @param event event对象。
     *
     * @returns 返回event对象。
     */
    static cast(event: TEvent): TDoneEvent;
    /**
     * 执行结果。
     *
     */
    get result(): TRet;
}
/**
 * 执行完成事件。
 *
 */
export declare class TErrorEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转error_event_t对象。
     *
     * @param event event对象。
     *
     * @returns 返回event对象。
     */
    static cast(event: TEvent): TErrorEvent;
    /**
     * 错误码。
     *
     */
    get code(): number;
    /**
     * 错误信息。
     *
     */
    get message(): string;
}
/**
 * 对象执行命令的事件。
 *
 */
export declare class TCmdExecEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转cmd_exec_event_t对象。
     *
     * @param event event对象。
     *
     * @returns 返回event对象。
     */
    static cast(event: TEvent): TCmdExecEvent;
    /**
     * 命令的名称。
     *
     */
    get name(): string;
    /**
     * 命令的参数。
     *
     */
    get args(): string;
    /**
     * 执行结果(适用于EXECED)。
     *
     */
    get result(): TRet;
    /**
     * 标识命令是否可以执行(适用于CAN_EXEC)。
     *
     */
    get canExec(): boolean;
}
/**
 * 值变化事件。
 *
 */
export declare class TValueChangeEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转value_change_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    static cast(event: TEvent): TValueChangeEvent;
}
/**
 * 日志事件。
 *
 */
export declare class TLogMessageEvent extends TEvent {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 把event对象转log_message_event_t对象。
     *
     * @param event event对象。
     *
     * @returns event对象。
     */
    static cast(event: TEvent): TLogMessageEvent;
}
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
export declare class TAppBar extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TAppBar;
    /**
     * 转换为app_bar对象(供脚本语言使用)。
     *
     * @param widget app_bar对象。
     *
     * @returns app_bar对象。
     */
    static cast(widget: TWidget): TAppBar;
}
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
export declare class TButtonGroup extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TButtonGroup;
    /**
     * 转换为button_group对象(供脚本语言使用)。
     *
     * @param widget button_group对象。
     *
     * @returns button_group对象。
     */
    static cast(widget: TWidget): TButtonGroup;
}
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
 *[button.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/button.xml)
 *
 *在c代码中使用函数button\_create创建按钮控件。如：
 *
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
 *default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L31)
 *
 */
export declare class TButton extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TButton;
    /**
     * 转换为button对象(供脚本语言使用)。
     *
     * @param widget button对象。
     *
     * @returns button对象。
     */
    static cast(widget: TWidget): TButton;
    /**
     * 设置触发EVT\_CLICK事件的时间间隔。为0则不重复触发EVT\_CLICK事件。
     *
     * @param repeat 触发EVT_CLICK事件的时间间隔(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setRepeat(repeat: number): TRet;
    /**
     * 设置触发长按事件的时间(毫秒)。
     *
     * @param long_press_time 触发长按事件的时间(毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLongPressTime(long_press_time: number): TRet;
    /**
     * 设置是否启用长按事件。
     *
     * @param enable_long_press 是否启用长按事件。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setEnableLongPress(enable_long_press: boolean): TRet;
    /**
     * 设置是否启用预览。
     *
     * @param enable_preview 是否启用预览。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setEnablePreview(enable_preview: boolean): TRet;
    /**
     * 重复触发EVT\_CLICK事件的时间间隔。
     *
     *为0则不重复触发EVT\_CLICK事件。
     *
     */
    get repeat(): number;
    set repeat(v: number);
    /**
     * 是否启用长按事件，为true时才触发长按事件。
     *
     *触发长按事件后不再触发点击事件。
     *缺省不启用。
     *
     */
    get enableLongPress(): boolean;
    set enableLongPress(v: boolean);
    /**
     * 是否启用预览(主要用于软键盘)。
     *
     */
    get enablePreview(): boolean;
    set enablePreview(v: boolean);
    /**
     * 触发长按事件的时间(毫秒)
     *
     */
    get longPressTime(): number;
    set longPressTime(v: number);
    /**
     * 当前是否按下。
     *
     */
    get pressed(): boolean;
}
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
 *[button.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/basic.xml)
 *
 *在c代码中使用函数check\_button\_create创建多选按钮控件。如：
 *
 *
 *
 *在c代码中使用函数check\_button\_create\_radio创建单选按钮控件。如：
 *
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
 *default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L227)
 *
 */
export declare class TCheckButton extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建多选按钮对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns widget对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TCheckButton;
    /**
     * 创建单选按钮对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns widget对象。
     */
    static createRadio(parent: TWidget, x: number, y: number, w: number, h: number): TCheckButton;
    /**
     * 设置控件的值。
     *
     * @param value 值(勾选为TRUE，非勾选为FALSE)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 转换check_button对象(供脚本语言使用)。
     *
     * @param widget check_button对象。
     *
     * @returns check_button对象。
     */
    static cast(widget: TWidget): TCheckButton;
    /**
     * 创建check button对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     * @param type 类型。
     * @param radio 是否单选。
     *
     * @returns widget对象。
     */
    static createEx(parent: TWidget, x: number, y: number, w: number, h: number, type: string, radio: boolean): TCheckButton;
    /**
     * 值(勾选为TRUE，非勾选为FALSE)。
     *
     */
    get value(): boolean;
    set value(v: boolean);
}
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
export declare class TClipView extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TClipView;
    /**
     * 转换为clip_view对象(供脚本语言使用)。
     *
     * @param widget clip_view对象。
     *
     * @returns clip_view对象。
     */
    static cast(widget: TWidget): TClipView;
}
/**
 * 色块控件。
 *
 *用来显示一个颜色块，它通过属性而不是窗体样式来设置颜色，方便在运行时动态改变颜色。
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
 *[color_tile](https://github.com/zlgopen/awtk/blob/master/design/default/ui/color_picker_rgb.xml)
 *
 *在c代码中使用函数color_tile\_create创建色块控件。如：
 *
 *
 *> 创建之后，用color\_tile\_set\_bg\_color设置背景颜色。
 *
 */
export declare class TColorTile extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TColorTile;
    /**
     * 转换为color_tile对象(供脚本语言使用)。
     *
     * @param widget color_tile对象。
     *
     * @returns color_tile对象。
     */
    static cast(widget: TWidget): TColorTile;
    /**
     * 设置背景颜色。
     *
     * @param color 背景颜色。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setBgColor(color: string): TRet;
    /**
     * 获取背景颜色。
     *
     *
     * @returns 返回背景颜色。
     */
    getBgColor(): string;
    /**
     * 获取边框颜色。
     *
     *
     * @returns 返回边框颜色。
     */
    getBorderColor(): string;
    /**
     * 背景颜色。
     *
     */
    get bgColor(): string;
    set bgColor(v: string);
    /**
     * 边框颜色。
     *
     */
    get borderColor(): string;
}
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
export declare class TColumn extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TColumn;
    /**
     * 转换为column对象(供脚本语言使用)。
     *
     * @param widget column对象。
     *
     * @returns column对象。
     */
    static cast(widget: TWidget): TColumn;
}
/**
 * ComboBox Item控件。
 *
 *本类仅供combo\_box控件内部使用。
 *
 */
export declare class TComboBoxItem extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TComboBoxItem;
    /**
     * 转换combo_box_item对象(供脚本语言使用)。
     *
     * @param widget combo_box_item对象。
     *
     * @returns combo_box_item对象。
     */
    static cast(widget: TWidget): TComboBoxItem;
    /**
     * 设置控件是否被选中。
     *
     * @param checked 是否被选中。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setChecked(checked: boolean): TRet;
    /**
     * 设置控件的值。
     *
     * @param value 值
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 值。
     *
     */
    get value(): number;
    set value(v: number);
    /**
     * 是否被选中。
     *
     */
    get checked(): boolean;
    set checked(v: boolean);
}
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
export declare class TDialogClient extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TDialogClient;
    /**
     * 转换为dialog_client对象(供脚本语言使用)。
     *
     * @param widget dialog_client对象。
     *
     * @returns dialog_client对象。
     */
    static cast(widget: TWidget): TDialogClient;
}
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
export declare class TDialogTitle extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TDialogTitle;
    /**
     * 转换为dialog_title对象(供脚本语言使用)。
     *
     * @param widget dialog_title对象。
     *
     * @returns dialog_title对象。
     */
    static cast(widget: TWidget): TDialogTitle;
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/digit_clock.xml)
 *
 *在c代码中使用函数digit\_clock\_create创建数字时钟控件。如：
 *
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L138)
 *
 */
export declare class TDigitClock extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TDigitClock;
    /**
     * 转换为digit_clock对象(供脚本语言使用)。
     *
     * @param widget digit_clock对象。
     *
     * @returns digit_clock对象。
     */
    static cast(widget: TWidget): TDigitClock;
    /**
     * 设置显示格式。
     *
     * @param format 格式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFormat(format: string): TRet;
    /**
     * 显示格式。
     *
     ** Y 代表年(完整显示)
     ** M 代表月(1-12)
     ** D 代表日(1-31)
     ** h 代表时(0-23)
     ** H 代表时(1-12)
     ** m 代表分(0-59)
     ** s 代表秒(0-59)
     ** w 代表星期(0-6)
     ** W 代表星期的英文缩写(支持翻译)
     ** T 代表时段AM/PM(支持翻译)
     ** YY 代表年(只显示末两位)
     ** MM 代表月(01-12)
     ** DD 代表日(01-31)
     ** hh 代表时(00-23)
     ** HH 代表时(01-12)
     ** mm 代表分(00-59)
     ** ss 代表秒(00-59)
     ** MMM 代表月的英文缩写(支持翻译)
     *
     *如 日期时间为：2018/11/12 9:10:20
     ** "Y/M/D"显示为"2018/11/12"
     ** "Y-M-D"显示为"2018-11-12"
     ** "Y-M-D h:m:s"显示为"2018-11-12 9:10:20"
     ** "Y-M-D hh:mm:ss"显示为"2018-11-12 09:10:20"
     *
     */
    get format(): string;
    set format(v: string);
}
/**
 * dragger控件。
 *
 *目前主要用于scrollbar里的滑块。
 *
 */
export declare class TDragger extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TDragger;
    /**
     * 转换为dragger对象(供脚本语言使用)。
     *
     * @param widget dragger对象。
     *
     * @returns dragger对象。
     */
    static cast(widget: TWidget): TDragger;
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
    setRange(x_min: number, y_min: number, x_max: number, y_max: number): TRet;
    /**
     * x坐标的最小值。
     *
     */
    get xMin(): number;
    /**
     * y坐标的最小值。
     *
     */
    get yMin(): number;
    /**
     * x坐标的最大值。
     *
     */
    get xMax(): number;
    /**
     * y坐标的最大值。
     *
     */
    get yMax(): number;
}
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
 *[edit.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/edit.xml)
 *
 *在c代码中使用函数edit\_create创建编辑器控件。如：
 *
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
 *default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L104)
 *
 */
export declare class TEdit extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TEdit;
    /**
     * 转换为edit对象(供脚本语言使用)。
     *
     * @param widget edit对象。
     *
     * @returns edit对象。
     */
    static cast(widget: TWidget): TEdit;
    /**
     * 获取int类型的值。
     *
     *
     * @returns 返回int的值。
     */
    getInt(): number;
    /**
     * 获取double类型的值。
     *
     *
     * @returns 返回double的值。
     */
    getDouble(): number;
    /**
     * 设置int类型的值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setInt(value: any): TRet;
    /**
     * 设置double类型的值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDouble(value: any): TRet;
    /**
     * 设置double类型的值。
     *
     * @param format 格式(缺省为"%2.2lf")。
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDoubleEx(format: string, value: any): TRet;
    /**
     * 设置为文本输入及其长度限制，不允许输入超过max个字符，少于min个字符时进入error状态。
     *
     * @param min 最小长度。
     * @param max 最大长度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTextLimit(min: number, max: number): TRet;
    /**
     * 设置为整数输入及取值范围。
     *
     * @param min 最小值。
     * @param max 最大值。
     * @param step 步长。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setIntLimit(min: number, max: number, step: number): TRet;
    /**
     * 设置为浮点数输入及取值范围。
     *
     * @param min 最小值。
     * @param max 最大值。
     * @param step 步长。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFloatLimit(min: number, max: number, step: number): TRet;
    /**
     * 设置编辑器是否为只读。
     *
     * @param readonly 只读。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setReadonly(readonly: boolean): TRet;
    /**
     * 设置编辑器是否为可撤销修改。
     *
     * @param cancelable 是否为可撤销修。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCancelable(cancelable: boolean): TRet;
    /**
     * 设置编辑器是否为自动改正。
     *
     * @param auto_fix 自动改正。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAutoFix(auto_fix: boolean): TRet;
    /**
     * 设置编辑器是否在获得焦点时不选中文本。
     *
     * @param select_none_when_focused 是否在获得焦点时不选中文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSelectNoneWhenFocused(select_none_when_focused: boolean): TRet;
    /**
     * 设置编辑器是否在获得焦点时打开输入法。
     *
     *> * 设置默认焦点时，打开窗口时不弹出软键盘。
     *> * 用键盘切换焦点时，编辑器获得焦点时不弹出软键盘。
     *
     * @param open_im_when_focused 是否在获得焦点时打开输入法。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setOpenImWhenFocused(open_im_when_focused: boolean): TRet;
    /**
     * 设置编辑器是否在失去焦点时关闭输入法。
     *
     * @param close_im_when_blured 是否是否在失去焦点时关闭输入法。在失去焦点时关闭输入法。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCloseImWhenBlured(close_im_when_blured: boolean): TRet;
    /**
     * 设置编辑器的输入类型。
     *
     * @param type 输入类型。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setInputType(type: TInputType): TRet;
    /**
     * 设置软键盘上action按钮的文本。
     *
     * @param action_text 软键盘上action按钮的文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setActionText(action_text: string): TRet;
    /**
     * 设置编辑器的输入提示。
     *
     * @param tips 输入提示。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTips(tips: string): TRet;
    /**
     * 获取翻译之后的文本，然后调用edit_set_tips。
     *
     * @param tr_tips 提示信息。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTrTips(tr_tips: string): TRet;
    /**
     * 设置自定义软键盘名称。
     *
     * @param keyboard 键盘名称(相应UI资源必须存在)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setKeyboard(keyboard: string): TRet;
    /**
     * 当编辑器输入类型为密码时，设置密码是否可见。
     *
     * @param password_visible 密码是否可见。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setPasswordVisible(password_visible: boolean): TRet;
    /**
     * 设置为焦点。
     *
     * @param focus 是否为焦点。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFocus(focus: boolean): TRet;
    /**
     * 设置输入框的光标位置。
     *
     * @param cursor 光标位置。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCursor(cursor: number): TRet;
    /**
     * 获取输入框的光标位置。
     *
     *
     * @returns 返回光标位置。
     */
    getCursor(): number;
    /**
     * 选择指定范围的文本。
     *
     * @param start 起始偏移。
     * @param end 结束偏移。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSelect(start: number, end: number): TRet;
    /**
     * 获取选中的文本。
     *使用完后需调用 TKMEM_FREE() 进行释放文本占有内存。
     *
     *
     * @returns 返回选中文本。
     */
    getSelectedText(): string;
    /**
     * 设置输入回车后是否跳到下一个控件中。
     *
     * @param focus_next_when_enter 是否跳入下一个控件中。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFocusNextWhenEnter(focus_next_when_enter: boolean): TRet;
    /**
     * 输入提示。
     *
     */
    get tips(): string;
    set tips(v: string);
    /**
     * 保存用于翻译的提示信息。
     *
     */
    get trTips(): string;
    set trTips(v: string);
    /**
     * 软键盘上action按钮的文本。内置取值有：
     *
     ** next 将焦点切换到下一个控件。
     ** done 完成，关闭软键盘。
     *
     *也可以使用其它文本，比如send表示发送。这个需要自己实现相应的功能，处理EVT\_IM\_ACTION事件即可。
     *
     */
    get actionText(): string;
    set actionText(v: string);
    /**
     * fscript脚本，用输入校验，如：(len(text) 3) && (len(text) < 10)。
     *
     *> 用于校验输入的文本是否合法。
     *
     */
    get validator(): string;
    /**
     * 自定义软键盘名称。AWTK优先查找keyboard属性设置的键盘文件名（该键盘的XML文件需要在default\raw\ui目录下存在），如果没有指定keyboard，就找input_type设置的键盘类型。如果指定为空字符串，则表示不需要软键盘。
     *
     */
    get keyboard(): string;
    set keyboard(v: string);
    /**
     * 最小值或最小长度。
     *
     */
    get min(): number;
    /**
     * 最大值或最大长度。
     *
     */
    get max(): number;
    /**
     * 步长。
     *作为数值型编辑器时，一次增加和减少时的数值。
     *
     */
    get step(): number;
    /**
     * 输入类型。
     *
     */
    get inputType(): TInputType;
    set inputType(v: TInputType);
    /**
     * 编辑器是否为只读。
     *
     */
    get readonly(): boolean;
    set readonly(v: boolean);
    /**
     * 密码是否可见。
     *
     */
    get passwordVisible(): boolean;
    set passwordVisible(v: boolean);
    /**
     * 输入无效时，是否自动改正。
     *
     */
    get autoFix(): boolean;
    set autoFix(v: boolean);
    /**
     * 获得焦点时不选中文本。
     *
     *> 主要用于没有指针设备的情况，否则软键盘无法取消选中文本。
     *
     */
    get selectNoneWhenFocused(): boolean;
    set selectNoneWhenFocused(v: boolean);
    /**
     * 获得焦点时打开输入法。
     *
     *> 主要用于没有指针设备的情况，否则每次切换焦点时都打开输入法。
     *
     */
    get openImWhenFocused(): boolean;
    set openImWhenFocused(v: boolean);
    /**
     * 是否在失去焦点时关闭输入法(默认是)。
     *
     */
    get closeImWhenBlured(): boolean;
    set closeImWhenBlured(v: boolean);
    /**
     * 是否支持撤销编辑。如果为TRUE，在失去焦点之前可以撤销所有修改(恢复获得焦点之前的内容)。
     *
     *> * 1.一般配合keyboard的"cancel"按钮使用。
     *> * 2.为TRUE时，如果内容有变化，会设置编辑器的状态为changed，所以此时编辑器需要支持changed状态的style。
     *
     */
    get cancelable(): boolean;
    set cancelable(v: boolean);
    /**
     * 输入回车后是否跳到下一个控件中。
     *
     */
    get focusNextWhenEnter(): boolean;
    set focusNextWhenEnter(v: boolean);
}
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
export declare class TGridItem extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TGridItem;
    /**
     * 转换为grid_item对象(供脚本语言使用)。
     *
     * @param widget grid_item对象。
     *
     * @returns grid_item对象。
     */
    static cast(widget: TWidget): TGridItem;
}
/**
 * 网格。
 *在xml中使用"grid"标签创建控件。如：
 *
 *```xml
 *<!-- ui -->
 *<grid x="c" y="50" w="100" h="100"/>
 *```
 *
 *可用通过style来设置控件的显示风格，如字体的大小和颜色等等。如：
 *
 *```xml
 *<!-- style -->
 *<grid>
 *<style name="default" grid_color="gray" border_color="black" odd_bg_color="#f5f5f5" even_bg_color="#eeeeee">
 *<normal />
 *</style>
 *</grid>
 *```
 *
 */
export declare class TGrid extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建grid对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns grid对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TGrid;
    /**
     * 转换为grid对象(供脚本语言使用)。
     *
     * @param widget grid对象。
     *
     * @returns grid对象。
     */
    static cast(widget: TWidget): TGrid;
    /**
     * 设置 行数。
     *
     * @param rows 行数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setRows(rows: number): TRet;
    /**
     * 设置 各列的参数。
     *
     * @param columns_definition 各列的参数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setColumnsDefinition(columns_definition: string): TRet;
    /**
     * 设置 是否显示网格。
     *
     * @param show_grid 是否显示网格。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setShowGrid(show_grid: boolean): TRet;
    /**
     * 行数。
     *
     */
    get rows(): number;
    set rows(v: number);
    /**
     * 各列的参数。
     *各列的参数之间用英文的分号(;)分隔，每列参数的格式为：
     *
     *col(w=?,left_margin=?,right_margin=?,top_maorgin=?,bottom_margin=?)
     *
     ** w 为列的宽度(必须存在)。取值在(0-1]区间时，视为grid控件宽度的比例，否则为像素宽度。
     *(如果为负数，将计算结果加上控件的宽度)
     ** left_margin(可选，可缩写为l) 该列左边的边距。
     ** right_margin(可选，可缩写为r) 该列右边的边距。
     ** top_margin(可选，可缩写为t) 该列顶部的边距。
     ** bottom_margin(可选，可缩写为b) 该列底部的边距。
     ** margin(可选，可缩写为m) 同时指定上面4个边距。
     ** fill_available(可选，可缩写为f) 填充剩余宽度(只有一列可以指定)。
     *
     */
    get columnsDefinition(): string;
    set columnsDefinition(v: string);
    /**
     * 是否显示网格。
     *
     */
    get showGrid(): boolean;
    set showGrid(v: boolean);
}
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
export declare class TGroupBox extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TGroupBox;
    /**
     * 设置选中的单选按钮的索引。
     *
     * @param value 选中的单选按钮的索引。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 转换为group_box对象(供脚本语言使用)。
     *
     * @param widget group_box对象。
     *
     * @returns group_box对象。
     */
    static cast(widget: TWidget): TGroupBox;
    /**
     * 选中的单选按钮的索引。
     *
     */
    get value(): number;
    set value(v: number);
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/label.xml)
 *
 *在c代码中使用函数label\_create创建文本控件。如：
 *
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L144)
 *
 */
export declare class TLabel extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TLabel;
    /**
     * 设置显示字符的个数(小于0时全部显示)。
     *
     * @param length 最大可显示字符个数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLength(length: number): TRet;
    /**
     * 设置max_w。
     *
     * @param max_w 最大宽度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMaxW(max_w: number): TRet;
    /**
     * 设置是否自动换行。
     *
     * @param line_wrap 是否自动换行。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLineWrap(line_wrap: boolean): TRet;
    /**
     * 设置是否允许整个单词换行。(需要开启自动换行才有效果)
     *
     * @param word_wrap 是否允许整个单词换行。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setWordWrap(word_wrap: boolean): TRet;
    /**
     * 是否开启缩写，开启后，当文字长度操作控件长度后，自动变为...
     *
     * @param ellipses 是否开启缩写。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setEllipses(ellipses: boolean): TRet;
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
    resizeToContent(min_w: number, max_w: number, min_h: number, max_h: number): TRet;
    /**
     * 转换为label对象(供脚本语言使用)。
     *
     * @param widget label对象。
     *
     * @returns label对象。
     */
    static cast(widget: TWidget): TLabel;
    /**
     * 显示字符的个数(小于0时全部显示)。
     *主要用于动态改变显示字符的个数，来实现类似[拨号中...]的动画效果。
     *
     */
    get length(): number;
    set length(v: number);
    /**
     * 是否自动换行(默认FALSE)。
     *
     */
    get lineWrap(): boolean;
    set lineWrap(v: boolean);
    /**
     * 是否允许整个单词换行(默认FALSE)。
     *> 需要开启自动换行才有效果
     *
     */
    get wordWrap(): boolean;
    set wordWrap(v: boolean);
    /**
     * 是否开启缩写，开启后，当文字长度操作控件长度后，自动变为...
     *> 和换行是冲突的，换行后，该属性不生效
     *
     */
    get ellipses(): boolean;
    set ellipses(v: boolean);
    /**
     * 当auto_adjust_size为TRUE时，用于控制控件的最大宽度，超出该宽度后才自动换行。
     *>为0表示忽略该参数。小于0时取父控件宽度加上max_w。
     *
     */
    get maxW(): number;
    set maxW(v: number);
}
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
 *[tab control](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
 *
 */
export declare class TPages extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TPages;
    /**
     * 转换为pages对象(供脚本语言使用)。
     *
     * @param widget pages对象。
     *
     * @returns pages对象。
     */
    static cast(widget: TWidget): TPages;
    /**
     * 设置当前的Page。
     *
     * @param index 当前Page的序号。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setActive(index: number): TRet;
    /**
     * 设置切换界面时是否自动聚焦。
     *
     * @param auto_focused 切换界面时是否自动聚焦。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAutoFocused(auto_focused: boolean): TRet;
    /**
     * 通过页面的名字设置当前的Page。
     *
     * @param name 当前Page的名字。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setActiveByName(name: string): TRet;
    /**
     * 当前活跃的page。(需要用到 MVVM 数据绑定请设置 value 属性)
     *
     */
    get active(): number;
    set active(v: number);
    /**
     * 选择切换界面时是否自动聚焦上一次保存的焦点。（默认为TRUE）
     *
     */
    get autoFocused(): boolean;
    set autoFocused(v: boolean);
}
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
 *[basic demo](https://github.com/zlgopen/awtk/blob/master/design/default/ui/basic.xml)
 *
 *在c代码中使用函数progress\_bar\_create创建进度条控件。如：
 *
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
 *default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L183)
 *
 */
export declare class TProgressBar extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TProgressBar;
    /**
     * 转换为progress_bar对象(供脚本语言使用)。
     *
     * @param widget progress_bar对象。
     *
     * @returns progress_bar对象。
     */
    static cast(widget: TWidget): TProgressBar;
    /**
     * 设置进度条的进度。
     *
     * @param value 进度
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 设置最大值。
     *
     * @param max 最大值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMax(max: number): TRet;
    /**
     * 设置格式。
     *
     * @param format 格式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFormat(format: string): TRet;
    /**
     * 设置进度条的方向。
     *
     * @param vertical 是否为垂直方向。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setVertical(vertical: boolean): TRet;
    /**
     * 设置进度条的是否显示文本。
     *
     * @param show_text 是否显示文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setShowText(show_text: boolean): TRet;
    /**
     * 设置进度条是否反向。
     *
     * @param reverse 是否反向。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setReverse(reverse: boolean): TRet;
    /**
     * 获取进度百分比。
     *
     *> 当max为100时，percent和value取整后一致。
     *
     *
     * @returns 返回百分比。
     */
    getPercent(): number;
    /**
     * 进度条的值[0-max]。
     *
     */
    get value(): number;
    set value(v: number);
    /**
     * 最大值(缺省为100)。
     *
     */
    get max(): number;
    set max(v: number);
    /**
     * 数值到字符串转换时的格式，缺省为"%d"。
     *
     */
    get format(): string;
    set format(v: string);
    /**
     * 进度条的是否为垂直方向。
     *
     */
    get vertical(): boolean;
    set vertical(v: boolean);
    /**
     * 是否显示文本。
     *
     */
    get showText(): boolean;
    set showText(v: boolean);
    /**
     * 是否反向显示。如果为TRUE，水平方向从右向左表示增加，垂直方向从上到下表示增加。
     *
     */
    get reverse(): boolean;
    set reverse(v: boolean);
}
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
export declare class TRow extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TRow;
    /**
     * 转换为row对象(供脚本语言使用)。
     *
     * @param widget row对象。
     *
     * @returns row对象。
     */
    static cast(widget: TWidget): TRow;
}
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
 *[basic](https://github.com/zlgopen/awtk/blob/master/design/default/ui/basic.xml)
 *
 *在c代码中使用函数slider\_create创建滑块控件。如：
 *
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
 *default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L179)
 *
 */
export declare class TSlider extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TSlider;
    /**
     * 转换为slider对象(供脚本语言使用)。
     *
     * @param widget slider对象。
     *
     * @returns slider对象。
     */
    static cast(widget: TWidget): TSlider;
    /**
     * 设置滑块的值。
     *
     * @param value 值
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 设置滑块的最小值。
     *
     * @param min 最小值
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMin(min: number): TRet;
    /**
     * 设置滑块的最大值。
     *
     * @param max 最大值
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setMax(max: number): TRet;
    /**
     * 设置前景色的线帽形状。（默认为跟随风格的圆角设置，但是在没有设置圆角的时候无法使用 "round" 来设置圆角）
     *
     * @param line_cap 前景色的线帽形状，取值为：butt|round
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLineCap(line_cap: string): TRet;
    /**
     * 设置滑块的拖动的最小单位。
     *
     * @param step 拖动的最小单位。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setStep(step: number): TRet;
    /**
     * 设置bar的宽度或高度。
     *
     * @param bar_size bar的宽度或高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setBarSize(bar_size: number): TRet;
    /**
     * 设置滑块的方向。
     *
     * @param vertical 是否为垂直方向。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setVertical(vertical: boolean): TRet;
    /**
     * 值。
     *
     */
    get value(): number;
    set value(v: number);
    /**
     * 最小值。
     *
     */
    get min(): number;
    set min(v: number);
    /**
     * 最大值。
     *
     */
    get max(): number;
    set max(v: number);
    /**
     * 拖动的最小单位。
     *
     */
    get step(): number;
    set step(v: number);
    /**
     * 轴的宽度或高度（单位：像素），为0表示为控件的宽度或高度的一半，缺省为0。
     *
     */
    get barSize(): number;
    set barSize(v: number);
    /**
     * 滑块的宽度或高度（单位：像素），缺省为 bar_size * 1.5。
     *
     */
    get draggerSize(): number;
    /**
     * 前景色的线帽形状。（取值：butt|round，默认为跟随风格的圆角设置, 但是在没有设置圆角的时候无法使用 "round" 来设置圆角）
     *
     */
    get lineCap(): string;
    set lineCap(v: string);
    /**
     * 滑块的是否为垂直方向。
     *
     */
    get vertical(): boolean;
    set vertical(v: boolean);
    /**
     * 滑块的宽度或高度是否与icon适应，缺省为true。
     *
     */
    get draggerAdaptToIcon(): boolean;
    /**
     * 是否允许在轴上滑动来改变滑块位置，缺省为FALSE。
     *
     */
    get slideWithBar(): boolean;
}
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
 *[tab control](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
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
export declare class TTabButtonGroup extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TTabButtonGroup;
    /**
     * 设置compact。
     *
     * @param compact 是否使用紧凑布局(缺省FALSE)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCompact(compact: boolean): TRet;
    /**
     * 设置scrollable。
     *
     * @param scrollable 是否允许滚动(缺省FALSE)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setScrollable(scrollable: boolean): TRet;
    /**
     * 转换tab_button_group对象(供脚本语言使用)。
     *
     * @param widget tab_button_group对象。
     *
     * @returns tab_button_group对象。
     */
    static cast(widget: TWidget): TTabButtonGroup;
    /**
     * 紧凑型排版子控件(缺省FALSE)。
     *
     */
    get compact(): boolean;
    set compact(v: boolean);
    /**
     * 是否支持滚动(缺省FALSE)。
     *
     *> 紧凑型排版子控件时才支持滚动。
     *
     */
    get scrollable(): boolean;
    set scrollable(v: boolean);
}
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
 *[tab control](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
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
export declare class TTabButton extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TTabButton;
    /**
     * 转换tab_button对象(供脚本语言使用)。
     *
     * @param widget tab_button对象。
     *
     * @returns tab_button对象。
     */
    static cast(widget: TWidget): TTabButton;
    /**
     * 设置为当前标签。
     *
     * @param value 是否为当前标签。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 设置控件的图标。
     *
     * @param name 当前项的图标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setIcon(name: string): TRet;
    /**
     * 设置控件的active图标。
     *
     * @param name 当前项的图标。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setActiveIcon(name: string): TRet;
    /**
     * 设置控件动态加载显示UI。
     *
     * @param name 动态加载UI的资源名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLoadUi(name: string): TRet;
    /**
     * 值。
     *
     */
    get value(): boolean;
    set value(v: boolean);
    /**
     * 激活后加载的UI名字。
     *
     */
    get loadUi(): string;
    set loadUi(v: string);
    /**
     * 当前项的图标的名称。
     *
     */
    get activeIcon(): string;
    set activeIcon(v: string);
    /**
     * 非当前项的图标的名称。
     *
     */
    get icon(): string;
    set icon(v: string);
}
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
 *[tab control](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
 *
 */
export declare class TTabControl extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TTabControl;
    /**
     * 转换tab_control对象(供脚本语言使用)。
     *
     * @param widget tab_control对象。
     *
     * @returns tab_control对象。
     */
    static cast(widget: TWidget): TTabControl;
}
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
export declare class TView extends TWidget {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TView;
    /**
     * 设置缺省获得焦点的子控件(可用控件名或类型)。
     *
     * @param default_focused_child 缺省获得焦点的子控件(可用控件名或类型)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDefaultFocusedChild(default_focused_child: string): TRet;
    /**
     * 转换为view对象(供脚本语言使用)。
     *
     * @param widget view对象。
     *
     * @returns view对象。
     */
    static cast(widget: TWidget): TView;
    /**
     * 缺省获得焦点的子控件(可用控件名或类型)。
     *
     *> view作为pages/slideview的直接子控件才需要设置。
     *> 正常情况下，一个窗口只能指定一个初始焦点。
     *> 但是对于pages/slideview来说，可能希望每一个页面都有一个初始焦点，此时可用default\_focused\_child来指定。
     *
     */
    get defaultFocusedChild(): string;
    set defaultFocusedChild(v: string);
}
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
 *
 *关闭模态对话框用dialog\_quit
 *
 *
 *
 *关闭非模态对话框用window\_close。
 *
 *
 *
 *> 更多用法请参考：
 *[dialog.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
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
 *(https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L324)
 *
 */
export declare class TDialog extends TWindowBase {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TDialog;
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
    static createSimple(parent: TWidget, x: number, y: number, w: number, h: number): TDialog;
    /**
     * 转换dialog对象(供脚本语言使用)。
     *
     * @param widget dialog对象。
     *
     * @returns dialog对象。
     */
    static cast(widget: TWidget): TDialog;
    /**
     * 获取title控件。
     *
     *
     * @returns title对象。
     */
    getTitle(): TWidget;
    /**
     * 获取client控件。
     *
     *
     * @returns client对象。
     */
    getClient(): TWidget;
    /**
     * 从资源文件中加载并创建Dialog对象。
     *
     *本函数在ui\_loader/ui\_builder_default里实现。
     *
     * @param name dialog的名称。
     *
     * @returns 对象。
     */
    static open(name: string): TDialog;
    /**
     * 设置对话框的标题文本。
     *
     * @param title 标题。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTitle(title: string): TRet;
    /**
     * 模态显示对话框。
     *dialog_modal返回后，dialog对象将在下一个idle函数中回收。
     *也就是在dialog_modal调用完成后仍然可以访问dialog中控件，直到本次事件结束。
     *调用该函数会使线程进入阻塞状态，需要调用dialog_quit来解除阻塞。
     *
     *
     * @returns 返回退出码，值为dialog_quit函数中传入的参数。
     */
    modal(): TDialogQuitCode;
    /**
     * 退出模态显示，关闭对话框。
     *
     *> 比如，在对话框中关闭按钮的事件处理函数中，调用本函数关闭对话框。
     *
     * @param code 退出码，作为dialog_modal的返回值(参考：[dialog_quit_code_t](dialog_quit_code_t.md))。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    quit(code: number): TRet;
    /**
     * 检查对话框是否已经退出模态。
     *
     *
     * @returns 返回TRUE表示已经退出，否则表示没有。
     */
    isQuited(): boolean;
    /**
     * 检查对话框是否为模态对话框。
     *
     *
     * @returns 返回TRUE表示是模态对话框，否则表示不是。
     */
    isModal(): boolean;
    /**
     * 显示『短暂提示信息』对话框。
     *
     *窗体样式由dialog_toast.xml文件决定。
     *
     * @param text 文本内容。
     * @param duration 显示时间(单位为毫秒)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static toast(text: string, duration: number): TRet;
    /**
     * 显示『提示信息』对话框。
     *
     *窗体样式由dialog_info.xml文件决定。
     *
     * @param title 标题。
     * @param text 文本内容。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static info(title: string, text: string): TRet;
    /**
     * 显示『警告』对话框。
     *
     *窗体样式由dialog_warn.xml文件决定。
     *
     * @param title 标题。
     * @param text 文本内容。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    static warn(title: string, text: string): TRet;
    /**
     * 显示『确认』对话框。
     *
     *窗体样式由dialog_confirm.xml文件决定。
     *
     * @param title 标题。
     * @param text 文本内容。
     *
     * @returns 返回RET_OK表示确认，否则表示取消。
     */
    static confirm(title: string, text: string): TRet;
    /**
     * 对话框高亮策略。
     *
     *> 请参考 [对话框高亮策略](https://github.com/zlgopen/awtk/blob/master/docs/dialog_highlight.md)
     *
     */
    get highlight(): string;
}
/**
 * 原生窗口。
 *
 */
export declare class TNativeWindow extends TObject {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 移动窗口。
     *
     * @param x x坐标。
     * @param y y坐标。
     * @param force 无论是否shared都move。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    move(x: number, y: number, force: boolean): TRet;
    /**
     * 调整窗口大小。
     *
     * @param w 宽。
     * @param h 高。
     * @param force 无论是否shared都resize。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    resize(w: number, h: number, force: boolean): TRet;
    /**
     * 调整窗口旋转。
     *
     * @param old_orientation 旧的旋转角度。
     * @param new_orientation 新的旋转角度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setOrientation(old_orientation: any, new_orientation: any): TRet;
    /**
     * 最小化窗口。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    minimize(): TRet;
    /**
     * 最大化窗口。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    maximize(): TRet;
    /**
     * 恢复窗口大小。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    restore(): TRet;
    /**
     * 窗口居中。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    center(): TRet;
    /**
     * 是否显示边框。
     *
     * @param show 是否显示。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    showBorder(show: boolean): TRet;
    /**
     * 是否全屏。
     *
     * @param fullscreen 是否全屏。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFullscreen(fullscreen: boolean): TRet;
    /**
     * 设置鼠标光标。
     *
     * @param name 鼠标光标的名称。
     * @param img 鼠标光标的图片。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCursor(name: string, img: TBitmap): TRet;
    /**
     * 设置程序窗口的名称。
     *
     * @param app_name 程序窗口的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setTitle(app_name: string): TRet;
}
/**
 * 窗口。
 *
 *缺省的应用程序窗口，占用除system\_bar\_t之外的整个区域，请不要修改它的位置和大小(除非你清楚后果)。
 *
 *window\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于window\_t控件。
 *
 *在xml中使用"window"标签创建窗口。无需指定坐标和大小，可以指定窗体样式和动画名称。如：
 *
 *```xml
 *<window theme="basic" anim_hint="htranslate">
 *...
 *</window>
 *```
 *
 *>
 *更多用法请参考：[window.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
 *
 *在c代码中使用函数window\_create创建窗口。如：
 *
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
 *default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L0)
 *
 */
export declare class TWindow extends TWindowBase {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TWindow;
    /**
     * 以缺省的方式创建window对象。
     *
     *
     * @returns 对象。
     */
    static createDefault(): TWindow;
    /**
     * 设置为全屏窗口。
     *
     *>如果app_type是SIMULATOR，全屏是指与LCD相同大小，而非让SDL窗口全屏。
     *
     * @param fullscreen 是否全屏。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setFullscreen(fullscreen: boolean): TRet;
    /**
     * 当设计分辨率和实际分辨率不一致时，自动调整子控件的位置和大小。
     *
     *> 当子控件有self_layout参数或者子控件的父控件有children_layout参数时，不会自动调整。
     *
     * @param design_w 设计时宽度。
     * @param design_h 设计时高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAutoScaleChildren(design_w: number, design_h: number): TRet;
    /**
     * 从资源文件中加载并创建window_base对象。本函数在ui_loader/ui_builder_default里实现。
     *
     * @param name window的名称。
     *
     * @returns 对象。
     */
    static open(name: string): TWindow;
    /**
     * 从资源文件中加载并创建window对象。本函数在ui_loader/ui_builder_default里实现。
     *
     * @param name window的名称。
     * @param to_close 关闭该窗口。
     *
     * @returns 对象。
     */
    static openAndClose(name: string, to_close: TWidget): TWindow;
    /**
     * 关闭窗口。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    close(): TRet;
    /**
     * 立即无条件关闭窗口(无动画)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    closeForce(): TRet;
    /**
     * 转换为window对象(供脚本语言使用)。
     *
     * @param widget window对象。
     *
     * @returns window对象。
     */
    static cast(widget: TWidget): TWindow;
    /**
     * 是否全屏。
     *
     *>对于模拟器，全屏是让窗口和LCD具有相同大小，而非让SDL窗口全屏。
     *
     */
    get fullscreen(): boolean;
    set fullscreen(v: boolean);
}
/**
 * GIF图片控件。
 *
 *> 注意：GIF图片的尺寸大于控件大小时会自动缩小图片，但一般的嵌入式系统的硬件加速都不支持图片缩放，
 *所以缩放图片会导致性能明显下降。如果性能不满意时，请确认一下GIF图片的尺寸是否小于控件大小。
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
 *image](https://github.com/zlgopen/awtk/blob/master/design/default/ui/gif_image.xml)
 *
 *在c代码中使用函数gif\_image\_create创建GIF图片控件。如：
 *
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml)
 *
 */
export declare class TGifImage extends TImageBase {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TGifImage;
    /**
     * 播放。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    play(): TRet;
    /**
     * 停止(并重置index为0)。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    stop(): TRet;
    /**
     * 暂停。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    pause(): TRet;
    /**
     * 设置循环播放次数。
     *
     * @param loop 循环播放次数。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLoop(loop: number): TRet;
    /**
     * 转换为gif_image对象(供脚本语言使用)。
     *
     * @param widget gif_image对象。
     *
     * @returns gif_image对象。
     */
    static cast(widget: TWidget): TGifImage;
    /**
     * 循环播放的次数。
     *
     */
    get loop(): number;
    set loop(v: number);
}
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
 *| INPUT\_ASCII    | kb\_ascii.xml    |
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
 *| close          | 关闭软键盘       |
 *| clear          | 清除编辑器的内容 |
 *| cancel         | 恢复编辑器的内容 |
 *| back           | 关闭当前窗口     |
 *| back_to_home   | 返回home窗口    |
 *| 前缀key:        | 键值           |
 *| 前缀hard_key:   | 模拟物理键盘    |
 *| 前缀page:       | 切换到页面      |
 *| 前缀opt:        | 多个字符选择一个，点击切换到下一个，超时提交字符(用于实现九宫格输入) |
 *
 *示例：
 *
 ** 按键"a"，提交输入法处理。
 *
 *```xml
 *<button repeat="300" name="key:a" text="a"/>
 *```
 *
 ** 字符"a"，直接提交到编辑器。
 *
 *```xml
 *<button repeat="300" name="a" text="a"/>
 *```
 *
 ** 模拟物理键盘数字"1"，触发key down/up事件（可以用来选择候选字）。
 *
 *```xml
 *<button repeat="300" name="hard_key:1" text="1"/>
 *```
 *
 ** 九宫格输入
 *
 *```xml
 *<button repeat="300" name="opt:._@/#" text="._@/#"/>
 *<button repeat="300" name="opt:abc" text="abc"/>
 *<button repeat="300" name="opt:def" text="def"/>
 *```
 *
 *
 ** 输入语言切换
 *
 *有的输入法，同时支持输入多种语言。
 *比如T9，可以同时支持中文和英文输入，配合软键盘随时切换输入的语言。
 *
 *可以在pages的页面里指定lang属性，切换到该页面时会设置输入法的语言。如：
 *
 *```xml
 *<pages x="0" y="bottom" w="100%" h="-28" active="2">
 *<view name="lower" lang="en_us"
 *x="0" y="0" w="100%" h="100%" children_layout="default(r=4,c=4,s=2,m=2)">
 *...
 *</view>
 *<view name="chinese" lang="zh_cn"
 *x="0" y="0" w="100%" h="100%" children_layout="default(r=4,c=4,s=2,m=2)">
 *...
 *</view>
 *</pages>
 *```
 *
 ** 键盘跟随。
 *默认情况下，键盘从底部弹出。如果需要让键盘在编辑器附近弹出，可以指定floating属性为true。如：
 *
 *```xml
 *<keyboard theme="keyboard" w="200" h="200" floating="true">
 *```
 *
 *> 更多用法请参考：
 *[kb_default](https://github.com/zlgopen/awtk/blob/master/design/default/ui/kb_default.xml)
 *
 */
export declare class TKeyboard extends TWindowBase {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TKeyboard;
    /**
     * 转换为keyboard对象(供脚本语言使用)。
     *
     * @param widget keyboard对象。
     *
     * @returns keyboard对象。
     */
    static cast(widget: TWidget): TKeyboard;
}
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
 *image](https://github.com/zlgopen/awtk/blob/master/design/default/ui/mutable_image.xml)
 *
 *在c代码中使用函数mutable\_image\_create创建mutable图片控件。如：
 *
 *
 *
 *> 创建之后:
 *>
 *> 需要用mutable\_image\_set\_create\_image设置创建图片的回调函数。
 *> 需要用mutable\_image\_set\_prepare\_image设置准备图片的回调函数。
 *
 *> 完整示例请参考：[mutable image demo](
 *https://github.com/zlgopen/awtk-c-demos/blob/master/demos/mutable_image.c)
 *
 *一般不需通过style来设置控件的显示风格，如果在特殊情况下需要，可以参考其它控件。
 *
 */
export declare class TMutableImage extends TImageBase {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建mutable_image对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TMutableImage;
}
/**
 * list_item_seperator。
 *用来模拟实现风琴控件(accordion)和属性页分组控件。
 *> 当前控件被点击时，显示/隐藏当前控件到下一个分隔符控件之间的控件。
 *list_item_seperator\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于list_item_seperator\_t控件。
 *
 *在xml中使用"list_item_seperator"标签创建list_item_seperator。如：
 *
 *```xml
 *<list_item_seperator radio="true" text="Group2" h="32"/>
 *<list_item style="empty" children_layout="default(r=1,c=0,ym=1)">
 *<label w="30%" text="ASCII"/>
 *<edit w="70%" text="" tips="ascii" input_type="ascii" focused="true" action_text="next"/>
 *</list_item>
 *<list_item style="empty" children_layout="default(r=1,c=0,ym=1)">
 *<label w="30%" text="Int"/>
 *<edit w="70%" text="" tips="int" input_type="int"/>
 *</list_item>
 *
 *<list_item_seperator radio="true" text="Group3" h="32"/>
 *<list_item style="empty" children_layout="default(r=1,c=0,ym=1)">
 *<label w="30%" text="Float"/>
 *<edit w="70%" text="" tips="float" input_type="float"/>
 *</list_item>
 *<list_item style="empty" children_layout="default(r=1,c=0,ym=1)">
 *<label w="30%" text="UFloat"/>
 *<edit w="70%" text="" tips="unsigned float" input_type="ufloat"/>
 *</list_item>
 *```
 *
 *可用通过style来设置控件的显示风格，如背景颜色等。如：
 *
 *```xml
 *<list_item_seperator text_color="black" bg_color="#e0e0e0">
 *<style name="default" icon_at="left">
 *<normal  icon="collapse" />
 *<pressed icon="collapse" />
 *<over    icon="collapse" text_color="green"/>
 *<focused icon="collapse" text_color="green"/>
 *<normal_of_checked icon="expand" text_color="blue"/>
 *<pressed_of_checked icon="expand" text_color="blue"/>
 *<over_of_checked icon="expand" text_color="green"/>
 *<focused_of_checked icon="expand" text_color="green"/>
 *</style>
 *</list_item_seperator>
 *```
 *
 */
export declare class TListItemSeperator extends TCheckButton {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建list_item_seperator对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TListItemSeperator;
    /**
     * 转换为list_item_seperator对象(供脚本语言使用)。
     *
     * @param widget list_item_seperator对象。
     *
     * @returns list_item_seperator对象。
     */
    static cast(widget: TWidget): TListItemSeperator;
}
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/ui/svg_image.xml)
 *
 *在c代码中使用函数svg\_image\_create创建SVG图片控件。如：
 *
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
 *https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml)
 *
 */
export declare class TSvgImage extends TImageBase {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TSvgImage;
    /**
     * 设置控件的图片名称。
     *
     *> 如果需要显示文件系统中的图片，只需将图片名称换成实际的文件名，并加上"file://"前缀即可。
     *
     * @param name 图片名称，该图片必须存在于资源管理器。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setImage(name: string): TRet;
    /**
     * 控件设置是否开启离线缓存渲染模式。
     *
     *> 在确保svg图片不经常变化大小及状态的情况下，开启离线缓存渲染能够减少解析bsvg的开销，提高效率。
     *
     * @param is_cache_mode 是否开启缓存模式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCacheMode(is_cache_mode: boolean): TRet;
    /**
     * 控件设置svg图片绘制模式。
     *
     * @param draw_type 绘制模式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDrawType(draw_type: TImageDrawType): TRet;
    /**
     * 转换为svg_image对象(供脚本语言使用)。
     *
     * @param widget svg_image对象。
     *
     * @returns svg_image对象。
     */
    static cast(widget: TWidget): TSvgImage;
    /**
     * 离线缓存渲染模式。
     *
     */
    get isCacheMode(): boolean;
    /**
     * svg图片的绘制方式(支持旋转缩放, 目前仅支持scale、scale_auto模式)。
     *
     */
    get drawType(): TImageDrawType;
    set drawType(v: TImageDrawType);
}
/**
 * 单个idle的信息。
 *
 */
export declare class TIdleInfo extends TObject {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 转换为idle_info对象(供脚本语言使用)。
     *
     * @param idle idle_info对象。
     *
     * @returns idle_info对象。
     */
    static cast(idle: TIdleInfo): TIdleInfo;
    /**
     * idle回调函数上下文。
     *
     */
    get ctx(): any;
    /**
     * idle回调函数上下文。
     *
     */
    get extraCtx(): any;
    /**
     * idle的ID
     *
     *> 为TK\_INVALID\_ID时表示无效idle。
     *
     */
    get id(): number;
}
/**
 * 简单的动态数组，内部存放value对象。
 *
 *访问时属性名称为：
 *
 ** "size"/"length" 用于获取数组的长度。
 ** index 用于访问属性，-1可以用来追加新元素。
 *
 */
export declare class TObjectArray extends TObject {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建对象。
     *
     *
     * @returns 返回object对象。
     */
    static create(): TObjectArray;
    /**
     * for script gc
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    unref(): TRet;
    /**
     * 清除全部属性。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    clearProps(): TRet;
    /**
     * 在指定位置插入一个元素。
     *
     * @param index 位置。
     * @param v 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    insert(index: number, v: TValue): TRet;
    /**
     * 追加一个元素。
     *
     * @param v 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    push(v: TValue): TRet;
    /**
     * 查找元素出现的第一个位置。
     *
     * @param v 值。
     *
     * @returns 如果找到返回其位置，否则返回-1。
     */
    indexOf(v: TValue): number;
    /**
     * 查找元素出现的最后一个位置。
     *
     * @param v 值。
     *
     * @returns 如果找到返回其位置，否则返回-1。
     */
    lastIndexOf(v: TValue): number;
    /**
     * 在指定位置删除一个元素。
     *
     * @param index 位置。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    remove(index: number): TRet;
    /**
     * 删除指定的值。
     *
     * @param v 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    removeValue(v: TValue): TRet;
    /**
     * 在指定位置删除一个元素，并返回它。
     *
     * @param index 位置。
     * @param v 用于返回值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    getAndRemove(index: number, v: TValue): TRet;
    /**
     * 属性个数。
     *
     */
    get size(): number;
}
/**
 * 对象接口的缺省实现。
 *
 *通用当作 map 数据结构使用，内部用有序数组保存所有属性，因此可以快速查找指定名称的属性。
 *
 *示例
 *
 *
 *
 */
export declare class TObjectDefault extends TObject {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建对象。
     *
     *
     * @returns 返回object对象。
     */
    static create(): TObjectDefault;
    /**
     * 创建对象。
     *
     * @param enable_path 是否支持按路径访问属性。
     *
     * @returns 返回object对象。
     */
    static createEx(enable_path: boolean): TObjectDefault;
    /**
     * for script gc
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    unref(): TRet;
    /**
     * 清除全部属性。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    clearProps(): TRet;
    /**
     * 设置属性值时不改变属性的类型。
     *
     * @param keep_prop_type 不改变属性的类型。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setKeepPropType(keep_prop_type: boolean): TRet;
}
/**
 * 单个定时器的信息。
 *
 */
export declare class TTimerInfo extends TObject {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 转换为timer_info对象(供脚本语言使用)。
     *
     * @param timer timer_info对象。
     *
     * @returns timer_info对象。
     */
    static cast(timer: TTimerInfo): TTimerInfo;
    /**
     * 定时器回调函数的上下文
     *
     */
    get ctx(): any;
    /**
     * 定时器回调函数的上下文
     *
     */
    get extraCtx(): any;
    /**
     * 定时器的ID
     *
     *> 为TK\_INVALID\_ID时表示无效定时器。
     *
     */
    get id(): number;
    /**
     * 当前时间(相对时间，单位为毫秒)。
     *
     */
    get now(): number;
}
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
 *[window.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/calibration_win.xml)
 *
 *在c代码中使用函数calibration\_win\_create创建窗口。如：
 *
 *
 *
 *通过calibration\_win\_set\_on\_done注册回调函数，用于保存校准数据。
 *
 */
export declare class TCalibrationWin extends TWindowBase {
    nativeObj: any;
    constructor(nativeObj: any);
    /**
     * 创建calibration_win对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TCalibrationWin;
    /**
     * 转换为calibration_win对象(供脚本语言使用)。
     *
     * @param widget calibration_win对象。
     *
     * @returns calibration_win对象。
     */
    static cast(widget: TWidget): TCalibrationWin;
}
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
 *> 更多用法请参考：[combo_box.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/combo_box.xml)
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
 ** 1.combobox的下拉按钮的style名称为combobox_down，可以在窗体样式文件中设置。
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
 ** 2.combobox的弹出popup窗口的style名称为combobox_popup，可以在窗体样式文件中设置。
 *
 *```xml
 *<popup>
 *<style name="combobox_popup" border_color="red">
 *<normal bg_color="#808080"/>
 *</style>
 *</popup>
 *```
 ** 3.combobox的下拉框中的列表项的样式，可以设置combo_box_item的style来改变。
 *
 *```xml
 *<combo_box_item>
 *<style name="default" icon_at="left" text_color="black" bg_color="#f0f0f0">
 *<normal  icon="empty"/>
 *<focused icon="empty" bg_color="#1296db" text_color="gold" />
 *<pressed icon="empty" bg_color="#1296db" text_color="white" />
 *<over    icon="empty" bg_color="#1296db" text_color="white" />
 *<normal_of_checked  icon="check"/>
 *<focused_of_checked  icon="check" bg_color="#1296db" text_color="gold"/>
 *<pressed_of_checked icon="check" bg_color="#1296db" text_color="white" />
 *<over_of_checked    icon="check" bg_color="#1296db" text_color="white" />
 *</style>
 *</combo_box_item>
 *```
 *
 *> 更多用法请参考：[theme
 *default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L422)
 *
 */
export declare class TComboBox extends TEdit {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TComboBox;
    /**
     * 转换combo_box对象(供脚本语言使用)。
     *
     * @param widget combo_box对象。
     *
     * @returns combo_box对象。
     */
    static cast(widget: TWidget): TComboBox;
    /**
     * 点击按钮时可以打开popup窗口，本函数可设置窗口的名称。
     *
     * @param open_window 弹出窗口的名称。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setOpenWindow(open_window: string): TRet;
    /**
     * 设置弹出窗口的主题。
     *
     * @param theme_of_popup 弹出的窗口主题。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setThemeOfPopup(theme_of_popup: string): TRet;
    /**
     * 重置所有选项。
     *
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    resetOptions(): TRet;
    /**
     * 获取选项个数。
     *
     *
     * @returns 返回选项个数。
     */
    countOptions(): number;
    /**
     * 设置第index个选项为当前选中的选项。
     *
     * @param index 选项的索引。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSelectedIndex(index: number): TRet;
    /**
     * 根据文本设置当前选中的选项。
     *
     * @param text 原生(非翻译的文本)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setSelectedIndexByText(text: string): TRet;
    /**
     * 设置是否本地化(翻译)选项。
     *
     * @param localize_options 是否本地化(翻译)选项。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setLocalizeOptions(localize_options: boolean): TRet;
    /**
     * 设置值。
     *
     * @param value 值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setValue(value: any): TRet;
    /**
     * 设置item高度。
     *
     * @param item_height item的高度。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setItemHeight(item_height: number): TRet;
    /**
     * 追加一个选项。
     *
     * @param value 值。
     * @param text 文本。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    appendOption(value: any, text: string): TRet;
    /**
     * 删除第一个值为value的选项。
     *
     * @param value 选项的值。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    removeOption(value: any): TRet;
    /**
     * 删除指定序数的选项。
     *
     * @param index 选项的序数(0表示第一个)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    removeOptionByIndex(index: number): TRet;
    /**
     * 设置选项。
     *
     * @param options 选项。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setOptions(options: string): TRet;
    /**
     * 获取combo_box的值。
     *
     *
     * @returns 返回值。
     */
    getValueInt(): number;
    /**
     * 检查选项中是否存在指定的文本。
     *
     * @param text option text
     *
     * @returns 返回TRUE表示存在，否则表示不存在。
     */
    hasOptionText(text: string): boolean;
    /**
     * 获取combo_box的文本(可能是翻译后的文本)。
     *
     *
     * @returns 返回文本。
     */
    getTextValue(): string;
    /**
     * 获取combo_box当前选中项目的文本(原生非翻译的文本)。
     *
     *
     * @returns 返回文本。
     */
    getTextOfSelected(): string;
    /**
     * 为点击按钮时，要打开窗口的名称。
     *
     */
    get openWindow(): string;
    set openWindow(v: string);
    /**
     * 弹出窗口的主题(对应的style文件必须存在)，方便为不同combo box的弹出窗口指定不同的样式。
     *
     */
    get themeOfPopup(): string;
    set themeOfPopup(v: string);
    /**
     * 当前选中的选项。
     *
     */
    get selectedIndex(): number;
    set selectedIndex(v: number);
    /**
     * 值。
     *
     */
    get value(): number;
    set value(v: number);
    /**
     * 是否本地化(翻译)选项(缺省为TRUE)。
     *
     */
    get localizeOptions(): boolean;
    set localizeOptions(v: boolean);
    /**
     * 设置可选项(冒号分隔值和文本，分号分隔选项，如:1:red;2:green;3:blue)。
     *> 如果数据本身中有英文冒号(:)和英文分号(;)，请用16进制转义。
     *> * 英文冒号(:)写为\\x3a
     *> * 英文冒号(;)写为\\x3b
     *
     */
    get options(): string;
    set options(v: string);
    /**
     * 下拉选项的高度。如果open_window为空，则使用缺省高度。
     *
     */
    get itemHeight(): number;
    set itemHeight(v: number);
}
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
 *[image.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/images.xml)
 *
 *在c代码中使用函数image\_create创建图片控件。如：
 *
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
 *default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L313)
 *
 */
export declare class TImage extends TImageBase {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TImage;
    /**
     * 创建icon对象
     *
     * @param parent 父控件
     * @param x x坐标
     * @param y y坐标
     * @param w 宽度
     * @param h 高度
     *
     * @returns 对象。
     */
    static iconCreate(parent: TWidget, x: number, y: number, w: number, h: number): TImage;
    /**
     * 设置图片的绘制方式。
     *
     * @param draw_type 绘制方式(仅在没有旋转和缩放时生效)。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setDrawType(draw_type: TImageDrawType): TRet;
    /**
     * 转换为image对象(供脚本语言使用)。
     *
     * @param widget image对象。
     *
     * @returns image对象。
     */
    static cast(widget: TWidget): TImage;
    /**
     * 图片的绘制方式(仅在没有旋转和缩放时生效)。
     *
     */
    get drawType(): TImageDrawType;
    set drawType(v: TImageDrawType);
}
/**
 * overlay窗口。
 *
 *overlay窗口有点类似于非模态的dialog，但是它位置和大小是完全自由的，窗口管理器不会对它做任何限制。
 *
 *如果overlay窗口有透明或半透效果，则不支持窗口动画，但可以通过移动窗口位置来实现类似动画的效果。
 *
 *overlay\_t是[window\_base\_t](window_base_t.md)的子类控件，window\_base\_t的函数均适用于overlay\_t控件。
 *
 *在xml中使用"overlay"标签创建窗口。需要指定坐标和大小，可以指定窗体样式和动画名称。如：
 *
 *```xml
 *<overlay theme="basic" x="100" y="100" w="200" h="300">
 *...
 *</overlay>
 *```
 *
 *>
 *更多用法请参考：[overlay.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
 *
 *在c代码中使用函数overlay\_create创建窗口。如：
 *
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
 *default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L0)
 *
 */
export declare class TOverlay extends TWindowBase {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TOverlay;
    /**
     * 设置是否启用点击穿透。
     *
     * @param click_through 是否启用点击穿透。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setClickThrough(click_through: boolean): TRet;
    /**
     * 设置是否总是在最上面。
     *
     * @param always_on_top 是否总是在最上面。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setAlwaysOnTop(always_on_top: boolean): TRet;
    /**
     * 设置是否非模态窗口模式。
     *
     * @param modeless 是否非模态窗口模式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setModeless(modeless: boolean): TRet;
    /**
     * 转换为overlay对象(供脚本语言使用)。
     *
     * @param widget overlay对象。
     *
     * @returns overlay对象。
     */
    static cast(widget: TWidget): TOverlay;
    /**
     * 点击穿透。点击没有子控件的位置，是否穿透到底层窗口。
     *
     *缺省不启用。
     *
     */
    get clickThrough(): boolean;
    set clickThrough(v: boolean);
    /**
     * 是否总在最上面。
     *
     *缺省不启用。
     *
     */
    get alwaysOnTop(): boolean;
    set alwaysOnTop(v: boolean);
    /**
     * 非模态窗口。
     *
     *缺省不启用。
     *
     */
    get modeless(): boolean;
    set modeless(v: boolean);
}
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
 *更多用法请参考：[popup](https://github.com/zlgopen/awtk/blob/master/design/default/ui/)
 *
 *在c代码中使用函数popup\_create创建弹出窗口。如：
 *
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
 *default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L324)
 *
 */
export declare class TPopup extends TWindowBase {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TPopup;
    /**
     * 转换为popup对象(供脚本语言使用)。
     *
     * @param widget popup对象。
     *
     * @returns popup对象。
     */
    static cast(widget: TWidget): TPopup;
    /**
     * 设置点击时是否关闭窗口。
     *
     * @param close_when_click 点击时是否关闭窗口。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCloseWhenClick(close_when_click: boolean): TRet;
    /**
     * 设置点击窗口外部时是否关闭窗口。
     *
     * @param close_when_click_outside 点击窗口外部时是否关闭窗口。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCloseWhenClickOutside(close_when_click_outside: boolean): TRet;
    /**
     * 设置超时关闭时间(毫秒)。
     *
     * @param close_when_timeout 大于0时，为定时器时间(毫秒)，超时关闭窗口。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setCloseWhenTimeout(close_when_timeout: number): TRet;
    /**
     * 点击时是否关闭窗口。
     *
     */
    get closeWhenClick(): boolean;
    set closeWhenClick(v: boolean);
    /**
     * 点击到窗口外时是否关闭窗口。
     *
     */
    get closeWhenClickOutside(): boolean;
    set closeWhenClickOutside(v: boolean);
    /**
     * 超时后自动关闭窗口(毫秒)。
     *
     */
    get closeWhenTimeout(): number;
    set closeWhenTimeout(v: number);
}
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
 *更多用法请参考：[spin_box.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/spinbox.xml)
 *
 *在c代码中使用函数spin_box\_create创建spinbox控件。如：
 *
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
 *default](https://github.com/zlgopen/awtk/blob/master/design/default/styles/default.xml#L128)
 *
 */
export declare class TSpinBox extends TEdit {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TSpinBox;
    /**
     * 转换为spin_box对象(供脚本语言使用)。
     *
     * @param widget spin_box对象。
     *
     * @returns spin_box对象。
     */
    static cast(widget: TWidget): TSpinBox;
    /**
     * 设置是否启用易点击模式。
     *
     * @param easy_touch_mode 易点击模式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setEasyTouchMode(easy_touch_mode: boolean): TRet;
    /**
     * 设置按钮位置样式。
     *
     * @param button_position 按钮位置样式。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    setButtonPosition(button_position: string): TRet;
    /**
     * 设置连击的时间间隔。
     *备注：时间间隔越低，速度越快。
     *
     * @param repeat 连击的时间间隔。
     *
     * @returns 返回RET_OK表示成功，否则表示失败。
     */
    spinSetRepeat(repeat: number): TRet;
    /**
     * 是否启用易点击模式(在电容屏设备上建议启用)。
     *> 在该模式下：
     *> * 1.当高度大于font size的3倍时，inc按钮在顶部(style名为spinbox_top)，dec按钮在底部(style名为spinbox_bottom)。
     *> * 2.当高度正常时，dec按钮在左边(style名为spinbox_left)，inc按钮在右边(style名为spinbox_right)。
     *> 不在该模式下：
     *> inc按钮在右上角(style名为spinbox_up)，dec按钮在右下角(style名为spinbox_down)。
     *
     */
    get easyTouchMode(): boolean;
    set easyTouchMode(v: boolean);
    /**
     * 按钮位置样式选择，优先级高于easy_touch_mode，各模式对应样式如下,默认为none。
     *none：按照easy_touch_mode选择样式
     *default：inc按钮在右上角，dec按钮在右下角。
     *left_right：dec按钮在左边，inc按钮在右边。
     *top_bottom：inc按钮在顶部，dec按钮在底部。
     *
     */
    get buttonPosition(): string;
    set buttonPosition(v: string);
}
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
 *[system_bar](https://github.com/zlgopen/awtk/blob/master/design/default/ui/system_bar.xml)
 *
 *在c代码中使用函数system\_bar\_create创建system\_bar窗口。如：
 *
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
 *[system_bar.xml](https://github.com/zlgopen/awtk/blob/master/design/default/styles/system_bar.xml)
 *
 */
export declare class TSystemBar extends TWindowBase {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TSystemBar;
    /**
     * 转换为system_bar对象(供脚本语言使用)。
     *
     * @param widget system_bar对象。
     *
     * @returns system_bar对象。
     */
    static cast(widget: TWidget): TSystemBar;
}
/**
 * 扩展combo_box控件。支持以下功能：
 ** 支持滚动。项目比较多时显示滚动条。
 ** 自动调整弹出窗口的宽度。根据最长文本自动调整弹出窗口的宽度。
 ** 支持分组显示。如果item的文本以"seperator."开头，视为一个分组开始，其后的文本为分组的标题。比如: "seperator.basic"，会创建一个basic为标题的分组。
 *
 */
export declare class TComboBoxEx extends TComboBox {
    nativeObj: any;
    constructor(nativeObj: any);
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
    static create(parent: TWidget, x: number, y: number, w: number, h: number): TComboBoxEx;
}
