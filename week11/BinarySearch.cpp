class Solution {
public:
    int search(vector<int>& nums, int target) {
        // initialise start,end,mid(using start adn end)
        // check if  target is greater or less than target
        //     >>  if(target<num[mid])-->end=mid
        //     >>  if(taget>nums[mid])-->start=mid+1
        // do until you find the target or start<end

        int start = 0;
        int end = nums.size() - 1;

        if(nums.size()==1 && target==nums[0]){
            return 0;
        }
        while (start <= end) {
            int mid = (start + end) / 2;
            if (target == nums[mid]) {
                return mid;
            } else if (target < nums[mid]) {
                end = mid-1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }
};