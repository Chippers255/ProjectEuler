// Project Euler Problem # 3
// Even Largest Prime Factor
// Answer: 6857
//
// Created by Thomas Nelson <tn90ca@gmail.com>
// Created on 2015-05-14

#include <iostream>
#include <math.h>

int main() {
    long num = 600851475143;
    int x = 2;

    while (x <= sqrt(num)) {
        if (num % x == 0) {
            num /= x;
        } else {
            x++;
        }
    }

    std::cout << "Largest Prime Factor = " << num << '\n';

    return 0;
}