#include <iostream>

using namespace std;

//Class
class Human{

    public: 
        //Attributes
        string name;
        string occupation;
        int age;

        //Methods
        void eat(){
            cout << "This person is eating" << endl;
        }
        void drink(){
            cout << "This person is drinking" << endl;
        }
        void sleep(){
            cout << "This person is sleeping" << endl;
        }
};
class Car{
    public:
    string make;
    string model;
    int year;
    string color;

    void accelebrate(){
        cout << "You step on the gas!" << endl;
    }
    void brake(){
        cout << "You step on the brakes!" << endl;
    }
};

int main(){

    /*
    Object = A collection of attributes and methods 
             They can have characteristics and could perform actions
             Can be used to mimic real world items (ex: Phone, Book, Dog) 
             Created from a class whitch acts as a "blue-print"
    */

   // Creating objects from Class...
   Human h1;
   Human h2;

   Car car1;
   Car car2;

   cout << "----------------------------" << endl;

   h2.name = "Morty";
   h2.occupation = "student";
   h2.age = 15;

   cout << h2.name << endl;
   cout << h2.occupation << endl;
   cout << h2.age << endl; 

   h2.eat();
   h2.drink();
   h2.sleep();

   cout << "----------------------------" << endl;

   car1.make = "Ford";
   car1.model = "Mustang";
   car1.year = 2023;
   car1.color = "Silver";

   cout << car1.make << endl;
   cout << car1.model<< endl;
   cout << car1.year << endl;
   cout << car1.color << endl;

   car1.accelebrate();
   car1.brake();

   cout << "----------------------------" << endl;

    return 0;
}