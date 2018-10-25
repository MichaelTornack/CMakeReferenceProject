add_library(DynamicLibrary
                SHARED
                    src/class_dynamic.cpp
                    src/class_dynamic_hidden.cpp)


target_include_directories(DynamicLibrary
                                PUBLIC
                                    header                                    
                                PRIVATE
                                    header_hidden)


target_link_libraries(DynamicLibrary
                        PRIVATE
                            DependentLibraryPrivate
                        PUBLIC
                            DependentLibraryPublic)         