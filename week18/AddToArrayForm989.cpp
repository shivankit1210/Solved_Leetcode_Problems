class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        // _______OPTIMSED SOLUTION_______(Without conversion to  number)
        int n= num.size()-1;
        int carry = k;

        while(n>=0 || carry > 0){
            if(n >=0){
            carry += num[n];
            num[n] = carry % 10;
            n--;
            }
            else {
                num.insert(num.begin(),carry % 10);
            }
           carry/=10;

        }

        return num;


        // ____BRUTE FORCE____
        // long long sum=0;
        // int n=num.size()-1;
        // for(int i=0;i<=n;i++){
        //     sum = sum * 10 + num[i];
        // }

        // sum+=k;

        // num.clear();

        // while(sum > 0){
        //     int temp = sum%10;
        //     num.insert(num.begin(),temp);
        //     sum = sum/10;
        // }

        // if(num.empty()) 
        // num.push_back(0);

        // return num;
        
    }
};