#include<iostream>

using namespace std;

bool isPalindrome(int e){
    if(e<0){
        return false;
    }
    int original = e;
    long long sum = 0;
    while(e>0){
        int temp = e%10;
        sum = sum * 10 +temp;
        e=e/10;
    }
    return original == sum;
}

int main(){
    
    int num;
    cout<<"enter a number";
    cin>>num;
    bool isPal = isPalindrome(num);
    if(isPal){
        cout<<"is palindrome number";
    }
    else cout<<"not a palindrome number";
    
    return 0;
}