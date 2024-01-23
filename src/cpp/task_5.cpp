/*
 * Author: Sitora Aslonova
 * Date: 23/01/2024
 * Name:
 */

#include <string>
#include <unordered_map>
using namespace std;

string decodeMessage(string key, string message) {
    unordered_map<char, char> cipherMap;
    char currentChar = 'a';

    // Building the cipher map
    for (char ch : key) {
        if (ch != ' ' && cipherMap.find(ch) == cipherMap.end()) {
            cipherMap[ch] = currentChar++;
        }
    }

    // Decoding the message
    string decoded = "";
    for (char ch : message) {
        if (ch != ' ') {
            decoded += cipherMap[ch];
        } else {
            decoded += ' ';
        }
    }

    return decoded;
}
