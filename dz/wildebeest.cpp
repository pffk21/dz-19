#include "wildebeest.h"
#include <iostream>
using namespace std;

Wildebeest::Wildebeest() : weight(100), alive(true) {}
void Wildebeest::eatGrass()
{
    if (alive)
    {
        weight += 10;
        cout << "Антилопа гну поел травы, его масса: " << weight << endl;
    }
}
int Wildebeest::Weight() const
{
    return weight;
}
bool Wildebeest::Alive() const
{
    return alive;
}
