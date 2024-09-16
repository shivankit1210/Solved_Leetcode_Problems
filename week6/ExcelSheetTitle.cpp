class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str;
        while(columnNumber){
            if(columnNumber%26!=0){
                int x=columnNumber%26;
                str.push_back(x+64);
                columnNumber/=26;
            }
            else{
                str.push_back('Z');
                int x=columnNumber/26;
                columnNumber=x-1;
            }
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
