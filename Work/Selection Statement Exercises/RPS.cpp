// Josh Martin
// Exercise 2 - Selection Statement Exercises
// Period 2
// 2/26/2014
// Purpose - children's game of Rock, Paper, Scissors

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	//Naming variable
	int player1 = 0;
	int player2 = 0;

	cout << endl << "Three Rules:" << endl << "1)Scissors cut paper" << endl << "2)Rock Crushes Scissors" << endl << "3)Paper covers Rock" << endl;

	cout << "Okay Player One, Pick a Number for what you want to play... " << endl;
	cout << "Scissors = 1  Rock = 2  Paper = 3" <<endl;
	cin >> player1;
		
		cout << endl<< "Okay Player Two , Your turn pick ";
		cin >> player2;

		switch (player1)
	{
		case 1: 
			switch (player2)
			{
			case 1:cout << "Player 2 Pick something different" << endl ;
				break;
			case 2:cout << "Player 2 has won" << endl ;
				break;
			case 3: cout << "Players 2 Losts " << endl ;
				break;
			} 	
			break;
		case 2:
			switch (player2)
			{
			case 2:cout << "Player 2 Pick something different" << endl ;
				break;
			case 3:cout << "Player 2 has won" << endl ;
				break;
			case 1: cout << "Players 2 Losts " << endl ;
				break;
			} 	
			break;
		case 3 :
			switch (player2)
			{
			case 3:cout << "Player 2 Pick something different" << endl ;
				break;
			case 2:cout << "Player 2 has won" << endl ;
				break;
			case 1: cout << "Players 2 Losts " << endl ;
				break;
			} 	
			break;
		default:
			cout << "Player 1 check What you have entered" << endl ;
			break;
	}

}