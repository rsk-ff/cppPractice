#include "move.h"

int main()
{
    Move cor1(16, 28);
    Move cor2(2, 5);
    Move cor3 = cor1.add(cor2);
    //cor3 = cor1.add(cor2);
    cor3.showmove();
    cor3.reset();
    cor3.showmove();
    return 0;
}
