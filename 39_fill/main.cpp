#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

// fill() = Fills a range of elements with a specified value

// Struct function: fill( begin, end, value)

int main() {

    // A not very useful solution, but it can be better executed with the fill function (little code)
    
    //string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};
    string foods[10];
    fill(foods, foods + 10, "pizza");
    
    for (string food : foods) {
        cout << food << endl;
    }

    return 0;
}