// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	Screen myScreen{9,9};
	
	int x = 8;
	int y = 8;
	int sideLength = 5;
	
	myScreen.drawSquare(x, y, sideLength);
	myScreen.display();

	// Changing the class's interface can be catastrophic as it could change the expected outputs and inputs. It is preferable to only change the implementation. As changing the implementation doesnt change the expected inputs and outputs for functions.
	
	return 0;
}