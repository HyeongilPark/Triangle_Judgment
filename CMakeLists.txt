# CMakeのバージョンを設定
cmake_minimum_required(VERSION 3.2)
# プロジェクト名と使用する言語を設定
project(Triangle_Judgment CXX)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z")

# Default set of warning options
set (ENABLED_WARNINGS -Werror -Wall -Wextra -Wcast-align -Wconversion -Wmissing-include-dirs -Wfloat-equal -Winit-self -Wlogical-op -Wdelete-non-virtual-dtor -Wredundant-decls -Wshadow -Wsign-promo -Wswitch-default)

# 実行ファイル設定
add_executable(main.out main.cpp)

target_compile_options(main.out PUBLIC ${ENABLED_WARNINGS})
