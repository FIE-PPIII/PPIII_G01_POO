cmake_minimum_required(VERSION 3.21)
project(E3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(E3
        Circulo.cpp
        Circulo.h
        Rectangulo.cpp
        Rectangulo.h
        IFigura.h
        main.cpp)
