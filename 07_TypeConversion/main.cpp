#include <iostream>

using namespace std;

int main() {

    //Convesion & Cast!


    //This is example for Cast - A data type conversion is done
    double x = (int) 3.14;

    /*
    The exchange of shots between variables of the type (int to double)
    does not work because the type (int) has a memory limit!
     * 
     *  int x = (double) 3.15;
     */

    char y = 100;
    /*
     * Caractere	Código ASCII	Binário
     * Espaço	            32	        0010 0000
     * c		    99	        0110 0011
     * d	            100	        0110 0100
     * e	            101	        0110 0101
     * 
     */

    int correct = 8;
    int questions = 10;
    double score = ((correct / (double) questions)*100);

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    cout << "Score: " << score << "%" << endl;

    return 0;
}

