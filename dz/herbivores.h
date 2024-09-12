#pragma once
class Herbivore
{
public:
    virtual void eatGrass() = 0;
    virtual int getWeight() const = 0;
    virtual bool isAlive() const = 0;
    virtual ~Herbivore() {}
};


