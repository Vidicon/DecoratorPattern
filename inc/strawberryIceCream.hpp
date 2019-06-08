#ifndef STRAWBERRYICECREAM
#define STRAWBERRYICECREAM

#include "IIceCream.hpp"
#include <string>

class StrawberryIceCream : public IIceCream
{
public:
    StrawberryIceCream(){};
    ~StrawberryIceCream(){};
    double getPrice();
    std::string getText();
};
#endif

double StrawberryIceCream::getPrice()
{

    return 1.00;
}

std::string StrawberryIceCream::getText()
{
    std::string text = "Strawberry IceCream";
    return text;
}
