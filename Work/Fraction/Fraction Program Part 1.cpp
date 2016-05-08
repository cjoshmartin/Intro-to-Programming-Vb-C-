//Josh Martin
// Fraction Program Part 1 
// Period 2
// 3/11/2014
//  Add Fractions together


#include "stdafx.h"
#include <iostream>

using namespace std;

// store top and bottom of fractions 
struct Fraction 
{
	int top;
	int bottom;
	double dec;
};

int main()
{
	//Naming varibles
	Fraction f1 ;
	Fraction f2;
	Fraction f3;
	


	//Ask for top and bottom of the first fraction
	cout << "First Fraction, Top? ";  
	cin >> f1.top; 
	cout << " Bottom? " << f1.top << "/" << "? ";
	cin >> f1.bottom;
	
	f1.dec = (double)f1.top / f1.bottom ;


	//shows fraction
	cout << f1.top << "/" << f1.bottom << " Equivalent to "<< f1.dec << endl;
	
	// checks if bottom to see if 0 is in the bottom
	if (f1.bottom == 0 )
	{
		cout << " Sorry you can't have 0 in the bottom " << endl;
		return 0;
	}
	
		//Ask for top and bottom of the Second fraction
	cout << "second Fraction, Top ?" ;
	cin >> f2.top;
	cout << endl << "Bottom? " << f2.top << "/" << "? "; 
	cin >> f2.bottom ;

	f2.dec = (double)f2.top / f2.bottom ;


	//shows fraction
	cout << f2.top << "/"<< f2.bottom << " Equivalent to "<< f2.dec << endl;

	// checks if bottom to see if 0 is in the bottom
	if (f2.bottom == 0 )
	{
		cout << " Sorry you can't have 0 in the bottom " << endl;
		return 0;
	}

	//cout<< endl << "Plus, subtract, divide, Multipe ? " ;
	//cin >> sinb; 
	


	//if ( sinb == '+' || sinb == 'P' || sinb == 'p' )
	//{
	// if the bottoms are equal it adds them
		if ( f1.bottom == f2.bottom )
		{
			f3.top =  f1.top + f2.top;
			f3.bottom = f1.bottom;
			cout << f1.top << "/" << f1.bottom << " + " << f2.top << "/"<< f2.bottom << " = " << f3.top << "/" << f3.bottom << endl;
		}
		else
			//else it 
		{
		f3.top = f1.top * f2.bottom  + f2.top * f1.bottom;
		f3.bottom = f1.bottom * f2.bottom;
		cout <<" With a common denominator"<< endl;
		cout << f1.top << "/" << f1.bottom << " + " << f2.top << "/"<< f2.bottom << " = " << f3.top << "/" << f3.bottom << endl;
		}// End of If 
	//}


}  // end of main