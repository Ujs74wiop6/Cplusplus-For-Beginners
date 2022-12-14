#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    char op;
    double n1, n2, result = 0;

    cout << " *************** CALCULATOR *************** " << endl;
    cout << "[ + - * / ]" << endl;
    cout << "Enter your choice to calculate: ";
    cin >> op;

    cout << "Enter 1° number: ";
    cin >> n1;
    cout << "Enter 2° number: ";
    cin >> n2;

    switch (op) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            result = (n1 / n2);
            break;
        default: cout << "Choice does not exist" << endl;
    }

    cout << "Result: " << result << endl;

    cout << " ********************************************* " << endl;

    return 0;
}