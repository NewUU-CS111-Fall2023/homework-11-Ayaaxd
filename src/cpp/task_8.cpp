/*
 * Author: Sitora Aslonova
 * Date: 23/01/2024
 * Name:
 */

#include <algorithm>
#include <numeric>

// Function to find the greatest common divisor
int gcd(int a, int b) {
    return std::gcd(a, b);
}

// Function to find multiplicative inverse
int modInverse(int e, int phi) {
    e %= phi;
    for (int x = 1; x < phi; x++) {
        if ((e * x) % phi == 1)
            return x;
    }
    return 1; // Just a placeholder, in practice this should be handled more carefully
}

std::pair<int, int> generateED(int p, int q) {
    int n = p * q;
    int phi = (p - 1) * (q - 1);

    // Choose e
    int e;
    for (e = 2; e < phi; e++) {
        if (gcd(e, phi) == 1) {
            break;
        }
    }

    // Calculate d
    int d = modInverse(e, phi);

    return {e, d};
}
