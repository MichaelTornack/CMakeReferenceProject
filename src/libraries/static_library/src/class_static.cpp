#include "class_static.hpp"
#include "class_static_hidden.hpp"
#include "class_dependent_private.hpp"
#include <iostream>

ClassStatic::ClassStatic(){
    std::cout << "Constructor Dynamic Class" << std::endl;
    ClassStaticHidden hiddenObject = ClassStaticHidden();
    hiddenObject.fun();

    ClassDependentPrivate dependentObject = ClassDependentPrivate();
    dependentObject.fun();
}

ClassStatic::~ClassStatic(){

}

void ClassStatic::fun(){
    std::cout << "Function Dynamic Class" << std::endl;
}