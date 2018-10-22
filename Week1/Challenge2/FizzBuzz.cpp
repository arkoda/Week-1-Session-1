//Function prototpyes //FileName: FizzBuzz.cpp
//Description:  ask the user for an integer number and give the result if its a multiple of 3, 5 or both. And with their corosponding phrases.
//Author: Arthur Loginov
//Date: 25/09/2018

#include <iostream>
#include <string>

using namespace std;

int main() {

	int number; // declaring variable number as integer.

	cout << "Please enter a number greater than one: "; // asking the user for an integer.
	cin >> number; // storing the users answer in variable number.

	for (int i = 1; i < number + 1; ++i) { // for i = 1 and for i being less than number add 1 to number. 
		
		if ((i % 3 == 0) && (i % 5 == 0)) { // if its a multiple of 3 and 5
			cout << "FizzBuzz"; //print FizzBuzz.
		}
		else if ((i % 3 == 0 ) && (i % 5 != 0)) { //if its a multile of 3 but not a multiple of 5
			cout << "Fizz"; // print Fizz
		}
		else if ((i % 5 == 0 ) && (i % 3 != 0)) { //if its a multiple of 5 but not a multiple of 3
			cout << "Buzz"; //print Buzz
		}
		else { // f none of the if statements are true then 
			cout << i << endl; // print the number entered.
		}
	}

	return 0;
}