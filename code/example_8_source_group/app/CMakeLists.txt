message("PROJECT_SOURCE_DIR:" ${PROJECT_SOURCE_DIR})
set(CMAKE_INCLUDE_DIRECTORIES_AFTER ON)
include_directories(${PROJECT_SOURCE_DIR}/libhello/include)

include(${CMAKE_CURRENT_SOURCE_DIR}/appsource)

source_group_by_dir(app)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_executable(hello ${app})
target_link_libraries(hello libhello)
