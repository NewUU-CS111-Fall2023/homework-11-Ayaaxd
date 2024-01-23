/*
 * Author: Sitora Aslonova
 * Date: 23/01/2024
 * Name:
 */

#include <vector>
using namespace std;

const int MOD = 1337;

int modPow(int base, int exponent) {
    int result = 1;
    base %= MOD;
    while (exponent > 0) {
        if (exponent % 2 == 1) result = (result * base) % MOD;
        base = (base * base) % MOD;
        exponent /= 2;
    }
    return result;
}

int superPow(int a, vector<int>& b) {
    int result = 1;
    for (int digit : b) {
        result = modPow(result, 10) * modPow(a, digit) % MOD;
    }
    return result;
}
