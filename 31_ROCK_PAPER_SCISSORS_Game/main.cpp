#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {

    char player;
    char computer;

    player = getUserChoice();
    cout << "You choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer choice: ";
    showChoice(computer);

    chooseWinner(player, computer);
    return 0;
}

char getUserChoice() {

    char player;
    cout << "Rock-Paper-Scissors Game!" << endl;

    do {
        cout << "Choose one of the following" << endl;
        cout << "***************************" << endl;
        cout << " 'r' for rock" << endl;
        cout << " 'p' for paper" << endl;
        cout << " 's' for scissors" << endl;
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice() {

    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num) {
        case 1: return 'r';
            break;
        case 2: return 'p';
            break;
        case 3: return 's';
            break;
    }
    return 0;
}

void showChoice(char choice) {
    switch (choice) {
        case 'r': cout << "Rock" << endl;
            break;
        case 'p': cout << "Paper" << endl;
            break;
        case 's': cout << "Scissors" << endl;
            break;
        default: cout << "Choice Invalid" << endl;
    }
}

void chooseWinner(char player, char computer) {

    switch (player) {
        case 'r':
            if (computer == 'r') {
                cout << " It's a tie! " << endl;
            } else if (computer == 'p') {
                cout << "Computer Win" << endl;
            } else {
                cout << "You Win" << endl;
            }
            break;
        case 'p':
            if (computer == 'p') {
                cout << " It's a tie! " << endl;
            } else if (computer == 'r') {
                cout << "You Win" << endl;
            } else {
                cout << "Computer Win" << endl;
            }
            break;
        case 's':
            if (computer == 's') {
                cout << " It's a tie! " << endl;
            } else if (computer == 'r') {
                cout << "Computer Win" << endl;
            } else {
                cout << "You Win" << endl;
            }
    }
}