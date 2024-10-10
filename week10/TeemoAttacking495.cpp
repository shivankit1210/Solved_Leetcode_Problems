class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int sum=duration;
        int n,i=0;
        while(i<timeSeries.size()-1){
            n= timeSeries[i+1]-timeSeries[i];
            if(n> duration){
             sum=sum+duration;
            }
            else{
             sum=sum+n;
            }
            i++;
        }

        return sum;
        
    }
};