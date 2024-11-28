#include <iostream>
#include <vector>
#include<math.h>
using namespace std;


void checkEven(vector<int> num , int n){
    vector<int> evenArr;


    for(int i=0 ; i<n ; i++){
        if(num[i]<=1) break ;
        if(num[i]==2) {
       evenArr.push_back(num[i]);
        }

        for(int i=2 ; i<sqrt(num[i]) ; i++){
            if(num[i] % i != 0){
                evenArr.push_back(num[i]);
            }
        }
    }
    for(int i=0;i<evenArr.size();i++){
        cout<<evenArr[i]<<",";
    }
}

int main()
{
    vector<int> num;
    int n,ele;
    cout << "enter the size of array : ";
    cin >> n;

    for(int i=0;i<n;i++){
        cout<<"enter the element of "<<i+1<<": ";
        cin>>ele;
        num.push_back(ele);
    }

    checkEven(num,n);

    // for(int a : num){
    //     cout<<a<<",";
    // }

    return 0;
}