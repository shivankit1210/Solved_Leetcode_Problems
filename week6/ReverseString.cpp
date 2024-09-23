





















// class Solution {
// public:
//     string reverseVowels(string s) {
//         bool isVowel(char c){
//             unordered_set<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
//             return vowels.count(c);
//         }
//         int n=s.size();
//         int left=0;
//         int right=n-1;
//         while(left<right){
//             if(isVowel(s[left]) && isVowel(s[right])){
//                 char temp = s[left];
//                 s[left]=s[right];
//                 s[right]=temp;
//                 left++;
//                 right--;
//             }
//             if(isVowel(s[left])){
//                 left++;
//             }
//             if(isVowel(s[right])){
//                 right--;
//             }
//         }
//         return s;
//     }
// };