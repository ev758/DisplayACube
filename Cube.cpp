#include"Cube.h"
#include<iostream>
using namespace std;

Cube::Cube() {
	side = 5;
}

void Cube::setSide(int sidePar) {
	if (sidePar % 2 == 1 && sidePar >= 5)
		side = sidePar;
}

int Cube::getSide() {
	return side;
}

void Cube::displayCube() {

	spacesBefore = side - 1;
	spacesBetween = side - 2;
	spacesOnRightFace = 0;

	//part 1
	//draw spaces and stars
	drawSpaces(spacesBefore);
	drawStars(side);
	cout << endl;

	//part 2
	spacesBefore--;
	const int oneStar = 1;
	int counter = 0;

	while (counter < side - 2)
	{
		//draw spaces
		drawSpaces(spacesBefore);
		//draw star
		drawStars(oneStar);
		//draw between spaces
		drawSpaces(spacesBetween);
		//draw a star
		drawStars(oneStar);
		//draw spaces on right face
		drawSpaces(spacesOnRightFace);
		//draw a star
		drawStars(oneStar);

		cout << endl;
		spacesBefore--;
		spacesOnRightFace++;
		counter++;
	}

	//part 3
	drawStars(side);
	drawSpaces(spacesOnRightFace);
	drawStars(1);
	cout << endl;

	//part 4
	spacesOnRightFace--;
	spacesBefore++;

	while (spacesBefore <= side - 2) {
		//draw star
		drawStars(oneStar);
		//draw spaces
		drawSpaces(spacesBetween);
		//draw star
		drawStars(oneStar);
		//draw spaces
		drawSpaces(spacesOnRightFace);
		//draw star
		drawStars(oneStar);
		//draw spaces
		drawSpaces(spacesBefore);

		counter++;
		spacesOnRightFace--;
		spacesBefore++;
		cout << endl;
	}


	//part 5
	drawStars(side);
	drawSpaces(spacesBefore);
}

void Cube::drawSpaces(int numOfSpaces) {
	for (int i = 0; i < numOfSpaces; i++)
	{
		cout << " ";
	}
}

void Cube::drawStars(int numOfStars) {
	for (int i = 0; i < numOfStars; i++)
	{
		cout << "*";
	}
}