#include<iostream>
using namespace std;

const int NUM = 10; 

int findMode(int* arrayPtr, int number);

int main() {
	//variables
	int array[NUM];
	int mode;
	//fill array
	cout << "Enter " << NUM << " array elements" << endl;
	for (int i = 0; i < NUM; i++) {
		cin >> array[i];
	}
	
	//find mode
	mode = findMode(array, NUM); 
	//if there is no mode
	if (mode == -1) {
		cout << "No mode" << endl;
	}
	else {
		cout << "Mode: " << mode << endl;
	}

	return 0;
}

int findMode(int* arrayPtr, int number) {
	//variables
	int mode = 0;
	int count = 0;
	int most = 0;
	//iterate through 
	for (int i = 0; i < number; i++) {
		count = 0;
		for (int j = 0; j < number; j++) {
			//count number of times the same element occurs (matches array[i]) 
			if (arrayPtr[i] == arrayPtr[j]) {
				count++;
			}
		}
		//if count of current element is greater
		if (count > most) {
			most = count;
			mode = arrayPtr[i];
		}
	}
	//return
	if (most == 1) {
		return -1;
	}
	else {
		return mode;
	}
}