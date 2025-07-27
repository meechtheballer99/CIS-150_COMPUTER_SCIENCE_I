


/*  
	*Author: Demetrius Johnson
	*Creation Date: 19 Feb. 2020
	*Modification Date: 19 Feb. 2020
	*Purpose: Computes the sum of N + N-1 up to 0 --> and average of that sum

	// LAB 6 - CIS 150 - MEECH.cpp

	Question 1
	-------------------------

	Write a program that calls a function calculateSum to calculate the sum from 0 to N integers. 
	The function calculateSum has one parameter N of type integer and returns an integer which represents the sum from 0 to N, inclusive. 

	Write another function calculateAverage that calculates an average. 
	This function will have two parameters: the sum and the number of items. It returns the average (of type float). 

	The main function should be responsible for all inputs and outputs. 
	Your functions will only calculate and return the values and NOT print anything.  
	N is provided by the user; user input must be asked for repeatedly until a negative integer is provided.

	EX: INPUT IS 3, OUTPUT IS 3+2+1+0=6
	ANY NEGATIVE # SHOULD BE SIGNAL TO EXIT PROGRAM
	*hint, can use counter-controlled for loop
	*be careful for 0 sum average (divide by 0 parameter); should always be divide by 1 or greater since even N=0 means sum=0; average = 0/1 = 0.

*/


#include <iostream>
using namespace std;


//-------------function declarations-------------------------//

void MenuONE();
int calculateSumN_0(int N);
void showMathSumN_0(int N);
double avg(double sum, double numValSummed);
//-------------function declarations-------------------------//


int main()
{
	int userN, userN_Original_Input, numValAdded;
	double N_0SumAvg;
	MenuONE();
	cout << "\nPlease enter a value for N: ";
	cin >> userN;

	while (userN >= 0) {
		numValAdded = userN + 1;
		userN_Original_Input = userN;
		userN = calculateSumN_0(userN);
		cout << "Your N_0 Sum is: ";
		showMathSumN_0(userN_Original_Input);
		cout << " = " << userN << endl;
		cout << "Because 0 is also a number, the number of values added is N + 1.\n"
			<< "Therefore; number of values added is: " << numValAdded << endl << endl;
		N_0SumAvg = avg(userN, numValAdded);
		cout << "Your N_0sum average is: " << N_0SumAvg << endl << endl;
		cout << "Enter a negative integer value for N to exit the program.\n";
		cout << "\nPlease enter a value for N: ";
		cin >> userN;
	}
	cout << "You have entered a sentinal integer value; userN < 0: " << userN << endl;
	cout << "Thanks for N_0 Summing and Averaging with us(:\n\n";

	system("pause");
	return 0;
}



//----------------------function definitions below this line ------------------------------------//


int calculateSumN_0 (int N) {
	
	int N_0sum = 0;

	for (; N >= 0; N--) {
		N_0sum += N;

		
	}

	return (N_0sum);

}
void showMathSumN_0(int N) {

	int N_0sum = 0;

	for (; N > 0; N--) {
		
		cout << N << " + ";


	}
	cout << N;
	return;
}

double avg(double sum, double numValSummed) {
	float avg;
	avg = sum / numValSummed;

	return(avg);

}

void MenuONE() {

	cout << "\n---------------------------------------WELCOME----------------------------------------------------------";
	cout << "\nThis program computes the sum of integer N + N-1 up to 0\n" <<
			"and average of that sum.\n\n";
	cout << "Begin by entering an integer value that is greater than or equal to 0 (integer >=0),\n" <<
			"The program will determine the sum and the average of that sum\n\n";
	cout << "for example: N = 3 --> SUM = 3+2+1+0 = 6, and AVERAGE = 6/4 = 1.5" << endl;
	cout << "Enter a negative integer value for N to exit the program.\n";
}