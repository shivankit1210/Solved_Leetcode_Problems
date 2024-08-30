#include<iostream>
#include<vector>
#include<algorithm>  // for sort

using namespace std;

class Solution{
    public:
    int missingNumber(vector<int>& nums){
        sort(nums.begin(),nums.end());  //for sort the array nums
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=i)
            return i;
        }
        return n;
    }
};

int main(){

    vector<int> nums ={3,0,1};
    Solution sol;
    int missing= sol.missingNumber(nums);
    cout<<"the missing number is"<<missing<<endl;
    return 0;

}

