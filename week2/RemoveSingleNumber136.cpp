#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int num : nums){
            res ^= num;
        }
        return res;
    }
};

int main(){
    Solution sol;
    vector<int> nums={3,2,3,4,1,2,9,1,4};
    int res= sol.singleNumber(nums);
   cout<<res;

    return 0;
}