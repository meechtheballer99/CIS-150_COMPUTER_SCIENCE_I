


/*  *Author: Demetrius Johnson
	*Creation Date: 22 Jan. 2020
	*Modification Date: 22 Jan. 2020
	*Purpose: Takes number of different coins as input, computes, and prints total dollar value.

	// LAB 2 - CIS 150 --MEECH.cpp

	Question 1:

	Create a new project.  Copy and paste the program coins.cpp (given below). Compile your project and fix any errors found during the compilation process.

	//  coins.cpp
	//  From Ch2 of Big C++
	//  Takes number of different coins as input, computes, and prints total dollar value

	//  coins.cpp
	//  From Ch2 of Big C++
	//  Takes number of different coins as input, computes, and prints total dollar valu
*/


#include <iostream>
using namespace std;

const double PENNY_VALUE = 0.01;
const double NICKEL_VALUE = 0.05;
const double DIME_VALUE = 0.10;
const double QUARTER_VALUE = 0.25;

int main()
{
	
	int pennies, nickels, dimes, quarters, dollars;			// declaring variables corresponding to the number of different types of coins
	double total = 0.0;

	cout << "How many pennies do you have? ";
	cin >> pennies;
	
	total = total + pennies * PENNY_VALUE;					// update total now when adding pennies
	cout << "Your current runnning total is " << total << endl;

	cout << "How many nickels do you have? ";
	cin >> nickels;
	
	total = total + nickels * NICKEL_VALUE;					// update total now when adding nickels
	cout << "Your current runnning total is " << total << endl;

	cout << "How many dimes do you have? ";
	cin >> dimes;
	
	total = total + dimes * DIME_VALUE;						// update total now when adding dimes
	cout << "Your current runnning total is " << total << endl;

	cout << "How many quarters do you have? ";
	cin >> quarters;
		
	total = total + quarters * QUARTER_VALUE;				// update total now when adding quarters
	cout << "Your current runnning total is " << total << endl;

	cout << "How many dollar coins do you have? ";
	cin >> dollars;
	
	total = total + dollars;								// update total now when adding 
	cout << "Your current runnning total is " << total << endl;
	
	cout << "Your final, total value = " << total << "\n";	// Final value of "total" from the sum of all pennies, nickles, dimes, quarters, and dollars 
	cout << "Thank you for adding with us (: \n";

	return 0;
}
