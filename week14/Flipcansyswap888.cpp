class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumAlice = 0;
        int sumBob = 0;
      for(int c : aliceSizes){
            sumAlice+= c;
      }

      for(int c :  bobSizes){
        sumBob+= c;
      }

      int diff = (sumAlice - sumBob)/2;
      unordered_set<int> bob(bobSizes.begin(),bobSizes.end());

      for(int x : aliceSizes){
        int y = x - diff;
        if(bob.count(y)){
            return {x,y};
        }
      }
      return {};
    }
};