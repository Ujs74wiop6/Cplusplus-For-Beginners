#include <cstdlib>
#include <iostream>

using namespace std;

//    Functions  are blocks of code built with some purpose 
//    [MODULAR PROGRAMMING], being able to make use of parameters... 
//    (Starting from basic concepts such as: input, processing and output) 


// Whenever you are going to use a function, do not forget to make your declaration first!
void happyBirthday(string name);

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    happyBirthday(name);

    return 0;
}

void happyBirthday(string name) {
    // Functions of type VOID, do not return*
    cout << "Happy Birthday to you! " << name << '\n';
}