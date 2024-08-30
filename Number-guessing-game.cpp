#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int randomNumber = rand() % 100 + 1;
    int guessedNumber = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have generated a random number between 1 and 100." << endl;
    cout << "Can you guess what number it is?" << endl;

    while (true) 
    {
        cout << "Enter your guess: ";
        cin >> guessedNumber;

        if (guessedNumber > randomNumber) 
        {
            cout << "The number you guessed is too high! please Try again." << endl;
        } 
        else if (guessedNumber < randomNumber) 
        {
            cout << "The number you guessed is low! please Try again." <<endl;
        } 
        else
        {
            cout << "Congratulations! You guessed the correct number!" <<endl;
            break;
        }
    }

    return 0;
}
