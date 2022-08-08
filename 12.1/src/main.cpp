#include "cow.h"

int main()
{
    //Cow myfCow;
    //myfCow.ShowCow();

    Cow mysCow("fjdas", "fasd", 79);
    mysCow.ShowCow();

    Cow mytCow(mysCow);
    mytCow.ShowCow();

    Cow myfoCow = mysCow;
    myfoCow.ShowCow();
    return 0;
}