#include <iostream>

using namespace std;

class Student{

    public:
        string name;
        int age;
        double gpa;

        Student(string name, int age, double gpa){
            this->name = name;
            this->age = age;
            this->gpa = gpa;
        }
};
class Car{
    public:
        string make;
        string model;
        int year;
        string color;
            
        Car(string make, string model, int year, string color){
            this->make = make;
            this->model = model;
            this->year = year;
            this->color = color;
        }
};

int main(){

    /*
    Constructor = Special method that is automatically called when an object is instantiated
                  useful for assigning values to attributes as arguments
    */

    Student s1("Fabricio", 19, 3.2);
    Car c1("Chevy", "Corvette", 2022, "blue");

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.gpa << endl;
    cout << "-------------" << endl;
    cout << c1.make << endl;
    cout << c1.model << endl;
    cout << c1.year << endl;
    cout << c1.color << endl;

    return 0;
}