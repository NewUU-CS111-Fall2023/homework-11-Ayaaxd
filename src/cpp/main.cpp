/*
 USE THIS FILE FOR YOUR TESTS,
 AUTOGRADER WILL NOT EXECUTE THIS FILE.
 * Author: Sitora Aslonova
 * Date: 23/01/2024
 * Name:
 */

#include <iostream>
#include <vector>
#include "task_1.cpp"
#include "task_2.cpp"
#include "task_3.cpp"
#include "task_4.cpp"
#include "task_5.cpp"
#include "task_6.cpp"   

using namespace std;

int main() {
    cout << "Task 1" << endl;
    vector<int> nums = {1, 1, 1, 1, 1};
    int target = 3;

    cout << "Number of ways: " << findTargetSumWays(nums, target) << endl;



    cout << "Task 2" << endl;
    vector<int> nums = {1, 5, 11, 5};
    if (canPartition(nums)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }


    cout << "Task 3" << endl;
    string s = "leetcode";
    vector<string> wordDict = {"leet", "code"};

    if (wordBreak(s, wordDict)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }


    cout << "Task 4" << endl;
    int a = 2;
    vector<int> b = {3};

    cout << "Result: " << superPow(a, b) << endl;


    cout << "Task 5" << endl;
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    cout << "Decoded Message: " << decodeMessage(key, message) << endl;


    cout << "Task 6" << endl;
    int n = 10;
    auto primes = findPrimesAfterN(n);
    std::cout << "First Prime: " << primes.first << ", Second Prime: " << primes.second << std::endl;

    cout << "Task 7" << endl;
    int a = 13;
    int b = 17;

    std::cout << "Euler's Totient Function: " << eulerFunction(a, b) << std::endl;


    cout << "Task 8" << endl;
    int p = 61, q = 53; // Example prime numbers
    auto [e, d] = generateED(p, q);
    
    std::cout << "e: " << e << ", d: " << d << std::endl;
}
