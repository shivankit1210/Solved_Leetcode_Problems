class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) {
            unordered_map<int,int> freq;
            for (int num : arr) {
                freq[num]++;   //count the frequency of each element
            }
            // now in freq i have frequency if each element
    
            //set to store  frequency of each element
            unordered_set<int> unique;
            for(auto &num : freq){
            if(!unique.insert(num.second).second){
                return false;
            }
            }
            return true;
        }
    };