#include <iostream>
#include "classic.h"
#include <cstring>
using namespace std;
//Cd methods
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

void Cd::Report() const
{
    cout << "This is Class Cd.\n";
}

Cd & Cd::operator=(const Cd & d)
{
    if (this == &d)
        return *this;
    //*this = Cd(d);
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

//Classic methods
Classic::Classic(const char * s1, const char * s2, 
        const char * s3, const char * s4, int n, double x): Cd(s3, s4, n, x)
{
    strcpy(works1, s1);
    strcpy(works2, s2);
}

void Classic::Report() const
{
    cout << "This is Class Classic.\n";
}

Classic & Classic::operator=(const Classic & c)
{
    if (this == &c)
        return *this;
    strcpy(this->works1, c.works1);
    strcpy(this->works2, c.works2);
    Cd::operator=(c);
    return *this;
}