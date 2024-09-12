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

    AnimalWorld africanWorld(&africa);
    AnimalWorld northAmericanWorld(&northAmerica);

    cout << "Африка:\n";
    africanWorld.mealsHerbivores();
    africanWorld.nutritionCarnivores();

    cout << "\nСеверная Америка:\n";
    northAmericanWorld.mealsHerbivores();
    northAmericanWorld.nutritionCarnivores();
}
