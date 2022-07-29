#include <iostream>
#include "move.h"
using std::cout;
using std::endl;
Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

Move Move::add(const Move & m) const
{
    Move newMove;
    newMove.x = x + m.x;
    newMove.y = y + m.y;
    return newMove;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
