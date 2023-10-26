#include "Wildebeest.h"
Wildebeest::Wildebeest() :Herbivore()
{
	weight = 90;
}
Wildebeest::Wildebeest(double weight):Herbivore()
{
	this->weight = weight;
}
void Wildebeest::SetLife(bool life)
{
	this->life = life;
}
void Wildebeest::Eat_grass()
{
	if (life = true)
	{
		weight += 10;
	}
}