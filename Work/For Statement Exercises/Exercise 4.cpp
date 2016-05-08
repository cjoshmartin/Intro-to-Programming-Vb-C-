//Josh Martin
// Exercise #4 - For Statement Exercises
// Period 2
// 3/4/2014
// looping * to a number of times


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// Naming Varibles
	int i = 0 ; 
	int num;
	

	// Asks for Amount
	cout << "Pick S Number 5 - 10 " ;
	cin >> num;
	
	//check if num is less then 10 and greater then 5
	if (num > 10 || num <5)
	{
		cout << "Your Number Is Out of Range! " << endl;
		return 0;
	} // End of if

	// makes the rows
	for ( int row = 1; row <= num ; row++)
	{
		// Makes the *
		for (i = 1; i <= num; i++ )
	{
		cout << "*";
	}

	cout << endl;

	} // end of loop



 } // End of Main