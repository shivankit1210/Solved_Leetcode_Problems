class Solution
{
public:
    bool DetectCapitalUse(string word)
    {
        bool allUpper = false;
        bool allLower = false;
        bool mid = true;
        int last = word.size() - 1;

        if (islower(word[0]))
        {
            allLower = true;
        }
        else if (isupper(word[0] && islower(word[last])))
        {
            mid = true;
        }
        else
            allupper = true;


        for(int i=1;i<word.size()-1;i++){
            if(isUpper(word[i]) && (allLower || mid)){
                return false;
            }
            else if(isLower(word[i]) && allupper){
                return false;
            }
        }    
        return true;
    }
}
