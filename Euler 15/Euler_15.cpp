// Het gebruikte algoritme uitgelegd:
// Zoals je kan beredeneren, is het aantal paden naar een punt gelijk aan de som van het aantal paden ('upstream')
// die leiden naar dat punt. Dus zijn alle paden links en boven met slechts een route te vinden, de rest varieert.
// Hier wordt zo'n grid gecreerd en vervolgens allerlei optellingen gedaan. Het vakje rechts onder is 't antwoord!
#include <iostream>

using namespace std;

int main()
{
	// Initializeer de grid en geef links/boven vakjeswaarde 1
	long long int grid[21][21];	// Het is belangrijk een 64 bits int te gebruiken, ik vergat aanvankelijk de mogelijkheid van een overflow
	for(int i = 0; i < 21; i++)
	{
		grid[0][i] = 1;
		grid[i][0] = 1;
	}
	
	// Voer het algoritme uit: de som van de linker en boven buren hun aantal paden
	for(int y = 1; y < 21; y++)
	{
		for(int x = 1; x < 21; x++)
		{
			grid[y][x] = grid[y][x-1] + grid[y-1][x];
		}
	}
	
	
	// Output 't antwoord
	
	cout << "Het aantal mogelijke korste paden in een 20x20 vakken grid is: " << grid[20][20];
	
	return 0;
}