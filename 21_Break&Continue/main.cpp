#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    // break - For the loop
    // continue - Continue from...

    int opc;
    cout << "1 - Example [FOR] + continue "
            "\n2 - Example [FOR] + break "
            "\nEnter Option: ";
    cin >> opc;

    switch (opc) {
        case 1:
            for (int i = 1; i <= 10; i++) {
                if (i == 3) {
                    continue;
                }
                cout << "# - " << i << endl;
            }
            break;
        case 2:
            for (int j = 1; j <= 10; j++) {
                if (j == 3) {
                    break;
                }
                cout << "# - " << j << endl;
            }
            break;
    }
    return 0;
}