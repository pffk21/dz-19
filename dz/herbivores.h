#pragma once
class Herbivore
{
public:
    virtual void eatGrass() = 0;
    virtual int Weight() const = 0;
    virtual bool Alive() const = 0;
    virtual ~Herbivore() {}
};


