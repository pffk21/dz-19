#pragma once
#include "herbivores.h"


class Wildebeest : public Herbivore
{
private:
    int weight;
    bool alive;
public:
    Wildebeest();
    void eatGrass();
    int getWeight() const;
    bool isAlive() const; 
};

