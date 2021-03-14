class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0){
            return 0;
        }
        int len = prices.size();
        vector<vector<int>> dp(len, vector<int>(3));
        dp[0][0] = -prices[0];
        for(int i = 1; i < len; i++){
            dp[i][0] = max(dp[i-1][0], dp[i-1][2] - prices[i]);   //持有
            dp[i][1] = dp[i-1][0] + prices[i];   //未持有处于冷冻期
            dp[i][2] = max(dp[i-1][1], dp[i-1][2]);   //未持有处于未冷冻期
        }
        return max(dp[len-1][1], dp[len-1][2]);
    }
};