


/*  
	*Author: Demetrius Johnson
	*Creation Date: 18 Mar. 2020
	*Modification Date: 18 Mar. 2020
	*Purpose: Display sum of elements of a 2D array and tell if it contains a given user value

	// LAB 9 - CIS 150 - MEECH.cpp

	Question 1
	-------------------------

	Write the following two functions. 

	The first function accepts as input a two-dimensional array of integers. It returns two results: the sum of the elements of the array and the average.

	The second function accepts as input a two-dimensional array of integers and integer value V. It returns true if the value V is found in the array, false otherwise.

	Write a main program that declares and initializes the following array:

	const int ROWS = 4;
	const int COLS = 4;

	int box[ROWS][COLS] = {{11,8,0,-4}, {74,5,13,42}, {29,-7,45,4}, {100,23,-3,61}};

	Your program needs to call both functions and display appropriate messages from main.

*/


#include <iostream>
#include <limits>
using namespace std;
const int ROWS = 4;
const int COLS = 4;  //global variables for array row and column sizes


//-------------function declarations-------------------------//
void MenuONE();
int arrSumAndAvg_2D(int& sumReference, int inputArray[ROWS][COLS]);
void findVal_2D_Array(int& userVal, int inputArray[ROWS][COLS]);
//-------------function declarations-------------------------//


int main()
{
	MenuONE();
	

	int box[ROWS][COLS] = { {11,8,0,-4}, {74,5,13,42}, {29,-7,45,4}, {100,23,-3,61} }; //assigned array to run the functions on
	int arraySum = 0, arrayAvg = 0, userVal;  //make sum variable for reference, 

	arrayAvg = arrSumAndAvg_2D(arraySum, box); //use array sum and average function to change arraySum varible (by reference) and solve for arrayAvg
	cout << endl << "The SUM of the array is: " << arraySum << endl;
	cout << "The AVERAGE of the array is: " << arrayAvg << endl;
	cout << endl << endl << endl;
	cout << "Please input a value to see if it is found in the 2D array. Will return TRUE if found and FALSE if not found.]\n";
	cout << "Input value here: ";
	cin >> userVal;
	cout << endl << "User input value (" << userVal << ") found?: ";
	findVal_2D_Array(userVal, box); //use find value function to search array
	cout << endl << endl;
	cout << "Thank you for 2D-arraying with us(: \n\n";
	system ("pause");
	return 0;
}



//----------------------function definitions below this line ------------------------------------//


void MenuONE() {

	cout << "\n---------------------------------------WELCOME----------------------------------------------------------";
	cout << "\nThis program displays the sum and average of the 2D array:\n\n";
	cout << "int box[ROWS][COLS] = { {11,8,0,-4}, {74,5,13,42}, {29,-7,45,4}, {100,23,-3,61} }\n\n";
	cout << "It will also prompt the user to input a value to see if it is found in the array.\n\n";
}


/*
*Author: Demetrius Johnson
* Creation Date : 26 Mar. 2020
* Modification Date : 26 Mar. 2020
* Purpose : Find the sum and return average of 2D array
*/
int arrSumAndAvg_2D(int& sumReference, int inputArray[ROWS][COLS]){


	for (int arrayCountROWS = 0; arrayCountROWS < ROWS; arrayCountROWS++) {//outter look to go through each row in 2D array
		for (int arrayCountCOLS = 0; arrayCountCOLS < COLS; arrayCountCOLS++) {//inner loup to go through each column of each row in 2D array

			sumReference += inputArray[arrayCountROWS][arrayCountCOLS]; //used sumReference variable to reference a sum variable in main


		}
	}

	return (sumReference / (ROWS * COLS)); //take sum variable and divide it by total elements in the array which is equal to ROWS*COLS
}





/*
*Author: Demetrius Johnson
* Creation Date : 26 Mar. 2020
* Modification Date : 26 Mar. 2020
* Purpose : See if a given value is in a 2D array
*/
void findVal_2D_Array(int& userVal, int inputArray[ROWS][COLS]) {


	bool valFound = false;
	
	for (int arrayCountROWS = 0; arrayCountROWS < ROWS; arrayCountROWS++) { //outter look to go through each row in 2D array
		for (int arrayCountCOLS = 0; arrayCountCOLS < COLS; arrayCountCOLS++) { //inner loup to go through each column of each row in 2D array

			if (inputArray[arrayCountROWS][arrayCountCOLS] == userVal) {

				valFound = true;
				arrayCountROWS = ROWS;			//if value is true, break out of this current loop using a "break", then set value of count variable for the outer-loop so that it will break out of that loop as well and not execute further iterations.
				break;
			}


		}
	}
	if (valFound == true) //if value found, output true, if not - output fale
		cout << "TRUE";
	else
		cout << "FALSE";

}