// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int CountInteger(int num){
    int count=0;
    while(num>0){
        num/=10;
        count++;
    }
    return count;
}

int main() {
    int num;
   std::cout<<"Enter number: ";
   std::cin>>num;
   std::cout<<"Number of integers: "<<CountInteger(num);
   return 0;
}