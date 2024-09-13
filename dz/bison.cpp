#include "bison.h"
#include <iostream>
using namespace std;

Bison::Bison() : weight(150), alive(true) {}
void Bison::eatGrass()
{
    if (alive)
    {
        weight += 10;
        cout << "Бизон поел травы, его масса: " << weight << endl;
    }
}
int Bison::Weight() const
{
    return weight;
}
bool Bison::Alive() const
{
    return alive;
}
