#include "NorthAmerica.h"
#include <iostream>
using namespace std;
void NorthAmerica::AddHerbivores()
{
	cout << "Enter count of herbivores-> ";
	cin >> Countherbivore;

	herbivore = new Bison[Countherbivore];
	for (int i = 0; i < Countherbivore; i++)
	{
		herbivore[i] = Bison(150 + rand() % (250 - 150 + 1));
	}
}
void NorthAmerica::AddCarnivores()
{
	cout << "Enter count of carnivores-> ";
	cin >> Countcarnivore;

	carnivore = new Wolf[Countcarnivore];
	for (int i = 0; i < Countcarnivore; i++)
	{
		carnivore[i] = Wolf(50 + rand() % (400 - 50 + 1));
	}
}