//Josh Martin
// Exercise #2 - For Statement Exercises
// Period 2
// 2/28/2014
// will print “I LOVE FRIDAYS!” that many times. 


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//name varables
	int num;
	int i = 0 ;

	// geting num
	cout << " Pick a Number between 1- 100...... "; 
	cin >> num;

	// running loop
	for ( i = 1; i <= num ; i+=1 )
	{
		cout << "I LOVE FRIDAYS!" <<endl;

	}
	cout<< endl << "thank you, have a nice day" << endl; 
}//end of main