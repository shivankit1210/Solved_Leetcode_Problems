#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;

        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                i++;

            }
            j++;
        }
        return i;
    }
};

int main(){
    Solution sol;
 
 vector<int> g={1,2,3,7,8};
 vector<int> s={1,6,3};
 int res=sol.findContentChildren(g,s);
 cout<<res;

    return 0;
}

