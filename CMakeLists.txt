cmake_minimum_required(VERSION 3.21)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp lexer.h lexer.cpp symbole.h symbole.cpp Etat/Etat.cpp Etat/Etat.h Automate.cpp Automate.h Etat/Etat1.cpp Etat/Etat1.h)

