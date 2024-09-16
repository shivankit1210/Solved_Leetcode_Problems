class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<=end){
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start])!=tolower(s[end])){
                return false;
            }
            else start++;
            end--;
        }
        return true;
    }
};



















// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string str = "";
//         for (int i = 0; i < s.length(); i++) {
//             if (isaplha(str[i])) {
//                 if (isupper(str[i])) {
//                     tolower(str[i]);
//                     str.push_back(str[i]);
//                 }
//                 str.push_back(str[i]);
//             }
//         }
//         int n = str.length();
//         for (int i = 0; i < n / 2; i++) {
//             char temp = str[i];
//             str[i] = str[n - i - 1];
//             str[n - i - 1] = temp;
//         }
//         if (str == s)
//             return true;
//         else
//             false;
//     }
// };