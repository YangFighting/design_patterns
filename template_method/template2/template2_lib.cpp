#include <iostream>
#include "template2_lib.h"

void Library::step1(){
    std::cout << "Library: this is step1 " << std::endl;
}

void Library::step3(){
    std::cout << "Library: this is step3 " << std::endl;
}

void Library::step5(){
    std::cout << "Library: this is step5 " << std::endl;
}

void Library::run(){
    step1();
    if(step2()){
        step3();
    }

    step4();
    step5();
}
