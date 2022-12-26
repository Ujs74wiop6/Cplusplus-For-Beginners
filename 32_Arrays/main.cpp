#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    // Array is a structure that can store more than one value - of the same type

    string names[] = {"fabricio", "carol", "vitor"};
    int numbers[] = {9, 19, 123};

    // The array, like countless computational components, starts counting from 0 (Zero)!

    cout << names[0] << '\n';
    cout << numbers[1] << '\n';
    
    // Manubulation using Arrays
    int soma;
    soma = numbers[0] - numbers[1];
    cout << soma;

    return 0;
}