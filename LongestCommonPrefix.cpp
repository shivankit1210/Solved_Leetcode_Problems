class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};




/* Types of For loop */

// It is range based for loop also called "For-each" loop
/*
for (const string& str : strs) {
    // Access each string in the vector
    cout << str << endl;
}
*/

// It is for loop Using Iterators:
/*
for (auto it = strs.begin(); it != strs.end(); ++it) {
    // Access each string in the vector using iterators
    cout << *it << endl;
}

*/


