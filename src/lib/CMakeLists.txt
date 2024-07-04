
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC_LIBS)

message(STATUS ${SRC_LIBS})
add_library(func SHARED ${SRC_LIBS})