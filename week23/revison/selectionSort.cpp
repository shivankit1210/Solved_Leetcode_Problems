#include<iostream>
#include<vector>

using namespace std;

vector<int> SelectionSort(vector<int> arr,int len){
    
    for(int i=0;i<=len-1;i++){
        int min=i;
        for(int j=i;j<len;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    return arr;
    
}

int main(){
    
    vector<int> arr;
    int len;
    cout<<"enter length of array:";
    cin>>len;
    cout<<"enter array elements : ";
    for(int i=0;i<len;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    
    vector<int> SortedArray= SelectionSort(arr,len);
    for(int i=0;i<len;i++){
        cout<<SortedArray[i]<<" ";
    }
    
    
    return 0;
}