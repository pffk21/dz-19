#include "carnivores.h"
#include <iostream>
using namespace std;
Lion::Lion() : power(200) {}
void Lion::eat(Herbivore* herbivore)
{
    if (herbivore->Alive() && herbivore->Weight() < power)
    {
        power += 10;
        cout << "Лев поел, его сила увеличилась: " << power << endl;
    }
    else
    {
        power -= 10;
        cout << "Лев не поел, его сила уменьшилась: " << power << endl;
    }
}
Wolf::Wolf() : power(150) {}
void Wolf::eat(Herbivore* herbivore)
{
    if (herbivore->Alive() && herbivore->Weight() < power)
    {
        power += 10;
        cout << "Волк поел, его сила увеличилась: " << power << endl;
    }
    else
    {
        power -= 10;
        cout << "Волк не поел, его сила уменьшилась: " << power << endl;
    }
}
