//Josh Martin
// Exercise #3 - For Statement Exercises
// Period 2
// 2/28/2014
// Make a Table of numbers *10


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// Naming varibles
	int i = 0; 
	int a = 0;
	int num;
	int sum  ;

	// Ask for start
	cout << "What Number do you want to start with ? ";
	cin >> i;

	// asked for end
	cout << endl << "What do you want to end with ? ";
	cin >> a;

	// sets collums 
	 cout << "Number" <<"       " << "Number*10" << "       "<< "equals" << endl; 
 // Starts loop
	 for ( i =1; i <= a; i += 1)
 {
	 num = i * 10;
	 sum = i + num; 
	 cout << i <<"              " << num <<"             "<< sum << endl; 
 }
} //end Main