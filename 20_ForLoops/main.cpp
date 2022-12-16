#include <cstdlib>
#include <iostream>
#include <signal.h>

using namespace std;

int main() {

    // [For] is a repeating loop following its parameters: ex = {i = 0; i <= 10; i++} - In this case, it will go 10x something!
    // *(i++ == i + 1) 

    int opc;
    cout << "1 - Simple Example [FOR] "
            "\n2 - Countdown to New Year [FOR] with sleep()!"
            "\nEnter Option: ";
    cin >> opc;

    switch (opc) {

        case 1:
            int lim;
            cout << "Enter a limit number for the loop to print: ";
            cin >> lim;
            for (int i = 1; i <= lim; i++) {
                cout << "# - " << i << endl;
            }
            break;

        case 2:
            for (int i = 1; i <= 10; i++) {
                cout << i << endl;
                sleep(1);
            }
            cout << "Happy New Year! " << endl;
            break;
        default: cout << "Option Invalid! ";
    }
    return 0;
}