class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0){
            return 0;
        }
        int len = prices.size();
        vector<vector<int>> dp(len, vector<int>(2));
        dp[0][0] = 0; // 0表示未持有
        dp[0][1] = -prices[0]; // 1表示持有
        for(int i = 1; i < len; i++){
            dp[i][0] = max(dp[i-1][0], dp[i-1][1] + prices[i]);
            dp[i][1] = max(dp[i-1][1], - prices[i]);
        }
        return dp[len-1][0];
    }
};