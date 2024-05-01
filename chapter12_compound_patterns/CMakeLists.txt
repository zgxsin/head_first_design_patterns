cmake_minimum_required(VERSION 3.16)
project(chapter12_compound_patterns)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -Wpedantic -Werror=return-type)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME}
        src/main.cpp
        src/${PROJECT_NAME}/RedheadDuck.cpp
        src/${PROJECT_NAME}/MallardDuck.cpp
        src/${PROJECT_NAME}/DuckCall.cpp
        src/${PROJECT_NAME}/Goose.cpp
        src/${PROJECT_NAME}/GooseAdapter.cpp
        src/${PROJECT_NAME}/RubberDuck.cpp
        src/${PROJECT_NAME}/DuckSimulator.cpp
        src/${PROJECT_NAME}/QuackCounter.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE
        include
)