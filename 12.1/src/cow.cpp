#include "cow.h"
#include <cstring>
#include <iostream>
Cow::Cow()//默认构造
{
    std::strcpy(name, "asdf");
    hobby = "hobby";
    weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    std::strcpy(name, nm);
    //std::strcpy(hobby, ho);
    hobby = ho;
    weight = wt;

}

// Cow::Cow(const Cow & c)//复制构造
// {
//     // for (int i = 0; i < 20; i++)
//     //     name[i] = c.name[i];
//     std::strcpy(name, c.name);
//     hobby = c.hobby;
//     weight = c.weight;
// }

// Cow & Cow::operator=(const Cow & c)//赋值运算
// {
//     if (this == &c)
//         return *this;
//     std::strcpy(this->name, c.name);
//     this->hobby = c.hobby;
//     this->weight = c.weight;
//     return *this;
// }

void Cow::ShowCow() const
{
    std::cout << name << std::endl <<hobby << std::endl << weight << std::endl;
}
