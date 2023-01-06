#include <iostream>

using namespace std;

int main(){

    /*
    Pointers = variable that stores a memory address of another variable 
               sometimes it's easier to work with an address
    
     & address of operator 
     * dereference operator

    */

    string name = "Fabricio";
    int age = 20;

    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    //Pointers...
    string *pName = &name;
    int *pAge = &age;
    //string *pPizzas = freePizzas;

    cout << *pAge << " - Address: " << pAge << '\n';
    cout << *pName << " - Address: " << pName << '\n';
    cout << *freePizzas << " - Address: " << freePizzas << '\n';

    return 0;
}