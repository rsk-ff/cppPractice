cmake_minimum_required(VERSION 3.5)

project(Cd)

set(SOURCES
    src/classic.cpp
    src/main.cpp
)

add_executable(Cd ${SOURCES})

target_include_directories(Cd
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)