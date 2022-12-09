#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    // Everything inside the "IF" or if the condition matches the respective value... is [TRUE]
    // Whatever is outside the "IF" or even inside an "ELSE" is [FALSE]

    int age;

    cout << "What your age: ";
    cin >> age;

    if ((age > 0) && (age >= 18)) {
        cout << "You are of legal age" << endl;
    } else if (age < 0) {
        cout << "This information is invalid. \nYou're not even born yet, it doesn't make sense!" << endl;
    } else {
        cout << "You are underage" << endl;
    }

    /* To expand or make a more accurate condition, you can make use of the logical operators:
       The ”and” (&&) 
       The “or” (||) 
       The “not” (!) 
    ---------------------------
       The "equal" (==)
       The "different" (!=) 
       The "bigger then" (>=) 
       The "less than" (<=) 
     */

    return 0;
}