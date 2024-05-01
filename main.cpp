#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	const int MIN_NUMBER = 1;
	const int MAX_NUMBER = 500;
	int secretNumber = rand() % 1 + 499;
	int guess;
	cout << "Guess the number from " << MIN_NUMBER << " to " << MAX_NUMBER << endl;
	cout << "Enter 0 to exit the game." << endl;
	for (size_t i = 1; ; i++)
	{
		cout << "Attempt " << i << ": ";
		cin >> guess;
		if (guess == 0) {
			cout << "You are out of the game." << endl;
		}
		else if (guess < secretNumber) {
			cout << "More" << endl;
		}
		else if (guess > secretNumber) {
			cout << "Less" << endl;
		}
		else {
			break;
		}
	}
	cout << "You guessed the number " << secretNumber << "!" << endl;
	return 0;
}