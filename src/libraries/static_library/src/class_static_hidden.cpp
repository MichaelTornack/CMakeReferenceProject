#include "class_static_hidden.hpp"
#include <iostream>

ClassStaticHidden::ClassStaticHidden(){
    std::cout << "Constructor Static Hidden Class" << std::endl;
}

ClassStaticHidden::~ClassStaticHidden(){

}

void ClassStaticHidden::fun(){
    std::cout << "Function Static Hidden Class" << std::endl;
}