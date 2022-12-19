#include <cstdlib>
#include <iostream>

using namespace std;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

// Here you can use the same role name to perform different actions in different roles; 
// The only thing I change is the use of parameters!

void bakePizza() {
    cout << "Here is your Pizza!\n";
}

void bakePizza(string topping1) {
    cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(string topping1, string topping2) {
    cout << "Here is your " << topping1 << " and " << topping2 << " pizzas!\n";
}

int main() {
    string x, y, z;

    x = ("Pepperoni");
    y = ("Cheese");
    z = ("Bacon");

    int opc;

    cout << "1 - Order a pizza, just... "
            "\n2 - Choose 1 pizza flavor!"
            " \n3 - Choose 2 flavors of pizza"
            "\nEnter Option: ";
    cin >> opc;

    switch (opc) {

        case 1:
            bakePizza();
            break;

        case 2:
            bakePizza(x);
            break;

        case 3:
            bakePizza(y, z);
            break;
    }
    return 0;
}