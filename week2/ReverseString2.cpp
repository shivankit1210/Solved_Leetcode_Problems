#include <iostream>
using namespace std;

string reverseString(string str, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    return str;
}

int main()
{

    string str = "Shivakit agarwal";
    int n = str.length();
    cout << "Reverse String is" << reverseString(str, n);

    return 0;
}