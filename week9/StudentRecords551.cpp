class Solution {
public:
    bool checkRecord(string s) {
        unordered_map<char,int> CharCount;
        int countA=0;
        for(int i=0;i<s.length();i++){

            if(s[i]=='A'){
                countA++;
                if(countA>=2){
                    return false;
                }
            }
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
                return false;
            }
        }
        return true;
        
    }
};


//first self