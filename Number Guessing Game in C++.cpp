#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    int lowerBound = 1;
    int upperBound = 100;
    int numberToGuess = rand() % (upperBound - lowerBound + 1) + lowerBound;
    int playerGuess = 0;
    int numberOfTries = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between " << lowerBound << " and " << upperBound << "." << endl;

    // Game loop
    while (playerGuess != numberToGuess) {
        cout << "Enter your guess: ";
        cin >> playerGuess;
        numberOfTries++;

        if (playerGuess < lowerBound || playerGuess > upperBound) {
            cout << "Please guess a number between " << lowerBound << " and " << upperBound << "." << endl;
        } else if (playerGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (playerGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << numberToGuess << " in " << numberOfTries << " tries!" << endl;
        }
    }

    return 0;
}