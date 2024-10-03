









class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            if (s[left] != s[right]) {
                // Check both possibilities: skip left character or skip right character
                // After skipping, continue checking for palindrome
                int leftSkip = left + 1;
                int rightSkip = right - 1;

                // Check if the rest is palindrome after skipping left or right
                while (leftSkip < right) {
                    if (s[leftSkip] != s[right]) {
                        break;
                    }
                    leftSkip++;
                    right--;
                }

                while (left < rightSkip) {
                    if (s[left] != s[rightSkip]) {
                        break;
                    }
                    left++;
                    rightSkip--;
                }

                // Return true if either of the skips result in a palindrome
                return (leftSkip >= right || left >= rightSkip);
            }
            left++;
            right--;
        }
        
        return true;
    }
};


















// class Solution {
// public:
//     bool validPalindrome(string s) {
//         int n=s.size()-1;
//         int left=0;
//         int right=n;
//         bool count=true;
//         while(left<right){
//             if(s[left]!=s[right]){
//                if(count && (s[left+1]==s[right]) ) {
//                 left+=2;
//                 count=false;
//                }
//                else if(count && (s[left]==s[right-1])){
//                 right-=2;
//                 count=false;
//                }
//                else return false;
//             }
//         }

//         return true;
        
//     }
// };