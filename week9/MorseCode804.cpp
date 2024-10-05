#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<set>


class Solution {
public:
    int uniqueMorseRepresentations(std::vector<std::string>& words) {
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


int main(){
    Solution solution;
    int n;
    std::cout<<"Enter the numbers of word :";
    std::cin>>n;
    std::vector<std::string> words(n);
    std::cout<<"enter the words"<<std::endl;
    for(int i=0;i<n;i++){
        std::cin>>words[i];
    }
    int finalres = solution.uniqueMorseRepresentations(words);

        std::cout << "Number of unique Morse code transformations: " << finalres << std::endl;

  return 0;

}