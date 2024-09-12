#pragma once
#include "herbivores.h"

class Carnivore
{
public:
    virtual void eat(Herbivore* herbivore) = 0;
    virtual ~Carnivore() {}
};
class Lion : public Carnivore
{
private:
    int power;
public:
    Lion();
    void eat(Herbivore* herbivore);
};
class Wolf : public Carnivore
{
private:
    int power;
public:
    Wolf();
    void eat(Herbivore* herbivore);
};


