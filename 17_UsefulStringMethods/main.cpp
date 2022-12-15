#include <cstdlib>
#include <iostream>
#include <filesystem>

using namespace std;

int main() {

    string name;
    cout << "Enter your name? ";
    getline(cin, name);

    int opc;
    cout << "Example :\n";
    cout << "1 - .length() s- Validates your name with the length of 12 characters\n";
    cout << "2 - .empty() - Check if your name is empty!\n";
    cout << "3 - .clear() - Clear the variable\n";
    cout << "4 - .append() - Concatenates a value to the end of the variable\n";
    cout << "5 - .at() - Prints the value, in the desired position\n";
    cout << "6 - .insert() - Insert value at the desired position\n";
    cout << "7 - .erase() - Remove a range of characters from a variable \n";
    cout << "8 - .find() - Search the value in the string and return the position\n";
    cout << "Enter Option : ";
    cin >> opc;

    switch (opc) {

        case 1:
            // - Example (.length())
            if (name.length() > 12) {
                cout << "Your name can't be over 12 characters!";
            } else {
                cout << "Welcome " << name << endl;
            }
            break;

        case 2:
            // - Example (.empty())
            if (name.empty()) {
                cout << "You didn't enter your name!";
            } else {
                cout << "Hello " << name << endl;
            }
            break;

        case 3:
            //    - Example (.clear())
            name.clear();
            cout << "Name: " << name;
            break;

        case 4:
            //   - Example (.append())
            name.append("@gmail.com");
            cout << "Name: " << name;
            break;

        case 5:
            //   - Example (.at())
            int posi;
            cout << "Enter a number to print the position:";
            cin >> posi;
            cout << name.at(posi);
            break;

        case 6:
            //   - Example (.insert())
            name.insert(0, "@");
            cout << name;
            break;

        case 7:
            //   - Example (.erase())
            int be, en;
            cout << "Enter number of position [beginning] - for remov :";
            cin >> be;
            cout << "Enter number of position [end] - for remov :";
            cin >> en;
            cout << name.erase(be, en) << endl;
            break;

        case 8:
            //   - Example (.find())
            cout << name.find('F');
            //    Search the value in the string and return the position!
            break;
        default:
            cout << "Option Invalid" << endl;
    }
    return 0;
}