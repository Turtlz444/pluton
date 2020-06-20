cmake_minimum_required(VERSION 3.16)
project(pluton)

set(CMAKE_CXX_STANDARD 17)

add_executable(pluton main.cpp pluton_response.h pluton_input.h open_browser.h search_data.h)