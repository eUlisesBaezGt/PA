cmake_minimum_required(VERSION 3.21)
project(ProyectoDentista)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ProyectoDentista
        enumeraciones_estructuras_clases.h
        Metodos.h
        Source.cpp)
