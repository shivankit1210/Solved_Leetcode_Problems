class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        
        // Step 1: Mark each number as visited by negating the value at the corresponding index
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;  // Calculate the index based on the value
            if (nums[index] > 0) {
         
         
               nums[index] = -nums[index];  // Mark as visited by making it negative
            }
        }
        
        // Step 2: Find all the indices that have positive values
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                ans.push_back(i + 1);  // The index+1 is the missing number
            }
        }
        
        return ans;
    }
};















// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int> ans;
//         for(int i=1;i<=nums.size();i++){
//             if(find(nums.begin(),nums.end(),i)==nums.end()){
//                 ans.push_back(i);
//             }
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int> ans;
//         for(int i = 1; i <= size(nums); i++) 
//             if(find(begin(nums), end(nums), i) == end(nums))  // linear search in nums for each i
//                 ans.push_back(i);
//         return ans;
//     }
// };