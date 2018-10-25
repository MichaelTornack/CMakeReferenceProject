# CMakeReferenceProject

The purpose of this project is to give guidance how to set up a new CMake project. The goal is to have a clear seperation between source code / libraries, build files and binaries (executables / libraries).

## Preconditions
- this project is intended for Windows with the minGW compiler
- make sure CMake is installed and is included in the path variable
    - command `cmake` must be found in command prompt
- make sure MinGW is installed and is included in the path variable
    - command `mingw32-make` must be found in command prompt


## Content
- the Cmake is setup that all build files are in the build folder and all binaries are in the bin folder
- it shows how shared and dynamic libraries are build and included in your project
- it shows how header and sources are propageted (dependent library) depending on the option provided to Cmake


## Execution
- run clean.bat     
- run build.bat
- a runnable executable shall be displayed in bin/bin

## Troubleshooting
- make sure that the cmake command is executed from the build folder




