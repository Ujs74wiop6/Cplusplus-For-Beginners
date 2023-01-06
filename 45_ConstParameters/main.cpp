#include <iostream>

using namespace std;

/*
Const Parameter = parameter that is effectively read-only 
                  code is more secure & conveys intent 
                  useful for references and pointers...
*/

void printInfo(const string &name, const int &age);

int main(){

    string name = "Fabricio";
    int age = 20;

    printInfo(name, age);

    return 0;
}

// The constant in parameter blocked whatever modifications in variables

void printInfo(const string &name, const int &age){

    //name = " ";
    //age = 0;

    cout << name << '\n';
    cout << age << '\n';

}