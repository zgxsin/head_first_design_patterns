cmake_minimum_required(VERSION 3.16)
project(chapter10_state_pattern)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -Wpedantic -Werror=return-type)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME}
        src/${PROJECT_NAME}/GumballMachine.cpp
        src/${PROJECT_NAME}/SoldState.cpp
        src/${PROJECT_NAME}/HasQuarterState.cpp
        src/${PROJECT_NAME}/NoQuarterState.cpp
        src/${PROJECT_NAME}/SoldOutState.cpp
        src/${PROJECT_NAME}/WinnerState.cpp
        src/GumballMachineTestDrive.cpp
)
target_include_directories(${PROJECT_NAME} PRIVATE
        include
)



