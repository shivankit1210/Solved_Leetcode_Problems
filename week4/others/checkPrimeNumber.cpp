#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    cout << (isPrime(n) ? "prime number" : "not a prime number");

    return 0;
}