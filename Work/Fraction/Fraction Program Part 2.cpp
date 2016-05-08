//Josh Martin
// Fraction Program Part 2 
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
	int wholenum ; 

};

int main()
{
	//Naming varibles
	Fraction f1 ;
	Fraction f2;
	Fraction f3;
	char sinb;
	

	//Ask for top and bottom of the first fraction and Whole Number
	cout << " Whole Number? " ;
	cin >> f1.wholenum ;
	cout << endl << "First Fraction, Top? ";  
	cin >> f1.top; 
	cout << " Bottom? " << f1.top << "/" << "? ";
	cin >> f1.bottom;




	f1.dec = (double)f1.top / f1.bottom ;
	
			// Check to see numerator is greater( or Equal to ) then denamotar 
	if (f1.top > f1.bottom )
	{
		f1.wholenum += f1.top / f1.bottom;
		f1.top = f1.top % f1.bottom; 

	}
	else if ( f1.top = f1.bottom)
	{
		f1.wholenum += f1.top / f1.bottom;
		f1.top = f1.top % f1.bottom; 
	}

	// checks if bottom to see if 0 is in the bottom
	if (f1.bottom == 0 )
	{
		f1.bottom = 1;
	}
	else if (f1.top == 0 && f1.wholenum == 0)
		{
		cout << "= 0"<< endl;
	}
	else if ( f1.top == 0)
	{ 
		cout << f1.wholenum << endl;
	}
	else if ( f1.wholenum == 0)
	{ 
		cout << f1.top << "/"<< f1.bottom << " Equivalent to "<< f1.dec << endl;
	}

	else {
 //shows fraction
	cout << f1.wholenum <<" "<< f1.top << "/" << f1.bottom << " Equivalent to "<< f1.dec << endl;
	}// end of  If


		//Ask for top and bottom of the Second fraction
	cout << " Second Whole Number? " ;
	cin >> f2.wholenum ;
	cout << endl << "second Fraction, Top ?" ;
	cin >> f2.top;
	cout << endl << "Bottom? " << f2.top << "/" << "? "; 
	cin >> f2.bottom ;

	f2.dec = (double)f2.top / f2.bottom ;

		// Check to see numerator is greater( or Equal to ) then denamotar 
	if (f2.top > f2.bottom )
	{
		f2.wholenum += f2.top / f2.bottom;
		f2.top = f2.top % f2.bottom; 

	}
	else if ( f2.top = f2.bottom)
	{
		f2.wholenum += f2.top / f2.bottom;
		f2.top = f2.top % f2.bottom; 
	}//end of if 


	// checks if bottom to see if 0 is in the bottom
	if (f2.bottom == 0 )
	{
		f2.bottom = 1;
	}

	if (f2.top == 0 && f2.wholenum == 0 )
		{
		cout << "= 0"<< endl;
	}
	else if ( f2.top == 0)
	{ 
		cout << f2.wholenum<< endl;
	}
	else if ( f2.wholenum == 0)
	{ 
		cout << f2.top << "/"<< f2.bottom << " Equivalent to "<< f2.dec << endl;
	}
	else {
//shows fraction
	cout << f2.wholenum <<" "<< f2.top << "/"<< f2.bottom << " Equivalent to "<< f2.dec << endl;
	} // end of if

	// Check to see if the fraction are =,  < , >
	f1.dec += f1.wholenum;
	f2.dec += f2.wholenum;

	if ( f1.dec > f2.dec )
	{
		cout << f1.wholenum << " "<< f1.top << "/" << f1.bottom << " > " << f2.wholenum <<" "<< f2.top <<"/" << f2.bottom << endl ;
	
	}
	else if ( f1.dec < f2.dec )
	{
		cout << f1.wholenum << " "<< f1.top << "/" << f1.bottom << " < " << f2.wholenum <<" "<< f2.top <<"/" << f2.bottom << endl ;
	}
	else 
	{
		cout << f1.wholenum << " "<< f1.top << "/" << f1.bottom << " = " << f2.wholenum <<" "<< f2.top <<"/" << f2.bottom << endl ;
	}
	
	//Adds use if Add or Multipe
	cout<< endl << "Add or Multipe ? " ;
	cin >> sinb; 
if ( sinb == '+' || sinb == 'P' || sinb == 'p' )
	{
		f3.wholenum = f1.wholenum + f2.wholenum;
	// if the bottoms are equal it adds them
		if ( f1.bottom == f2.bottom )
		{
			f3.top =  f1.top + f2.top;
			f3.bottom = f1.bottom;
			cout << f1.wholenum << " " << f1.top << "/" << f1.bottom << " + " << f2.wholenum << " " << f2.top << "/" << f2.bottom << " = " << f3.wholenum << " " << f3.top << "/" << f3.bottom << endl;
		}
		else
			//else it mutipes the Bottom 
		{
		f3.top = f1.top * f2.bottom  + f2.top * f1.bottom;
		f3.bottom = f1.bottom * f2.bottom;
		cout <<" With a common denominator of:"<< f3.bottom << endl;
		cout << f1.wholenum <<" "<<  f1.top << "/" << f1.bottom << " + " << f2.wholenum <<" "<< f2.top << "/"<< f2.bottom << " = " <<f3.wholenum << " "<< f3.top << "/" << f3.bottom << endl;
		}
	} 
else if (sinb == '*' || sinb == 'M' || sinb == 'm')
	{
		//Mutipes Fractions
		f3.top = f1.top * f2.top;
		f3.bottom = f1.bottom * f2.bottom;
		f3.wholenum = f1.wholenum * f2.wholenum;
		
		cout << f1.wholenum << " " << f1.top << "/" << f1.bottom << " * " << f2.wholenum << " " << f2.top << "/" << f2.bottom << " = " << f3.wholenum << " " << f3.top << "/" << f3.bottom << endl;
	}


}  // end of main