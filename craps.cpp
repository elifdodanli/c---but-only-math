/*
A player rolls two dice. Each die has six faces: 1, 2, 3, 4, 5, and 6.
After rolling, the player calculates the sum of the two upward faces.

    If the sum is 7 or 11 on the first roll, the player wins immediately.

    If the sum is 2, 3, or 12 on the first roll, the player loses immediately (this is called "craps").

    If the sum is 4, 5, 6, 8, 9, or 10, that number becomes the player's "point".

        The player keeps rolling the dice until:

            They roll the point again (they win), or

            They roll a 7 (they lose).

Write a program that simulates this dice game.
*/

#include <iostream>
#include <cstdlib>
#include <ctime> // For seeding random number generator
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator

    int dice1, dice2, sum, point;

    dice1 = (rand() % 6) + 1;
    dice2 = (rand() % 6) + 1;
    sum = dice1 + dice2;

    cout << "You rolled: " << dice1 << " + " << dice2 << " = " << sum << endl;

    switch (sum) {
        case 7:
        case 11:
            cout << "You win!" << endl;
            break;
        case 2:
        case 3:
        case 12:
            cout << "You lose!" << endl;
            break;
        default:
            point = sum;
            cout << "Point is set to: " << point << endl;
            // Keep rolling until player wins (makes point) or loses (rolls 7)
            while (true) {
                dice1 = (rand() % 6) + 1;
                dice2 = (rand() % 6) + 1;
                sum = dice1 + dice2;

                cout << "You rolled: " << dice1 << " + " << dice2 << " = " << sum << endl;

                if (sum == point) {
                    cout << "You made your point! You win!" << endl;
                    break;
                }
                else if (sum == 7) {
                    cout << "You rolled a 7. You lose!" << endl;
                    break;
                }
            }
    }

    return 0;
}
