#include <iostream> 
#include "template1_lib.h"

class Application{
public:
    bool step2(){
        std::cout << "Application: this is step2 "<<std::endl;
        return true;
    }

    bool step4(){
        std::cout << "Application: this is step4" << std::endl;
        return true;
    }

};

int main()
{
    std::cout << "-- template method bad start --" << std::endl;
    std::cout << "main logic in Application" << std::endl;
    Library lib;
    Application app;
    lib.step1();
    if(app.step2()){
        lib.step3();
    }

    app.step4();
    lib.step5();
    std::cout << "-- template method bad end  --" << std::endl;
    return 0;
}

