#include <cstdlib>
#include <iostream>

using namespace std;

// cout << (insertion operator) "output"
// cin  >> (extraction operator) "input"

int main() {

    string name, fullname;
    int age;

    cout << "What is your full name? ";
    //getline take the whole line, do not let the structure be skipped, in order of execution
    getline(cin, fullname);
    cout << "What is your age? ";
    cin >> age;

    cout << "Hello " << name << endl;
    cout << "Your have " << age << " year old" << endl;

    return 0;
}