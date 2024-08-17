class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= target) {
                return i; // Return the current index as the correct position
            }
        }
        return nums.size(); // If target is greater than all elements, insert at the end
    }
};
