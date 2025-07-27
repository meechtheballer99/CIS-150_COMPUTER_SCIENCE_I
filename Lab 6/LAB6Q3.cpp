


/*
	*Author: Demetrius Johnson
	*Creation Date: 19 Feb. 2020
	*Modification Date: 19 Feb. 2020
	*Purpose: Use int& (call by reference) to write functions and use functon call to change int main() values

	// LAB 6 - CIS 150 - MEECH.cpp

	Question 3
	-------------------------
	PASS BY REFERENCE
	-------------------------
	Consider the following functions:

	int doIt(int &a, int b)
	{
		a = a + 5;
		b = b + 5
	}

	int doIt2(int a, int& b)
	{
		a += 5;
		b += 5
	}

	int doIt3(int & a, int& b)
	{
		a = a + 5;
		b += 5
	}

	Fix any errors in the above functions and write a main program that prompts the user for two integer numbers (num1 and num2). 
	Then, the main program calls the functions doIt, doIt2, and doIt3 with num1 and num2 as parameters. 
	The main program will print the content of num1 and num2 to the screen after each function is called. 
	Add an addendum to the test plan to explain for each function the difference between a and b.

	*addendum = add some paragraphs to the test cases (an additional section) to explain what happens with the a and b for each function call. 
	CAN PICK ONE TEST CASE AND ADD ADENDUM FOR THAT ONE TEST CASE EXPLAINING WHAT IS HAPPENING FOR EACH FUNCTION AND DIFFERENCE BETWEEN A AND B


*/


#include <iostream>
using namespace std;

//-------------function declarations-------------------------//
void doIt(int& a, int b);

void doIt2(int a, int& b);

void doIt3(int& a, int& b);
void doIt_performALL(int num1, int num2);
//-------------function declarations-------------------------//

int main()
{
	int num1, num2;
	cout << "==================================WELCOME===========================================" << endl;
	cout << "This program will perform three\"doIt\" operations on two integers entered by a user.\n\n";
	cout << "Enter an integer for num1: ";
	cin >> num1;
	cout << "Enter an integer for num2: ";
	cin >> num2;
	cout << endl;
	doIt_performALL(num1, num2);
	cout << endl;
	
	cout << "End of call by reference program. Thank you for calling by reference and copying with us(:\n";

	system("pause");
	return 0;
}


//----------------------function definitions below this line ------------------------------------//
void doIt(int& a, int b)
{
	a = a + 5;
	b = b + 5;
	return;
}

void doIt2(int a, int& b)
{
	a += 5;
	b += 5;
	return;
}

void doIt3(int& a, int& b)
{
	a = a + 5;
	b += 5;
	return;
}
void doIt_performALL(int num1, int num2) {
	int num1HOLD, num2HOLD;
	num1HOLD = num1;
	num2HOLD = num2;
	doIt(num1HOLD, num2HOLD);
	cout << "num1 after doIt function is: " << num1HOLD << endl;
	cout << "num2 after doIt function is: " << num2HOLD << endl << endl;
	num1HOLD = num1;
	num2HOLD = num2;
	doIt2(num1HOLD, num2HOLD);
	cout << "num1 after doIt2 function is: " << num1HOLD << endl;
	cout << "num2 after doIt2 function is: " << num2HOLD << endl << endl;
	num1HOLD = num1;
	num2HOLD = num2;
	doIt3(num1HOLD, num2HOLD);
	cout << "num1 after doIt3 function is: " << num1HOLD << endl;
	cout << "num2 after doIt3 function is: " << num2HOLD << endl;
}