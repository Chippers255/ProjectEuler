// Project Euler Problem # 5
// Smallest Multiple
// Answer: 232792560
//
// Created by Thomas Nelson <tn90ca@gmail.com>
// Created on 2015-05-14

#include <iostream>

bool isDivisable (long n) {
    for (int i=1; i<=20; i++) {
        if (n%i != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long num = 40;
    bool check = false;

    while (!check) {
        num++;
        check = isDivisable(num);
    }

    std::cout << "Smallest Product = " << num << '\n';

    return 0;
}