cmake_minimum_required(VERSION 3.12.1)
include_directories(header)
file(GLOB SOURCES "main/*.c" "sub/*.c" "mul/*.c" "div/*.c")
add_executable(nn ${SOURCES})
