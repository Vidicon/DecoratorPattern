#ifndef IICECREAM
#define IICECREAM

#include <string>
class IIceCream
{
public:
    virtual double getPrice() = 0;
    virtual std::string getText() = 0;
};
#endif