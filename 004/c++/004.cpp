// Project Euler Problem # 4
// Largest Palindrome Product
// Answer: 906609
//
// Created by Thomas Nelson <tn90ca@gmail.com>
// Created on 2015-05-14

#include <iostream>
#include <math.h>

bool isPalindrom (long n) {
    long n1 = n;
    long n2 = 0;

    while (n1 > 0) {
        int a = n1 % 10;
        n1 /= 10;
        n2 *= 10;
        n2 += a;
    }

    if (n == n2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    long best = 0;

    for (int i=100; i<=999; i++) {
        for (int j=100; j<=999; j++) {
            if (isPalindrom(i*j)) {
                if ((i*j) > best) {
                    best = i*j;
                }
            }
        }
    }


    std::cout << "Largest Palindrome Product = " << best << '\n';

    return 0;
}