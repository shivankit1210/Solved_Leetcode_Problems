class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int> mapping;
        int n=score.size();
        vector<string> res(n);
        //store indexes in hash table
        for(int i=0;i<n;i++){
         mapping[score[i]]=i;
        }
        
        sort(score.begin(), score.end(), greater<int>());

        for(int j=0;j<n;j++){
            if(j==0){
                res[mapping[score[j]]]= "Gold Medal";
            }
            else if(j==1){
                res[mapping[score[j]]]= "Silver Medal";
            }
            else if(j==2){
                res[mapping[score[j]]] = "Bronze Medal";
            }
            else {
            res[mapping[score[j]]]= to_string(j+1);
            }
        }
        return res;
    }
};















// class Solution {
// public:
//     vector<string> findRelativeRanks(vector<int>& score) {
//         unordered_map<int,int> mapping;
//         int n=score.size();
//         vector<string> res(n);
//         //store indexes in hash table
//         for(int i=0;i<n;i++){
//          mapping[score[i]]=i;
//         }
//         vector<int> array;
//         array=score;
//         sort(score.begin(),score.end());

//         for(int j=0;j<n;j++){
//             if(j==0){
//                 res[mapping[score[j]]]= "Gold Medal";
//             }
//             else if(j==1){
//                 res[mapping[score[j]]]= "Silver Medal";
//             }
//             else if(j==2){
//                 res[mapping[score[j]]] = "Bronze Medal";
//             }
//             else 
//             res[j]= j;
//         }
//         return res;
//     }
// };