class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int mn = prices[0];
        for(int i=1;i<prices.size();i++){
            int cost = prices[i] - mn;
            maxProfit = max(maxProfit,cost);
            mn = min(mn,prices[i]);
        }
        return maxProfit;
    }
};