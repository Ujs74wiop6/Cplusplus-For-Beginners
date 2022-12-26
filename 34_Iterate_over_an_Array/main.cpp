#include <cstdlib>
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {

    string names[] = {"Gabriel", "Vitor", "Gustavo", "João"};

    // The function size() return size of variable 
    for (int i = 0; i < size(names); i++) {
        cout << names[i] << '\n';
    }

    return 0;
}