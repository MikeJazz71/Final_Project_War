
#include "card.h"
#include <string>

using namespace std; 

class Eval {
	
public:
	Eval(Card* pCards);
	printEval(Card * pCards);

	

	
	
private:
	int rankCounts[13]; 
		
}; 


Eval::Eval(Card* pCards) 

{

	for (int i = 0; i < 13; i++) {
		rankCounts[i] = 0; 
	}
	
	for (int i = 0; i < 1; i++) {
		int r = pCards[i].rank; 
		; 
		
	}
	
}

Eval::printEval(Card* pCards) {
	cout << pCards << endl; 

}