//Josh Martin
// Exercise #1 - While Loop
// Period 2
// 3/6/2014
// Sum of numbers from 1- 100


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// naming varbles
	int startnum = 0 ;
	int endnum = 100;
	int sum = 0;

	// loop until starting number = 100
	while ( startnum < endnum )
	{
		startnum++ ;
			sum += startnum ;

	}
	// Prints anwser
	cout << "sum equals " << sum << endl ;



} // End of main