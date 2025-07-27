

//   Purpose: Airline Seat Reservation/Cancellation Program -- Airliner of any size seating (EXTRA CREDIT)
//   Author: Demetrius E. Johnson
//   Creation Date: 4-15-20
//   Last Modification Date: 4-17-20
//CLASS USED TO STORE FILE DATA


#include "RowLetters.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

RowLetters::RowLetters() {
	rowNumber = 0;
	lettersInRow = "Row Number and Letters not available";
}

void RowLetters::setRowNum(int inputNumber) {
	rowNumber = inputNumber;
}

int RowLetters::getRowNum() {

	return rowNumber;
}
																		//THE REST OF FUNCTIONS ARE SIMPLE/HEADER NOT NECESSARRY
void RowLetters::setLettersInRow(string letters) {

	lettersInRow = letters;

}

string RowLetters::getLettersInRow() {
	
	return lettersInRow;

}

//   Purpose: USED TO REPLACE A CHARACTER IN THE STRING OF THE OBJECT STORED IN THE VECTOR USED IN MAIN
//   Author: Demetrius E. Johnson
//   Creation Date: 4-15-20
//   Last Modification Date: 4-17-20
void RowLetters::exchangeLetterInRow(int stringPosition, string exchangeChar) {
	
	lettersInRow.replace(stringPosition, 1, exchangeChar);

}




//TEST FUNCTIONS --NOT NEEDED--ONLY CONSIDERED FOR USE DURING BUILD OF MY FORMAT --KEEPING FOR FUTURE REFERENCE/SELF STUDY
string& RowLetters::getLettersInRowReference() {
	
	return lettersInRow;

}
int& RowLetters::getRowNumReference() {
	
	return rowNumber;
}






