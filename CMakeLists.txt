cmake_minimum_required(VERSION 3.24)
project(OOP_A45_Beret_Benjamin)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP_A45_Beret_Benjamin main.cpp Bussines.h Bussines.cpp Domain.cpp DynamicVector.cpp Repository.cpp UI.cpp Domain.h DynamicVector.h Repository.h UI.h)
