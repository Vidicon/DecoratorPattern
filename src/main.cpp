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

void printIce(IIceCream& i)
{
    std::cout << "text: "<< i.getText() << std::endl;
    std::cout << "price: "<< i.getPrice() << std::endl;
}

int main(int argc, char *argv[])
{
   // IIceCream* iceCream = new StrawberryIceCream();

   // iceCream = new SprinklesDecorator(iceCream);

   // printIce(*iceCream);

    IIceCream* VanilaIceCreamWithNuts = new NutsDecorator(new VanillaIceCream());

    printIce(*VanilaIceCreamWithNuts);
   
   // delete iceCream;
   // iceCream = NULL;

    delete VanilaIceCreamWithNuts;
    VanilaIceCreamWithNuts = NULL;

    return 0;
}
