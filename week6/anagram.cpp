class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;

        for (auto x : s) {
            count[x]++;
        }

        for (auto x : t) {
            count[x]--;
        }
        for (auto x : count) {
            if (x.second != 0) {
                return false;
            }
        }
        return true;
    }
};

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size()!=t.size()){
//             return false;
//         }

//         if(sort(s.begin(),s.end())!=sort(t.begin(),t.end())){
//             return false;
//         }
//         return true;

//     }
// };






























// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size()!=t.size()){
//             return false;
//         }
        
//         if(sort(s.begin(),s.end())!=sort(t.begin(),t.end())){
//             return false;
//         }
//         return true;

//     }
// };