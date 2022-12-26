#include <cstdlib>
#include <iostream>

using namespace std;

double getTotal(double prices[], int tam);

int main() {

    double prices[] = {12.99, 1.25, 4.50};
    int tam = size(prices);
    double total = getTotal(prices, tam);

    cout << " Total ($):  " << total;

    return 0;
}

double getTotal(double prices[], int tam) {

    double total = 0;

    for (int i = 0; i < tam; i++) {
        total += prices[i];
    }

    return total;
}