cmake_minimum_required(VERSION 3.0.0)
project(UserManagement VERSION 0.1.0)


add_library(
    management
    Management.h
    Management.cpp
    worker.h
    worker.cpp
    employee.h
    employee.cpp
    manager.h
    manager.cpp
    boss.h
    boss.cpp
)

add_executable(UserManagement main.cpp)
target_link_libraries(UserManagement management)