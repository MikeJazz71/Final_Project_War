

#include <string>

using namespace std; 

class Card 
{
public:
	
	Card() {}
	Card(int r, int s) { rank = r; suit = s; }
	int rank;
	int suit; 
	string showCard();
	
	
}; 

string Card::showCard() //Strings to give value to the card
{
	static const string arrRank[] = { " 2", " 3", " 4", " 5", " 6", " 7", " 8", " 9", " 10", " J", " Q", " K", " A"}; 
	static const string arrSuit[] = {"clubs", "diamonds", "hearts", "spades"}; 
	return arrRank[rank] + " of " + arrSuit[suit] + "."; 
}



