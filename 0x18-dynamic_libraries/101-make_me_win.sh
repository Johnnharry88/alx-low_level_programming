#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Johnnharry88/alx-low_level_programming/master/0x18-dynamic_libraries
export LD_PRELOAD="$PWD/../libcheat.so
