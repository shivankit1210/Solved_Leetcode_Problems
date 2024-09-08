#include<iostream>
using namespace std;





void sorting(int array[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(array[j]<array[min])
            min=j;
        }
        int temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
}

int main(){
    int array[]={3,8,23,45,34,24,76,45,29,49,58,9,4};
    int n=sizeof(array)/sizeof(array[0]);
    sorting(array,n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<",";
    }
    return 0;
}