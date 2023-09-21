#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // Seed for random number generation

    int computerChoice = rand() % 3 + 1;  // Random choice for the computer (1: Rock, 2: Paper, 3: Scissors)
    int userChoice;

    cout << "Let's play Rock-Paper-Scissors!\n";
    cout << "Enter your choice (1: Rock, 2: Paper, 3: Scissors): ";
    cin >> userChoice;

    // Display user's choice
    cout << "You chose: ";
    switch (userChoice) {
        case 1:
            cout << "Rock\n";
            break;
        case 2:
            cout << "Paper\n";
            break;
        case 3:
            cout << "Scissors\n";
            break;
        default:
            cout << "Invalid choice. Please choose 1, 2, or 3.\n";
            return 1;
    }

    // Display computer's choice
    cout << "Computer chose: ";
    switch (computerChoice) {
        case 1:
            cout << "Rock\n";
            break;
        case 2:
            cout << "Paper\n";
            break;
        case 3:
            cout << "Scissors\n";
            break;
    }

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }

    return 0;
}
