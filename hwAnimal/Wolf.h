#pragma once
#include "Carnivore.h"
class Wolf : public Carnivore
{
public:
	Wolf();
	Wolf(double power);
	bool Eat(Herbivore* herbivore);
};

