#!/bin/bash

cp -rf ../awtk/demos/assets .
cp -rf ../awtk/scripts/update_res_app.py scripts/update_res.py
rm -rf src/assets*.*
python scripts/update_res.py clean
python scripts/update_res.py all
