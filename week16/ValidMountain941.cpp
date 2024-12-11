class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        int peak = -1;;
        for(int i= 1;i<arr.size()-1;i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                peak = i;
                break;
            }
        }
        if(peak == -1){
            return false;
        }
        for(int i =0 ; i< peak;i++){
            if(arr[i]>= arr[i+1]){
                return false;
            }
        }

        for(int i=peak ; i< arr.size()-1 ; i++){
            if(arr[i] <= arr[i+1]){
                return false;
            }
        }
        
        return true;
    }
};