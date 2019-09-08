# awtk-quickjs

awtk [quickjs](https://github.com/quickjs-zh/QuickJS) bindings.

## 准备

1.获取awtk并编译

```
git clone https://github.com/zlgopen/awtk.git
cd awtk; scons; cd -
```

2.获取awtk-quickjs并编译

```
git clone https://github.com/zlgopen/awtk-quickjs.git
scons
```

> 编译linux-fb版本，请修改SConstruct

```
#for pc
#sys.path.insert(0, '../awtk/')

#for linux-fb
sys.path.insert(0, '../awtk-linux-fb/')
```

## 更新绑定

```
./sync.sh
```

> 在非bash终端(如Windows平台的cmd.exe)，需要根据sync.sh的内容手工执行相应的命令。

## 运行

```
./bin/runScript demos/xxxx.js
```

> 请把xxxx.js换成具体的js文件。

## 文档

[js绑定原理与示例](docs/binding_js.md)

> 本文以Linux/MacOS为例，Windows可能会微妙差异，请酌情处理。

## 重要通知

为了让AWTK-WEB和AWTK-JS对外提供的API保持兼容，AWTK-JS做了下列修改：

* 所有的类均增加前缀T，以避免AWTK的类名和浏览器中的类名冲突。

* print函数更名为console.log。

> 提供了一个vim脚本(demos/vim_rename)，用于更新应用程序。

如果希望自己的应用程序，同时支持AWTK-JS和AWTK-WEB，还需要注意下列事项：

* 避免使用模态对话框。

* 避免使用动态GIF图片。


