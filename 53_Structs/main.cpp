#include <iostream>

using namespace std;

struct student{
    string name;
    double gpa;
    bool enrolled;
};


int main(){

    /*
    Struct = A structure that gruop related variables under one name
             struct can contain many different data type (string, int, double, bool, etc.)
             variables in a struct are know as 'members'
             members can be acess with . "Class Memory Acess Operator" 
    */

   /* Simple creation of static objects with the Structs class */
   student student1;
   student student2;
   student student3;

    /* Filling in the objects... */
    student1.name = "Fabricio";
    student1.gpa = 3.2;
    student1.enrolled = true ;
    student2.name = "Vitor";
    student2.gpa = 5.1;
    student2.enrolled = false ;
    student3.name = "Gabriel";
    student3.gpa = 7.4;
    student3.enrolled = true ;

    /* Showing stored data... */

    cout << " ***** Students ***** " << endl;
    cout << student1.name << endl;
    cout << student1.gpa << endl;
    cout << student1.enrolled << endl;
    cout << student2.name << endl;
    cout << student2.gpa << endl;
    cout << student2.enrolled << endl;
    cout << student3.name << endl;
    cout << student3.gpa << endl;
    cout << student3.enrolled << endl;

    return 0;
}