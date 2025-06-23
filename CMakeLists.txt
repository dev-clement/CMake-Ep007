cmake_minimum_required(VERSION 3.15)

project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "The leading hello world app"
        LANGUAGES CXX)

#set(CXX_STANDARD_REQUIRED ON) # CMake C++20 a hard requirement
#set(CMAKE_CXX_STANDARD 20) # Default CC++ standard for targets

# Library operations
set(TARGET_LIBRARY operations)
add_library(${TARGET_LIBRARY} STATIC ${TARGET_LIBRARY}/src/operations.cpp)
target_include_directories(${TARGET_LIBRARY} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/operations/include)

# Library Logger
set(TARGET_LOGGER_LIBRARY logger)
add_library(${TARGET_LOGGER_LIBRARY} STATIC ${TARGET_LOGGER_LIBRARY}/src/log.cpp)
target_include_directories(${TARGET_LOGGER_LIBRARY} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/include)
target_compile_features(${TARGET_LOGGER_LIBRARY} PUBLIC cxx_std_20)

# Executable
set(TARGET_NAME HelloBinary)
file(GLOB_RECURSE SRC_FILES 
    ./src/*.cpp 
    ./dog/src/*.cpp
)

add_executable(${TARGET_NAME} ${SRC_FILES})
target_include_directories(${TARGET_NAME} PRIVATE 
            ${CMAKE_CURRENT_SOURCE_DIR}/include
            ${CMAKE_CURRENT_SOURCE_DIR}/dog/include
)
target_link_libraries(${TARGET_NAME} PUBLIC 
            ${TARGET_LIBRARY}
            ${TARGET_LOGGER_LIBRARY}
)