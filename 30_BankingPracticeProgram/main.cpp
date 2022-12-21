#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

    double balance = 100;
    int choice = 0;

    do {
        cout << "------------------------------\n";
        cout << "Enter your choice:\n ";
        cout << "------------------------------\n";
        cout << "1 - Show Balance\n";
        cout << "2 - Deposit Money\n";
        cout << "3 - Withdraw Money\n";
        cout << "4 - Exit\n";
        cin >> choice;
        system("clear");

        switch (choice) {

            case 1:showBalance(balance);
                break;
            case 2:balance += deposit();
                system("clear");
                showBalance(balance);
                break;
            case 3:
                if (withdraw(balance) != 0) {
                    balance -= withdraw(balance);
                    system("clear");
                    showBalance(balance);
                } else {
                    system("clear");
                    cout << "You can no longer withdraw from this account" << endl;
                }
                break;
            case 4:cout << "Thanks for the visit" << endl;
                break;
            default:cout << "Option Invalid" << endl;
        }

    } while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    cout << "Your Balance is: $" << setprecision(2) << fixed << balance << endl;
}

double deposit() {
    double deposit;
    cout << "Enter deposit: ";
    cin >> deposit;
    return deposit;
}

double withdraw(double balance) {
    double withdraw;
    cout << "Enter withdraw: ";
    cin >> withdraw;
    if (withdraw > balance) {
        return 0;
    } else {
        return withdraw;
    }
}