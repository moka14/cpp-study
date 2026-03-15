cmake_minimum_required(VERSION 3.10)

# プロジェクト名
project(CppStudy)

# C++の標準バージョン（最新の17や20を使うのが一般的です）
set(CMAKE_CXX_STANDARD 17)

# 実行ファイルの作成設定
# hello_app という実行ファイルを main.cpp から作る、という意味
add_executable(main_app main.cpp)