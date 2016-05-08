//Josh Martin
// Exercise #1 - For Statement Exercises
// Period 2
// 2/28/2014
// find the sum of the odd numbers from 1 to 101. 



#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i;
    int sum = 0;
	//starts for loop
	for ( i = 1; i <= 101; i += 2)
	{
		//adds up number from 1-101
		sum += i;
	}
	cout << endl << sum << endl; 


}//end of code