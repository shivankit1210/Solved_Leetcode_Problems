class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string first="qwertyuiopQWERTYUIOP";
        string second="ASDFGHJKLasdfghjkl";
        string third="zxcvbnmZXCVBNM";
        vector<string> result;

        for(int i=0;i<words.size();i++){
            int f=0;
            int s=0;
            int t=0;

            for(int j=0;j<words[i].size();j++){
                
                if(first.find(words[i][j]) != string::npos){
                    f++;
                }
                else if(second.find(words[i][j]) != string::npos){
                    s++;
                }
                else if(third.find(words[i][j] != string::npos)) {
                    t++;
                }
            }
            if(f==words[i].length() || s==words[i].length() || t==words[i].length()){
                result.push_back(words[i]);
            }
        }
        return result;
    }
};