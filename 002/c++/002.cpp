// Project Euler Problem # 2
// Even Fibonacci Numbers
// Answer: 4613732
//
// Created by Thomas Nelson <tn90ca@gmail.com>
// Created on 2015-05-13

#include <iostream>

int main () {
    int sum = 0;
    int a = 1;
    int b = 1;

    while (a <= 4000000 && b <= 4000000) {
        int c = a + b;

        if (c%2 == 0) {
            sum += c;
        }

        a = b;
        b = c;
    }
    
    std::cout << "Sum = " << sum << '\n';

    return 0;
}