#include "wildebeest.h"
#include <iostream>


Wildebeest::Wildebeest() : weight(100), alive(true) {}
void Wildebeest::eatGrass() {
    if (alive) {
        weight += 10;
        std::cout << "Антилопа гну поел травы, его масса: " << weight << "\n";
    }
}
int Wildebeest::getWeight() const
{
    return weight;
}
bool Wildebeest::isAlive() const
{
    return alive;
}
