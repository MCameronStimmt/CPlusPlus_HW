#include <iostream>
#include <string>
using namespace std;
//const
const int SIZE = 10;
//structure 
struct Customer {
	string name;
	string address;
	string addressCont;
	int number;
	double balance;
	int lastPayment;

};
//functions 
void fillInfo(Customer* listPtr);
void printInfo(Customer* listPtr);
double validBalance(double input); 
string isEmptyStr(string input); 
void findCustomer(string name, Customer* listPtr, int size);

int main() {
	//variables 
	Customer list[SIZE];
	int menuAnswer; 
	int customerSelect; 
	bool cont = false;
	//menu 
	while (!cont) {
		cout << "Enter 1 to enter data, 2 to change the data of a customer, 3 to print list, 4 to find a customer, and 0 to end" << endl;
		cin >> menuAnswer;
		cin.ignore();
		//fill info for all customers 
		if (menuAnswer == 1) {
			for (int i = 0; i < SIZE; i++) {
				cout << "Customer " << i + 1 << endl;
				fillInfo(&list[i]);
			}
		}
		//change info of a customer
		else if (menuAnswer == 2) {
			cout << "Enter number of customer you wish to change" << endl;
			cin >> customerSelect;
			customerSelect--;
			fillInfo(&list[customerSelect]);
		}
		//print all customers
		else if (menuAnswer == 3) {
			for (int i = 0; i < SIZE; i++) {
				cout << "Customer " << i + 1 << endl;
				printInfo(&list[i]);
			}
		}
		//find customer
		else if (menuAnswer == 4) {
			string name;
			bool found = false;
			cout << "Enter name to search" << endl;
			getline(cin, name); 
			findCustomer(name, list, SIZE); 
		}
		//end menu 
		else if (menuAnswer == 0) {
			cont = true;
		}
	}

	return 0;
}

void fillInfo(Customer* listPtr) {
	//fill customer's infos 
		cout << "Enter name" << endl;
		listPtr->name = isEmptyStr(listPtr->name);
		cout << "Enter address" << endl;
		listPtr->address = isEmptyStr(listPtr->address);
		cout << "Enter city, state, and zip" << endl;
		listPtr->addressCont = isEmptyStr(listPtr->addressCont);
		cout << "Enter phone number" << endl;
		cin >> listPtr->number; 
		cout << "Enter account balance" << endl;
		listPtr->balance = validBalance(listPtr->balance);
		cout << "Enter date of last payment" << endl;
		cin >> listPtr->lastPayment; 
	
}

string isEmptyStr(string input) {
	//check to make sure info is not empty 
	bool valid = false;
	while (!valid) {
		getline(cin, input);
		if (input == "") {
			cout << "Please enter info" << endl;
		}
		else {
			valid = true;
		}
	}
	return input; 
}


double validBalance(double input) {
	//check numbers for negative values 
	bool valid = false;
	while (!valid) {
		cin >> input;
		if (input <= 0) {
			cout << "Must be positive balance" << endl;
			cin.ignore();
		}
		else {
			valid = true;
		}
	}
	return input;
}

void printInfo(Customer* listPtr) {
	//print all info per customer
	cout << listPtr->name << endl;
	cout << listPtr->address << endl;
	cout << listPtr->addressCont << endl;
	cout << listPtr->number << endl;
	cout << listPtr->balance << endl;
	cout << listPtr->lastPayment << endl;
}

void findCustomer(string name, Customer* listPtr, int size) {
	//iterate through array to match name to entered name 
	bool found = false; 
	for (int i = 0; i < size; i++) {
		if (name == listPtr[i].name) {
			printInfo(&listPtr[i]);
			found = true;
		}
	}
	if (!found) {
		cout << "No person under that name found" << endl; 
	}
}

