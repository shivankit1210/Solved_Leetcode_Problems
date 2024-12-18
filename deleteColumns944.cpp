class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int row = strs.size();
        int column = strs[0].size();
        int unsorted_count = 0;

        for(int i = 0 ; i < column ; i++){
            for(int j = 1 ; j < row ; j++){
                if(strs[j][i] < strs[j - 1][i]){
                    unsorted_count++;
                    break; 
                }
            }
        }
        return unsorted_count;
    }
};