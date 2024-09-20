#include <iostream>
#include <vector>
#include <string>
using namespace std;

string intToRoman(int num) {
    // Define the Roman numerals and their corresponding integer values
    vector<pair<int, string>> romanNumerals = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    string result = "";

    // Loop through the Roman numeral values
    for (const auto& roman : romanNumerals) {
        // Keep adding the Roman numeral as long as the number is large enough
        while (num >= roman.first) {
            result += roman.second;
            num -= roman.first;
        }
    }

    return result;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    string roman = intToRoman(number);
    cout << "Roman numeral: " << roman << endl;

    return 0;
}


