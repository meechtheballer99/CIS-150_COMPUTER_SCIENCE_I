


/*  *Author: Demetrius Johnson
	*Creation Date: 29 Jan. 2020
	*Modification Date: 29 Jan. 2020
	*Purpose: Use "step over" function in cpp

	// LAB 3 - CIS 150 - MEECH.cpp

	Question 1:

	1)	Use the “step over” option to trace the execution of the program for an input value of 15. 
		Copy and paste 2 screenshots showing the execution trace inside both the true and false sections of the ‘if’ statement for this value.
	2)	Repeat for input value 14.

*/


#include <iostream>

using namespace std;

int main() {
	int x, y;

	cout << "Please enter an integer value : ";
	cin >> x;

 	if (x >= 15)
	{
		x++;
		y = x + x - 7;
	}
	else
	{
		x = x * 2;
		y = x * x + 7;
	}

	cout << "x = " << x << " y = " << y << endl;

	system("pause");
	return 0;
}

