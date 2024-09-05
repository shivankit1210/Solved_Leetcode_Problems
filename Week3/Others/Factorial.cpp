#include<iostream>
using namespace std;

int fac(int num){
    int product=1;
    int i=num;
    while(i > 0){
    product=product*i;
    i--;
    }
    return product;
}



int main(){

    int num;
    cout<<"Enter number";
    cin>>num;
    cout<<"Factorial of a number  is "<<fac(num)<<endl;

    return 0;
}