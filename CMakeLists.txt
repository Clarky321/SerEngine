# Минимальная версия проекта
cmake_minimum_required(VERSION 3.12)

# Наименование проекта
set(PROJECT_NAME SerEngine)

# Подключенные поддиректории
add_subdirectory(SerEngineCore)
add_subdirectory(SerEngineEditor)

# Определение стартового проекта, как SerEngineCore
set_property(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR} PROPERTY VS_STARTUP_PROJECT SerEngineEditor)