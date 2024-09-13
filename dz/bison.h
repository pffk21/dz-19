#include "herbivores.h"
#pragma once

class Bison : public Herbivore
{
private:
    int weight;
    bool alive;
public:
    Bison();
    void eatGrass();
    int Weight() const;
    bool Alive() const; 
};

