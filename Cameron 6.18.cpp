// Mordred Cameron
// CS 3060 6.18
#include <iostream>

using namespace std;

//const variables 
const int SQFT = 110;
const int LABOR = 8;
const int MINCOST = 10;
const int LABORPERHOUR = 25;

//prompt sqft
int promptSqft(int sqft) {
	bool valid = false;
	while (!valid) {
		cout << "Enter square footage of room" << endl;
		cin >> sqft; 
		if (sqft <= 0) {
			cout << "Invalid square footage" << endl;
		}
		else {
			valid = true;
		}
	}
	return sqft;
}
//prompt rooms
int promptRooms(int *rooms, int *sqft) {
	bool valid = false;
	int total = 0;
	//loop till valid
	while (!valid) {
		cout << "Enter number of rooms" << endl;
		cin >> *rooms;
		if (*rooms < 1) {
			cout << "Invalid room number" << endl;
		}
		else {
			valid = true;
		}
	}
	for (int i = 1; i <= *rooms; i++) {
		cout << i << endl; 
		*sqft = promptSqft(*sqft);
		total += *sqft;
	}
	return total;
}

//prompt paint price
double paintPrice(double gallonPrice) {
	bool valid = false;
	//loop till valid
	while (!valid) {
		cout << "Enter price of paint" << endl;
		cin >> gallonPrice;
		if (gallonPrice < MINCOST) {
			cout << "Invalid paint price" << endl;
		}
		else {
			valid = true;
		}
	}
	return gallonPrice;
}
//calculate paint
double calcPaint(int gallonPrice, int sqft, double *gallonsNeeded) {
	double paintPrice = 0;
	*gallonsNeeded = (double)sqft / SQFT;
	paintPrice = *gallonsNeeded * gallonPrice; 
	return paintPrice; 
}
//calculate labor
double calcLabor(int sqft, double *laborHours) {
	double laborCost = 0;
	*laborHours = ((double)sqft / SQFT) * LABOR;
	laborCost = *laborHours * LABORPERHOUR;
	return laborCost;
}

int main() {
	//initialize 
	int rooms = 0;
	double gallonPrice = 0;
	int sqft = 0;
	int totalSqft = 0;
	double laborHours = 0;
	double gallonsNeeded = 0; 
	double paintCost = 0;
	double laborCost = 0; 
	double totalCost = 0; 

	totalSqft = promptRooms(&rooms, &sqft);
	gallonPrice = paintPrice(gallonPrice);
	paintCost = calcPaint(gallonPrice, totalSqft, &gallonsNeeded);
	laborCost = calcLabor(totalSqft, &laborHours);
	totalCost = laborCost + paintCost;
	//print info
	cout << "Gallons of paint required " << gallonsNeeded << endl;
	cout << "Labor hours required " << laborHours << endl;
	printf("Cost of paint required $%0.2lf\n", paintCost);
	printf("Cost of labor required $%0.2lf\n", laborCost);
	printf("Total cost $%0.2lf", totalCost);
	return 0;
}
