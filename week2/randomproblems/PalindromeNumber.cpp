// #include<iostream>
// using namespace std;

// int check(int num){
//     int n,rev=0;
//     while(num>0){
//     n= num%10;
//     rev=rev*10+n;
//     num=num/10;
//     }
//     return n;

// }

// int main(){
//     int num,i,res;
//     cout<<"Enter NUmber";
//     cin>>num;
//     res=check(num);
//     cout<<"number Is"<<((res==num)?"number is palindrome":"number is not palinndrome ")<<endl;

//     return 0;
// }
#include<iostream>
using namespace std;

int FindPalindrome(int num){
    int final=0;
    while(num>0){
     int m=num%10;
     final=final*10+m;
     num=num/10;
    }

    return final;

}
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    int result= FindPalindrome(n);
    cout<<result;
    return 0;
}