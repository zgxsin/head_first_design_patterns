cmake_minimum_required(VERSION 3.16)
project(chapter2_observer_pattern)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -Wpedantic -Werror=return-type)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME}
        src/${PROJECT_NAME}/WeatherData.cpp
        src/${PROJECT_NAME}/CurrentConditionDisplay.cpp
        src/main.cpp
)
target_include_directories(${PROJECT_NAME} PRIVATE
        include
)



