#include<iostream>
#include"Cube.h"
using namespace std;

int main() {

	//declarations
	int side;
	Cube myCube;

	//get user input
	cout << "Enter a side value: ";
	cin >> side;
	myCube.setSide(side);

	while (side % 2 == 0 || side < 5) {
		cout << "Invalid Input: Enter an odd number from 5 and above" << endl;
		system("cls");
	}

	//calculations and output
	myCube.displayCube();

	return 0;
}