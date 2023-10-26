#include "AnimalWorld.h"
#include <iostream>
using namespace std;
void AnimalWorld::MealsHerbivores(Continent* continent)
{
	Herbivore* herbivore = continent->GetHerbivore();
	int size = continent->GetCountHerbivore();
	for (int i = 0; i < size; i++)
	{
		herbivore[i].Eat_grass();
	}
}
void AnimalWorld::NutritionCarnivores(Continent* continent)
{
	int countHerbivore = continent->GetCountHerbivore();
	int countCarnivore = continent->GetCountCarnivore();
	Herbivore* herbivore = continent->GetHerbivore();
	Carnivore* carnivore = continent->GetCarnivore();
	int sum = 0;
	for (int i = 0; i < countHerbivore && i < countCarnivore; i++)
	{
		carnivore[i].Eat(herbivore + i);
		sum += 1;
	}
	cout << "Carnivores started hunting\n.\n.\n.\n" << sum << " herbivores were eaten\n";
}