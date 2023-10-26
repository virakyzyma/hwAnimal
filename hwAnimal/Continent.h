#pragma once
#include"Herbivore.h"
#include"Carnivore.h"
class Continent
{
protected:
	Herbivore* herbivore;
	Carnivore* carnivore;
	int Countherbivore, Countcarnivore;
public:
	Herbivore* GetHerbivore();
	Carnivore* GetCarnivore();
	int GetCountHerbivore();
	int GetCountCarnivore();
	virtual void AddHerbivores() = 0;
	virtual void AddCarnivores() = 0;
	~Continent();
};

