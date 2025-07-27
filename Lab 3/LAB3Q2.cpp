


/*  *Author: Demetrius Johnson
	*Creation Date: 29 Jan. 2020
	*Modification Date: 29 Jan. 2020
	*Purpose: Age-depedent voter registration eligibility message

	// LAB 3 - CIS 150 - MEECH.cpp

	Question 2:

	Write a program that asks users for their name and age; then display one of the following messages depending on the user’s age:

	"Congratulations <NAME>! Your vote registration was successfully processed."
	//when age is greater than or equal to 18

	"You are not eligible to vote <NAME>."	
	//when age is smaller than 18


*/


#include <iostream>
#include <string>
using namespace std;

int main() {
	int userAge;
	string userName;

	cout << "Please enter your first name: ";
	cin >> userName;

	cout << "Please enter your age: ";
	cin >> userAge;

	if (userAge >= 18)
	{
		cout << "Congratulations " << userName << "! " << "Your vote registration was successfully processed." << endl;
	}
	else
	{
		cout << "Sorry, you are not eligible to vote, " << userName << "." << endl;
	}
	cout << "Thank you!(:" << endl;

	system("pause");
	return 0;
}

