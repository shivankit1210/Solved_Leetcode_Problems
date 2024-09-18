class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        unordered_map<char, char> s_t_map;
        unordered_map<char, char> t_s_map;
        if (s.size() != t.size()) {
            return false;
        }
        for (int i = 0; i < n; i++) {
            char c1 = s[i];
            char c2 = t[i];
            if (s_t_map.count(c1) && s_t_map[c1] != c2) {
                return false;
            }
            if (t_s_map.count(c2) && t_s_map[c2] != c1) {
                return false;
            } else {
                s_t_map[s[i]] = c2;
                t_s_map[t[i]] = c1;
            }
        }
        return true;
    }
};