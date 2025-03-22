// 1299. Replace Elements with Greatest Element on Right Side

// Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

// After doing so, return the array.

// <-- Brute force approach -->

class Solution {
    public:
        vector<int> replaceElements(vector<int>& arr) {
    
            int max;
            for (int i = 0; i < arr.size()-1; i++) {
                max = arr[i + 1];
                if (i != arr.size() - 1) {
                    for (int j = i + 1; j < arr.size(); j++) {
                        if (arr[j] > max) {
                            max = arr[j];
                        }                    
                    }
                }
                arr[i] = max;
                
            }
            arr[arr.size()-1] = -1;
            return arr;
        }
    };