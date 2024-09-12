#include "continent.h"

Herbivore* Africa::createHerbivore()
{
    return new Wildebeest();
}
Carnivore* Africa::createCarnivore()
{
    return new Lion();
}
Herbivore* NorthAmerica::createHerbivore()
{
    return new Bison();
}
Carnivore* NorthAmerica::createCarnivore()
{
    return new Wolf();
}
