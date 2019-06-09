
#ifndef SPRINKLESDECORATOR
#define SPRINKLESDECORATOR

#include "IceCreamDecorator.hpp"
#include "IIceCream.hpp"
#include <string>

class SprinklesDecorator : public IceCreamDecorator
{
public:
    SprinklesDecorator(IIceCream* iceCream):IceCreamDecorator(iceCream){};
    double getPrice();
    std::string getText();
};

 double SprinklesDecorator::getPrice()
 {
    double price = 0.75;
    price += IceCreamDecorator::getPrice();
    return price;
 }

std::string SprinklesDecorator::getText()
{
    
    std::string text = IceCreamDecorator::getText();
    text.append(", sprinkles");
    return text;
}

#endif
