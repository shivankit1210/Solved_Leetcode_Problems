class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();  
        
        for (int i = 0; i < n; i += 2 * k) {  // Iterate in steps of 2 * k
            // Calculate the start and end indices for reversing the first k characters
            int left = i;  // Start of the block
            int right = min(i + k - 1, n - 1);  // End of the block (ensure we don't go out of bounds)
            
            // Reverse the substring from left to right
            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        
        return s;  // Return the modified string
    }
};











// class Solution {
// public:
//     string reverseStr(string s, int k) {
//       int counter=0;
//       for(int i=counter;i<s.size();i++){
//         for(int j=counter;j<k/2;j++){
//             swap(s[j],s[k-j-1]);
//         }
//         counter=2*k+i;
//         if(counter>s.size()){
//             break;
//         }
//       }
//       return s;
//     }
// };