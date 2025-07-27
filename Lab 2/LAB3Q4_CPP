


/*  *Author: Demetrius Johnson
	*Creation Date: 29 Jan. 2020
	*Modification Date: 29 Jan. 2020
	*Purpose: Evaluates the roots of a quadratic function given coefficients a, b, and c from the quadratic formula

	// LAB 3 - CIS 150 - MEECH.cpp

	Question 4: 

	*Prompt the user to input 3 doubles, a, b and c.  
	*The 3 doubles will represent the coefficients in the quadratic equation ax^2 + bx + c  = 0.  
	*Print out the solutions (if any) of the quadratic equation. 
	*If no root exists (this happens if a == 0, or b^2 <4ac) print the message "No real root".

	Sample input/ user entries:
	//Enter a, b and c which represent the coefficients in the quadratic equation ax^2 + bx + c = 0 : 1 0 -8 	
		Root1 is  2.828427
		Root2 is -2.828422
	//Enter a, b and c which represent the coefficients in the quadratic equation ax^2 + bx + c = 0 : 0 3 5	
		No real root
	//Enter a, b and c which represent the coefficients in the quadratic equation ax^2 + bx + c = 0 : 1 5 -5	
		Root1 is 0.854101
		Root2 is -5.854101



*/


#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double a, b, c, discriminant, Bsquared, rootONE, rootTWO;

	cout << "Hello, this is a program that evaluates the roots of a quadratic function" << endl
		 << "given coefficients a, b, and c from the Quadratic Formula." << endl << endl;

	cout << "The Quadratic formula:" << endl
		 << "x = {-b (+/-)sqrt[(b^2) - 4ac]}/2a" << endl << endl
		 << "True only when:" << endl
		 << "a(x^2) + bx + c = 0, and a, b, and c are constants; a != 0" << endl << endl;

	cout << "Please enter 3 values; one for a, b, and c, separated by spaces (for example: A_B_C): ";
	cin >> a >> b >> c;

	if (a == 0 || pow(b, 2) < 4 * a * c)
	{
		cout << endl << "Sorry, but if a = 0 or b^2 < 4ac, there are NO REAL ROOTS." << endl << endl; 
	}
	else
	{
		Bsquared = pow(b, 2);
		discriminant = Bsquared - (4 * a * c);
		rootONE = (-b + sqrt(discriminant)) / (2 * a);
		rootTWO = (-b - sqrt(discriminant)) / (2 * a);
		cout << "Root1 is: " << rootONE << endl;
		cout << "Root2 is: " << rootTWO << endl << endl;
	}

	cout << "Thank you for Rooting with us(:" << endl;

	system("pause");
	return 0;
}

