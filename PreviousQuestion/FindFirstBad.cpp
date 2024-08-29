class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        
        while (left < right) {
            int mid = left + (right - left) / 2;  // Avoid potential overflow
            if (isBadVersion(mid)) {
                right = mid;  // The first bad version is at mid or before it
            } else {
                left = mid + 1;  // The first bad version is after mid
            }
        }
        
        return left;  // left is now the first bad version
    }
};
