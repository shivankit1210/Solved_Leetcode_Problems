class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=goal.size();
         if (s.size() != n) {
            return false;  
        }
        string newstr= "";
        newstr.resize(2*n);
        for(int i=0;i<2*n;i++){
         newstr[i]=goal[i%n];
        }
        if(newstr.find(s)!=string::npos){
            return true;
        }
        else return false;
        
    }
};

