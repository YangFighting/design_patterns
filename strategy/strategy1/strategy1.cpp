#include <iostream>

enum TaxBase {
    CN_Tax,
    US_Tax,
    DE_Tax,
    FR_Tax       //更改
                        
};

class Context{};

class SalesOrder{
    TaxBase tax;
public:
    SalesOrder(TaxBase tax){
        this->tax = tax;
    }
    void CalculateTax(const Context& context){
    
        if (tax == CN_Tax){
            //CN***********
           std::cout << "CN_Tax" <<std::endl;
        }
        else if (tax == US_Tax){
            //US***********
            std::cout << "US_Tax" <<std::endl;
        }
        else if (tax == DE_Tax){
            //DE***********
            std::cout << "DE_Tax" <<std::endl;
        }
        else if (tax == FR_Tax){  //更改
            std::cout << "FR_Tax" <<std::endl;
        }
    }
};

int main()
{
    std::cout << "--- strategy bad start---" << std::endl;
    SalesOrder sal(CN_Tax);
    Context context;
    sal.CalculateTax(context);
    std::cout << "--- strategy bad end---" << std::endl;
    return 0;
}

