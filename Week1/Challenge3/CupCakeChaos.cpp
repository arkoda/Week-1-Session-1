//Function prototpyes //FileName: CupCakeChaos.cpp
//Description: 
//Author: Arthur Loginov
//Date: 25/09/2018

#include <iostream>
#include <string>

int MaxmimumCupCakes(int n, int c, int m);

int main() {

	int budget, cost, wrappers, max;
	

	std::cout << "Please enter your cupcake budget: \n";
	std::cin >> budget;

	std::cout << "Please enter the cost of the cupcake(s): \n";
	std::cin >> cost;

	std::cout << "Please enter the the amount of wrappers you have: \n";
	std::cin >> wrappers;

	max = MaxmimumCupCakes(budget, cost, wrappers);

	std::cout << "The maximum amount of cupcakes are: " << max << "\n";

	return 0;

}

int MaxmimumCupCakes(int n, int c, int m) {

	int max = n / c;

	if (max >= m) {

		int max = MaxmimumCupCakes(max, m, m);
	}
	return max;
}