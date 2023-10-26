#pragma once
#include "Herbivore.h"
class Wildebeest : public Herbivore
{
public:
	Wildebeest();
	Wildebeest(double weight);
	void SetLife(bool life);
	void Eat_grass();
};

