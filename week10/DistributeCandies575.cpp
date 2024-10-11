#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;




class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int MaxEat = n / 2;
        unordered_set<int> cando;

        
        for (int a : candyType) {
            cando.insert(a);
       
            if (cando.size() == MaxEat) {
                return MaxEat;
            }
        }

        return cando.size();
    }
};

int main(){
    Solution sol;
    vector<int> candyType={1,2,3,4,53,1,4};
    int res= sol.distributeCandies(candyType);
    cout<<"Result = "<<res<<endl;
    return 0;
}













// class Solution {
// public:
//     int distributeCandies(vector<int>& candyType) {
//         int n=candyType.size();
//         int MaxEat = n/2;
//         set<int> cando;

//         for(int a : candyType){
//             cando.insert(a);
//         }
//         return (cando.size()>MaxEat? MaxEat:cando.size());
//     }
// };


