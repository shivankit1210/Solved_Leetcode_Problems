#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map; // Value to index mapping
        std::vector<int> result;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i]; // The value we need to find
            
            // Check if the complement exists in the map
            if (num_map.find(complement) != num_map.end()) {
                result.push_back(num_map[complement]); // index of complement
                result.push_back(i); // current index
                return result; // return the result as soon as we find a pair
            }
            
            // If complement is not found, add the current number and its index to the map
            num_map[nums[i]] = i;
        }
        
        // If no solution is found, return an empty vector
        return result;
    }
};
 

//  This below solution is for Sorted Array

// int n = nums.size();
//         sort(nums.begin(),nums.end());
//         vector<int> res;
//         int i = 0;
//          int j = n - 1;
//         while (i < j) {
//             if (nums[i] + nums[j] == target) {
//                 res.push_back(i);
//                 res.push_back(j);
//             }
//             if ((nums[i] + nums[j]) > target)
//                 j--;
//             else
//                 i++;
//         }

//         return res;