cmake_minimum_required(VERSION 3.5)

project(DisplayGraphicsCodeGenerator VERSION 0.1 LANGUAGES CXX)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

add_subdirectory(DisplayGraphicsCodeGeneratorApp)
add_subdirectory(UnitTests)
add_subdirectory(DisplayGraphicsCodeGeneratorLib)
