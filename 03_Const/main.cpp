#include <iostream>

int main() {

    /*
    Variables & Constant!
    The increment "const" in the variable, makes it have that fixed or constant value
     */


    const double PI = 3.14159;
    // PI = ... {Does not work}
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm\n";

    return 0;
}

