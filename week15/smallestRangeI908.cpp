class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int min = INT_MAX;
        int max = INT_MIN;

        for(int i=0 ; i< nums.size(); i++){
            if(nums[i] < min){
                min=nums[i];
            }
            if(nums[i]> max){
                max=nums[i];
            }
        }
        //new range
        int newMin = min+k;
        int newMax = max-k;
        if(newMax <= newMin){
            return 0;
        }
        else{
            return newMax-newMin;
        }
        
    }
};