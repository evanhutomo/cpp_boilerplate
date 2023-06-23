cmake_minimum_required(VERSION 3.14)
project(CPP_BOILERPLATE VERSION 0.0.1 LANGUAGES CXX)

# --------------------------------------------------------------------------------
#                                  Locate files
# --------------------------------------------------------------------------------
set(SOURCES src/sambel.cpp)
set(LIBRARY_NAME sambelProject)  # Default name for the library built from src/*.cpp
# Debugging purpose
set(CMAKE_BUILD_TYPE Debug)
# add_definitions(-DDEBUG)

# --------------------------------------------------------------------------------
#                                     Build
# --------------------------------------------------------------------------------
# Compile all sources into a library
add_library(${LIBRARY_NAME} OBJECT ${SOURCES})

# Lib needs to see header files, and library users must also able to see (PUBLIC)
target_include_directories(${LIBRARY_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/inc)

# An executable for the file app/main.cpp
add_executable(sambel app/main.cpp)
target_link_libraries(sambel PRIVATE ${LIBRARY_NAME})

# Set the properties required, e.g. C++ standard used. Apply to library and main
set_target_properties(
  ${LIBRARY_NAME} sambel
    PROPERTIES
      CXX_STANDARD 17
      CXX_STANDARD_REQUIRED YES
)