#include <iostream>

enum TaxBase {
    CN_Tax,
    US_Tax,
    DE_Tax,
    FR_Tax       //更改
                        
};

class Context{
public:
    Context(){}
    ~Context(){}
};

class TaxStrategy{
public:
    TaxStrategy(){}
    virtual ~TaxStrategy(){}
    
    virtual void CalculateTax(const Context& context) = 0;
};

class CNTaxStrategy: public TaxStrategy{
    virtual void CalculateTax(const Context& context){
           std::cout << "CN_Tax" <<std::endl;
    }
};

class USTaxStrategy: public TaxStrategy{
    virtual void CalculateTax(const Context& context){
           std::cout << "US_Tax" <<std::endl;
    }
};

class StrategyFactory{
private:
    TaxBase tax;
    
public:
    StrategyFactory(TaxBase tax){
        this->tax = tax;
    }
    
    ~StrategyFactory(){}

    TaxStrategy* createTaxStrategy(){
        if (this->tax == CN_Tax){
            //CN***********
            return (new CNTaxStrategy());
        }
        else if (this->tax == US_Tax){
            //US***********
            return (new USTaxStrategy()); 
        }
        else
            return new USTaxStrategy();
        
    }
};

class SalesOrder{
    TaxStrategy* tax_strategy;

public:
    ~SalesOrder(){
        delete this->tax_strategy;
    }

    SalesOrder(StrategyFactory* strategy_factory){
        this->tax_strategy = strategy_factory->createTaxStrategy();
    }

    void CalculateTax(const Context& context){
        this->tax_strategy->CalculateTax(context);
    }

};

int main(){
    std::cout << "--- strategy good start---" << std::endl;
    StrategyFactory*  p_CN_tax_strategy = new StrategyFactory(CN_Tax);
    SalesOrder* p_sales_order = new SalesOrder(p_CN_tax_strategy);
    Context context;
    p_sales_order->CalculateTax(context);
    
    delete p_sales_order;
    delete p_CN_tax_strategy;

    std::cout << "--- strategy good end---" << std::endl;
    return 0;
}
