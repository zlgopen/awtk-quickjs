# 使用snapshot方式运行JS脚本的步骤

### 1、生成snapshot

使用snapshot生成工具，将js文件转换为二进制格式或者资源常量数组 。

生成工具的代码如下：

```c
// snapshot_gen.c
#include "tkc/mem.h"
#include "common/utils.h"
#include "base/assets_manager.h"
#include "jerryscript.h"

int main(int argc, char** argv) {
  const char* in_filename = NULL;
  const char* out_filename = NULL;
  static uint32_t data[1024 * 1024] = {0};
  jerry_char_t* script = NULL;
  uint32_t script_size = 0;
  uint32_t data_size = 0;
  bool_t output_bin = argc > 3;
  jerry_value_t result;

  if (argc < 3) {
    printf("Usage: %s in_filename out_filename [bin]\n", argv[0]);
  }

  in_filename = argc < 2 ? "./awtk_all.js" : argv[1];
  out_filename = argc < 3 ? "./awtk_all.js.snapshot" : argv[2];

  script = (jerry_char_t*)read_file(in_filename, &script_size);
  if (script != NULL) {
    jerry_init(JERRY_INIT_EMPTY);

    result = jerry_generate_snapshot(NULL, 0, script, script_size, 0, data, ARRAY_SIZE(data));
    data_size = (uint32_t)jerry_get_number_value(result);
    jerry_release_value(result);

    jerry_cleanup();
    TKMEM_FREE(script);

    if (output_bin) {
      write_file(out_filename, data, data_size * sizeof(data[0]));
    } else {
      output_res_c_source(out_filename, ASSET_TYPE_DATA, 0, (uint8_t*)data,
                          data_size * sizeof(data[0]));
    }
  }

  return 0;
}
```

编译脚本（scons）如下：

```python
import os
import sys

env=DefaultEnvironment().Clone()
BIN_DIR=os.environ['BIN_DIR'];

env['LIBS'] = ['jerryscript', 'common'] + env['LIBS']

env.Program(os.path.join(BIN_DIR, 'snapshot_gen'), ["snapshot_gen.c"])
```

需要注意的是，jerryscript.lib启用snapshot功能，需添加预定义宏：

```
JERRY_ENABLE_SNAPSHOT_SAVE
JERRY_ENABLE_SNAPSHOT_EXEC
```

假设snapshot_gen已生成，demo为awtk_all.js（合并 awtk.js、 demoui.js即可）,则运行以下命令即可：

```
// 生成二进制格式
.\bin\snapshot_gen.exe .\awtk_all.js .\awtk_all.js.snapshot bin

// 生成资源常量数组 
.\bin\snapshot_gen.exe .\awtk_all.js .\awtk_all.js.snapshot
```

#### 2、运行snapshot

将生成的snapshot放到资源目录，之后通过awtk的assets_manager加载文件并执行即可，如下所示：

```c
const asset_info_t* snapshot = assets_manager_ref(assets_manager(), ASSET_TYPE_DATA, "awtk_all.js.snapshot");
if (snapshot != NULL) {
  jerry_value_t ret_value = jerry_exec_snapshot((uint32_t*)snapshot->data, snapshot->size / sizeof(uint32_t), 0, JERRY_SNAPSHOT_EXEC_ALLOW_STATIC);

  if (jerry_value_is_error(ret_value)) {
    ret_value = jerry_get_value_from_error(ret_value, true);
    print_unhandled_exception(ret_value);
  }

  jerry_release_value(ret_value);

  tk_run();
}
```

#### 3、Tip

如果在板子上运行，但固件的data字段空间不足，则可以使用外部context方式初始化jerryscript。

（1）jerryscript.lib需添加预定义宏：

```
JERRY_ENABLE_EXTERNAL_CONTEXT
```

（2）在jerry_init之前设置外部context

```c
static void* jerry_malloc_context(size_t size, void *cb_data_p) {
	(void)cb_data_p;
	return malloc(size);
}

...
jerry_context_t* ctx = jerry_create_context(CONFIG_MEM_HEAP_AREA_SIZE, jerry_malloc_context, NULL);
jerry_port_default_set_current_context(ctx);
jerry_init(JERRY_INIT_EMPTY);
```

