# Минимальная версия проекта
cmake_minimum_required(VERSION 3.12)

# Наименование проекта
set(EDITOR_PROJECT_NAME SerEngineEditor)

# Путь к исполняемому файлу
add_executable(${EDITOR_PROJECT_NAME}
    src/main.cpp
)

# Подключение(линковка) Ядра проекта (SerEngineCore)
target_link_libraries(${EDITOR_PROJECT_NAME} SerEngineCore)
# Установка стандарта проекта C++ 17
target_compile_features(${EDITOR_PROJECT_NAME} PUBLIC cxx_std_17)

# Создание каталога для исполняемого файла .exe
set_target_properties(${EDITOR_PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)