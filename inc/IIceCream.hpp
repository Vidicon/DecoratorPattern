#ifndef IICECREAM
#define IICECREAM

#include <string>
class IIceCream
{
public:
    IIceCream(){};
    virtual ~IIceCream(){};
    virtual double getPrice() = 0;
    virtual std::string getText() = 0;
};
#endif