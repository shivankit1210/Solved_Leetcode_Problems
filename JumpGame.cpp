class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i;
        if (nums[i] > 0) {
            i++;
            if (i = nums.size()) {
                return true;
            }
        } else
            return false;
    }
};
