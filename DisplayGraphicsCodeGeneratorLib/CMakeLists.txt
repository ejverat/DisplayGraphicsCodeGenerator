cmake_minimum_required(VERSION 3.14)

project(DisplayGraphicsCodeGeneratorLib LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Gui)

add_library(DisplayGraphicsCodeGeneratorLib SHARED
  DisplayGraphicsCodeGeneratorLib_global.h
  displaygraphicscodegeneratorlib.cpp
  displaygraphicscodegeneratorlib.h
  Image.h
  image2dgrayscale4bits.h
  image2dgrayscale4bits.cpp
  ImageConverter.h
  ImageLoader.h
  Pixel.h
  pixelunsigned4bits.h
  pixelunsigned4bits.cpp
  Point.h
  point2d_sizet.h
  point2d_sizet.cpp
  QtImageLoader.h
  QtImageLoader.cpp
  qtto2dgrayscale4bitsimageconverter.h
  qtto2dgrayscale4bitsimageconverter.cpp
)

target_include_directories(DisplayGraphicsCodeGeneratorLib
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(DisplayGraphicsCodeGeneratorLib PRIVATE Qt${QT_VERSION_MAJOR}::Core PUBLIC Qt${QT_VERSION_MAJOR}::Gui)

target_compile_definitions(DisplayGraphicsCodeGeneratorLib PRIVATE DISPLAYGRAPHICSCODEGENERATORLIB_LIBRARY)
