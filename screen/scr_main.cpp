// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	Screen myScreen{6,6};
	int pos = 2;
	
	for(int i = 1; i < 7;i++)
	{
		myScreen.set('*');
		myScreen.forward();
	}
		
		
	for(int j = 1; j < 5; j++)
	{
		myScreen.move(pos,3);
		myScreen.set('*');
		myScreen.move(pos,4);
		myScreen.set('*');
		pos++;
	}
		
	myScreen.move(6,1);
		
	for(int i = 1; i < 7;i++)
	{
		myScreen.set('*');
		myScreen.forward();
	}
	
	//Testing enum and overloaded move function
	myScreen.move(5,1);
	myScreen.move(Direction::FORWARD);
	myScreen.set('*');
	
	myScreen.display();
	cout << endl;
		
	return 0;
}

