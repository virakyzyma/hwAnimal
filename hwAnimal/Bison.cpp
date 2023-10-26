#include "Bison.h"
#include <iostream>
using namespace std;
Bison::Bison() : Herbivore()
{
	weight = 210;
}
Bison::Bison(double weight) : Herbivore()
{
	this->weight = weight;
}
void Bison::SetLife(bool life)
{
	this->life = life;
}
void Bison::Eat_grass()
{
	if (life = true)
	{
		weight += 10;
	}
}