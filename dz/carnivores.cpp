#include "carnivores.h"
#include <iostream>
using namespace std;
Lion::Lion() : power(200) {}
void Lion::eat(Herbivore* herbivore)
{
    if (herbivore->isAlive() && herbivore->getWeight() < power)
    {
        power += 20;
        cout << "Лев поел, его сила увеличилась: " << power << "\n";
    }
    else
    {
        power -= 10;
        cout << "Лев не поел, его сила уменьшилась: " << power << "\n";
    }
}
Wolf::Wolf() : power(150) {}
void Wolf::eat(Herbivore* herbivore)
{
    if (herbivore->isAlive() && herbivore->getWeight() < power)
    {
        power += 15;
        cout << "Волк поел, его сила увеличилась: " << power << "\n";
    }
    else
    {
        power -= 8;
        cout << "Волк не поел, его сила уменьшилась: " << power << "\n";
    }
}
