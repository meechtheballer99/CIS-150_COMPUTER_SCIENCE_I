#include "state.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>


using namespace std;

//prototypes
void readStateInfo(ifstream &ifs, vector<State> & stateVec);
void searchByStatehood(vector <State> & stVec, int year, int & startIndex);
int searchByAbrv(vector <State> & stVec, string abrv);
void displayMenu();
void mainMenu();
void displayTableHeader();





int main()
{

	vector <State> stateVec;
	//other declarations

	//read state info into vector


	//display menu & process input
	displayMenu();



	return 0;

}


void displayTableHeader()
{
	//Display table header:
	cout << endl;

	cout << right << setw(20) << "State Abr." <<   setw(20) << "Name" <<  setw(20) << "Capital"
		 <<  setw(20) << "Population" <<  setw(11) << "Year" <<  setw(15) << "#Congress" << endl;
	
	cout << endl;

}

void readStateInfo(ifstream &ifs, vector<State> & stateVec)
{
	//declarations
	State tmpState;
	...

	while(!ifs.eof())
	{

		getline(ifs, abrv, ',');
		//read other inputs on a given line using getline

		//read population (need to convert string to int, consider string stream)

		//read year (need to convert string to int, consider string stream)


		//read number of congress (need to convert string to int, consider string stream)


		//use tmpState.<method> and passing variables into the object through the method
		tmpState.setStateAbrv(abrv);
		//...

		//add the object to the vector
		stateVec.push_back(tmpState);
	}




}


int searchByAbrv(vector <State> & stVec, string abrv)
{

	//return index of object within the vector if found

	//return -1 if not found

	return -1;

}


void searchByStatehood(vector <State> & stVec, int year, int & startIndex)
{



}


void displayMenu()
{

	cout << "You have returned to the main menu; Please select another option: \n";
	cout <<"1.	Search by state abbreviation(e.g.MI).\n"
		<< "2.	Search by year of statehood(e.g. 1837).\n"
		<< "3.	Exit program.\n"
		<< "Please enter your choice(1 - 3) :" ;





}
void mainMenu()
{

	cout << "-----------------WELCOME TO THE US STATES INFORMATION PROGRAM-------------------------"
		<< "This program outputs information based on the following menu choices selected by the user: ";

	cout << "1.	Search by state abbreviation(e.g.MI).\n"
		<< "2.	Search by year of statehood(e.g. 1837).\n"
		<< "3.	Exit program.\n"
		<< "Please enter your choice(1 - 3) :";





}