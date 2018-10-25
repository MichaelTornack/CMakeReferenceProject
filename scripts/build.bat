echo off

echo Run CMake


cd ../build
cmake ../src -G "MinGW Makefiles"

echo Run Make
mingw32-make


