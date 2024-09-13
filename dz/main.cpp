//
//  main.cpp
//  dz
//
//  Created by paul blazhko on 11.09.2024.
//

#include <iostream>
#include "continent.h"
using namespace std;
class AnimalWorld
{
private:
    Continent* continent;
    Herbivore* herbivore;
    Carnivore* carnivore;
public:
    AnimalWorld(Continent* cont) : continent(cont)
    {
        herbivore = continent->createHerbivore();
        carnivore = continent->createCarnivore();
    }
    void mealsHerbivores()
    {
        herbivore->eatGrass();
    }
    void nutritionCarnivores()
    {
        carnivore->eat(herbivore);
    }
    ~AnimalWorld()
    {
        delete herbivore;
        delete carnivore;
    }
};

int main()
{
    Africa africa;
    NorthAmerica northAmerica;

    AnimalWorld african(&africa);
    AnimalWorld northAmerican(&northAmerica);

    cout << "Африка:\n";
    african.mealsHerbivores();
    african.nutritionCarnivores();

    cout << "\nСеверная Америка:\n";
    northAmerican.mealsHerbivores();
    northAmerican.nutritionCarnivores();
}
