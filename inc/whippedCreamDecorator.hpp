
#ifndef WHIPPEDCREAMDECORATOR
#define WHIPPEDCREAMDECORATOR

#include "IceCreamDecorator.hpp"
#include "IIceCream.hpp"
#include <string>

class WhippedCreamDecorator : public IceCreamDecorator
{
public:
    WhippedCreamDecorator(IIceCream* iceCream):IceCreamDecorator(iceCream){};
    double getPrice();
    std::string getText();
};

 double WhippedCreamDecorator::getPrice()
 {
    double price = 0.75;
    price += IceCreamDecorator::getPrice();
    return price;
 }

std::string WhippedCreamDecorator::getText()
{
    
    std::string text = IceCreamDecorator::getText();
    text.append(", wippedCream");
    return text;
}

#endif