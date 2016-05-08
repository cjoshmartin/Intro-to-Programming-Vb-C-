// Pizza Project

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

int NumberofPeople = 0;
int MinNumber = 0;
int leftOver = 0;


cout << endl ;
cout << " Please enter the number of People coming ";
cin >> NumberofPeople;

MinNumber = ceil(NumberofPeople * 3 / 8.0);
leftOver = MinNumber * 8 - NumberofPeople * 3 ;

cout << "You Will Need "<< MinNumber << " Of Pizzas. " <<  endl ;
cout << "With " << leftOver << " slices leftover." << endl;

}