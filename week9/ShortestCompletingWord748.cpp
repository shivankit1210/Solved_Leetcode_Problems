class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char,int> LPfreq;
        int min_length=INT_MAX;
        string result;
        for(char ch : licensePlate){
            if(isalpha(ch)){
                LPfreq[tolower(ch)]++;
            }
        }
        
        for(const string& word : words){
            unordered_map<char,int> wordFreq;
             for(char ch : word){
                wordFreq[ch]++;
            }

            bool iscompl=true;
            for(const auto& entry : LPfreq){
                if(wordFreq[entry.first]<entry.second){
                    iscompl=false;
                    break;
                }
            }

           
            if(iscompl && word.length() < min_length){
                result=word;
                min_length=word.length();
            }
        }
        return result;
        
    }
};



// class Solution {
// public:
//     string shortestCompletingWord(string licensePlate, vector<string>& words) {
//         vector<string> check;
//         for(int i=0;i<licensePlate.size();i++){
//             if(isalpha(s[i])){
//                 if(isupper(s[i])){
//                     s[i]=tolower(s[i]);
//                     check.push_back(s[i]);
//                 }
//                 else check.push_back(s[i]);
//             }
//         }

//         for(int j=0;j<words.size();j++){
            
//         }


//     }
// };