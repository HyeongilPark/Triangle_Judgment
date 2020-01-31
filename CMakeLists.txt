# CMakeのバージョンを設定
cmake_minimum_required(VERSION 3.2)
# プロジェクト名と使用する言語を設定
project(Triangle_Judgment CXX)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z")



# ライブラリパス追加
# link_directories(${PROJECT_SOURCE_DIR}/lib)

# 実行ファイル設定
add_executable(main.out main.cpp)
