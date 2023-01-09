#include <iostream>

using namespace std;

void cam(int steps);
int factorial(int num);

int main(){

    /*
    Recursion = a programing technique where a function
                invokes itself from whithin
                break a complex concept into a repeatable single step

     (iterarive vs recursive)

     advanteges = let code and is clener
                  useful for sorting and searching algorithmns

     disadvantages = uses more memory
                     slower
    */


   int opc = 0;

    cout << "1 - Example simples"
            "\n2 - Factorial with Recursion"
            "\nEnter your option: ";
    cin >> opc;

    switch (opc){
        case 1:
            int x;
            cout << "Enter value X:";
            cin >> x;
            cam(x);
        break;
                case 2:
                    //Factorial using recursive
                    int num;
                    cout << "Enter one number for calculate the your factorial: ";
                    cin >> num;
                    cout << factorial(num) << endl;
                break;
    default:
        cout << "Option Invalid" << endl; 
    }
    return 0;
}
    
void cam(int steps){
    if(steps > 0){
        cout << "You take a step" << endl;
        cam(steps -1);
    }
}

int factorial(int num){
    if(num > 1){
        return num * factorial(num -1);
    }else{
        return 1;
    }
}