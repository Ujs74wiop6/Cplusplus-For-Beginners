#include <iostream>

/* Arithmetic and Operators */

using namespace std;

int main() {

    // {+, -, *, /, %}
    // Always remembering the priority with (())...

    //int number = 20;

    /*
     * number = students + 1;
     * or
     * number += 1;
     * or
     * number++;
     */

    //std::cout << number;

    float x, y, opc;

    std::cout << "Enter the value of X: ";
    std::cin >> x;
    std::cout << "Enter the value of Y: ";
    std::cin >> y;

    std::cout << "1 - Sum \n";
    std::cout << "2 - Subtraction \n";
    std::cout << "3 - Multiplication \n";
    std::cout << "4 - Division \n";
    std::cout << "0 - Go out \n";
    std::cout << "Digite sua opção de Operação: ";
    std::cin >> opc;

    if (opc == 1) {
        int soma;
        soma = (x + y);
        std::cout << "Sum: " << soma;
    } else if (opc == 2) {
        int sub;
        sub = (x - y);
        std::cout << "Subtraction: " << sub;
    } else if (opc == 3) {
        int mult;
        mult = (x * y);
        std::cout << "Multiplication: " << mult;
    } else if (opc == 4) {
        float div;
        div = (x / y);
        std::cout << "Division: " << div;
    } else if (opc == 0) {
        return 0;
    }
    return 0;
}