


/*  
	*Author: Demetrius Johnson
	*Creation Date: 19 Feb. 2020
	*Modification Date: 19 Feb. 2020
	*Purpose: Outputs a C shape of specified user input character

	// LAB 6 - CIS 150 - MEECH.cpp

	Question 2
	-------------------------
	

	Write a program that prompts users to enter:

	o	The character to use (any character besides *) //don't use this for your test cases
	o	The width of the display
	o	The height of the display

	to produce a C shape.  This is an example for width of 10 and height of 9

	**********
	*        
	*        
	*        
	*        
	*        
	*        
	*        
	**********

	You must use separate functions to display the vertical and the horizontal lines.


	*CALL TO HORZ, THEN VERT, THEN HORZ FUNCTION AGAIN.
	*BE SURE TO DO HEIGHT MINUS TWO SINCE TWO HORZ FUNCTIONS ACCOUNT FOR 2 OF THE HIEGHT UNITS



*/


#include <iostream>
using namespace std;

//-------------function declarations-------------------------//
void calc_C_Width(int width, char & userChar);
void calc_C_Height(int height, char & userChar);
void menuONE();
//-------------function declarations-------------------------//

int main()
{
	int C_Hght, C_Wdth;
	char userChar, userChoice;
	
	do {
		menuONE();
		cout << "Select a menu option: ";
		cin >> userChoice;


		switch (userChoice) {

		case 'a':
		case 'A':
			cout << "\nYou have selected option 'A' (output 'C'):\n";
			cout << "Enter a character to be used in a capital letter 'C': ";
			cin >> userChar;
			cout << "Enter a width for the letter 'C': ";
			cin >> C_Wdth;
			cout << "Enter a height for the letter 'C': ";
			cin >> C_Hght;
			if (C_Hght < 0 || C_Wdth < 0) {
				cout << "Invalid height entered.\n" << endl;
			}
			else {
				cout << endl << endl;
				calc_C_Width(C_Wdth, userChar);
				cout << endl;
				calc_C_Height(C_Hght, userChar);
				calc_C_Width(C_Wdth, userChar);
				cout << endl << endl;
			}
			break;
		case 'b':
		case 'B':
			cout << "You have selected the option to exit the program. Thank you for C-ing with us(:\n";
			break;
		}
	} while ((userChoice != 'b') && (userChoice != 'B'));


	system("pause");
	return 0;
}


//----------------------function definitions below this line ------------------------------------//

void calc_C_Width(int width, char & userChar) {
	for (; width > 0; width--) {
		cout << userChar;

	}
	return;
}


void calc_C_Height(int height, char & userChar) {

	for (height = height - 2; height > 0; height--) {
		cout << userChar << endl;
	}
	return;
}

void menuONE() {
	cout << "----------------------------------WELCOME-----------------------------------" << endl;
	cout << "This program outputs a composition the capital letter 'C'.\n";
	cout << "Letter 'C' will be output with the user's desired character, length, and width\n\n";
	cout << "MENU OPTIONS: A) OUTPUT 'C'            \n              B) EXIT PROGRAM \n";
	cout << "------------------------------------------------------------------------------\n";
	return;
}