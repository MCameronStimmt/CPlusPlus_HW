// Mordred Cameron
// CS 3060 7.3
#include <iostream>
using namespace std;

//const variables
int const SIZE = 5;


int main() {
	//arrays
	string salsa[SIZE] = { "mild", "medium", "sweet", "hot", "zesty" };
	int numSold[SIZE];
	//fill numSold
	for (int i = 0; i < SIZE; i++) {
		bool valid = false;
		//check valid input 
		while (!valid) {
			cout << "Enter number of sales for " << salsa[i] << endl;
			cin >> numSold[i];
			if (numSold[i] < 0) {
				cout << "Cannot be negative" << endl;
			}
			else {
				valid = true;
			}
		}
	}
	int highest = numSold[0];
	int lowest = numSold[0];
	string hSold;
	string lSold;
	//print and find highest and lowest sold
	for (int i = 0; i < SIZE; i++) {
		cout << salsa[i] << " sold: " << numSold[i] << endl;
		if (highest < numSold[i]) {
			highest = numSold[i];
			hSold = salsa[i];
		}
		if (lowest > numSold[i]) {
			lowest = numSold[i];
			lSold = salsa[i]; 
		}
	}
	//print
	cout << "Best selling: " << hSold << endl;
	cout << "Worst selling: " << lSold << endl;

	return 0;
}