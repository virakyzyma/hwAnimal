#include "Lion.h"
Lion::Lion()
{
	power = 157;
}
Lion::Lion(double power)
{
	this->power = power;
}
bool Lion::Eat(Herbivore* herbivore)
{
	if (!herbivore->Life()) 
	{
		return false;
	}
	if (power > herbivore->GetWeight())
	{
		power += 10;
		herbivore->SetLife(false);
	}
	if (power < herbivore->GetWeight())
	{
		power -= 10;
	}
	return true;
}
