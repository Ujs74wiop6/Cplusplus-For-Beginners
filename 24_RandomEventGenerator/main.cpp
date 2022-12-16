#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    int ramNum;
    ramNum = rand() % 5 + 1;

    switch (ramNum) {
        case 1: cout << "Your win a bumper sticker!\n ";
            break;
        case 2: cout << "You won a ball!\n";
            break;
        case 3: cout << "You got a free lunch\n";
            break;
        case 4: cout << "You won nothing...\n";
            break;
        case 5:cout << "You got a free pass\n";
            break;
    }
    return 0;
}