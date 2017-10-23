#include "StopWatch.h"
#include <ctime>
#include <iostream>

using namespace std;


StopWatch::StopWatch()
{
	timeInitial = 0;
	timeFinal = 0;
}

void StopWatch::startTimer()
{
	timeInitial = getProcessTime();
}

void StopWatch::stopTimer()
{
	timeFinal = getProcessTime();
}

double StopWatch::getDuration()
{
	if (timeFinal < timeInitial)
	{
		cerr << "Please start timer before ending it " << endl; 
		
	}
	
	return timeFinal - timeInitial;
}

double StopWatch::getProcessTime()
{
	clock_t time = clock();
	return static_cast<double>(time)/CLOCKS_PER_SEC;
}