cmake_minimum_required(VERSION 3.31)
project(DSA_Prep)

set(CMAKE_CXX_STANDARD 20)

add_executable(DSA_Prep
        src/main.cpp
        src/LinkedList.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)