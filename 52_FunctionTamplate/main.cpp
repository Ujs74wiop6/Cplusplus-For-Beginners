#include <iostream>

template <typename T, typename U>

auto max(T x, U y){
    return (x > y) ? x : y;
}
int main(){
    /*
    Function Template = describes what a function looks like.
                        Can be used to generate as many overload functions
                        as needed, each using different date types

                            ty T >> For equal parameter values 
                            ty U >> For parameters different from each other 
    
                                - Simple demo of 'universal' function to make comparisons 
                                   between different data types | What was to be done in multiple functions, done in a single
    */

    std::cout << max(1, 'A') << '\n';
    
    return 0;
}