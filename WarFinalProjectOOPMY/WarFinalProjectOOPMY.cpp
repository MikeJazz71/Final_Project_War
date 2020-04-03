/*Mike Jasiczek; Professor George; Advanced OOP; INSY 2503; Milestone 4 Writing to a File; 
I saw your feedback on making more classes, abstraction and polymorphism. It's coming and I haven't forgotten.
I have been working on it all this week. I am turning this in this week as it works. There is a placeholder printout from a file. 
I will add more later. I have looked at this program grow into something that I am not very proud to turn in and I feel like I keep
piling up the dishes in the sink.  Adding and Adding and hoping it still works.  I am just to a point that I feel like I am polishing 
a turd.  So I am going to start fresh with three classes (Hand, Deck and Card), use enumerated tyes for Suites and Ranks instead of strings
and intergers and use polymorphism and abstraction with Deck and Hand and then encapsulate everything for an easy Main function and logic.
Basically take the time and do it correctly. I may crash and burn hardcore, but I am not currently proud of how this program looks
and I wouldn't be very proud to turn it in.  So as the Joker says in the Dark Night "And Here. We. Go."
 
*/
#include "pch.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "card.h"
#include "Deck.h"

using namespace std;

Deck p1Deck, comDeck; //Create decks...probaly change to hands
Card Player1[26];
Card Computer[26]; //Hands
void player1(); 
void computer(); 
void winner(int p1, int com); 
int cardCount = 0;
int playerScore = 0; 
int comScore = 0; 
void playWar(); 
void input(); 
void mainscreen(); 
#define COL_WIDTH 500




int main()
{
	
	mainscreen(); 
	
	
	
	

}

void player1() {
	for (int i = 0; i < 1; i++) {
		Player1[i] = p1Deck.dealCard(); //Get a card
		cout << "Player 1 shows: ";
		cout << Player1[i].showCard() << endl;//Show the Card
			//cout << Player1[i] << endl;

		}

	}

	void computer() {
		for (int j = 0; j < 1; j++) {
			Computer[j] = comDeck.dealCard(); //Get Card

			cout << "Computer shows: ";
			cout << Computer[j].showCard() << endl;//Show card



		}
	}

	void winner(int p1, int com) { //Decide a winner

		if (p1 > com) {
			cout << "Player 1 wins this hand" << endl;
			cardCount++;
			playerScore++;

		}

		else if (com > p1) {

			cout << "Computer wins this hand" << endl;
			cardCount++;
			comScore++;
		}
		else 
		{
			cout << "WAR!!!!" << endl; //If it is a tie they go to War

			cout << "Now each player each deal three cards to see what they are putting up for war." << endl; 
			for (int j = 0; j < 3; j++) 
			{
				Player1[j] = p1Deck.dealCard();
				cout << "Player 1  shows: ";
				cout << Player1[j].showCard() << endl;
				Computer[j] = comDeck.dealCard(); //Get Card

				cout << "Computer shows: ";
				cout << Computer[j].showCard() << endl;
				

				
			}
			cout << ""; 
			cout << "Now the final deciding cards are: \n" << endl; 
			player1();
			
			int p1 = p1Deck.value; //Rank card
			cout << ""; 

			computer();
			int com = comDeck.value;//Rank Card
		if (p1 > com) {
				cout << endl << "Player 1 wins this hand" << endl;
				
				playerScore = playerScore + 4;

			}

			else if (com > p1) {

				cout << "Computer wins this hand" << endl;
				
				comScore = comScore + 4;
			}

		}

			cardCount = cardCount + 4;
	
	}

	void playWar() {
		
		
		input(); 
		
		
		system("pause");

		
		
		
		
		
		int cardCount = 0, play1 = 0, computer1 = 0, play = 1 ;

		

		while (cardCount < 52 && play != 0) 
		{
			player1();
			cout << "" << endl;
			int p1 = p1Deck.value; //Rank card
			comDeck.shuffle();//Shuffle 

			computer();
			int com = comDeck.value;//Rank Card
			cout << "" << endl;
			winner(p1, com); //Evaluate the winner
			cout << "\n\nThe current score is:\n" << "Player 1: " << playerScore << endl; //Keep score
			cout << "Computer: " << comScore << endl;
			//system("pause");
			cout << "Do you want to play again? \nClick 1 to continue or 0 to exit." << endl;
			cin >> play;
			if (play == 0) {
				mainscreen(); 
			}


			system("CLS");
		}
	}



	void input() {


		char input_line[COL_WIDTH + 1]; //Var for getting the text

		ifstream file_in("War.txt"); //Get file 
		if (!file_in) {
			cout << "War.txt could not be opened.\n"; // If file can't be opened tell user

		}





		while (!file_in.eof()) { // Loop through each line until end of file or line 12
			for (int i = 1;i <= 12 && !file_in.eof(); i++) {
				file_in.getline(input_line, COL_WIDTH); //Read each line of file
				cout << input_line << endl; //Output to screen

			}




		}
	}
	void mainscreen() {
		int choice = 0;
		system("CLS"); //Clear Screen
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";// Menu
		cout << "WELCOME TO THE GAME OF WAR" << endl; 
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
		cout << "Please make a selection:\n";
		cout << "1. PLAY THE GAME OF WAR\n";

		cout << "2. Exit\n";
		cin >> choice;
		//cout << choice << endl;
		switch (choice) { //Switch statment to make the choice
		case 1:
			system("CLS");
			playWar();
			break;
		case 2:
			system("CLS");
			cout << "Now Exiting......\n";
			break;

		default:
			cout << "You choose nothing....You should leave now\n";
		}
	}
