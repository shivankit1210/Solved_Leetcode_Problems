
class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char,int> count;

       for(char ch : s){
        count[ch]++;
       }

       for(int i=0;i<s.size();i++){
        if(count[s[i]]==1){
            return i;
        }
       }
       return -1;

    }
};







// class Solution {
// public:
//     int firstUniqChar(string s) {
//         for(int i=0;i<s.size();i++){
//             for(int j=i+1;j<s.size();j++){
//              if(s[i]==s[j]){
//                 break;
//              }
//              if(j==(s.size()-1)){
//                 return i;
//              }
//             }
//         }
//         return -1;
//     }
// };