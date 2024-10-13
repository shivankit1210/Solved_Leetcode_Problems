#include<iostream>
#include<vector>
#include<math.h>
#include<climits>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // Initialize variables to store the required numbers
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;
        
        // Traverse the array to find the top 3 maximums and bottom 2 minimums
        for (int num : nums) {
            // Update the three largest values
            if (num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max3 = max2;
                max2 = num;
            } else if (num > max3) {
                max3 = num;
            }

            // Update the two smallest values
            if (num < min1) {
                min2 = min1;
                min1 = num;
            } else if (num < min2) {
                min2 = num;
            }
        }

        // Calculate the two possible products
        int product1 = max1 * max2 * max3; // Three largest numbers
        int product2 = max1 * min1 * min2; // Largest number and two smallest numbers

        return max(product1, product2);
    }
};


int main(){

    Solution sol;

     vector<int> nums={1,2,3,4,4,5,-2,34,2,-345 ,105,15,-45,19};
     cout<<sol.maximumProduct(nums);


    return 0;
}






























// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         int maxi;
//         int pro2=nums[0] * nums[1]* nums[n-1];
//         int pro1=nums[n-1]*nums[n-2]*nums[n-3];
       
//         return max(pro1,pro2);

        
        
//     }
// };

