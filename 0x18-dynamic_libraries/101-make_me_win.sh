#!/bin/bash
wget -P https://github.com/NobleRodrick/alx-low_level_programming/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
