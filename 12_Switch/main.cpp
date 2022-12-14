#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    /* Switch is similar to "IF, ELSE". The same works with blocks of conditions called "CASE's", 
     * for each condition matched the switch directs to a specific CASE
     */

    /*
     * Switch can in some cases be better than "IF, ELSE". 
     * Because depending on the algorithm and conditions it does not repeat much code and is cleaner and more organized...
     */


    int month;
    month = 0;

    cout << "Enter a number corresponding to the months of the year: ";
    cin >> month;
    system("clear");

    switch (month) {
        case 1:cout << month << " - this month is  January " << endl;
            break;
        case 2:cout << month << " - this month is  February " << endl;
            break;
        case 3:cout << month << " - this month is   March " << endl;
            break;
        case 4:cout << month << " - this month is  April " << endl;
            break;
        case 5:cout << month << " - this month is   May " << endl;
            break;
        case 6:cout << month << " - this month is   June " << endl;
            break;
        case 7:cout << month << " - this month is   July " << endl;
            break;
        case 8:cout << month << " - this month is  August " << endl;
            break;
        case 9:cout << month << " - this month is   September " << endl;
            break;
        case 10:cout << month << " - this month is  October " << endl;
            break;
        case 11:cout << month << " - this month is  November " << endl;
            break;
        case 12:cout << month << " - this month is  December " << endl;
            break;
        default:cout << "Month no extist" << endl;
    }
    return 0;
}