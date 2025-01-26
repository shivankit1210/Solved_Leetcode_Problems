// 1089. Duplicate Zeros

// Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

// Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place
// and do not return anything.



class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zerosToDuplicate = 0;

        for (int i = 0; i < n - zerosToDuplicate; ++i) {
            if (arr[i] == 0) {
                if (i == n - zerosToDuplicate - 1) {
                    arr[n - 1] = 0; 
                    n--;            
                    break;
                }
                zerosToDuplicate++;
            }
        }

        for (int i = n - zerosToDuplicate - 1; i >= 0; --i) {
            if (arr[i] == 0) {
                arr[i + zerosToDuplicate] = 0; 
                zerosToDuplicate--;
                arr[i + zerosToDuplicate] = 0; 
            } else {
                arr[i + zerosToDuplicate] = arr[i];
            }
        }
    }
};
