#ifndef _CUBE
#define _CUBE
#include<string>
using namespace std;

class Cube {
private:
	int side;
	int stars;
	int spacesBefore;
	int spacesBetween;
	int spacesOnRightFace;
	int row;
	int col;
	string output;

public:
	Cube(); //default constructor
	void setSide(int sidePar); //setter, mutator
	int getSide(); //getter, accessor
	void displayCube();
	void drawSpaces(int numOfSpaces);
	void drawStars(int numOfStars);
};

#endif
