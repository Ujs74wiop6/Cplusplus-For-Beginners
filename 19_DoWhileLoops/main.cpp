#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    //    [Do] -> is the code block called while the condition is TRUE;
    //    [While] -> is who determines this condition...
    //            * When the value is FALSE, it exits the loop

    int n;

    do {
        cout << "Enter a positive number: ";
        cin >> n;
    } while (n < 0);
    cout << "This number is:  " << n;
    return 0;
}