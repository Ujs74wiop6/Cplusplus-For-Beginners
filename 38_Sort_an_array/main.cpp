#include <cstdlib>
#include <iostream>
#include <unordered_set>

using namespace std;

// The Sort() method is very famous and used to sort a group of unsorted elements

void sortC(int array[], int tam);
void sortD(int array[], int tam);

int main() {

    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int tam = size(array);
    int opc = 0;

    cout << "1 - Print array[] Normal \n"
            "2 - Print array[] Sorting C \n"
            "3 - Print array[] Sorting D\n"
            "Enter Option: ";
    cin >> opc;

    if (opc == 1) {
        for (int i = 0; i < tam; i++) {
            cout << array[i] << " ";
        }
    } else if (opc == 2) {
        sortAscending(array, tam);
        for (int i = 0; i < tam; i++) {
            cout << array[i] << " ";
        }
    } else if (opc == 3) {
        sortDescending(array, tam);
        for (int i = 0; i < tam; i++) {
            cout << array[i] << " ";
        }
    } else {
        cout << "Option Invalid\n";
    }
    return 0;
}

// Ascending order

void sortAscending(int array[], int tam) {
    int temp;
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Descending order

void sortDescending(int array[], int tam) {
    int temp;
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}