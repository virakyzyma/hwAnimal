#pragma once
#include "Herbivore.h"
class Carnivore //������
{
protected:
	double power;
public:
	double GetPower();
	virtual bool Eat(Herbivore* herbivore) = 0;
};

