




Z
class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length()-1;
        string st = "aeiouAEIOU";
        while(start<end){
            bool b1 = false;
            bool b2 = false;
            for(char ch: st){
                if(ch==s.at(start)) b1=true;
            }
            if(!b1){
                start++;
                continue;
            }
            for(char ch: st){
                if(ch==s.at(end)) b2=true;
            }
            if(!b2){
                end--;
                continue;
            }
            
            char temp = s.at(start);
            s.at(start) = s.at(end);
            s.at(end)= temp;
            start++;
            end--;
        }
        return s;
    }
};











// class Solution {
// public:
//     string reverseVowels(string s) {
//         int start = 0;
//         int end = s.size() - 1;
//         string vowels = "aeiouAEIOU";
//         while (start < end) {
//             // bool b1=false;
//             // bool b2=false;
//             for (char ch : vowels) {
//                 if (ch != s[start]) {
//                     start++;
//                     continue;
//                 }
//             }
//             for (char ch : vowels) {
//                 if (ch != s[end]) {
//                     end--;
//                     continue;
//                 }
//             }
//             swap(s[start],s[end]);
//             start++;
//             end--;
//         }
//         return s;
//     }
// };





















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