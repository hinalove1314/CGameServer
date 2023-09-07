cmake_minimum_required(VERSION 3.10)

project(DataBaseTest)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(/usr/include/mysql)

# Source files
set(SOURCES
    ${PROJECT_SOURCE_DIR}/src/DataBase.cpp
    ${PROJECT_SOURCE_DIR}/src/DataBaseTest.cpp
)

# Executable
add_executable(DataBaseTest ${SOURCES})

# Link directories
link_directories(/usr/lib/x86_64-linux-gnu)

# Link libraries
target_link_libraries(DataBaseTest mysqlclient pthread)
