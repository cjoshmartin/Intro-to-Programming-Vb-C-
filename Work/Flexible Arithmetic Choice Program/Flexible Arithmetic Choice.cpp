//Josh Martin
//Flexible Arithmetic Choice
// Period 2
// 2/13/14
// Perpose - Doing simple Math

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	//naming variables
	double value1;
	double value2 ;
	char opat;
	char again;

	do
	{
// doing a reset
		again == 'n';
		
		

		//Get the Numbers 
		cout << "Okay, What is your first Number? ";

		cin >> value1;

		cout << endl << "Your Second Number? ";

		cin >> value2;
	
		// Getting the operation
		cout << "What Operation would you like to use? You can use the letter or Symbol." << endl;
		cout << "(e.i. +, - , / , * or A, S , D , T ) " << endl;
		cin >> opat;

		// Doing the Math
		//Add
		if (opat == 'A' || opat == 'a' || opat == '+')
			cout << "your Product equals "<< value1 + value2 << endl;

		//subtraction
		else if (opat == 'S' || opat == 's' || opat == '-')
			cout << "your Product equals " << value1 - value2 << endl;

		//Dividtion 
		else if (opat == 'D' || opat == 'd' || opat == '/')
			cout << "your Product equals " << value1 / value2 << endl;

		// Multipltion 
		else if (opat == 'T' || opat == 't' || opat == '*')
			cout << "your Product equals " << value1 * value2 << endl;
		// Error check
		else
			cout << endl << "Error Please Check what you entered!" << endl;

		cout << "Do another? Y or N? ";
		cin >> again;
	} while (again == 'Y' || again == 'y');
} // End of Code