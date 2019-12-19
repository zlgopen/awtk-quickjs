#!/bin/bash

cp -vf ../awtk-binding/tools/code_gen/js/output/tk_quickjs.c src/c
cp -vf ../awtk-binding/tools/code_gen/js/output/awtk.js* src/js
cp -vf ../awtk-binding/share/js/custom.c src/c
cp -vf ../awtk-binding/demos/js/* demos/

. format.sh
