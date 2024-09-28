class Solution {
public:
    int countSegments(string s) {
        int n = s.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]!=' ' && (i==0 || s[i-1]==' ' )){
                count++;
            }
        }
        return count;



        // if (n == 0) {
        //     return 0;
        // } else {
        //     int count = 1;
        //     for (int i = 0; i < n; i++) {
        //         if (s[i] == ' ') {
        //             count++;
        //         }
        //     }
        //     return count;
        // }
    }
};