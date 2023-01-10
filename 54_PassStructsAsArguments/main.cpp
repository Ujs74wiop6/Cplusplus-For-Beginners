#include <iostream>

using namespace std;

struct Car{
    string model;
    int year;
    string color;
};

void printCar(Car &car);
void colorCar(Car &car, string color);

int main(){

  Car car1;
  Car car2;

  car1.model = "Mustang";
  car1.year = 2014;
  car1.color = "Orange"; 
  car2.model = "Corvette";
  car2.year = 2011;
  car2.color = "Blue";  

  colorCar(car1, "silver");
  colorCar(car2, "gold");

  printCar(car1);
  printCar(car2);

    return 0;
}

/*
    Make use of the '&' in the parameters; it has access to variable 
    Without using the '&' in the parameters; he does not have access to the variable
*/

void printCar(Car &car){
    cout << &car << endl;
    cout << car.model << endl;
    cout << car.year << endl;
    cout << car.color << endl;
}

void colorCar(Car &car, string color){
    car.color = color;
}