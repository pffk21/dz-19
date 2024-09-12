#include "bison.h"
#include <iostream>


Bison::Bison() : weight(150), alive(true) {}
void Bison::eatGrass()
{
    if (alive) {
        weight += 15;
        std::cout << "Бизон поел травы, его масса: " << weight << "\n";
    }
}
int Bison::getWeight() const
{
    return weight;
}
bool Bison::isAlive() const
{
    return alive;
}
