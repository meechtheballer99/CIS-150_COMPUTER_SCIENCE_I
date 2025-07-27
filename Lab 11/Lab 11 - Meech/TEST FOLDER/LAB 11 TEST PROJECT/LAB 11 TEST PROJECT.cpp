// LAB 11 TEST PROJECT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;



//-------------------------------FUNCTION DECLARATIONS----------------------------------------//

void displayMenu();
void mainMenu();
//------------------------------------FUNCTION DELCARATIONS------------------------------------//





int main()
{
	int userChoice;

	//display menu & process input
	mainMenu();
	cin >> userChoice;
	if (userChoice != 1 && userChoice != 2) {
		cout << "You have selected to exit the program. Thank you for US STATE's-ing with us(:\n\n";
		system("pause");
		return 0;
	}
	else {
		while (userChoice == 1 || userChoice == 2) {
			switch (userChoice) {
			case 1:
				cout << "You have selected menu option 1: \n\n";
				system("pause");

				displayMenu();
				cin >> userChoice;
				break;
			case 2:
				cout << "You have selected menu option 2: \n\n";
				system("pause");

				displayMenu();
				cin >> userChoice;
				break;

			default:
				cout << "You have selected to exit the program. Thank you for US STATE's-ing with us(:\n\n";
				system("pause");
				return 0;
			}
		}
		if (userChoice != 1 && userChoice != 2) {
			cout << "\n\nYou have selected to exit the program. Thank you for US STATE's-ing with us(:\n\n";
			system("pause");
			return 0;
		}
	}


	return 0;

}















//------------------------------------FUNCTION DEFINITIONS BELOW THIS LINE------------------------------------//




void displayMenu()
{
	cout << "----------------------------------------------------------------------";
	cout << "You have returned to the main menu; Please select another option: \n";
	cout << "1.	Search by state abbreviation(e.g.MI).\n"
		<< "2.	Search by year of statehood(e.g. 1837).\n"
		<< "3.	Exit program.\n"
		<< "Please enter your choice(1 - 3) : ";





}
void mainMenu()
{

	cout << "---------------------------------WELCOME TO THE US STATES INFORMATION PROGRAM-------------------------\n"
		<< "This program outputs state information based on the following menu choices selected by the user.\n"
		<< "It will provide:\n\n state abbreviation\n state name\n capital\n population\n year it became a state\n and number of representatives in congress\n\n";
	cout << "MENU OPTIONS: \n\n";
	cout << "1.	Search by state abbreviation(e.g.MI).\n"
		<< "2.	Search by year of statehood(e.g. 1837).\n"
		<< "3.	Exit program.\n\n"
		<< "Please enter your choice(1 - 3) : ";





}