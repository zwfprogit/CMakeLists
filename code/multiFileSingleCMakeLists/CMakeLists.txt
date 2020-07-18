cmake_minimum_required(VERSION 3.5)
project(HELLO)
message(PROJECT_SOURCE_DIR " ${PROJECT_SOURCE_DIR}")
include_directories(
${PROJECT_SOURCE_DIR}/libhello/include
)
set(LIST_SRC 
${PROJECT_SOURCE_DIR}/source/main.c
${PROJECT_SOURCE_DIR}/libhello/source/hello.c
)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_executable(hello ${LIST_SRC})