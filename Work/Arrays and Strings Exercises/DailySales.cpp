//Josh Martin
// Arrays and Strings Exercises
// Period 2
// 5/8/2014
//  values representing store sales


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// naming values
	double high;
	double low;
	const int SIZE = 7;
	double num[SIZE];

	//Get the sale numbers
		for (int i = 0; i < SIZE; i++)
	{
		cout << "store sales #" << (i + 1) << " " ;
		cin >> num[i];
		cout << endl;

		}

	cout << endl;

	//Showing the sales numbers
	cout << "The sales  are..." << endl;

	high = num[0];
	low = num[0];

	for (int i = 0; i < SIZE; i++)
	{
		cout <<"$" << num[i] << " " ;
		if (num[i] > high)
		{
			high = num[i];
		}
		if (num[i] < low)
		{
			low = num[i];
		}
	}
	cout << endl; 
	// showing th highest and lowest values
	cout << "the highest value is " << high << " and the lowest is " << low << endl;
	
		
			
		

}// End of Main