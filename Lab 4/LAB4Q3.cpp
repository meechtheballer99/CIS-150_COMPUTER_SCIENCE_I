


/*  *Author: Demetrius Johnson
	*Creation Date: 05 Feb. 2020
	*Modification Date: 05 Feb. 2020
	*Purpose: See what happens to variables when using ++ prefix versus ++ postfix operators

	// LAB 4 - CIS 150 - MEECH.cpp

	Question 3

	Run the following code and explain, using your own words, 
	what is happening with each variable (w,x,y,z) 
	and what is the difference between ++x  and w++ 
	(is there any influence on the result between prefix or postfix ++ operator?). 
	Provide a snippet of the output showing the result. 

	Provide a paragraph that answers question 3 (see below and in word document)

	//
	
	For the code provided in question 3, 
	the postfix and prefix function using the ++ operator 
	has two cases: using ++ before a variable name (++variable) 
	tells the compiler to increment the variable by a value of 1 (variable+1) 
	before it is used in any other expression – this is why it is called a prefix.
	When the ++ operator comes after the variable (variable++), it says to 
	use the variable’s currently stored value, and afterwards execute the 
	function of incrementing the variable by one (variable +1). 
	This is why it is called a postfix.
	So, for the code provided above, whenever ++comes before a variable 
	(in this case for x), the compiler executed incrementing the 
	value of x by 1, and then proceeding to add y [y  = y + (++x); is the same as: y = y + (x+1);]. 
	For variable w, where ++ comes after, the value of w is first 
	added to z, and only then after that variable w is used in that 
	expression is it incremented as w = w +1 
	[z = z + (w++); is the same as z = z + w; and w = w + 1; --> executed as separate statements].



*/


#include <iostream>

using namespace std;

int main()
{
	int w = 3, x = 2;
	int y = 1, z = 1;

	y = y + (++x);
	z = z + (w++);

	cout << "x=" << x << " and y=" << y << endl;
	cout << "w=" << w << " and z=" << z << endl;


	system("pause");
	return 0;
}



