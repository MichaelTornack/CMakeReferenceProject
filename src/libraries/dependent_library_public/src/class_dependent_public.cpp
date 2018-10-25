#include "class_dependent_public.hpp"
#include <iostream>

ClassDependentPublic::ClassDependentPublic(){
    std::cout << "Constructor Dependent Public Class" << std::endl;
}

ClassDependentPublic::~ClassDependentPublic(){

}

void ClassDependentPublic::fun(){
    std::cout << "Function Dependent Public Class" << std::endl;
}