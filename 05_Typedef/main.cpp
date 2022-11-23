#include <iostream>

/*
 * std::string Typedef  = x;
 * x = Reserved keyword used so create an additional name (alias) for another date type. 
 * New identifier for an existing type 
 * Helps with readability and reduces typos
 * Use when there is a clear benefit
 * Replaced with 'using' (work better w/ templates)
 */
using namespace std;

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

using text_t = std::string;
using number = int;

int main() {

    text_t firtName = "Fabricio";
    number_t age = 19;
    number_t n = 1;

    std::cout << firtName << "\n";
    std::cout << age << "\n";
    std::cout << n << "\n";

    return 0;
}