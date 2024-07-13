#include <iostream>
#include <string>
using namespace std;

class Patient {
	string name;
	string address; 
	int phoneNumber;
	string emergencyName;
	int emergencyPhone; 
public:
	Patient(string n, string a, int p, string eN, int eP) {
		name = n;
		address = a;
		phoneNumber = p;
		emergencyName = eN;
		emergencyPhone = eP;
	}
	void setName(string value) {
		name = value;
	}
	void setAddress(string value) {
		address = value;
	}
	void setPhone(int value) {
		phoneNumber = value; 
	}
	void setEName(int value) {
		emergencyName = value;
	}
	void setEPhone(int value) {
		emergencyPhone = value;
	}

	string getName() {
		return name;
	}
	string getAddress() {
		return address;
	}
	int getPhone(){
		return phoneNumber;
	}
	string getEName() {
		return emergencyName;
	}
	int getEPhone() {
		return emergencyPhone;
	}
};

class Procedure {
	string name;
	string date;
	string practitioner;
	double charge;
public:
	Procedure(string n, string d, string p, double c) {
		name = n;
		date = d;
		practitioner = p;
		charge = c;
	}
	void setName(string value) {
		name = value;
	}
	void setDate(string value) {
		date = value;
	}
	void setPrac(string value) {
		practitioner = value;
	}
	void setCharge(double value) {
		charge = value;
	}
	string getName() {
		return name; 
	}
	string getDate() {
		return date;
	}
	string getPrac() {
		return practitioner;
	}
	int getCharge() {
		return charge;
	}

};
//functions 
void printProcedure(Procedure procedureObj);

int main() {
	//create patient object
	Patient patientObj1("Bob Egg Joe", "123 Street, CO 12345", 1231234, "Emergency Man", 911);
	//create procedure objects
	Procedure procedureObj1("Physical Exam", "September 25", "Dr. Irvine", 250);
	Procedure procedureObj2("X-ray", "September 26", "Dr. Jamison", 500);
	Procedure procedureObj3("Blood Test", "September 27", "Dr. Smith", 200);
	//print patient
	cout << "Patient_______________________" << endl;
	cout << patientObj1.getName() << endl; 
	cout << patientObj1.getAddress() << endl;
	cout << patientObj1.getPhone() << endl;
	cout << patientObj1.getEName() << endl;
	cout << patientObj1.getEPhone() << endl;
	//print procedures 
	cout << "Procedure 1___________________" << endl;
	printProcedure(procedureObj1);

	cout << "Procedure 2___________________" << endl;
	printProcedure(procedureObj2);

	cout << "Procedure 3___________________" << endl;
	printProcedure(procedureObj3);


	return 0;
}

void printProcedure(Procedure procedureObj) {
	cout << "Procedure name: " << procedureObj.getName() << endl;
	cout << "Date: " << procedureObj.getDate() << endl;
	cout << "Practitioner name: " << procedureObj.getPrac() << endl;
	cout << "Charge: $" << procedureObj.getCharge() << endl;
}