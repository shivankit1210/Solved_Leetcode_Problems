class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int non_zero_index = 0;
        int n = nums.size();
        int i;
        // filling non zero number in nums
        for ( i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[non_zero_index++] = nums[i];
            }
        }
        //    filling remaining zeroes
        for ( i = non_zero_index; i < n; i++) {
            nums[i] = 0;
        }
        for(i=0;i<n;i++){
            std::cout<<nums[i];
        }
    }
};