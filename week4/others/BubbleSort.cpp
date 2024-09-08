#include<iostream>
using namespace std;

void sorting(int array[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]>array[j]){
                int temp = array [i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<",";
    }
}

int main(){
    int array[]={3,8,23,45,34,24,76,45,29,49,58,9,4};
    int n=sizeof(array)/sizeof(array[0]);
    sorting(array,n);
    return 0;
}