#include "Continent.h"
Herbivore* Continent::GetHerbivore()
{
	return herbivore;
}
Carnivore* Continent::GetCarnivore()
{
	return carnivore;
}
int Continent::GetCountHerbivore()
{
	return Countherbivore;
}
int Continent::GetCountCarnivore()
{
	return Countcarnivore;
}
Continent::~Continent()
{
	delete[] herbivore;
	delete[] carnivore;
}