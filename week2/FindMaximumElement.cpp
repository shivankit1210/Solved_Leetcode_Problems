#include <iostream>
using namespace std;

int MaxElement(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}

int main()
{
    int arr[15] = {24, 74, 31, 70, 26, 10, 91, 25, 62, 28, 19, 39, 98, 89, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "maximum element is: " << MaxElement(arr, n);

    return 0;
}