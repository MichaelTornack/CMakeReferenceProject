#include "class_intern.hpp"
#include <iostream>

ClassIntern::ClassIntern(){
    std::cout << "Constructor ClassIntern" << std::endl;
}

ClassIntern::~ClassIntern(){

}

void ClassIntern::fun(){
    std::cout << "Function ClassIntern" << std::endl;
}