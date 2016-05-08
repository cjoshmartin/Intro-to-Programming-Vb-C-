// Josh Martin
// Exercise 1 - Selection Statement Exercises
// Period 2
// 2/25/2014
// Purpose - to calcute the weight of a person on other plants

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	//Naming variable
	double weight;
	char firstletter;
	char secondletter;

	// Getting weight
	cout << "What is Your Weight ? ";
	cin >> weight;

	// Error trapping Weight
	
	if (weight <= 0)
	{
		while (weight <= 0)
		{
			cout << "Sorry You have entered an invaild weight, Please enter another.. ";
			cin >> weight;
		}
	}

	// Getting First Letter
	cout << endl << "Okay, What is the first letter of the plant? ";
	cin >> firstletter;

	// Testing for second
	if (firstletter == 's' || firstletter == 'S' || firstletter == 'M' || firstletter == 'm')
	{
		cout << "What is the second letter in the plants name ? ";
		cin >> secondletter;
	}

	// Doing Math for two letter Plants
	if (firstletter == 's' || firstletter == 'S')
	{
		if (secondletter == 'u' || secondletter == 'U')
			weight *= 27.94;
		else if (secondletter == 'a' || secondletter == 'A')
			weight *= 1.15;
	}
	if (firstletter == 'M' || firstletter == 'm')
	{
		if (secondletter == 'o' || secondletter == 'O')
			weight *= .17;
		else if (secondletter == 'e' || secondletter == 'E')
			weight *= .37;
		else if (secondletter == 'a' || secondletter == 'A')
			weight *= .38;
	}

	// Do math of First letter plants
	if (firstletter == 'U' || firstletter == 'u')
		weight *= 1.17;
	else if (firstletter == 'V' || firstletter == 'v')
		weight *= .88;
	else if (firstletter == 'J' || firstletter == 'j')
		weight *= 2.64;
	else if (firstletter == 'N' || firstletter == 'n')
		weight *= 1.18;

	// Showwing new Weight
	cout << " Your NEW Weight Is  " << weight << "Ibs" << endl;

}// end of main