class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();

        for (int i = 0; i < size; i++) {
            // Check if current spot is empty
            if (flowerbed[i] == 0) {
                // Check if previous and next spots are either empty or out of bounds
                bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
                bool rightEmpty = (i == size - 1 || flowerbed[i + 1] == 0);

                if (leftEmpty && rightEmpty) {
        
                    flowerbed[i] = 1;
                    n--; // One flower placed

                    if (n == 0) {
                        return true; // All required flowers planted
                    }
                }
            }
        }

        return n <= 0; // Return true if we could plant all required flowers
    }
};








// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//         // locate  where value of i ==0
//         // check where value of i-1==0
//         // also where value of i+1==0
//         if(flowerbed.size()==1 && flowerbed[0]==0 && n==1){
//             return true;
//         }
//         else if(flowerbed.size()==1 && flowerbed[0]==1){
//             return false;
//         }
//         for (int i = 0; i < flowerbed.size(); i++) {
//             if (flowerbed[i] == 0 && flowerbed[i + 1]==0 && flowerbed[i - 1]==0) {
//                 n -= 1;
//                 if(n==0){
//                     return true;
//                 }
//             }

//         }
//         return false;
//     }
// };