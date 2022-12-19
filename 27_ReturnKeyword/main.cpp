#include <cstdlib>
#include <iostream>

using namespace std;

// declaration
double square(double length);
double cube(double length);
string concatString(string string1, string string2);

// construction of the function

double square(double length) {
    return length * length;
}

double cube(double length) {
    return length * length * length;
}

string concatString(string string1, string string2) {
    return string1 + " " + string2;
}

int main() {

    int opc;

    cout << "1 - Area & Volume Calculation "
            "\n2 - String Concatenation "
            "\nEnter your option: ";
    cin >> opc;

    switch (opc) {
        case 1:
            double length;
            double area;
            double volume;

            cout << "Enter the length: ";
            cin >> length;

            area = square(length);
            volume = cube(length);

            cout << "Area: " << area << " cm^2\n";
            cout << "Volume: " << volume << " cm^3\n";
            break;

        case 2:
            string firstName;
            string lastName;
            string fullName;

            cout << "Enter First name: ";
            cin >> firstName;
            cout << "Enter Last name: ";
            cin >> lastName;

            fullName = concatString(firstName, lastName);

            cout << "Hello " << fullName << '\n';
    }
    return 0;
}