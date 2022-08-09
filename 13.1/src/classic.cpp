#include <iostream>
#include "classic.h"
#include <cstring>
using namespace std;
//Cd methods
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    performers = new char[strlen(s1) + 1];
    label = new char[strlen(s2) + 1];
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
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
    delete [] performers;
    delete [] label;
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
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
    works1 = new char[strlen(s1) + 1];
    works2 = new char[strlen(s2) + 1];
    strcpy(works1, s1);
    strcpy(works2, s2);
}

Classic::~Classic()
{
    delete [] works1;
    delete [] works2;
}

void Classic::Report() const
{
    cout << "This is Class Classic.\n";
}

Classic & Classic::operator=(const Classic & c)
{
    if (this == &c)
        return *this;
    delete [] works1;
    delete [] works2;
    works1 = new char[strlen(c.works1) + 1];
    works2 = new char[strlen(c.works2) + 1];
    strcpy(this->works1, c.works1);
    strcpy(this->works2, c.works2);
    Cd::operator=(c);
    return *this;
}