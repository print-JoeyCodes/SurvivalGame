cmake_minimum_required(VERSION 3.16)
project(raylib_game)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Raylib
find_library(RAYLIB_LIBRARY NAMES raylib)
find_path(RAYLIB_INCLUDE_DIR NAMES raylib.h)

if(NOT RAYLIB_LIBRARY OR NOT RAYLIB_INCLUDE_DIR)
    message(FATAL_ERROR "Raylib not found!")
endif()

# Add executable
add_executable(raylib_game
    src/main.cpp
    src/game.cpp
)

# Include directories
target_include_directories(raylib_game PRIVATE
    ${RAYLIB_INCLUDE_DIR}
    src/
)

# Link libraries
target_link_libraries(raylib_game
    ${RAYLIB_LIBRARY}
    m
    dl
    pthread
)

# Copy assets to build directory
file(COPY assets/ DESTINATION ${CMAKE_BINARY_DIR}/assets)
