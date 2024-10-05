class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
     int lines=1;
     int currentwidth=0;
     for(char ch : s){
        int charwidth = widths[ch- 'a'];

        if(currentwidth + charwidth > 100){
            lines++;
            currentwidth=charwidth;
        }
        else{
            currentwidth+=charwidth;
        }
     }
      return {lines,currentwidth};
    }
};
















// class Solution {
// public:
//     vector<int> numberOfLines(vector<int>& widths, string s) {
//         char ch;
//         int sum=0;
//         int line;
//         int arr[2];
//         for(int i=0;i<s.size();i++){
//             s[i]=ch;
//             sum=sum+widths['ch'-a];
//             if(sum>=100){
//                 line++;
//             }

//         }
        
//     }
// };