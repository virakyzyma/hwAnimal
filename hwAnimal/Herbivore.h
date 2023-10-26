#pragma once
class Herbivore 
{
protected:
	double weight;
	bool life;
public:
	Herbivore() : life(true), weight(0) {};
	//Herbivore(double weight, bool life);
	double GetWeight();
	bool Life();
	virtual void SetLife(bool life) = 0;
	virtual void Eat_grass() = 0;
};


