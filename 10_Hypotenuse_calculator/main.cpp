#include <cstdlib>
#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main() {

    //c = √ a^2 + b^2

    double a, b, c;

    cout << "Enter side A: ";
    cin >> a;
    cout << "Enter side B: ";
    cin >> b;

    c = sqrt(pow(a, 2) + (pow(b, 2)));

    cout << "Side C = " << c << endl;

    return 0;
}