#include "Wolf.h"
Wolf::Wolf()
{
	power = 333;
}
Wolf::Wolf(double power)
{
	this->power = power;
}
bool Wolf::Eat(Herbivore* herbivore)
{
	if (!herbivore->Life()) {
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