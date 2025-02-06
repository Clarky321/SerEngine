# Минимальная версия проекта
cmake_minimum_required(VERSION 3.12)

# Наименование проекта
set(ENGINE_PROJECT_NAME SerEngineCore)

add_library(${ENGINE_PROJECT_NAME} STATIC
    src/SerEngineCore/Utils/test.cpp
    includes/SerEngineCore/Utils/test.hpp
)

target_include_directories(${ENGINE_PROJECT_NAME} PUBLIC includes)

# Установка стандарта проекта C++ 17
target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_17)

add_subdirectory(../external/glfw ${CMAKE_CURRENT_BINARY_DIR}/glfw)
target_link_libraries(${ENGINE_PROJECT_NAME} PRIVATE glfw)