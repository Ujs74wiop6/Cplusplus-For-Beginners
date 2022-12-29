#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    // Created Array Dinamic

    int x = 0;
    cout << "Enter size an Array[]: ";
    cin >> x;
    system("clear");

    string array[x];

    for (int i = 0; i < x; i++) {
        cout << "Enter 'q' to quit \nEnter value: ";
        getline(cin, array[i]);
        if (array[i] == "q") {
            break;
        }
    }
    system("clear");

    cout << "Size Array: " << x << '\n';
    cout << "Array Element's: " << '\n';
    for (int j = 0; j < x; j++) {
        if (array[j] != "q") {
            cout << array[j] << " ";
        }
    }
    return 0;
}