#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    double temp;
    char unit;

    cout << "************** Temperature Conversion ************** " << endl;
    cout << "F = Fahrenheit\nC = Celsius\n What unit would you like to convert to:  ";
    cin >> unit;

    if (unit == 'F' || unit == 'f') {
        cout << "Enter the temperature is Celsius: ";
        cin >> temp;
        temp = (1.8 * temp) + 32.0;
        cout << "Temperature is: " << temp << " Fahrenheit" << endl;
    } else if (unit == 'C' || unit == 'c') {
        cout << "Enter the temperature is Fahrenheit: ";
        cin >> temp;
        temp = (temp - 32) / 1.8;
        cout << "Temperature is: " << temp << " Celsius" << endl;
    } else {
        cout << "Unit invalid" << endl;
    }
    cout << "****************************************************** " << endl;
    return 0;
}