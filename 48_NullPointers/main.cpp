#include <iostream>

using namespace std;

int main(){

    /*
    Null value  = A special value that means somethins has no value.
                  When a pointer is holding a null value,
                  that pointer is not pointing at anything (null pointer)

     nullptr = Keyword represents a null pointer literal

     nullptr are helpful when determinig if an address
     was sucessfully assigned to a pointer 

    */

    int *pointer = nullptr;
    int x  = 123;

    pointer = &x;

    if (pointer == nullptr){
        cout << "Address was not assigned!\n";
    }else{
        cout << "Address was assigned!\n";
        cout << *pointer << endl;
    }
    return 0;
}