#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int tries = 1;
	int guess = -1;
	bool isGuessCorrect = false;
	int randomNumber = rand() %100 + 1;


	while ((isGuessCorrect == false) && (tries <= 5))
	{
		cout << "Guess a number between 1 and 100: \n";
		cin >> guess;

		if (guess == randomNumber)
		{
			cout << "You win \n";
			isGuessCorrect = true;
		}
		else if (guess < randomNumber)
		{
			cout << "Guess higher \n\n";
		}
		else if (tries < 5)
		{
			cout << "Guess lower \n\n";
		}

		tries++;
	}

	if (isGuessCorrect == false)
	{
		cout << "\nYou lose, the correct number was: "<< randomNumber << "\n";
	}

	return 0;

}