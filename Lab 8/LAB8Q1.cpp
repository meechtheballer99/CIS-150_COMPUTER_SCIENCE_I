


/*  
	*Author: Demetrius Johnson
	*Creation Date: 11 Mar. 2020
	*Modification Date: 11 Mar. 2020
	*Purpose: display sum, average, lowest, and highest number of an array of given size

	// LAB 8 - CIS 150 - MEECH.cpp

	Question 1
	-------------------------

	Consider the following code segment:

	int main()
	{
		cons int SIZE = 20;
		int values[SIZE] = {0, 23, 34, -7, 110, 42, -350, 424, 25, 99, 10, 05, 50, -5, 1, 200, -350, 437, 25, 147};

		// your code goes here

	}

	Write a complete program to display the values from each of the following four steps.
	All displays must be done in main.
	Use separate functions for each step below, passing the array to each function.
	1.1)	Provide the sum of the numbers in this array – function must return an int.
	1.2)	Provide the average of the positive numbers in this array – function must return a double.
	1.3)	Provide the lowest number in the array – function must return an int.
	1.4)	Provide the highest number in the array – function must return an int.


*/


#include <iostream>
#include <limits>
using namespace std;


//-------------function declarations-------------------------//
void MenuONE();
int arrSum(int inputArray[]);
int arrAvg(int inputArray[]);
int arrLowVal(int inputArray[]);
int arrHighVal(int inputArray[]);
//-------------function declarations-------------------------//


int main()
{
	MenuONE();
	const int SIZE = 20;
	int values[SIZE] = {0, 23, 44, -77, -10130, 423, -330, -3424, 3254, 99, 1, 205, 3530, -35, 51, 220, -3350, 337, 1125, 47};
	int arraySum, arrayAvg, arrayLowVal, arrayHighVal;
	arraySum = arrSum(values);
	arrayAvg = arrAvg(values);
	arrayLowVal = arrLowVal(values);
	arrayHighVal = arrHighVal(values);
	cout << "The SUM of the array is: " << arraySum << endl;
	cout << "The AVERAGE of the array is: " << arrayAvg << endl;
	cout << "The LOWEST VALUE of the array is: " << arrayLowVal << endl;
	cout << "The HIGHEST VALUE of the array is: " << arrayHighVal << endl;
	cout << endl << endl << endl;

	system ("pause");
	return 0;
}



//----------------------function definitions below this line ------------------------------------//


void MenuONE() {

	cout << "\n---------------------------------------WELCOME----------------------------------------------------------";
	cout << "\nThis program displays the sum, average,\n"
		 << "lowest, and highest number of the array:\n\n"
		 << "int values[SIZE] = {0, 23, 34, -7, 110, 42, -350, 424, 25, 99, 10, 05, 50, -5, 1, 200, -350, 437, 25, 147} \n\n";
}

int arrSum(int inputArray[]) {

	int arraySize = 20;
	int sum = 0;
	for (int i = 0; i < arraySize; i++) {

		sum += inputArray[i];
	}
	return (sum);
}
int arrAvg(int inputArray[]) {
	int arraySize = 20;
	float sum = 0.0;
	for (int i = 0; i < arraySize; i++) {

		sum += inputArray[i];
	}

	return (sum / arraySize);
}
int arrLowVal(int inputArray[]){
	int arraySize = 20;
	int lowestVal = INT_MAX;
	for (int i = 0; i < arraySize; i++) {

		if (inputArray[i] < lowestVal)
			lowestVal = inputArray[i];
	}
	return (lowestVal);
}
int arrHighVal(int inputArray[]) {
	int arraySize = 20;
	int largestVal = INT_MIN;
	for (int i = 0; i < arraySize; i++) {

		if (inputArray[i] > largestVal)
			largestVal = inputArray[i];
	}
	return (largestVal);


}