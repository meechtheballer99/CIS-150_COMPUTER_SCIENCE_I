


/*
	*Author: Demetrius Johnson
	*Creation Date: 12 Feb. 2020
	*Modification Date: 12 Feb. 2020
	*Purpose: Computes and displays Max and Min integer out of any set of inputs of integers

	// LAB 5 - CIS 150 - MEECH.cpp

	Question 2
	-------------------------
	Write a program that displays the following menu. 
	Your program should include two functions that return the minimum and maximum.
	Do not use cout statements in your function. 
	The cout statements must be done in main based on the return value from each function.

	Hint: the main program should use a "do while" (guarantees you’ll do at least one pass;
	with only while it means you could not do any action at all if you don’t meet condition initially!) loop to display the menu.

	---------------------------------------------------------------------------------------------------------
	WELCOME -- select one of the following choices below by entering letter A, B, or C (not case sensitive):
	---------------------------------------------------------------------------------------------------------

	A.) Maximum of two integers – separate function
	B.) Minimum of two integers – separate function
	C.) Quit
	---------------------------------------------------------------------------------------------------------


	EXAMPLE: 
	Please select an operation: A

	Please provide the first number: 3
	Please provide the second number: 5
	The maximum of 3 and 5 is 5


*/


#include <iostream>
using namespace std;


//-------------function declarations-------------------------//

void MenuWelcome();
void MenuMAX();
void MenuMIN();
int twoIntMAX(int x, int y);
int twoIntMIN(int x, int y);
//-------------function declarations-------------------------//


int main()
{
	char userChoice;

	do {
		MenuWelcome();

		cout << "Input your selection here: ";
		cin >> userChoice;
		switch (userChoice) {
		case 'a':
		case 'A':
			MenuMAX();
			break;
		case 'b':
		case 'B':
			MenuMIN();
			break;
		case 'c':
		case 'C':
			cout << "\nYou have selected to exit the program. Thank you for ranking with us(:. Good bye...\n\n";
			break;
		default:
			cout << "\nPlease enter a valid option from the menu.\n\n";
			system("pause\n");
			break;
		}
	} while (userChoice != 'c' && userChoice != 'C');

	
	

	system("pause");
	return (0);
	}



//----------------------function definitions below this line ------------------------------------//

void MenuWelcome()
{
	cout << "---------------------------------------------------------------------------------------------------------------\n" <<
			" WELCOME -- select one of the following menu choices below by entering letter A, B, or C (not case sensitive)\n" <<
			"---------------------------------------------------------------------------------------------------------------\n" <<

			"A.) Maximum of two integers\n" <<
			"B.) Minimum of two integers\n" <<
			"C.) Quit					\n" <<
			"-----------------------------------------------------------------------------------------------------------\n\n";

	return;
}

void MenuMAX(){

	int firstInt, secondInt, intMax;

	cout << "\nOPTION 'A' selected: Maximum of two integers\n\n";
	cout << "Please input your first integer: ";
	cin >> firstInt;
	cout << "Please input your second integer: ";
	cin >> secondInt;
	if (firstInt == secondInt) {
		cout << "\nThe two numbers are equal.\n\n";
		system("pause\n");
	}
	else {
		intMax = twoIntMAX(firstInt, secondInt);
		cout << "\nThe largest integer of your two integer inputs is: " << intMax << "\n\n";
		system("pause\n");
		return;
	}
}

void MenuMIN(){

	int firstInt, secondInt, intMin;

	cout << "\nOPTION 'B' selected: Minimum of two integers\n\n";
	cout << "Please input your first integer: ";
	cin >> firstInt;
	cout << "Please input your second integer: ";
	cin >> secondInt;
	if (firstInt == secondInt) {
		cout << "\nThe two numbers are equal.\n\n";
		system("pause\n");
	}
	else {
		intMin = twoIntMIN(firstInt, secondInt);
		cout << "\nThe smallest integer of your two integer inputs is: " << intMin << "\n\n";
		system("pause\n");
		return;
	}
}

int twoIntMAX(int x, int y){

	int z;

	if (x > y) {

		z = x;
	}
	else {
		z = y;
		return(z);
	}

	return(z);
}

int twoIntMIN(int x, int y){

	int z;
	if (x < y) {

		z = x;
	}
	else {
		z = y;
	}


	return(z);
}




