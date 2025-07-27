


/*
	*Author: Demetrius Johnson
	*Creation Date: 12 Feb. 2020
	*Modification Date: 12 Feb. 2020
	*Purpose: Prompts users for N integers and determines and displays the Max and Min Integer value

	// LAB 5 - CIS 150 - MEECH.cpp

	Question 4
	-------------------------
	
	Write a program that prompts users for N integers
	and determines and displays the integer 
	with the highest / lowest value – use separate functions 
	to return the highest / lowest value.

	DON’T USE COUT IN FUNCTION, COUT SHOULD BE DONE IN MAIN ONLY FOR DISPLAY.


*/


#include <iostream>
using namespace std;


//-------------function declarations-------------------------//

void MenuOne();												 //
int valMAX(int x, int y);
int valMIN(int x, int y);
//-------------function declarations-------------------------//


int main()
{
	int numIntComp, numIntCompOrigin, intVal, intID = 1; //declare integers for the for-loop counter - the number of integers to input and compare - and integer ID, and hold hold value
	int prevMaxInt, maxIntVal = 0;						//declare maximum integers to be used to store maximum values
	int prevMinInt, minIntVal = 0;						//declare minimum integers to be used to store minumum values
	MenuOne();											//instruction menu


	cout << endl << endl << "Enter the value for the number of integers you would like to compare: ";
	cin >> numIntComp;					//number of integers user would like to compare
	if (numIntComp < 0) { // constraint
		cout << "\nSorry, invlaid input, number of integers to compared must be a positive integer.\n";
	}
	else if (numIntComp == 0) { //constraint
		cout << "\nUser selects 0 integers to be compared.\n";
	}
	else if (numIntComp == 1) { //constraint 
		cout << "Enter the value for IntegerID_" << intID << ": ";
		cin >> intVal;
		cout << "\nOnly one integer selected; your minimum and maximum value is: " << intVal << endl;
	}
	else {	//standard execution route using for loop
		numIntCompOrigin = numIntComp;									//use another variable to store the original value input in to the number of integers the user would like to compare
		cout << "Enter the value for IntegerID_" << intID << ": ";		//initialize the first integer value of first integer input
		intID++;
		cin >> intVal;
		prevMaxInt = intVal;																			 //set (intialize) max integer hold variable value to the initial user input integer value 
		prevMinInt = intVal;																			 //set (intialize) min integer hold variable value to the intial user input integer value
		for (int countONE = numIntComp; countONE > 0; countONE = --numIntComp - 1) {					//use -1 since intID already used once and first user input for integer acquired	
																										//use for loop to continue calculating max and min of all user integer inputs
			cout << "Enter the value for IntegerID_" << intID << ": ";
			cin >> intVal;																				//individual integer hold value
			intID++;																					//increment Integer ID until it reaches numIntComp = the total number of integers to be compared
			maxIntVal = valMAX(intVal, prevMaxInt);														//set actual max integer variable (to be output on screen at the end of program) using the function of user input integer and previousMAX = max value from last calculated input (but initially the users first input)
			prevMaxInt = maxIntVal;																		//max value hold variable updated to current max value for later comparison to next user integer input in valMIN function to update max value again
			minIntVal = valMIN(intVal, prevMinInt);													 //same operation/logic for maxInt value is applied to minInt value
			prevMinInt = minIntVal;																	//min value hold variable updated to current minimum value for later comparison to next user integer input in valMIN function to update min value again
		}


		cout << endl;
		cout << "The maximum integer value in your set of integer values is: " << maxIntVal << endl;
		cout << "The minimum integer value in your set of integer values is: " << minIntVal << endl << endl;
	}
	cout << "Thank you for integer maxing and minning out with us(:\n\n";

	system("pause");
	return 0;
}


//----------------------function definitions below this line ------------------------------------//

void MenuOne()
{
	cout << "This program computes the maximum and minimum integer value out of a given set of integer values.\n" << endl;
	cout << "The program will prompt you to input the number of integers you would like to compare." << endl;
	cout << "Then, the program will ask you to input the value for each integer." << endl;
	cout << "Finally, the program will say what what is the max and min integer value out of all of your inputs." << endl;
	return;
}
int valMAX(int x, int y)
{
	int z;
	if (x == y) {
		z = x;
	}
	else if (x > y) {
		z = x;
	}
	else {
		z = y;

	}
	return (z);	
}
int valMIN(int x, int y)
{
	int z;
	if (x == y) {
		z = x;
	}
	else if (x < y) {
		z = x;
	}
	else {
		z = y;

	}
	return (z);
}




