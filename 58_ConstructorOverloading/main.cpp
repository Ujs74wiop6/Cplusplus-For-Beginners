#include <iostream>

using namespace std;

class Pizza{
    public:
        string topping1;
        string topping2;

    Pizza(){
        
    }

    Pizza(string topping1){
        this->topping1 = topping1;
    }
    Pizza(string topping1, string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main(){

    /*
    Overloaded constructors = Multiple constructors w/ same name but different parameters 
                              allows for varying arguments when instantianting an object 
    */

   Pizza p1;
   Pizza p2("Pepperoni");
   Pizza p3("Mushrooms", "Peppers");
   

   cout << p2.topping1 << endl;
   cout << p3.topping1 << ", " <<  p3.topping2 << endl;

    return 0;
}