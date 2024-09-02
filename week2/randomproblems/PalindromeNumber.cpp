#include<iostream>
using namespace std;

int check(int num){
    int n,rev=0;
    while(num>0){
    n= num%10;
    rev=rev*10+n;
    num=num/10;
    }
    return n;

}

int main(){
    int num,i,res;
    cout<<"Enter NUmber";
    cin>>num;
    res=check(num);
    cout<<"number Is"<<((res==num)?"number is palindrome":"number is not palinndrome ")<<endl;

    return 0;
}