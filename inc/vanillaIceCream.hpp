#ifndef VANILLAICECREAM
#define VANILLAICECREAM

#include "IIceCream.hpp"
#include <string>

class VanillaIceCream : public IIceCream
{
public:
    VanillaIceCream(){};
    ~VanillaIceCream(){};
    double getPrice();
    std::string getText();
};

double VanillaIceCream::getPrice()
{
    return 0.80;
}

std::string VanillaIceCream::getText()
{
    std::string text = "Vanilla IceCream";
    return text;
}

#endif