#include <iostream>
#include <vector>
using namespace std;

vector<int> findEven(vector<int> series)
{
    vector<int> s;
    for (int i = 0; i < series.size(); i++)
    {
        if (series[i] % 2 == 0)
        {
            s.push_back(series[i]);
        }
    }
    return s;
}

vector<int> findFibonacci(vector<int> series, int n)
{
    // use loops for iteration
    for (int i = 1; i < n; i++)
    {
        int temp = series[i] + series[i - 1];
        series.push_back(temp);
    }

    return series;
}

int main()
{

    vector<int> series = {0, 1}; // Need atleast two elements to count the increment based on previous 2 elements in vector
    int n;
    cout << "Enter the no upto which you want a fibonacci series: ";
    cin >> n;
    vector<int> fibSeries = findFibonacci(series, n);

    // For Print Fibonacci Series
    cout << "fibonacci Series is: ";
    for (int i = 0; i < fibSeries.size(); i++)
    {
        cout << fibSeries[i] << ",";
    }
    cout<<endl;

    // Find Even Series
    vector<int> evenSeries = findEven(fibSeries);
    // even series
    cout << "even Series is: ";
    for (int i = 0; i < evenSeries.size(); i++)
    {
        cout << evenSeries[i] << ",";
    }

    cout<<endl;

    int evensum = 0;
    for (int i = 0; i < evenSeries.size(); i++)
    {
        evensum += evenSeries[i];
    }
    cout << "Sum of series is " << evensum << endl;

    return 0;
}