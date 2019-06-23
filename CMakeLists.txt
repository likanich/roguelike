cmake_minimum_required(VERSION 3.13)
project(OldSword VERSION 0.1.0)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5 COMPONENTS Widgets REQUIRED)

include(CTest)
enable_testing()

qt5_add_resources(RESOURCES resources/resource.qrc)
set(SOURCE src/main.cpp 
           src/window.cpp)

add_executable(OldSword ${SOURCE} ${RESOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# Use the Widgets module from Qt 5
target_link_libraries(OldSword Qt5::Widgets)