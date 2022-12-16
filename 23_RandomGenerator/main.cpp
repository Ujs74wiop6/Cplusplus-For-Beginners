#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    //Generated number random (not truly random*)  - "pseudo-random"


    srand(time(NULL));

    int num1;
    num1 = (random() % 100) + 1;
    // num1 = ((random() % 100) + 1) + 1;
    // num1 = (((random() % 100) + 1) + 1) + 1;

    // For each "+1" this symbolizes one more random random to arrive at the final number

    cout << num1;

    return 0;
}