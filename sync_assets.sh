#!/bin/bash

cp -rf ../awtk-quickjs/design .

python3 scripts/update_res.py clean
python3 scripts/update_res.py all
