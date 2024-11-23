﻿import os
import scripts.app_helper as app

ARGUMENTS['FONT'] = 'default_full'
helper = app.Helper(ARGUMENTS);
APP_CPPPATH = [os.path.join(helper.APP_ROOT, '3rd/quickjs')]
APP_CCFLAGS = '-DWITH_QUICKJS_LIBC -DPATH_MAX=256 -DDUMP_LEAKS '
helper.add_ccflags(APP_CCFLAGS).add_cpppath(APP_CPPPATH).add_platform_ccflags('Linux', ' -D_GNU_SOURCE ').call(DefaultEnvironment)

SConscriptFiles = ['3rd/quickjs/SConscript', 'src/SConscript']
helper.SConscript(SConscriptFiles)
