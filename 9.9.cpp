#include<iostream>
using namespace std;

const int NUM = 5;

double findMedian(int* arrayPtr, int number);

int main() {
	//variables
	int array[NUM];
	double median;
	//fill array
	cout << "Enter " << NUM << " array elements" << endl;
	for (int i = 0; i < NUM; i++) {
		cin >> array[i];
	}

	//find median
	median = findMedian(array, NUM);
	
	cout << "Median: " << median << endl; 

	return 0;
}

double findMedian(int* arrayPtr, int number) {
	//variables
	int current;
	double median;
	int element;
	//sort array 
	for (int i = 0; i < number; i++) {
		for (int j = i + 1; j < number; j++) {
			if (arrayPtr[j] < arrayPtr[i]) {
				current = arrayPtr[i];
				arrayPtr[i] = arrayPtr[j];
				arrayPtr[j] = current; 
			}
		}
	}
	//if even number of elements 
	if (number % 2 == 0) {
		element = (number / 2) - 1;
		median = double(arrayPtr[element] + arrayPtr[element + 1]) / 2;
	}
	//if odd
	else {
		element = ceil(number / 2);
		median = arrayPtr[element];
	}
	return median; 
}