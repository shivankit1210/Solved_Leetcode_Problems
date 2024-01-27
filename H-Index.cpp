class Solution {
public:
    int hIndex(vector<int>& citations) {

        sort(citations.begin(), citations.end());
        int mid=(citations.size())/2;
        if(mid==0)
        return 1;
        else
        return citations[mid];
    }
};