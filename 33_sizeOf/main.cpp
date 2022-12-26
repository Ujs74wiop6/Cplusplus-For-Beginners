#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    // The Sizeof() determines the size in bytes of a data, variable...

    cout << "Size of Boolean: " << sizeof (bool) << " bytes\n";
    cout << "Size of Char: " << sizeof (char) << " bytes\n";
    cout << "Size of Int: " << sizeof (int) << " bytes\n";
    cout << "Size of Double: " << sizeof (double) << " bytes\n";
    cout << "Size of String: " << sizeof (string) << " bytes\n";

    return 0;
}