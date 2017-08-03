// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	Screen myScreen{30,32};
	
	myScreen.move(1,1);
	myScreen.set('1');
	myScreen.up();
	myScreen.set('2');
		
	myScreen.move(30,3);
	myScreen.set('3');
	myScreen.down();
	myScreen.set('4');
		
	myScreen.display();

	return 0;
}

