#!/bin/bash

# buildフォルダがなければ作成
if [ ! -d "build" ]; then
  mkdir build
fi

# buildフォルダに移動して実行
cd build
cmake ..
make