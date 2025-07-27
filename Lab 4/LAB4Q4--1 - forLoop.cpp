

/*  *Author: Demetrius Johnson
	*Creation Date: 05 Feb. 2020
	*Modification Date: 05 Feb. 2020
	*Purpose: Calculate sum of N integers entered by user - using a 'for' loop

	// LAB 4 - CIS 150 - MEECH.cpp

	Question 4--1 - forLoop

	Use a for loop to write a program that calculates the sum of N integers entered by the user. 
	N is a computer generated random number between 5 and 15 (both inclusive).
	1.	Repeat the program using a while loop

	Note: Use the following libraries for rand(),srand(), and time() support.

	#include <cstdlib> (random numbers library)
	#include <ctime> (used for time function)

	Use this for setting a seed: srand(time(NULL))

	Use this for generating a random number: rand()  (restrict random number 5-15  inclusive) (loop rand() val number of times)


*/


#include <iostream>		//input-output stream allowed
#include <cstdlib>		//(random numbers library)
#include <ctime>		//(used for time function)


using namespace std;

int main()
{
	int NumIntToGen = 0, randInt = 0, randIntSum = 0;   //declare variables, and also initialize with a value (0 in this case) to carve out memory storage for using modulus and rand functions.
	srand(time(NULL));									//use srand and time functions to generate random numbers for rand() functions every start of program.

	cout << "Enter the number of random integers you would like the program to generate (whole numbers only): ";
	cin >> NumIntToGen;
	cout << endl << "The random numbers generated are from 5-15 (incusive), and will be summed." << endl << endl;

	for (int count = 0; count < NumIntToGen; count++) {		//use 'for' loop to generate the entered value of desired number of random integers.
		
		randInt = rand() % 11 + 5;				//use rand function to generate a random number from range 5-15 (inclusive).
		cout << randInt << ", ";				//display the generated random integer to the user.
		randIntSum = randIntSum + randInt;		//add the generated random integer to total random integer sum; sum will keep increasing every time loop is ran to add all integers.
	}
	
	cout << endl << endl << "Your total random integer sum is: " << randIntSum << endl << endl;
	cout << "Thank you for adding random integers with us(:" << endl;


	system("pause");
	return 0;
}