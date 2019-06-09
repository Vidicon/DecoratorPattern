#include <iostream>
#include <stdint.h>
#include <vector>

#include "IIceCream.hpp"

#include "vanillaIceCream.hpp"
#include "strawberryIceCream.hpp"
#include "chocolateIceCream.hpp"

#include "whippedCreamDecorator.hpp"
#include "sprinklesDecorator.hpp"
#include "nutsDecorator.hpp"

void printIce(IIceCream &i)
{
    std::cout << "text: " << i.getText() << std::endl;
    std::cout << "price: " << i.getPrice() << std::endl;
}

int main(int argc, char *argv[])
{
    std::cout << std::endl << "IceCream #1:"  << std::endl;
    IIceCream *iceCream = new ChocolateIceCream();
    iceCream = new SprinklesDecorator(iceCream);
    iceCream = new WhippedCreamDecorator(iceCream);
    printIce(*iceCream);
    delete iceCream;
    iceCream = NULL;

    std::cout << std::endl << "IceCream #2:"  << std::endl;
    iceCream = new StrawberryIceCream();
    iceCream = new NutsDecorator(iceCream);
    printIce(*iceCream);
    delete iceCream;
    iceCream = NULL;

    std::cout << std::endl << "IceCream #3: (nuts only)"  << std::endl;
    iceCream = new NutsDecorator(NULL);
    printIce(*iceCream);
    delete iceCream;
    iceCream = NULL;

    std::cout << std::endl << "IceCream #4:"  << std::endl;
    IIceCream *VanilaIceCreamWithAll = new WhippedCreamDecorator(new SprinklesDecorator(new NutsDecorator(new VanillaIceCream())));
    printIce(*VanilaIceCreamWithAll);

    delete VanilaIceCreamWithAll;
    VanilaIceCreamWithAll = NULL;

    return 0;
}
