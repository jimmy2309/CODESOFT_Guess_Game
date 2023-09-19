#include<bits/stdc++.h>
using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int rn = rand() % 100 + 1;

    // Initialize variables
    int un;
    int count = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a random number between 1 and 100. Try to guess it." << endl;

    // Main game loop
    while (true) {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> un;
        count++;

        if (cin.fail() || un < 1 || un > 100) {
            cout << "Invalid input. Please enter a valid number between 1 and 100." << endl;
            cin.clear(); // Clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore any remaining input
            continue;
        }

        if (un == rn) {
            cout << "Congratulations! You guessed the correct number, which is " << rn << endl;
            cout << "You took " << count << " attempts to guess it." << endl;
            break;
        } else if (un < rn) {
            cout << "Too low. Try again." << endl;
        } else {
            cout << "Too high. Try again." << endl;
        }
    }

    return 0;
}
