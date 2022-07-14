# CMake 프로그램의 최소 버전
cmake_minimum_required(VERSION 3.11)

# 프로젝트 정보
project(
	ModooCode
	VERSION 0.1)

add_executable (program UserInterface.cpp Employee.cpp Database.cpp)                                                                             
