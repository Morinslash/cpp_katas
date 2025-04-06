#include <iostream>
#include "fizzbuzz.h"

int main() {
    FizzBuzz fizzBuzz;
    
    for (int i = 1; i <= 100; i++) {
        std::cout << fizzBuzz.convert(i) << std::endl;
    }
    
    return 0;
}
