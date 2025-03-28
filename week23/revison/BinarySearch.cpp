#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int item){
    int n = arr.size()-1;
    int beg=0,end=n;
    while(beg <= end){
        int mid = (beg+end)/2;
        if(arr[mid]==item){
            return mid;
        }
        else if(arr[mid]>item){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }

    }
    return -1;
    
}


int main(){
    vector<int> arr;
    int len,item;
    cout<<"enter how many elements";
    cin>>len;
    cout<<"enter elements now";
    int temp;
    for(int i=0;i<len;i++){
        cin>>temp;
        arr.push_back(temp);
    }

    cout<<"enter the element to be serach for";
    cin>>item;
    int index= binarySearch(arr,item);
    if(index==-1){
        cout<<"not found";
    }
    else{
        cout<<"found at "<<index+1;
    }

    return 0;
}