class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> res;
        for (const int n : nums) {
            res.insert(n);
            if (res.size() > 3) {
                res.erase(res.begin());
            }
        }

        if (res.size() == 3) {
            return *res.begin();
        }
        return *res.rbegin();
    }
};




























// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {

//         if(nums.size()<3 && nums[0]!=nums[1]){
//             return nums[1];
//         }
//         set<int> arr;
//         for(const int n:nums)
//         {
//             arr.insert(n);
//         }
//         int m=arr.size();
//         if(m<3){
//             return nums[1];
//         }
//         return arr[m-3];
//     }
// };