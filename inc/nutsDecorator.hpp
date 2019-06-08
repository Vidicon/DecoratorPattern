
#ifndef NUTSDECORATOR
#define NUTSDECORATOR

#include "IceCreamDecorator.hpp"
#include "IIceCream.hpp"
#include <string>

class NutsDecorator : public IceCreamDecorator
{
public:
    NutsDecorator(IIceCream* iceCream):IceCreamDecorator(iceCream){};
    ~NutsDecorator(){IceCreamDecorator::Clear();};
    double getPrice();
    std::string getText();
};
#endif

 double NutsDecorator::getPrice()
 {
    double price = 0.75;
    price += IceCreamDecorator::getPrice();
    return price;
 }

std::string NutsDecorator::getText()
{
    
    std::string text = IceCreamDecorator::getText();
    text.append(", nuts");
    return text;
}
