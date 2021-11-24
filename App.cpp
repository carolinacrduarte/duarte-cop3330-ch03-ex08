/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Carolina Duarte
 */

/*
Write a program to test an integer value to determine if it is odd or even. As always, make sure your output is clear and complete. In other words, don’t just output yes or no. Your output should stand alone, like The value 4 is an even number. Hint: See the remainder (modulo) operator in §3.4.
*/

//Header file.
#include "std_lib_facilities.h"

int main()
{
	//Declaring integers to be used.
	int num, x;
	cout << "Please enter an integer number: "; //Obtaining int value from user.
	cin >> num;
	
	x = num % 2; //Checking if int value is odd or even by checking the remainder value.

	if (x == 0) {
		cout << "The number " << num << " is an even number."; 
	}
	else {
		cout << "The number " << num << " is an odd number.";
	}
	return 0;
}



