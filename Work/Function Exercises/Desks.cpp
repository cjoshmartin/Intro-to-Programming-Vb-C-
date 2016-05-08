//Josh Martin
// Function Exercises
// Period 2
// 5/20/2014
//   calculates the cost of building a desk


#include "stdafx.h"
#include <iostream>


using namespace std;


int main()
{
	//naming varables 
	int numofdrawers, cal;
	char wood;

	//naming functions
	int DeskNumber();
	char TypeofDesk();
	int caloed (int , char);
	void finalamount(int); 

	//Running Functions
	numofdrawers = DeskNumber();
	wood = TypeofDesk();
	cal = caloed ( numofdrawers , wood ) ;
	finalamount (cal);


}// end of main

//Get how many drawers are in the desk
int DeskNumber()
{
	int one;
	cout << "How Many Drawers are in the Desk? ";
	cin >> one;
	return one;
} // end of DeskNumber
 
// asking what type of desk
char TypeofDesk()
{
	char type;
	cout << "what type of wood would you like to use?";
	cin >> type;
	return type;
} // end of TypeofDesk
 
// Caulating the price
int caloed ( int numofdrawers , char wood)
{
	int cals;
		if (wood == 'p' || wood == 'P')
	{
		cals = numofdrawers * 30;
		cals += 100;
	}

	else if (wood == 'o' || wood == 'O')
	{
		cals = numofdrawers * 30;
		cals += 140 ;
	}
	else 
	{
		cals = numofdrawers * 30;
		cals += 180;
	}
	return cals;
	
} // end of caloed


//showing price
void finalamount (int end)
{
	cout <<  "Final Price: $" << end << endl;
}// end of finalamount
   