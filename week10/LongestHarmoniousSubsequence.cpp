class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mapping;
        int maxi=0;
        int sum=0;
        int pos;

        for(int n : nums){
            mapping[n]++;
        }

        for(int i =0; i<nums.size();i++){
            //find that for value of nums[i] their exist a value of nums[i]+1 in hash map
            if((mapping.find(nums[i]+1)) != mapping.end()){
                sum=mapping[nums[i]]+ mapping[nums[i]+1];
            }
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};