#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    // forEach loop =  loop that eases the traversal over an iterable data set
    
    string names[] = {"Gabriel", "Vitor", "Gustavo", "João"};
    
    //Simple loop*

    for (string name : names) {
        cout << name << '\n';
    }
    return 0;
}