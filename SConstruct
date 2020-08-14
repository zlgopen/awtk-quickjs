import os
import scripts.app_helper as app

helper = app.Helper(ARGUMENTS);
APP_LIBS=['awtk-quickjs', 'quickjs']
APP_CPPPATH = [os.path.join(helper.APP_ROOT, '3rd/quickjs')]
APP_CCFLAGS = '-DWITH_QUICKJS_LIBC -DPATH_MAX=256 -DDUMP_LEAKS '
helper.add_libs(APP_LIBS).add_ccflags(APP_CCFLAGS).add_cpppath(APP_CPPPATH).call(DefaultEnvironment)

SConscriptFiles = ['3rd/quickjs/SConscript', 'src/SConscript']
SConscript(SConscriptFiles)
