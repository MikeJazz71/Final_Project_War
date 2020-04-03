#include "Deck.h"
#include <string>
#include <cstlib>
#include <ctime>

using namespace std; 

void Deck::shuffle() 
{
	iCard = 0; 
	for (int i = 51; i > 0; i--) 
	{
		int j = rand() % (i + 1); 
		int temp = cards[i]; 
		cards[i] = cards[j]; 
		cards[j] = temp; 
	}
	
}

Card Deck::dealCard() 
{
	if (iCard > 51)
	{
		cout << endl << "SHUFFLING" << endl;
		shuffle(); 
		
	}
	
	
	int r = cards[iCard] % 13; 
	int s = cards[iCard++] / 13; 
	return Card(r, s)
}


	