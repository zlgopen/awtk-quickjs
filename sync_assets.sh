#!/bin/bash

cp -rf ../awtk/demos/assets .
cp -rf ../awtk/scripts/update_res_app.py scripts/update_res.py

python scripts/update_res.py clean
python scripts/update_res.py all
