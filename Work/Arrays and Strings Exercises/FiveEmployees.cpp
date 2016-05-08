//Josh Martin
// Arrays and Strings Exercises
// Period 2
// 5/8/2014
//  values representing store sales


#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct Employee 
{
	string fname;
	string lname;
	double rate;
};


int main()
{
	const int SIZE = 5;
	Employee emp[SIZE];
	char awn;
	int empoy;


	for (int i = 0; i < SIZE; i++)
	{
		cout << " Enter Employee #" << (i + 1) <<" First Name: " ; 
			cin  >> emp[i].fname;
		cout << endl << " Enter Employee #" << (i + 1) <<" Last Name: " ; 
			cin >> emp[i].lname;
		cout << endl << " Enter Employee #" << (i + 1) <<" Rate: " ; 
		cin >> emp[i].rate;
	} // end of loop
	
		cout << "Would you like to pick a Employee (1-5) ";
		cin >> empoy;
		empoy -= 1; 
		cout << endl <<  emp[empoy].fname <<" " << emp[empoy].lname << " $" << emp[empoy].rate << endl;


}// End of Main