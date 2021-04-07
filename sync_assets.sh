#!/bin/bash

cp -rf ../awtk/design .

python3 scripts/update_res.py clean
python3 scripts/update_res.py all
