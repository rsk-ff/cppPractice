cmake_minimum_required(VERSION 3.5)

project(move)

set(SOURCES
    src/main.cpp
    src/move.cpp
)

add_executable(move ${SOURCES})

target_include_directories(move
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)