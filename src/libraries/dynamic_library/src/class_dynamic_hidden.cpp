#include "class_dynamic_hidden.hpp"
#include <iostream>

ClassDynamicHidden::ClassDynamicHidden(){
    std::cout << "Constructor Dynamic Hidden Class" << std::endl;
}

ClassDynamicHidden::~ClassDynamicHidden(){

}

void ClassDynamicHidden::fun(){
    std::cout << "Function Dynamic Hidden Class" << std::endl;
}