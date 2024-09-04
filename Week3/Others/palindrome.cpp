class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int original = x;
        long long sum = 0;
        while (x > 0) {
            int temp = x % 10;
            sum =sum * 10 + temp;
            x = x / 10;
        }
        return original == sum;
        
    }
};