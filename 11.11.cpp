#include <iostream>
using namespace std;

//structure  
struct MonthlyBudget {
	double housing;
	double utilities;
	double expenses;
	double transportation;
	double food;
	double medical;
	double insurance;
	double entertainment;
	double clothing;
	double misc;
};
//functions
void enterAmount(MonthlyBudget* budgPtr);
void report(MonthlyBudget* budgPtr);


int main() {
	MonthlyBudget budget;
	//prompt amount spent
	enterAmount(&budget); 
	//print report
	report(&budget); 
	return 0;
}

void enterAmount(MonthlyBudget* budgPtr) {
	//prompt user to enter amount for each catagory 
	cout << "Enter amount spent in housing" << endl;
	cin >> budgPtr->housing;
	cout << "Enter amount spent in utilities" << endl;
	cin >> budgPtr->utilities;
	cout << "Enter amount spent in expenses" << endl;
	cin >> budgPtr->expenses;
	cout << "Enter amount spent in transportation" << endl;
	cin >> budgPtr->transportation;
	cout << "Enter amount spent in food" << endl;
	cin >> budgPtr->food;
	cout << "Enter amount spent in medical" << endl;
	cin >> budgPtr->medical;
	cout << "Enter amount spent in insurance" << endl;
	cin >> budgPtr->insurance;
	cout << "Enter amount spent in entertainment" << endl;
	cin >> budgPtr->entertainment;
	cout << "Enter amount spent in clothing" << endl;
	cin >> budgPtr->clothing;
	cout << "Enter amount spent in misc" << endl;
	cin >> budgPtr->misc;

}

void report(MonthlyBudget* budgPtr) {
	//calculate total amount spent in month
	double monthlyTotal = budgPtr->housing + budgPtr->utilities + budgPtr->expenses + budgPtr->transportation + budgPtr->food +
		budgPtr->medical + budgPtr->insurance + budgPtr->entertainment + budgPtr->clothing + budgPtr->misc;

	//check if amount per catagorie exceeded or not
	if (budgPtr->housing < 500) {
		cout << "Housing is under budget" << endl;
	}
	else {
		cout << "Housing is over budget" << endl;
	}

	if (budgPtr->utilities < 150) {
		cout << "Utilites is under budget" << endl;
	}
	else {
		cout << "Utilities is over budget" << endl;
	}

	if (budgPtr->expenses < 65) {
		cout << "Expenses is under budget" << endl;
	}
	else {
		cout << "Expenses is over budget" << endl;
	}

	if (budgPtr->transportation < 50) {
		cout << "Transportation is under budget" << endl;
	}
	else {
		cout << "Transportation is over budget" << endl;
	}

	if (budgPtr->food < 250) {
		cout << "food is under budget" << endl;
	}
	else {
		cout << "food is over budget" << endl;
	}

	if (budgPtr->medical < 30) {
		cout << "Medical is under budget" << endl;
	}
	else {
		cout << "Medical is over budget" << endl;
	}

	if (budgPtr->insurance < 100) {
		cout << "Insurance is under budget" << endl;
	}
	else {
		cout << "Insurance is over budget" << endl;
	}

	if (budgPtr->entertainment < 150) {
		cout << "Entertainment is under budget" << endl;
	}
	else {
		cout << "Entertainment is over budget" << endl;
	}

	if (budgPtr->clothing < 75) {
		cout << "Clothing is under budget" << endl;
	}
	else {
		cout << "Clothing is over budget" << endl;
	}

	if (budgPtr->misc < 50) {
		cout << "Misc is under budget" << endl;
	}
	else {
		cout << "Misc is over budget" << endl;
	}

	//check if total amount exceeded budget or not
	if (monthlyTotal > 1420) {
		cout << "Exceeded total monthly budget by " << monthlyTotal - 1420 << endl;
	}
	else {
		cout << "Did not exceed total monthly budget" << endl; 
	}
}