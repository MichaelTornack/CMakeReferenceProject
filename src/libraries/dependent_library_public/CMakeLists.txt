add_library(DependentLibraryPublic
                STATIC
                    src/class_dependent_public.cpp)


target_include_directories(DependentLibraryPublic
                                PUBLIC
                                    header)