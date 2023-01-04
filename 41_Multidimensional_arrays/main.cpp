#include <iostream>

using namespace std;

int main(){

    // Multidimensional Array

    int nums [][3] = {{1,2,3}, 
                    {4,5,6},
                    {7,8,9}};

    int rows = sizeof(nums)/sizeof(nums[0]);
    int columns = sizeof(nums[0])/sizeof(nums[0][0]);
    int opc = 0;


    cout << "1 ° Option using a manual and simple way in the array;" << endl << 
            "2° Option using [for], a better and more practical way; " << endl <<
            "Enter Option: ";
    cin >> opc;


    switch (opc){

    case 1:

    // 1° - Option (not very valid) to Print/Browse Array Elements
    cout << nums[0][0] << " ";
    cout << nums[0][1] << " ";
    cout << nums[0][2] << "\n";
    cout << nums[1][0] << " ";
    cout << nums[1][1] << " ";
    cout << nums[1][2] << "\n";
    cout << nums[2][0] << " ";
    cout << nums[2][1] << " ";
    cout << nums[2][2] << "\n";

    break;

    case 2:

    // 2° - Option
   for(int i = 0; i < rows; i++){
    for (int j = 0; j < columns; j++){
        cout << nums[i] [j] << " ";
    }
    cout << '\n';
   }

    break;
    default: cout << "Option Invalid!" << endl;
}

//The multidimensional Array is basically a dimensional set of several arrays together...

return 0;

}