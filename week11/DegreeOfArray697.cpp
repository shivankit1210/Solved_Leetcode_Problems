class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> count,first,last;
        int minLen=nums.size();
        int degree=0;

        for(int i=0;i<nums.size();i++){
            if(first.find(nums[i])==first.end()){
                first[nums[i]]=i;
            }
            last[nums[i]]=i;
            count[nums[i]]++;
            degree= max(degree,count[nums[i]]);
        }

        for(auto& [num,freq] : count){
            if(freq==degree){
                minLen=min(minLen,last[num]-first[num]+1);
            }
        }
        return minLen;
    }
};




















// class Solution
// {
// public:
//     int findShortestSubArray(vector<int> &nums)
//     {
//         // 1. first count the frequency of element in nums arry
//         // 2. Find the degree of Nums array(say deg)
//         // 3. pick array one by one
//         //    > count the element in it
//         //    > if any element have same degree like original array (deg)
//         //    > put min size = size of that array
//         // 4. while checking the subarray count the min. value of subarray (if having same degree)

//         unordered_map<int, int> count, first, last;
//         int degree = 0, minLength = nums.size();

//         // 1. Traverse nums to populate count, first, and last


//         for (int i = 0; i < nums.size(); i++)
//         {
//             int num = nums[i];
//             if (first.find(num) == first.end())
//             {
//                 first[num] = i; // Store first occurrence
//             }
//             last[num] = i;                    // Always update last occurrence
//             count[num]++;                     // Increment frequency
//             degree = max(degree, count[num]); // Update degree
//         }

//         // 2. Iterate through the map to find elements with max degree
//         for (auto &[num, freq] : count)
//         {
//             if (freq == degree)
//             {
//                 minLength = min(minLength, last[num] - first[num] + 1);
//             }
//         }

//         return minLength;
//     }
// };