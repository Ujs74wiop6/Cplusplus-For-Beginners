#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    //    "Loop inside another loop?" - this makes the elements now have more than one dimension: 2, 3, 4... 
    //     Whatever, who determines the dimension of this 'matrix' 
    //     is the upper loop. Now the loop doesn't traverse/print or manipulate just one line - it does it all with an entire set of data

    int rows;
    int columns;
    char symbol;

    cout << "How many rows: ";
    cin >> rows;

    cout << "How many columns: ";
    cin >> columns;

    cout << "Enter a symbol to use: ";
    cin >> symbol;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            cout << symbol;
        }
        cout << '\n';
    }
    return 0;
}