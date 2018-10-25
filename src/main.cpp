
#include "files/class_intern.hpp"
#include "class_dynamic.hpp"
#include "class_static.hpp"
#include "class_dependent_public.hpp"


#include <stdio.h>
#include <iostream>
#include <memory>





int main(){

    // Internal Class defined within this executable
    ClassIntern classIntern = ClassIntern();
    classIntern.fun();
    std::cout << "\n" << std::endl;

    // Class from DynamicLibrary
    ClassDynamic classDynamic = ClassDynamic();
    classDynamic.fun();
    std::cout << "\n" << std::endl;

    // Class from StaticLibrary
    ClassStatic classStatic = ClassStatic();
    classStatic.fun();
    std::cout << "\n" << std::endl;

    // Class from DependentLibraryPublic (is propagated)
    ClassDependentPublic classDependent = ClassDependentPublic();
    classDependent.fun();

    // get User input
    getchar();

    return 0;
}