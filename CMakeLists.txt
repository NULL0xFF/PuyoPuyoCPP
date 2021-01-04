# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project (PuyoPuyoCPP)

# Version
SET ( PROJECT_VERSION_MAJOR 1 )
SET ( PROJECT_VERSION_MINOR 0 )
SET ( PROJECT_VERSION_PATCH 0 )
SET ( PROJECT_VERSION_TWEAK 0 )
configure_file( include/version.h.in version.h)

# Create a sources variable with a link to all cpp files to compile
# set(SOURCES
#     src/bank.cpp
#     src/main.cpp
# )
file(GLOB SOURCES
    "src/*.cpp"
)

# Add an executable with the above sources
add_executable(PuyoPuyoCPP ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(PuyoPuyoCPP
    PUBLIC
        "${PROJECT_BINARY_DIR}"
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)