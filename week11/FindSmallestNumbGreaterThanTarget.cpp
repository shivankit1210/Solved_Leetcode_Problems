class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        //iterate throught array of characters
        // check for target in letters array 
        // unordered_map<char,int> count;
        // for(char ch : letters ){

        // }
        for(int i=0;i<letters.size();i++){
            
            if(letters[i]>target){
                return letters[i];
            }
            
        }
        return letters[0];
        
    }
};