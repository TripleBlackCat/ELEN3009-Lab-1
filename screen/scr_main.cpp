// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	Screen myScreen{9,9};
	
	int x = 3;
	int y = 3;
	int sideLength = 3;
	
	myScreen.drawSquare(x, y, sideLength);
	myScreen.display();

	return 0;
}