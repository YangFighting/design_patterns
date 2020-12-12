#include <iostream>
#include "template2_lib.h"

class Application : public Library{
protected:
    virtual bool step2(){
        std::cout << "Application: this is step2 "<<std::endl;
        return true;
    }
    virtual void step4(){
        std::cout << "Application: this is step4" << std::endl;
    }
};


int main()
{
    std::cout << "Hello world" << std::endl;
    std::cout << "-- template method good start --" << std::endl;
    std::cout << "main logic in Library" << std::endl;
    
    Library* plib = new Application();
    plib->run();
    std::cout << "-- template method good end  --" << std::endl;
    return 0;
}

