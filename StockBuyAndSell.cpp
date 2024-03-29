class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int max_profit=0;
        // for(int i=0;i<prices.size();i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         if(prices[j]-prices[i]>max_profit){
        //             max_profit=prices[j]-prices[i];
        //         }
        //     }
        // }
        //    return max_profit;
        int profit = 0;
        int mini = prices[0];
        for (int i = 0; i < prices.size(); i++) {
            int cost = prices[i] - mini;
            profit = max(profit, cost);
            mini = min(mini, prices[i]);
        }
        return profit;
    }
};