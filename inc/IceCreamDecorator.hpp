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
    double getPrice();
    std::string getText();
};

IceCreamDecorator::IceCreamDecorator(IIceCream* iceCream):_iceCream(iceCream)
{
}

IceCreamDecorator::~IceCreamDecorator()
{
    if(_iceCream != NULL)
    {
        delete _iceCream;
        _iceCream = NULL;
    }
}

double IceCreamDecorator::getPrice()
{
    double price = 0.0;
    if(_iceCream != NULL)
        price = _iceCream->getPrice();
    return price;
}
std::string IceCreamDecorator::getText()
{
    std::string text = "";
    if(_iceCream != NULL)
        text = _iceCream->getText();
    return text;
}

#endif