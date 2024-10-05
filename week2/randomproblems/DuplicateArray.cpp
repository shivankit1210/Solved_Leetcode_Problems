#include<iostream>
using namespace std;

int FindDuplicate(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
      if(arr[i]!=arr[i+1]){
       arr[j++]=arr[i];
      }
    }
    arr[j++]=arr[n-1];
    return j;
}


int main(){
int arr[]={1, 2, 2, 3, 4, 4, 5,6,7,7,7,8,9,10,12,};
int n=sizeof(arr)/sizeof(arr[0]);
n=FindDuplicate(arr,n);


    return 0;
}
