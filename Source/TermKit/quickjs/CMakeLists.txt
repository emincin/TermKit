cmake_minimum_required(VERSION 4.2)

project(quickjs)

set(CMAKE_C_STANDARD 23)

set(SOURCE_FILES
    #cutils.c
    dtoa.c
    libregexp.c
    libunicode.c
    quickjs.c
)

add_library(quickjs STATIC
    ${SOURCE_FILES}
)
