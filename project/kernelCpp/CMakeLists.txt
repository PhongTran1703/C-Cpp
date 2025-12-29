cmake_minimum_required(VERSION 3.10)
project(KernelCppModule LANGUAGES CXX)

set(KERNEL_VERSION "5.4.0-26-generic")

include_directories(
    /usr/src/linux-headers-${KERNEL_VERSION}/include
)

set(SOURCES
    src/main.cpp
)

# Compile flags suitable for kernel-like code
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} \
    -fno-pie \
    -fno-stack-protector \
    -fno-asynchronous-unwind-tables \
    -fno-exceptions \
    -fno-rtti \
    -nostdlib \
    -nostartfiles \
    -nodefaultlibs"
)

add_library(${PROJECT_NAME} MODULE ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "" SUFFIX ".ko")

