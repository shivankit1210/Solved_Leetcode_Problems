class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        int evenIndex = 0;
        int oddIndex = 1;
        while(evenIndex < nums.size() && oddIndex < nums.size()){

            if(nums[evenIndex] % 2 == 1){
                while(nums[oddIndex] % 2 ==1){
                    oddIndex += 2;
                }
                swap(nums[evenIndex],nums[oddIndex]);

            }
            evenIndex += 2;
        }
        return nums;
    }
};