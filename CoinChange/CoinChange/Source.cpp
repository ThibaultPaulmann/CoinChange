#include <iostream>


int main() {
	
	double coinInput;
	// Input from user for coinValue they want to breakdown
	// use coinInput and using for() loops break it down
	// Should use coins of values [2,1,0.5,0.1,0.05,0.02,0.01]
	// Output the breakdown of coinInput into coinChange.

	std::cout << "Input coin: ";
	std::cin >> coinInput;

	while(coinInput >= 2) {
		coinInput -= 2;
	}

	while (coinInput >= 1) {
		coinInput -= 1;
	}

	while (coinInput >= 0.5) {
		coinInput -= 0.5;
	}
	
	while (coinInput >= 0.2)
	{
		coinInput -= 0.2;
	}
	std::cout << coinInput;

	return 0;
}