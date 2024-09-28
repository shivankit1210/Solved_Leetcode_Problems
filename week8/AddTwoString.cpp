class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=num1.size()-1;
        int m=num2.size()-1;
        int carry=0;
        int sum;
        string result="";
        while( n>=0 || m>=0 || carry){
            sum=carry;

            if(n>=0){
            sum+=num1[n--]-'0';
            }

            if(m>=0){
                sum+=num2[m--]-'0';
            }
            result+=(sum%10) +'0';
            carry=sum/10;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};