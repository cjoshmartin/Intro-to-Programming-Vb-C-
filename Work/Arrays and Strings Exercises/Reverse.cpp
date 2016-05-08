//Josh Martin
// Arrays and Strings Exercises
// Period 2
// 3/26/2014
//  Add Fractions together


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 8;
	int num[8];


	cout << "enter a Number.... ";
		
	for (int i = 0; i < SIZE; i++)
	{
		cout << "enter #" << (i + 1) << " " ;
		cin >> num[i];
		cout << endl;

		}

	cout << endl;



	cout << endl << num[7] << endl << num[6] << endl << num[5] << endl << num[4] << endl << num[3] << endl << num[2] << endl << num[1] << endl << num[0] << endl;

}// End of Main