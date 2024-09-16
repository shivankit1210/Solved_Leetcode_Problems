#include<iostream>
#include<cstring>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int l1 = haystack.length();
        int l2 = needle.length();

        if (l1 < l2)
            return -1;
        if (l2 == 0)
            return 0;

        for (int i = 0; i <= l1 - l2; i++) {
            int j;
            for (j = 0; j < l2; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == l2) {  // If we found a full match
                return i;
            }
        }

        return -1; // If no match is found
    }
};


// int strstr(string haystack,string needle){
//     int l1 = haystack.length();
//         int l2 = needle.length();

//         if (l1 < l2)
//             return -1;
//         if (l2 == 0)
//             return 0;
//         int pos;
//         for (int i = 0; i < l1 - l2; i++) {
//             for (int j = 0; j < l2; j++) {
//                 if (haystack[i + j] != needle[j])
//                     break;
//                 pos = i + j;
//             }
//         }
//         return (pos + 1) - l2;
//     }


int main(){
    string haystack="butnotsad";
    string needle="sad";
    cout<<strstr(haystack,needle);
}






























// #include<iostream>
// using namespace std;

// int strstr(string haystack,string needle){
//     int l1=haystack.length();
//     int l2=needle.length();

//     if(l1<l2) return -1;
//     if(l2==0) return 0;
//     int pos;
//     for(int i=0;i<l1-l2;i++){
//         for(int j=0;j<l2;j++){
//             if(haystack[i+j]!=needle[j]) break;
//             pos=i+j;
//         }
     
//     }
//  return (pos+1)-l2;
// }

// int main(){
//     string haystack="sadasbbutsad";
//     string needle="but";
//     cout<<strstr(haystack,needle);
// }