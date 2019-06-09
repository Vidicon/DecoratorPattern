#ifndef CHOCOLATEICECREAM
#define CHOCOLATEICECREAM

#include "IIceCream.hpp"
#include <string>
#include <iostream>

class ChocolateIceCream : public IIceCream
{
public:
    ChocolateIceCream(){};
    double getPrice();
    std::string getText();
};

double ChocolateIceCream::getPrice()
{
    return 1.20;
}

std::string ChocolateIceCream::getText()
{
    std::string text = "Chocolate IceCream";
    return text;
}

#endif
