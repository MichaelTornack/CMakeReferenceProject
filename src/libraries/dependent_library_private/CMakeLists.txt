add_library(DependentLibraryPrivate
                STATIC
                    src/class_dependent_private.cpp)


target_include_directories(DependentLibraryPrivate
                                PUBLIC
                                    header)