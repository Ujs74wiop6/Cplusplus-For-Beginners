#include <iostream>

using namespace std;

class Stove{
    private:
        int temp = 0;
    public:
        int getTemp(){
            return temp;
        }
        void setTemp(int temp){
            this->temp = temp;
        }

};

int main(){

    /*
    Abstraction = hiding unnecessary data from outside a class
    Getter = Function that makes a private attribute READABLE
    Setter = Function that makes a private attribute WRITEBLE
    */

   Stove s;
   s.setTemp(10000);
   cout << "The temperature setting is: " << s.getTemp() << endl;

    return 0;
}