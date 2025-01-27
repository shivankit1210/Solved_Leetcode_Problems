// 1122. Relative Sort Array

// Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.
// Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2. Elements that do not appear in arr2 should be placed at the end of arr1 in ascending order.


class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        unordered_map<int,int> countNum;
        //count the repetition of elments
        for(int num : arr1){
            countNum[num]++;
        }

        vector<int> result;
        //push elements from arr2 to result array with repitition 
        for( int num : arr2){
            while(countNum[num]>0){
                result.push_back(num);
            countNum[num]--;
            }
        }

        //intialise remaining array vector for adding remaining elements to array and than sort it.

        vector<int> remainsArr;
        for(const auto& [num, count] : countNum){
            while(count>0){
                remainsArr.push_back(num);
                countNum[num]--;
            }
        }
        //sort remaining array
        sort(remainsArr.begin(),remainsArr.end());

        //put into result array
        result.insert(result.end(),remainsArr.begin(),remainsArr.end());

        return result;

    }
};