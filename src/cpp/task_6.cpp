/*
 * Author:
 * Date:
 * Name:
 */

#include <cmath>

bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) return false;
    }
    return true;
}

std::pair<int, int> findPrimesAfterN(int n) {
    int firstPrime = n + 1, secondPrime = n + 2;
    while (!isPrime(firstPrime)) firstPrime++;
    secondPrime = firstPrime + 1;
    while (!isPrime(secondPrime)) secondPrime++;
    return {firstPrime, secondPrime};
}
