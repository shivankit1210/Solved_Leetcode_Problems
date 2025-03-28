#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int num){
    if(num<=1) return false;
    
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    
    int item; //number which we check prime?
    cout<<"enter number"<<" "; //taking input
    cin>>item;
    bool IsPrime = isPrime(item);  // function calling by passing item
    if(IsPrime){
        cout<<"no is prime";
    }
    else{
        cout<<"not a prime number";
    }
  
    return 0;
}