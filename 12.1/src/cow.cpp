#include "cow.h"
#include <cstring>
#include <iostream>
Cow::Cow()
{
    std::strcpy(name, "asdf");
    weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    std::strcpy(name, nm);
    std::strcpy(hobby, ho);
    weight = wt;

}

Cow & Cow::operator=(const Cow & c)
{
    if (this == &c)
        return *this;
    std::strcpy(this->name, c.name);
    std::strcpy(this->hobby, c.hobby);
    this->weight = c.weight;
    return *this;
}

void Cow::ShowCow() const
{
    std::cout << name << std::endl <<hobby << std::endl << weight << std::endl;
}
