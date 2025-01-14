class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {

        //sort nums array
        sort(nums.begin(),nums.end());

        //flip till k<0 , nums.size and nums[i] >0
        for(int i =0 ; i<nums.size() && k > 0 && nums[i] < 0; i++){
            nums[i] = -nums[i];
            k--;
        }

        //sort again
        sort(nums.begin(),nums.end());

        //if odd then flip the smallest integer
        if(k%2==1){
        nums[0] = -nums[0];
        }
        int sum =0;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
        }
        
        return sum;
    }
};