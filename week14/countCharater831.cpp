class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> answer(n,INT_MAX);
        int last_seen=-1;

        //forward pass
        for(int i =0 ; i< n ; i++){
            if(s[i] == c){
                last_seen =i;
            }
            if(last_seen != -1){
                answer[i]= i - last_seen;
            }
        }

        // backward pass
        last_seen=-1;
        for(int i = n-1 ; i >= 0 ; i-- ){
            if(s[i] == c){
                last_seen = i;
            }

            if(last_seen != -1){
                answer[i] = min(answer[i], last_seen - i);
            }
        }

        return answer;
        
        
    }
};