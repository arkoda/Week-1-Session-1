//Function prototpyes //FileName: ASCII.cpp
//Description: Prints the ASCII alphabet. A to Z with their corosponding integers.
//Author: Arthur Loginov
//Date: 25/09/2018

#include <iostream>
#include <string>

using namespace std;

int main() {

	int number = 97;
	int number2 = 65;

	for (char i = 'a'; i <= 'z'; i++) { //initlaises the characters from a to z
	
		cout << i << " " << number << std::endl; // prints the characters from a to z and the corosponding integers.
		number = number + 1; 
	}

	for (char i = 'A'; i <= 'Z'; i++) {
	
		cout << i << " " << number2 << std::endl;
		number2 = number2 + 1;
	}


	return 0;
}
