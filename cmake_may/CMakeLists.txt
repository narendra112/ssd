cmake_minimum_required(VERSION 3.12.1)
file(GLOB SOURCES "main/*.c"  "div/*.c")
add_executable(dhanu ${SOURCES})
