class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            unordered_map<int,int> countD;
            int pairs=0;
            for(auto& domino : dominoes){
                int a = min(domino[0],domino[1]);
                int b = max(domino[0],domino[1]);
                int key = 10*a+b;
                
                pairs += countD[key];
                countD[key]++;

            }
            return pairs;
        }
    };