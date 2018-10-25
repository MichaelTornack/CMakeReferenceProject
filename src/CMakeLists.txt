cmake_minimum_required(VERSION 3.0)

set(BINARY_PATH ${CMAKE_BINARY_DIR}/../bin)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BINARY_PATH}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BINARY_PATH}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BINARY_PATH}/bin)


project(CmakeTestProject)

add_executable(CMakeTestProject main.cpp
                    files/class_intern.cpp)


target_link_libraries(CMakeTestProject
                        PUBLIC
                            DynamicLibrary
                            StaticLibrary)

                                            

add_subdirectory(libraries)