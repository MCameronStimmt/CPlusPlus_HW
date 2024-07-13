#include <iostream>
#include <string> 
using namespace std;
//const
const int AMOUNT = 5;
//car class
class Car {
		int yearModel;
		string make;
		int speed;
public:
	Car(int y, string m) {
		yearModel = y;
		make = m;
		speed = 0;
	}
	int getSpeed() {
		return speed;
	}
	void setSpeed(int s) {
		speed = s;
	}
};
//functions
int accelerate(int speed, int amount);
int brake(int speed, int amount);

int main(){
	//create car obj
	Car carObj1(1960, "Ford");
	//call accelerate 5 times 
	cout << "Accelerate" << endl;
	for (int i = 0; i < 5; i++) {
		carObj1.setSpeed(accelerate(carObj1.getSpeed(), AMOUNT));
		cout << carObj1.getSpeed() << endl;
	}
	//call brake 5 times
	cout << "Brake" << endl;
	for (int i = 0; i < 5; i++) {
		carObj1.setSpeed(brake(carObj1.getSpeed(), AMOUNT));
		cout << carObj1.getSpeed() << endl;;
	}

	return 0;
}

int accelerate(int speed, int amount) {
	speed += amount;
	return speed;
}

int brake(int speed, int amount) {
	speed -= amount;
	return speed;
}