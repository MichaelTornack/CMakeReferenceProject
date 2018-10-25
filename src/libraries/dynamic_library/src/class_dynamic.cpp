#include "class_dynamic.hpp"
#include "class_dynamic_hidden.hpp"
#include "class_dependent_private.hpp"
#include <iostream>

ClassDynamic::ClassDynamic(){
    std::cout << "Constructor Dynamic Class" << std::endl;
    ClassDynamicHidden hiddenObject = ClassDynamicHidden();
    hiddenObject.fun();

    ClassDependentPrivate dependentObject = ClassDependentPrivate();
    dependentObject.fun();
}

ClassDynamic::~ClassDynamic(){

}

void ClassDynamic::fun(){
    std::cout << "Function Dynamic Class" << std::endl;
}