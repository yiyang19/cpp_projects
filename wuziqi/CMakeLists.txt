cmake_minimum_required(VERSION 3.19)
project(cpp_projects)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_projects
        src/AI.cpp
        include/AI.h
        src/Chess.cpp
        include/Chess.h
        src/ChessGame.cpp
        include/ChessGame.h
        src/Man.cpp
        include/Man.h)
