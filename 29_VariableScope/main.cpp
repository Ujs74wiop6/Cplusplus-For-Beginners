#include <cstdlib>
#include <iostream>

using namespace std;

// Local* Variable is the one you create and use exclusively within the function; it is alive and ready for use only within the function...
// Global* Variable is the one you create outside the function and it is free to be used and manipulated inside any method...

int printNum1();
//Global Variable
int myNum = 1;

int printNum2(int myNum);

int main() {

    //Ex1: Use of Local Variable...

    //Global Local
    int myNum = 1;

    cout << "I am the result of the 1st Ex:" << myNum << endl;
    cout << "I am the result of the 2st Ex: " << printNum1() << endl;
    cout << "I am the result of the 3st Ex:" << printNum2(myNum) << endl << endl;

    cout << "---------------------------------------------------------------------------------" << endl << endl;

    int opc = 0;
    cout << "Type 1 - to see an example of a Global Variable"
            "\nType 2 - to see an example of Local Variable"
            "\nType 3 - to see an example of Variable passed by Parameter"
            "\nEnter your option:";
    cin >> opc;

    switch (opc) {
        case 1:

            cout << "\nint x;" << endl;
            cout << "void function(){" << endl;
            cout << "cout << x << endl;" << endl;
            cout << "}" << endl;

            break;
        case 2:

            cout << "\nvoid function(){" << endl;
            cout << "int x;" << endl;
            cout << "cout << x << endl;" << endl;
            cout << "}" << endl;

            break;
        case 3:

            cout << "\nvoid function(){" << endl;
            cout << "int x;" << endl;
            cout << "cout << function(x) << endl;" << endl;
            cout << "}" << endl << endl;
            cout << "void function(int x){" << endl;
            cout << "cout << x << endl;" << endl;
            cout << "}" << endl;

            break;
        default: cout << "Option Invalid" << endl;
    }

    return 0;
}

// The function can only use the [myNum ] variable if it is declared outside of main; globally
// Or you have the option of using the variable declared inside the function; locally {It will only be available inside the function!}
// Or you have the option of using variables from any of the two options above, just pass them by parameter: function(HERE...){}

//Ex2: Use of Global Variable...

int printNum1() {
    return myNum;
}

//Ex3: Use of Variable passed by Parameter...

int printNum2(int myNum) {
    return myNum;
}