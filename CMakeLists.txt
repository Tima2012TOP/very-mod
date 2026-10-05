cmake_minimum_required(VERSION 3.21)
project(verity_level_replacer CXX)

find_package(Geode REQUIRED)

add_geode_mod(verity_level_replacer
    src/main.cpp
)