# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

# Include build function from Pico SDK
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(LCDexample C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
pico_sdk_init()

# Add executable. Default name is the project name,
add_executable(LCDexample pico_lcd_example.cpp)
add_subdirectory(../lcd_display build)

pico_add_extra_outputs(LCDexample)
target_link_libraries(LCDexample pico_stdlib lcd_display)

