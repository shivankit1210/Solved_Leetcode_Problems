class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;

        // For each element in nums1, we find its position in nums2
        for (int i = 0; i < nums1.size(); i++) {
            int foundIndex = -1;
            // Search for nums1[i] in nums2
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    foundIndex = j;
                    break; // Stop searching once we find the element
                }
            }

            // Now, we search for the next greater element in nums2 starting from foundIndex
            int nextGreater = -1;
            for (int k = foundIndex + 1; k < nums2.size(); k++) {
                if (nums2[k] > nums1[i]) {
                    nextGreater = nums2[k];
                    break; // We found the next greater element, so break the loop
                }
            }

            // Add the next greater element (or -1 if none found) to the result
            res.push_back(nextGreater);
        }

        return res;
    }
};
