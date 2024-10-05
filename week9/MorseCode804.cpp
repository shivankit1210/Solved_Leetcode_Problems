class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        std::unordered_map<char, std::string> chMap = {
            {'a', ".-"},   {'b', "-..."}, {'c', "-.-."}, {'d', "-.."},
            {'e', "."},    {'f', "..-."}, {'g', "--."},  {'h', "...."},
            {'i', ".."},   {'j', ".---"}, {'k', "-.-"},  {'l', ".-.."},
            {'m', "--"},   {'n', "-."},   {'o', "---"},  {'p', ".--."},
            {'q', "--.-"}, {'r', ".-."},  {'s', "..."},  {'t', "-"},
            {'u', "..-"},  {'v', "...-"}, {'w', ".--"},  {'x', "-..-"},
            {'y', "-.--"}, {'z', "--.."}};
        std::set<std::string> result;

        for (int i = 0; i < words.size(); i++) {
            std::string str = "";

            for (int j = 0; j < words[i].size(); j++) {
                str += (chMap[words[i][j]]);
            }

            result.insert(str);
        }
            return result.size();

    }
};