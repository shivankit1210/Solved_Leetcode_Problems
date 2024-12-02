class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool isIncreasing = true;
        bool isDecreasing = true;

        for(int i=1 ; i<n ; i++ ){
            if(nums[i] > nums[i-1]){
                isDecreasing = false;
            }

            if(nums[i] < nums[i-1]){
                isIncreasing = false;
            }
        }
        
        return isIncreasing || isDecreasing ;
    }
};










// BELOW PROBLEM SOLVED BY ME BUT PASSES ONLY 366/371 TEST CASES

// <-------------------------------->

// class Solution {
// public:
//     bool isMonotonic(vector<int>& nums) {
//         int n = nums.size();
//         if (nums[0] > nums[n - 1]) {
//             int min = nums[0];

//             for (int i = 1; i < n; i++) {
//                 if (nums[i] <= min) {
//                     min = nums[i];
//                 } else
//                     return false;
//             }
//         } else if (nums[0] < nums[n - 1]) {
//             int max = nums[0];

//             for (int i = 1; i < n; i++) {
//                 if (nums[i] >= max) {
//                     max = nums[i];
//                 } else
//                     return false;
//             }
//         }

//         return true;
//     }
// };

