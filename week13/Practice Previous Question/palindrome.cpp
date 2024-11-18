#include<iostream>

using namespace std;

bool findPalindrome(int n){
    int sum=0;
    int original=n;

    while(n>0){
        int temp;
        temp=n%10;
        sum=sum*10+temp;
        n=n/10;
    }
    return original == sum;
}

int main(){

    int n;
    cout<<"enter number: ";
    cin>>n;
    bool res= findPalindrome(n);
    if(res){
        cout<<"number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";
    }


    return 0;
}