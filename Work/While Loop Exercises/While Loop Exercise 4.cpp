//Josh Martin
// Exercise #4 - While Loop
// Period 2
// 3/6/2014
// t keeps reading in an integer and prints "I can't wait for summer!" until the integer entered is a -1


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// naming varbles
	int num = 0; 

	// Gets the loop started
	cout << endl << "Enter A Number ... ";
	cin >> num;

	// If The number is not -1 runs the loop

	do
	{
		cout << endl << "I can't wait for summer!" << endl;
		cout << endl << "Enter A Number ... ";
		cin >> num;

	} 	while ( num != -1 );

} // End of Main