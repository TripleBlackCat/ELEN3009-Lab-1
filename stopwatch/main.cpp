#include <iostream>
#include "StopWatch.h"

using namespace std;


int main() {
	
	
	StopWatch stopwatch;
	stopwatch.startTimer();	

	for (long i = 0; i < 1000000000; i++)
	{
		
	}
	
	stopwatch.stopTimer();
	cout << "Time taken: " << stopwatch.getDuration() << endl;
	
	stopwatch.startTimer();	

		for (long i = 0; i < 1000000000; i++)
		{
			
		}
		
	stopwatch.stopTimer();
	cout << "Time taken: " << stopwatch.getDuration() << endl;
	
	return 0;
}