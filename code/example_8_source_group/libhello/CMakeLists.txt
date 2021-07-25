include(${CMAKE_CURRENT_SOURCE_DIR}/libsource)

source_group_by_dir(hello)

add_library(libhello ${hello})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
set_target_properties(libhello PROPERTIES OUTPUT_NAME "hello")