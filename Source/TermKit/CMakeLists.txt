cmake_minimum_required(VERSION 4.2)

project(TermKit)

set(CMAKE_CXX_STANDARD 23)

set(SOURCE_FILES
    main.cpp
)

add_executable(termkit
    ${SOURCE_FILES}
)
