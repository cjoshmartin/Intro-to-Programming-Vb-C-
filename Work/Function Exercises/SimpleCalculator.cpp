//Josh Martin
// Arrays and Strings Exercises
// Period 2
// 5/9/2014
//  calculate numbers


#include "stdafx.h"
#include <iostream>


using namespace std;



int main()
{
	int num1, num2; 
	char smb ;
	void add(int,int);
	void subtracts(int, int);
	void Multipe(int, int);
	
	// getting the numbers
	cout << "what is your first number? ";
	cin >> num1 ;

	cout << endl <<  " what is the Second Number?" ;
	cin >> num2;

	// checking for + or - or * or / 

	cout << endl << " what do you want to do?(symbols only please. ex: +) ? " ;
	cin >> smb ;

	// adding
	if ( smb == '+' )
	{
		add(num1, num2);
	}
	
	//subtraction 
	else if (smb == '-' )
	{
		subtracts(num1, num2);
	}

	// Multipe 
	else if (smb == '*' )
	{
		Multipe(num1, num2);

	}


}// end of main


void add(int n1, int n2)
{
	int awn;
	// doing the math
	awn = n1 + n2;

	// showing the answer
	cout << n1 << "+" << n2 << "=" << awn << endl;


}// end of Add

void subtracts(int n1, int n2)
{
	int awn;
	awn = n1 - n2;

	// showing the answer
	cout << n1 << "-" << n2 << "=" << awn << endl;


}// end of Subtraction

void Multipe(int n1, int n2)
{
	int awn;
	awn = n1 * n2;

	// showing the answer
	cout << n1 << "*" << n2 << "=" << awn << endl;


}// end of Multipe 