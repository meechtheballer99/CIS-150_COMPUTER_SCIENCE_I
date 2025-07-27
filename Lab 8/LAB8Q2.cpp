/*
	*Author: Demetrius Johnson
	*Creation Date: 11 Mar. 2020
	*Modification Date: 11 Mar. 2020
	*Purpose: The program prompts the user for an integer value then calls a function to find out if the value exists in the array

	// LAB 8 - CIS 150 - MEECH.cpp

	Question 2
	-------------------------

	Write the following function definition:

	// Author:
	// Creation Date:
	// Last Modification Date:
	// Purpose: Search for a value V in the array a of integers
	//          Return the position of V in the array if V is found
	//          Otherwise (V not found), return -1

	int searchValueInArray (int V, int a[], int size)
	{

	// To be completed by student

	}



	Write a main program that includes the following array declaration:

	const int SIZE = 8;
	int array [SIZE] = {10, 60, 20, 50, 30, 40, -10, 0};

	The program prompts the user for an integer value
	then calls the function to find out if the value exists in the array.
	--------------------------------------------------------------------------
	Example 1:

	Please enter an integer value: 20
	The value 20 exists in position 2 of the array


	Example 2:
	Please enter an integer value: 35
	Sorry, the array does not contain the value 35
	-------------------------------------------------------------------------

*/


#include <iostream>
#include <limits>
using namespace std;


//-------------function declarations-------------------------//
void MenuONE();
int searchValueInArray(int V, int a[], int size);

//-------------function declarations-------------------------//


int main()
{
	MenuONE();
	const int SIZE = 8;
	int array[SIZE] = { 10, 60, 20, 50, 30, 40, -10, 0 };
	int userVal;
	cout << "Please input an integer value: ";
	cin >> userVal;
	if (searchValueInArray(userVal, array, SIZE) != -1)
		cout << "\nThe value " << userVal << " exists in position " << searchValueInArray(userVal, array, SIZE) << " of the array.\n" << endl;
	else
		cout << "\nSorry, the value " << userVal << " does not exists in the array.\n" << endl;
	system("pause");
	return 0;
}



//----------------------function definitions below this line ------------------------------------//


void MenuONE() {

	cout << "\n---------------------------------------WELCOME----------------------------------------------------------";
	cout << "\nThis program prompts the user for an integer value \n"
		<< "then calls a function to find out if the value exists in the array:\n\n"
		<< "int array [SIZE] = {10, 60, 20, 50, 30, 40, -10, 0}; \n\n";
}
int searchValueInArray(int V, int a[], int arraySize)
{

	for (int arrayPosition = 0; arrayPosition < arraySize; arrayPosition++) {

		if (a[arrayPosition] == V)
			return (arrayPosition);

	}

	return (-1);
}
