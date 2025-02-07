# Минимальная версия проекта
cmake_minimum_required(VERSION 3.12)

# Наименование проекта
set(ENGINE_PROJECT_NAME SerEngineCore)

set(ENGINE_PUBLIC_INCLUDES
    includes/SerEngineCore/Application.h
    includes/SerEngineCore/Log.h
)

set(ENGINE_PRIVATE_INCLUDES
    src/SerEngineCore/Application.cpp
)

add_library(${ENGINE_PROJECT_NAME} STATIC
    ${ENGINE_PUBLIC_INCLUDES}
    ${ENGINE_PRIVATE_INCLUDES}
)

target_include_directories(${ENGINE_PROJECT_NAME} PUBLIC includes)

# Установка стандарта проекта C++ 17
target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_17)

add_subdirectory(../external/glfw ${CMAKE_CURRENT_BINARY_DIR}/glfw)
target_link_libraries(${ENGINE_PROJECT_NAME} PRIVATE glfw)

add_subdirectory(../external/spdlog ${CMAKE_CURRENT_BINARY_DIR}/spdlog)
target_link_libraries(${ENGINE_PROJECT_NAME} PRIVATE spdlog)