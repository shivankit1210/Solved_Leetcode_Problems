class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        for(int j=0;j<t.size();j++){
            if(i<s.size() && s[i]==t[j]){
                i++;
            }
        }
        return i==s.size();
    }
};




















// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         for(int i=0;i<s.size();i++){
//             for(int j=i;j<t.size();j++){
//                     if(s[i]==t[j]){
//                         break;
//                     }
//             }
//             if(i==(s.size()-1)){
//                 return true;
//             }
//         }
//         return false;
//     }
// };