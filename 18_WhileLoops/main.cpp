#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    //While it is a repeating loop, it repeats whatever is present in the code block corresponding to the parameter condition.

    string name;

    int opc;

    cout << "Example \n1 - Simple Loop \n2 - Infinite Loop \nEnter your option: ";
    cin >> opc;

    switch (opc) {
        case 1:
            //while (name.length() == 0) {
            // or
            while (name.empty()) {
                cout << "Enter your name: ";
                getline(cin, name);
            }
            cout << "Hello " << name << endl;
            break;
        case 2:
            while (1 == 1) {
                cout << "Loop! - Help";
            }
            //Ctrl + C for close system!   
            break;
        default:
            cout << "Option invalid" << endl;
    }

    return 0;
}