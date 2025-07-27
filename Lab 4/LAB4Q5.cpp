

/*  *Author: Demetrius Johnson
	*Creation Date: 05 Feb. 2020
	*Modification Date: 05 Feb. 2020
	*Purpose: Print a triangle of Nth height provided by user input for N (N is for height of triangle)

	// LAB 4 - CIS 150 - MEECH.cpp

	Question 5

	Prompt the user for a character and the height of a right triangle. 
	Then, print a triangle of that height using the symbol entered.  
	The Nth line of the triangle should contain N copies of the symbol. 
	Validate that the height entered is > 0.

	Hint: Use nested loops

	Example Input					Corresponding output
	------------------------       ----------------------
	Enter a character : #

	Enter a height : 4				#
									##
									###
									####



*/


#include <iostream>		//input-output stream allowed



using namespace std;

int main()
{
	int triHght, triHtDECREMENT, triHtAdjHoldVal;
	char userChar;

	cout << "Enter a character to be used in a triangle: ";
	cin >> userChar;
	cout << endl << "Enter the height of for the generated right triangle of specified character: ";
	cin >> triHght;
	triHtDECREMENT = triHght;
	if (triHght <= 0) {
		cout << "Invalid height entered" << endl;
	}
	else {
		for (int countONE = triHght; countONE > 0; countONE = triHght--) {

			cout << endl;

			triHtAdjHoldVal = triHtDECREMENT - triHght;								 //triangle height adjustment hold value; as triHght decrements, adjustment value gets larger thus allowing for triangle to get larger as you go down

			for (int countTWO = 0; countTWO < triHtAdjHoldVal; countTWO++) {		//use 'for' loop to generate the entered value of desired height of triangle.

				cout << userChar;

			}
		}
	}
	
	cout << endl << "Thank you for triangling with us, please feel free to try another combination(:" << endl;
	

	system("pause");
	return 0;
}