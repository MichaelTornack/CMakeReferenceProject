add_library(StaticLibrary
                STATIC
                    src/class_static.cpp
                    src/class_static_hidden.cpp)


target_include_directories(StaticLibrary
                                PUBLIC
                                    header                                    
                                PRIVATE
                                    header_hidden)


target_link_libraries(StaticLibrary
                            PRIVATE
                                DependentLibraryPrivate
                            PUBLIC
                                DependentLibraryPublic)  