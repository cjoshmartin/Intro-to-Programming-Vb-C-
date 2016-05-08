//Josh Martin
// Exercise #5 - While Loop
// Period 2
// 3/7/2014
//  Charts of x-Squared 
 


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//Naming Varbles
	int x = 0;
	int xsquared = 0;
	int en;
	 
	cout << " What do you want start with? " ; 
	cin >> x; 

	cout << endl<< " End with? " ;
	cin >> en; 

	// Names Coulmns 
	cout <<"x"<<"     "<<"X-squared" <<endl ; 

	// Makes chart
	while ( x <= en )
	{
		cout <<x<<"     "<<xsquared <<endl ; 
		x++ ;
		xsquared = x *x ; 
		


	}

} // End of Main 