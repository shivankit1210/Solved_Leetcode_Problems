// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         unordered_map<char,int> countChar;
//         for(char ch : s){
//             countChar[ch]++;
//         }
//         for(char c : t){
//             if(countChar.count(c)==0 || countChar[c]==0 ){
//                 return c;
//             }
//             else
//             countChar[c]--;
//         }
//         return '\0';
//     }
// };

class Solution {
public:
    char findTheDifference(string s, string t) {
        int s_sum = 0, t_sum = 0;
        for (char c : s) {
            s_sum += int(c);
        }
        for (char c : t) {
            t_sum += int(c);
        }
        return char(t_sum - s_sum);
    }
};