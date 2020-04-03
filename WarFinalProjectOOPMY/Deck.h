
#include "pch.h"
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std; 





class Deck 
{
public:	
	Deck();
	Card dealCard(); 
	void shuffle();
	int value;
	int getValue();
	
private:
	int cards[52]; 
	int iCard; 
	
	
	
	
	
}; 

Deck::Deck() { //Randomizer
	srand(time(NULL)); 
	for (int i = 0; i < 52; i++) {
		cards[i] = i; 
	}
	shuffle(); 
}

void Deck::shuffle() //Shuffle function
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
	value = r; //Get the value of the card
	
	return Card(r, s);
}

int Deck::getValue() {
	return value; 
}




	