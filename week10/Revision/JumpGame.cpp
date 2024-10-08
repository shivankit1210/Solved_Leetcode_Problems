class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0;
        if(nums.size()==1 && nums[i]==0){
            return true;
        }
        while (i <nums.size() && nums[i] > 0) {
            i++;
        }
        if (i >= nums.size()) {
            return true;
        }
        else return false;
    }
};