





class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;
        
        // Calculate the total sum of the array
        for (int n : nums) {
            totalSum += n;
        }
        
        // Iterate through the array and check for pivot index
        for (int p = 0; p < nums.size(); p++) {
            // Right sum is totalSum - leftSum - nums[p]
            if (leftSum == totalSum - leftSum - nums[p]) {
                return p;
            }
            // Update leftSum to include the current element
            leftSum += nums[p];
        }
        
        // If no pivot index is found, return -1
        return -1;
    }
};

















// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         // first if all i create a sum array
//         //  second thing i calculate sum from left than from right and check if
//         //  it is equal
//         vector<int> sumArr;
//         int sum = 0;
//         // create successive sum array
//         for (int n : nums) {
//             sum += n;
//             sumArr.push_back(sum);
//         }

//         // check left and right sum
//         int left, right;
//         int n = sumArr.size();
//         for (int p = 0; p < sumArr.size(); p++) {
//             if (p == 0 && sumArr[0] == sumArr[n - 1]) {
//                 return 0;
//             } else {
//                 left = sumArr[p - 1];
//                 right = sumArr[n] - sumArr[p];
//                 if (left == right) {
//                     return p;
//                 }
//             }
//         }

//         return -1;
//     }
// };