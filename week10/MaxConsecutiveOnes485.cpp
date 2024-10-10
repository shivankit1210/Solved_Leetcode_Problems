#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i]==0){
                count=0;
            }
            else {
                    count++;
                 maxi = max(count, maxi);
            }
        }

        return maxi;
    }
};


int main(){

    Solution sol;

    vector<int> nums={1,1,1,1,1,1,1,0,0,1,1,1,1,0,0,1,1,0};
    int res=sol.findMaxConsecutiveOnes(nums);
    cout<<res;

    return 0;
}