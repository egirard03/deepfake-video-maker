cmake_minimum_required(VERSION 3.16)
project(deepfake-video-maker CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(deepfakevideomaker
    src/main.cpp
    src/swap.cpp
    src/frames.cpp
    src/render.cpp
)

target_include_directories(deepfakevideomaker PRIVATE include)

if(WIN32)
    target_link_libraries(deepfakevideomaker PRIVATE userenv)
endif()
