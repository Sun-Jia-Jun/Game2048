#最低cmake版本
cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(Game2048)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)

# 添加可执行文件
add_executable(Game2048 src/main.cpp src/Board.cpp src/Game.cpp src/InputHandler.cpp)

# 包含头文件目录
include_directories(include)