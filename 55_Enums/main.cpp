#include <iostream>

using namespace std;

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main(){

    /*
    Enums = A user-defined data type that consists
            of paired named-integer constants.
            GREAT if you have a set of potential options
    */

   Day today = saturday;

    switch (today){
    case 0: cout << "It is Sunday" << endl;
        break;
    case 1: cout << "It is Monday" << endl;
        break;
    case 2: cout << "It is Tuesday" << endl;
        break;
    case 3: cout << "It is Wednesday" << endl;
        break;
    case 4: cout << "It is Thursday" << endl;
        break;
    case 5: cout << "It is Friday" << endl;
        break;
    case 6: cout << "It is Saturday" << endl;
        break;
    default: cout << "Day invalid" << endl;
        break;
    }

    return 0;
}