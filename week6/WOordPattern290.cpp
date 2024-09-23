class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string temp = "";
        vector<string> ss;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                temp.push_back(s[i]);
            } else if (s[i] == ' ') {
                if (!temp.empty()) {
                    ss.push_back(temp);
                    temp.clear();
                }
            }
        }

        if (!temp.empty()) {
            ss.push_back(temp);
        }

        if (ss.size() != pattern.size())
            return false;

        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;

        for (int i = 0; i < s.size(); i++) {
            if (mp1.count(pattern[i]) && mp1[pattern[i]] !=ss[i]) {
                return false;
            }
            else 
            mp1[pattern[i]]=ss[i];
        }

        for (int i = 0; i < pattern.length(); i++) {
            if (mp2.count(ss[i]) && mp2[ss[i]] != pattern[i]) {
                return false;
            }
            else 
            mp2[ss[i]]=pattern[i];
        }
        return true;
    }
};