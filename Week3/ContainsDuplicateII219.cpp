#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int , int> NumMap;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(NumMap.find(nums[i])!=NumMap.end()){
                if(i-NumMap[nums[i]]<=k)
                return true;
            }
            NumMap[nums[i]]=i;
        }
        return false;
    }
};

int main(){
    Solution solution;
    vector<int> nums={1,2,3,4,5,3};
    int k=3;
    bool result =solution.containsNearbyDuplicate(nums,k);
    if(result)
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
    return 0;
}





















// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         int n = nums.size();
//         for (int i = 0; i < n - 1; i++) {
//             for (int j = i + 1; j < n ; j++) {
//                 if (nums[i] == nums[j]) {
//                     if (j - i <= k) {
//                         return true;
//                     }
//                 }
//             }
//         }
//         return false;
//     }
// };