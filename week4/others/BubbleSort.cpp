#include<iostream>

using namespace std;

void Bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr[]={3,8,23,45,34,24,76,45,29,49,58,9,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    Bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}