class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int freq[26];
        // Initialise array to max. freq.
        for (int i = 0; i < 26; i++) {
            freq[i] = INT_MAX;
        }
        // iterate words array
        for (const string& word : words) {
            int tempFreq[26] = {0};
            // count freq. of each character in word
            for (char ch : word) {
                tempFreq[ch - 'a']++;
            }
            // initialise the min. frequency for word
            for (int i = 0; i < 26; i++) {
                freq[i] = min(tempFreq[i], freq[i]);
            }
        }

        vector<string> result;
        for(int i=0 ; i<26 ; i++){
            while(freq[i]>0){
                result.push_back(string(1,'a' + i));
                freq[i]--;
            }
        }

        return result;
    }
};