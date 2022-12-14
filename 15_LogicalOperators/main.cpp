#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    /*
     *   - && - AND 
     *   - | | - OR
     *   - ! - NOT 
     */


    int opc = 0;

    cout << "Example\n [1-&&], [2-| |], [3-!]: ";
    cin >> opc;


    switch (opc) {
        case 1:
            //Ex1
            int temp;
            cout << "Enter the temperature: ";
            cin >> temp;
            if (temp > 0 && temp < 30) {
                cout << "The temperature is good" << endl;
            } else {
                cout << "The temperature is bad" << endl;
            }
            break;
        case 2:
            //Ex2
            int age;
            float height;
            cout << "Enter your age: ";
            cin >> age;
            cout << "Enter your height: ";
            cin >> height;
            if ((age >= 15) || (height > 1.60)) {
                cout << "You meet the parameters to go to the toy" << endl;
            } else {
                cout << "You meet the parameters to go to the toy" << endl;
            }
            break;
        case 3:
            //Ex3
            int n;
            cout << "Enter number: [To compare with the number 10*] ";
            cin >> n;
            if (n != 10) {
                cout << "This number not is the number 10" << endl;
            } else {
                cout << "This is number 10" << endl;
            }
            break;
        default: cout << "Invalid" << endl;
    }
    return 0;
}