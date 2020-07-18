cmake_minimum_required(VERSION 3.5)
project(HELLO)
message(PROJECT_SOURCE_DIR " ${PROJECT_SOURCE_DIR}")
include_directories(
${PROJECT_SOURCE_DIR}/libhello/include
${PROJECT_SOURCE_DIR}/infra/include
)
set(LIST_SRC 
${PROJECT_SOURCE_DIR}/source/main.c
${PROJECT_SOURCE_DIR}/libhello/source/hello.c
${PROJECT_SOURCE_DIR}/infra/source/list.c
)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_executable(hello ${LIST_SRC})