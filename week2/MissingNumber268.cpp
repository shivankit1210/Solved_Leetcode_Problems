#include<iostream>
#include<vector>
#include<algorithm>  // for sort

using namespace std;


class Solution{
    public:
    int missingNumber(vector<int>& nums){
        int n=nums.size();
        int sumTotal= (n*(n+1))/2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return sumTotal-sum;
    }
};

// class Solution{
//     public:
//     int missingNumber(vector<int>& nums){
//         sort(nums.begin(),nums.end());  //for sort the array nums
//         int n= nums.size();
//         for(int i=0;i<n;i++){
//             if(nums[i]!=i)
//             return i;
//         }
//         return n;
//     }
// };

int main(){

    vector<int> nums ={3,0,1,2,9,7,4,6,8,11,5,12};
    Solution sol;
    int missing= sol.missingNumber(nums);
    cout<<"the missing number is"<<missing<<endl;
    return 0;

}

