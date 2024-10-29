class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        // convert all uppercase into lowercase and remove extra characters
        // other than alphabet
        for (char& c : paragraph) {
            c = isalpha(c) ? tolower(c) : ' ';
        }
        // store the value of banned words into set bannedSet. for O(1) lookup
        // time
        unordered_set<string> bannedSet(banned.begin(), banned.end());

        // count the frequency of words in paragraph
        unordered_map<string, int> wordCount;

        // first  we have to convert paragraph into the the array if words using
        // "istringstream"
        istringstream iss(paragraph);
        string word;
        while (iss >> word) {

            if (bannedSet.find(word) == bannedSet.end()) {
                wordCount[word]++;
            }
        }

        string mostCommon;
        int maxCount = 0;
        for (const auto& [w, count] : wordCount) {
            if (count > maxCount) {
                mostCommon = w;
                maxCount = count;
            }
        }

        return mostCommon;
    }
};