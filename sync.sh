#!/bin/bash

cd tools/js_gen; node index.js; node quickjs.js; cd -
cd src; tsc; cd -
