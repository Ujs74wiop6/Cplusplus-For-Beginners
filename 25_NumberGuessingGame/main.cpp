#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    int x;
    int num;
    int guess;
    int tries = 0;


    cout << "************* GUESSING NUMBERS GAME *************\n";

    cout << "Enter limited number for game: ";
    cin >> x;

    srand(time(NULL));
    num = (rand() % x) + 1;

    do {
        cout << "Enter number: ";
        cin >> guess;
        tries++;

        if (guess > num) {
            cout << "This is High!\n";
        } else if (guess < num) {
            cout << "This is Low!\n";
        } else {
            cout << "CORRECT! - You got it right with " << tries << " attempts\n";
        }
    } while (guess != num);
    cout << "******************************************************\n";
    return 0;
}