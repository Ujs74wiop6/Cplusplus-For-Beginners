#include <cstdlib>
#include <iostream>

using namespace std;

int searchArray(int array[], int tam, int myNum);

int main() {

    int number[] = {86, 53, 12, 7, 80, 3, 5, 19, 52, 11};
    int tam = size(number);
    int index;
    int myNum;

    cout << "Enter element to search for: " << '\n';
    cin >> myNum;
    system("clear");

    index = searchArray(number, tam, myNum);

    if (index != -1) {
        cout << myNum << " is at index - " << index << endl;
    } else {
        cout << myNum << " is not in the array" << endl;
    }

    return 0;
}

int searchArray(int array[], int tam, int myNum) {

    for (int i = 0; i < tam; i++) {
        if (array[i] == myNum) {
            return i;
        }
    }
    return -1;
}