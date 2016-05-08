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
	int startnum ;
	int endnum ;
	int sum ;
	int store;
	int epown;
	int fnum;


	cout << "What number do you want to start with? ";
	cin >> startnum;

	cout << endl << " What about End Number? " ;
	cin >> endnum;
	fnum = endnum -2 ;
	
	// checks if start number is less then end number
	if ( startnum < endnum )
	{
		for (int i = startnum ; i <= endnum; i++ )
		{
			store = i;
			epown = i * store;
			cout << endl ; 
		cout << store << "^2 " ;
		cout << "+ " ;
		} // end loop 

	//Prints answer 
		cout << "= " << epown << endl ;
	}// End of if

	}// End of Main