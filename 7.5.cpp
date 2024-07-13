// Mordred Cameron
// CS 3060 7.5
#include <iostream>
using namespace std;
int const ROW = 3;
int const COLUMN = 5;

int main() {
	int monke[ROW][COLUMN];
	double daysTotal = 0;
	double daysAverage = 0;
	//fill array
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			bool valid = false;
			//check valid input 
			while (!valid) {
				cout << "Enter food eaten for monkey " << i + 1 << " day " << j + 1 << endl;
				cin >> monke[i][j];
				if (monke[i][j] < 0) {
					cout << "Cannot be negative" << endl; 
				}
				else {
					valid = true;
				}
			}
		}
	}

	int greatest = monke[0][0];
	int least = monke[0][0];
	//find average per day
	for (int i = 0; i < COLUMN; i++) {
		for (int j = 0; j < ROW; j++) {
			daysTotal += monke[j][i];
		}
		daysAverage = daysTotal / ROW;
		cout << "Average for day " << i + 1 << " is " << daysAverage << endl;
		daysTotal = 0; 
	}
	//find least and greatest 
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			if (greatest < monke[i][j]) {
				greatest = monke[i][j]; 
			}
			if (least > monke[i][j]) {
				least = monke[i][j];
			}
		}
	}
	//print 
	cout << "Greatest amount eaten: " << greatest << endl;
	cout << "Least amount eaten: " << least << endl; 

	return 0;
}