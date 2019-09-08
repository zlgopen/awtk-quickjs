# 最新动态
* 2019/05/02
  * 为了避免和浏览器中的类名冲突，所有类和枚举名称前加T前缀。

> 可以用demos/vim\_rename脚本进行对现有代码从命名。

```
for f in *.js;do vim -s vim_rename $f;done
```

* 2019/05/01
  * 修改最新jerryscript不兼容的问题。
  * image base存在的问题。
