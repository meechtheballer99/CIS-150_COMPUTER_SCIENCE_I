#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

#ifndef ROWLETTERS_H
#define ROWLETTERS_H

class RowLetters {

	private:
		int rowNumber;
		string lettersInRow;
		

	public:
		RowLetters();
		void setRowNum(int);
		int getRowNum();
		void setLettersInRow(string);
		string getLettersInRow();
		void exchangeLetterInRow(int, string);

		//TEST FUNCTIONS ---NOT USED--
		string& getLettersInRowReference();
		int& getRowNumReference();
};

#endif 

