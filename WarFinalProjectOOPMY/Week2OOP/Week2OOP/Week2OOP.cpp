#include "pch.h"
#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main()
{
	Student Mike;
	string option, first, last, address, city, state;
	int zip;
	float tpgpap, ec;

	while (true) {
		cout << "Enter students first name: " << endl;
		cin >> first;
		Mike.set_fName(first);
		cout << "Enter students last name: " << endl;
		cin >> last;
		Mike.set_lName(last);
		cout << "Enter students street address: " << endl;
		getline(cin, address);
		Mike.set_streetAddress(address);
		cout << "Enter students city: " << endl;
		cin >> city;
		Mike.set_city(city);
		cout << "Enter students state: " << endl;
		cin >> state;
		Mike.set_state(state);
		cout << "Enter students ZIP Code: " << endl;
		cin >> zip;
		Mike.set_zipCode(zip);
		cout << "Enter students earned credits: " << endl;
		cin >> ec;
		Mike.set_earnedCredits(ec);
		cout << "Enter students total possible GPA points: " << endl;
		cin >> tpgpap;
		Mike.set_totalGPAPoints(tpgpap);

		cout << Mike.get_fName() << " " << Mike.get_lName() << endl;
		cout << Mike.get_streetAddress() << endl;
		cout << Mike.get_city() << ", " << Mike.get_state() << ", " << Mike.get_zipCode() << endl;
		cout << "Total credit hours taken: " << Mike.get_earnedCredits() << endl;
		cout << "Total possible GPA points: " << Mike.get_totalGPAPoints() << endl;
		cout << "GPA is: " << Mike.get_GPA() << endl;
		cout << "" << endl;
		cout << "Enter another student? (Y or N) " << endl;
		if (!(option[0] == 'Y' || option[0] == 'y'))
			break;

	}
	return 0;


	/*Mike.set_fName("Mike");
	Mike.set_lName("Jasiczek");
	Mike.set_streetAddress("16313 S. Brentwood Street");
	Mike.set_city("Olathe");
	Mike.set_state("Kansas");
	Mike.set_zipCode(66062);
	Mike.set_earnedCredits(24);
	Mike.set_totalGPAPoints(24); */







}

void Student::set_fName(string new_fName) {
	fName = new_fName;

}

void Student::set_lName(string new_lName) {
	lName = new_lName;

}

void Student::set_streetAddress(string new_streetAddress) {
	streetAddress = new_streetAddress;

}



void Student::set_city(string new_city) {
	city = new_city;

}

void Student::set_state(string new_state) {
	state = new_state;

}

void Student::set_zipCode(int new_zipCode) {
	zipCode = new_zipCode;

}

void Student::set_earnedCredits(float new_eC) {
	earnedCredits = new_eC;


}

void Student::set_totalGPAPoints(float new_totalGPAPoints) {
	totalGPAPoints = new_totalGPAPoints;

}
float Student::get_earnedCredits() {
	return earnedCredits;

}

float Student::get_totalGPAPoints() {
	return totalGPAPoints;

}

string Student::get_fName() {
	return fName;
}
string Student::get_lName() {
	return lName;
}

string Student::get_streetAddress() {
	return streetAddress;
}

string Student::get_city() {
	return city;
}
string Student::get_state() {
	return state;
}
int Student::get_zipCode() {
	return zipCode;
}

float Student::get_GPA() {
	GPA = totalGPAPoints / earnedCredits;
	return GPA;
}