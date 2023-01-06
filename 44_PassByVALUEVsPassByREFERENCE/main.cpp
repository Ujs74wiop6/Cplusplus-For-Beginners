#include <iostream>

using namespace std;

void swapNoRef(string x, string y);
void swapWitchRef(string &x, string &y);

int main(){

    string x = "Kool-Aid";
    string y = "Water";
    string temp;

    //swapNoRef(x, y);
    //swapWitchRef(x, y);

    /*
    What has changed is the sign (&)
    For to occur change in the values passed by parameter in the function
    */

    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';

    return 0;
}

void swapNoRef(string x, string y){
    string temp = x;
    x = y;
    y = temp;

}
void swapWitchRef(string &x, string &y){
    string temp = x;
    x = y;
    y = temp;

}