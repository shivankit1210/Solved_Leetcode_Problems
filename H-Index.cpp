// class Solution {
// public:
//     int hIndex(vector<int>& citations) {

//         sort(citations.begin(), citations.end());
//         int mid=(citations.size())/2;
//         if(mid==0)
//         return 1;
//         else
//         return citations[mid];
//     }
// };

class Solution {
public:
    int hIndex(vector<int>& citations) {

        sort(citations.begin(), citations.end());
        int n = citations.size();
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            if (citations[i] >= n - i) {
                maxi = max(maxi, n - i);
            }
            
        }
        return maxi;
    }
    .3
};