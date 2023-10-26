#include <iostream>
#include "Africa.h"
#include "NorthAmerica.h"
#include "AnimalWorld.h"
using namespace std;

int main() 
{
	short menu, menu2;
	cout << "Choose a contient\n1.Africa 2. North America\nEnter: ";
	cin >> menu;
	cout << "1.Feed the herbivores  2.Carnivores hunt herbivores\nEnter: ";
	cin >> menu2;
	Continent* continent;

	switch (menu)
	{
	case 1:
		continent = new Africa();
		continent->AddHerbivores();
		continent->AddCarnivores();
		break;
	case 2:
		continent = new NorthAmerica();
		continent->AddHerbivores();
		continent->AddCarnivores();
		break;
	default:
		continent = nullptr;
		break;
	}
	AnimalWorld animalworld;
	switch (menu2)
	{
	case 1:
		animalworld.MealsHerbivores(continent);
	case 2:
		animalworld.NutritionCarnivores(continent);
	}


	delete continent;

	return 0;
}