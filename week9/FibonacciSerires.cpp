#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> FindFibonaci(int limit)
{
    vector<int> fibonaciSeries = {0, 1};
    int nextFib = 0;
    while (true)
    {
        nextFib = fibonaciSeries[fibonaciSeries.size() - 1] + fibonaciSeries[fibonaciSeries.size() - 2];
        if (nextFib > limit)
        {
            break;
        }
        fibonaciSeries.push_back(nextFib);
    }
    return fibonaciSeries;
}

void printFib(vector<int> fibonaciSeries)
{
    for (int num : fibonaciSeries)
    {
        cout << num << ",";
    }
    cout << endl;
}

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i !=0)
        {
            cout<<"P"<<num<<endl;
            return true;
        }
    }
    cout<<"NP"<<num;
    return false;
}

int findSum(vector<int> fibonaciSeries)
{
    int sum = 0;
    for (int num : fibonaciSeries)
    {
        if (num % 2 == 0 && isPrime(num))
        {
            sum += num;
        }
    }
    return sum;
}

int main()
{
    int limit;
    cout << " enter number:";
    cin >> limit;
    vector<int> fibonaciSeries = FindFibonaci(limit);
    cout << "---Fibonaci series---" << endl;
    printFib(fibonaciSeries);
    int evenPrimeSum = findSum(fibonaciSeries);
    cout << "sum of even Prime number is" << evenPrimeSum;

    return 0;
}
