//Josh Martin
// Function Exercises
// Period 2
// 5/20/2014
// accepts 10 values and stores them in an array

#include "stdafx.h"
#include <iostream>


using namespace std;


int main()
{
	// Naming the array
	const int LARGE = 10;
	int size[LARGE];
	void WhatSize (int [] , const int);

	
	//Getting the Numbers
	for (int i = 0; i < LARGE;  i++)
	{
		cout << "enter a number #" << (i + 1) << " ";
		cin >> size[i];
		cout << endl;
	}

	// Senting the numbers to WhatSize
	WhatSize (size , LARGE) ;



} // end of Main

void WhatSize (int ray[] , int SIZE )
{
	//Finding the hihest and the lowest
	int high ;
	int low;

	high = ray[0];
	low = ray[0];

	for (int i = 0; i < SIZE; i++)
	{
		if (ray[i] > high)
		{
			high = ray[i];
		}
		if (ray[i] < low)
		{
			low = ray[i];
		}
	}
	cout << "high is: " << high << " low is: " << low << endl ;
}
