#include "herbivores.h"
#include "carnivores.h"
#include "wildebeest.h"
#include "bison.h"
#pragma once
class Continent
{
public:
    virtual Herbivore* createHerbivore() = 0;
    virtual Carnivore* createCarnivore() = 0;
    virtual ~Continent() {}
};
class Africa : public Continent
{
public:
    Herbivore* createHerbivore();
    Carnivore* createCarnivore();
};
class NorthAmerica : public Continent
{
public:
    Herbivore* createHerbivore();
    Carnivore* createCarnivore();
};

