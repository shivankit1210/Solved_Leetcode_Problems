class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum =0;
        // sum of array
        for(int num : arr){
            sum+=num;
        }

        // divide by 3, check if it is divisible by 3 (if not divisible return false) 
        if(sum%3!=0){
            return false;
        }
        int target = sum/3;
        int partitionsum=0;
        int partition =0;

        //now check if their is exact three sub array which fulfill sum criteria
        for(int i=0;i<arr.size();i++){
            partitionsum+=arr[i];

            if(partitionsum == target){
                partition++;
                partitionsum=0;
            }

            if(partition==2 && i < arr.size()-1){
                return true;
            }
        }

        return false;

        
    }
};