// ! --------Approach------ !
// Sort the array to determine the relative ranking.

// Use a hash map to store the rank of each unique element.

// Replace elements in the original array with their respective ranks.


class Solution {
    public:
        vector<int> arrayRankTransform(vector<int>& arr) {
            vector<int> sortedArr = arr; 
            sort(sortedArr.begin(), sortedArr.end()); 
            
            unordered_map<int, int> rankMap; 
            int rank = 1;
            
            
            for (int num : sortedArr) {
                if (rankMap.find(num) == rankMap.end()) {
                    rankMap[num] = rank++;
                }
            }
    
            
            for (int& num : arr) {
                num = rankMap[num];
            }
    
            return arr;
        }
    };
    