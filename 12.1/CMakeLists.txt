cmake_minimum_required(VERSION 3.5)

project(cow)

set(SOURCES
    src/main.cpp
    src/cow.cpp
)

add_executable(cow ${SOURCES})

target_include_directories(cow
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)