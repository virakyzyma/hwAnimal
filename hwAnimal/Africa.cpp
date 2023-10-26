#include "Africa.h"
#include <iostream>
using namespace std;

void Africa::AddHerbivores()
{
	cout << "Enter count of herbivores-> ";
	cin >> Countherbivore;
	herbivore = new Wildebeest[Countherbivore];
	for (int i = 0; i < Countherbivore; i++)
	{
		herbivore[i] = Wildebeest(150 + rand() % (250 - 150 + 1));
	}
}
void Africa::AddCarnivores()
{
	cout << "Enter count of carnivores-> ";
	cin >> Countcarnivore;
	carnivore = new Lion[Countcarnivore];
	for (int i = 0; i < Countcarnivore; i++)
	{
		carnivore[i] = Lion(50 + rand() % (400 - 50 + 1));
	}
}