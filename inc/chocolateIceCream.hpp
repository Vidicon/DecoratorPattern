#ifndef CHOCOLATEICECREAM
#define CHOCOLATEICECREAM

#include "IIceCream.hpp"
#include <string>

class ChocolateIceCream : public IIceCream
{
public:
    ChocolateIceCream(){};
    ~ChocolateIceCream(){};
    double getPrice();
    std::string getText();
};
#endif

double ChocolateIceCream::getPrice()
{
    return 1.20;
}

std::string ChocolateIceCream::getText()
{
    std::string text = "Chocolate IceCream";
    return text;
}
