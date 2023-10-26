#pragma once
#include "Herbivore.h"
class Bison : public Herbivore
{
public:
	Bison();
	Bison(double weight);
	void SetLife(bool life);
	void Eat_grass();
};

