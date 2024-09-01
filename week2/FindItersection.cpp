#include<iostream>
using namespace std;

void FindItersection(int arr1[],int arr2[], int n1,int n2){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
             cout<<arr1[i]<<" ";
            }
        }
    }
}

int main(){

    int arr1[]={3,4,5,6,7,8,9,10};
    int arr2[]={8,9,10,11,12,13};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    FindItersection(arr1,arr2,n1,n2); 
    return 0;
}