project(findliblib)

set(HEADER_FILES find.h)
set(SOURCE_FILES find.cpp)

add_library(findliblib_lib ${SOURCE_FILES} ${HEADER_FILES})