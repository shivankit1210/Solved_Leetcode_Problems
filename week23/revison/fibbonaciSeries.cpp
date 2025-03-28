#include<iostream>
#include<vector>

using namespace std;

vector<int> fibbonaci( int n){
    vector<int> arr = {0, 1};
    if(n ==0){
        return {};
    }
    if(n==1){
        return {0};
    }

    for(int i=2;i<n;i++){
        arr.push_back(arr[i-1]+arr[i-2]);
    }

    return arr;
}


int main(){
    
    int n;
    cout<<"enter number upto which you want fibbonaci series";
    cin>>n;
    vector<int> res = fibbonaci(n);
    for(int num : res){
        cout<<num<<" ";
    }
    
    return 0;
}