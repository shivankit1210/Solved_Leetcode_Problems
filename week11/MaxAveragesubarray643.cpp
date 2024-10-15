
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        double ans=sum;
        for(int i=k;i<n;i++)
        {
            sum=sum-nums[i-k]+nums[i];
            ans=max(ans,sum);
        }
        return ans/k;
    }
};

// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         int currentSum=0;
//         //add the first k number from nums
//         for(int i=0;i<k;i++){
//             currentSum+=nums[i];
//         }
//         int maxSum=currentSum;
//         //now apply slide window algo
//         //take starting index, Ending index
//         int startIndex=0;
//         int endIndex= k;

//         while(endIndex < nums.size()){
//             currentSum-=nums[startIndex];
//             startIndex++;
//             currentSum+=nums[endIndex];
//             endIndex++;
//             maxSum=max(currentSum,maxSum);
//         }

//         return(double) maxSum/k;


        
//     }
// };
