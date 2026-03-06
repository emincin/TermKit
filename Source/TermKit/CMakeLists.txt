cmake_minimum_required(VERSION 4.2)

project(TermKit)

set(CMAKE_CXX_STANDARD 23)

set(HEADER_FILES
    Common.hpp
    JSBind.hpp
    Terminal.hpp
    Utils.hpp
)

set(SOURCE_FILES
    JSBind.cpp
    Terminal.cpp
    Utils.cpp
    Vec2.cpp
    main.cpp
)

if(MSVC)
else()
    add_compile_options(
        -g
    )
endif()

add_executable(termkit
    ${HEADER_FILES}
    ${SOURCE_FILES}
)

add_subdirectory(quickjs)

target_include_directories(termkit PRIVATE
    quickjs
)

target_link_libraries(termkit PRIVATE
    quickjs
)
