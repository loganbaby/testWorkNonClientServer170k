cmake_minimum_required(VERSION 3.5)

project(38_1 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.12.12\\5.12.12\\msvc2017_64")

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Multimedia MultimediaWidgets REQUIRED)

set(PROJECT_SOURCES
        main.cpp
        finder.cpp
)

set(PROJECT_HEADERS
        finder.h
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(testWorkNonClientServer170k
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES} ${PROJECT_HEADERS}
    )

else()
    if(ANDROID)
        add_library(testWorkNonClientServer170k SHARED
            ${PROJECT_SOURCES} ${PROJECT_HEADERS}
        )

    else()
        add_executable(testWorkNonClientServer170k
            ${PROJECT_SOURCES} ${PROJECT_HEADERS}
        )
    endif()
endif()

target_link_libraries(testWorkNonClientServer170k PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(testWorkNonClientServer170k PRIVATE Qt${QT_VERSION_MAJOR}::MultimediaWidgets
    Qt${QT_VERSION_MAJOR}::Multimedia)

set_target_properties(testWorkNonClientServer170k PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
)
