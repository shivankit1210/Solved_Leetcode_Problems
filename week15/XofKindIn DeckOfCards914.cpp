int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> count;
        for (int c : deck) {
            count[c]++;
        }

        int groupSize = 0;
        for (auto& pair : count) {
            if (groupSize == 0) {
                groupSize = pair.second;
            } else {
                groupSize = gcd(groupSize, pair.second);
            }
        }
        return groupSize > 1;
    }
};