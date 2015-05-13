// Project Euler Problem # 1
// Multiples of 3 and 5
// Answer: 233168
//
// Created by Thomas Nelson <tn90ca@gmail.com>
// Created on 2015-05-13

#include <iostream>

int main () {
    int sum = 0;
    
    for (int i=0; i<1000; i++) {
        if (i%3==0 || i%5==0) {
            sum += i;
        }
    }
    
    std::cout << "Sum = " << sum << '\n';

    return 0;
}