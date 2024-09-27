#include<iostream>
#include <unordered_map>
#include <string>
using namespace std;

int longestPalindrome(string s) {
    unordered_map<char, int> freq;
    
    // Count the frequency of each character in the string
    for (char c : s) {
        freq[c]++;
    }

    int length = 0;
    bool odd_found = false;

    // Iterate over the character frequencies
    for (auto it : freq) {
        // If the frequency is even, it can fully contribute to the palindrome
        if (it.second % 2 == 0) {
            length += it.second;
        } else {
            // If the frequency is odd, add the largest even part and mark that an odd character exists
            length += it.second - 1;
            odd_found = true;
        }
    }

    // If any odd frequency is found, one odd character can be placed in the center
    if (odd_found) {
        length += 1;
    }

    return length;
}

int main() {
    string s = "abccccdd";
    cout << "The length of the longest palindrome is: " << longestPalindrome(s) << endl;
    return 0;
}
