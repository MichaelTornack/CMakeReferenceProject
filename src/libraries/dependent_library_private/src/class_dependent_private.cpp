#include "class_dependent_private.hpp"
#include <iostream>

ClassDependentPrivate::ClassDependentPrivate(){
    std::cout << "Constructor Dependent Private Class" << std::endl;
}

ClassDependentPrivate::~ClassDependentPrivate(){

}

void ClassDependentPrivate::fun(){
    std::cout << "Function Dependent Private Class" << std::endl;
}