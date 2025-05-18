cmake_minimum_required(VERSION 3.31)
project(BankManagement_cpp)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)
find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(CMAKE_CXX_STANDARD 20)

add_executable(BankManagement_c__ src/main.cpp
        lib_h/header.h
        src/User.cpp
        lib_h/User.h
        src/Input.cpp
        lib_h/Input.h
        src/Admin.cpp
        lib_h/Admin.h
        src/Customer.cpp
        lib_h/Customer.h
        src/FilesReader.cpp
        lib_h/FilesReader.h)
