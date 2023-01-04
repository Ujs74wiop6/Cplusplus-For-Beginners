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
        cout << "Enter value: ";
        cin >> array[i];
    }

    system("clear");

    cout << "Array Element's: " << '\n';
    for (int j = 0; j < x; j++) {
        cout << array[j] << " ";
    }
    cout << '\n';
    return 0;
}