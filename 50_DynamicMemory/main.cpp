#include <iostream>

using namespace std;

int main(){

    /*
    Dynamic Memory = Memory this is allocated after the program
                     is already compiled & running.
                     Use the 'new' operator to allocate
                     memory in the heap rether than the stack

                     Useful when we don't know much memory
                     we will need. Makes our programs more flexible, 
                     especially when acceptinh user input.
    */

   int *pNUm = NULL;
   pNUm = new int;
   *pNUm = 21;
   cout << "Address: "<<  pNUm << '\n';
   cout << "Value: "<<  *pNUm << '\n';

    char *pGrades = NULL;
    int tam;

    cout << "How many grades to enter in?: ";
    cin >> tam;

    pGrades = new char[tam];

    for (int i = 0; i < tam; i++){
        cout << "Enter grade " << i + 1  << ": ";
        cin >> pGrades[i];
    }

    for (int i = 0; i < tam; i++){
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    cout << endl;

    /*
    for (int i = 0; i < tam; i++){
        cout << pGrades[i] << " ";
    }
    */
   
    return 0;
}