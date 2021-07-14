cmake_minimum_required(VERSION 3.0)

project(gols)

# C++11 standards
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(${PROJECT_NAME}
        src/main.cpp
        src/coustomer.cpp
        src/account.cpp
        src/employee.cpp
        src/boss.cpp
        src/boxOfficeEmployee.cpp
        src/keller.cpp
        #        include/employee.hpp
        #        include/boss.hpp
        #        include/boxOfficeEmployee.hpp
        #        include/keller.hpp
        src/bank.cpp
        #include/bank.hpp
        src/card.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC include/)