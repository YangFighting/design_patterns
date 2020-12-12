#pragma once

class Library
{
public:
    Library() {}
    ~Library() {}
    void run();
protected:
    void step1();
    void step3();
    void step5();
    
    virtual bool step2() = 0;
    virtual void step4() = 0;
private:

};
