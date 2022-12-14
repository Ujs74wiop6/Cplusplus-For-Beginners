#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    /* Ternary Operator are identical to "IF, ELSE" 
     *  - Their difference is that they are much simpler and more direct. Operations working directly with true/false [0,1]... 
     * Estruct = (condition ? expression1 [TRUE] : expression2; [FALSE] )
     */

    //Ex1
    int fpont = 0;

    cout << "Enter your Final Point: ";
    cin >> fpont;

    fpont >= 6 ? cout << "Nice" << endl : cout << "Bad" << endl;

    //Ex2
    int number = 0;
    cout << "Enter number: ";
    cin >> number;

    number % 2 == 0 ? cout << "EVEN " << endl : cout << "ODD" << endl;

    return 0;
}