#include <cstdlib>
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

/*https://cplusplus.com/reference/cmath/*/

int main() {
    double x, y, z;
    x = 3;
    y = 4;

    //Function native of get value smaller
    z = max(x, y);

    //Function native of get value larger
    z = min(x, y);

    //Function elevation between two values
    z = pow(10, 2);

    //Function shows the square of the number in question
    z = sqrt(49);

    //Function that sets the value to positive 
    z = abs(-100);

    //Function that takes only the integer part of the value
    z = round(3.90);

    cout << "Z: " << z << endl;

    return 0;
}