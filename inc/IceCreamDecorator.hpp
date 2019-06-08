#ifndef IICECREAMDECORATOR
#define IICECREAMDECORATOR

#include "IIceCream.hpp"
#include <string>
#include <iostream>

class IceCreamDecorator : public IIceCream
{
private:
    IIceCream* _iceCream = NULL;
public:
    IceCreamDecorator(IIceCream* iceCream);
    ~IceCreamDecorator();
    void Clear();
    double getPrice(){return _iceCream->getPrice();};
    std::string getText(){return _iceCream->getText();};
};


IceCreamDecorator::IceCreamDecorator(IIceCream* iceCream):_iceCream(iceCream)
{

}
void IceCreamDecorator::Clear()
{
    std::cout << "Clear" << std::endl;
    if(_iceCream != NULL)
    {
        delete _iceCream;
        _iceCream = NULL;
    }

}

IceCreamDecorator::~IceCreamDecorator()
{
    std::cout << "destructor" << std::endl;
    if(_iceCream != NULL)
    {
        delete _iceCream;
        _iceCream = NULL;
    }

}

#endif