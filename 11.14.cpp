#include <iostream>
#include <string> 
using namespace std;
//const
const int SIZE = 10;
//struct
struct Part {
	string name;
	int number;
};

//functions
void addParts(Part* binPtr);
void removeParts(Part* binPtr);
void printParts(Part* binPtr, int size);

int main() {
	//initialize bin array
	Part bins[SIZE] = {{"Valve", 10}, 
		{"Bearing", 5},
		{"Bushing", 15},
		{"Coupling", 21},
		{"Flange", 7},
		{"Gear", 5},
		{"Gear Housing", 5},
		{"Vacuum Gripper", 25},
		{"Cable", 18},
		{"Rod", 12},
						};
	//variables
	int menuSelect;
	int addRemove; 
	bool cont = false;
	string name; 
	//menu while loop
	while (!cont) {
		//print info
		printParts(bins, SIZE);

		cout << "Enter 1 to select a bin, or 2 to quit" << endl;
		cin >> menuSelect;
		cin.ignore(); 
		//select menu
		if (menuSelect == 1) {
			cout << "Enter bin name (case sensitive)" << endl;
			getline(cin, name);
			bool found = false;
			//iterate through array to find specific part
			for (int i = 0; i < SIZE; i++) {
				//if found
				if (name == bins[i].name) {
					//prompt to add or remove
					cout << "Enter 1 to add, or 2 to remove" << endl;
					cin >> addRemove;
					cin.ignore();
					if (addRemove == 1) {
						addParts(&bins[i]);
					}
					else if (addRemove == 2) {
						removeParts(&bins[i]);
					}
					//end loop
					found = true;
				}
			}
			if (!found) {
				cout << "No bin under that name found" << endl;
			}
			
		}
		else if (menuSelect == 2) {
			//end loop
			cont = true; 
		}
	}

	return 0; 
}

void printParts(Part* binPtr, int size) {
	//print parts in array
	cout << "Name   " << "Number of Parts" << endl;
	for (int i = 0; i < size; i++) {
		cout << binPtr[i].name << " -- " << binPtr[i].number << endl;
	}
}

void addParts(Part* binPtr) {
	int numberAdd = 0;
	int addedTotal = 0;
	bool cont = false; 
	while (!cont) {
		cout << "Enter number to add" << endl;
		cin >> numberAdd;
		//store number in temp variable
		addedTotal = binPtr->number + numberAdd;
		//check if above 30
		if (addedTotal > 30) {
			cout << "Cannot have more then 30 parts" << endl;
			addedTotal = 0; 
		}
		else {
			//replace with new number
			binPtr->number = addedTotal; 
			cont = true; 
		}
	}
	
}

void removeParts(Part* binPtr) {
	int numberRemove;
	int subTotal; 
	bool cont = false;
	while (!cont) {
		cout << "Enter number to remove" << endl;
		cin >> numberRemove;
		//store in temp variable
		subTotal = binPtr->number - numberRemove;
		//check if negative
		if (subTotal < 0) {
			cout << "Cannot have negative value" << endl;
			subTotal = 0;
		}
		else {
			//replace number
			binPtr->number = subTotal; 
			cont = true;
		}
	}
}
