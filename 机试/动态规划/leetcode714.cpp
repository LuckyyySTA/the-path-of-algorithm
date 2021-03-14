class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        if(prices.size() == 0){
            return 0;
        }
        int len = prices.size();
        vector<vector<int>> dp(len, vector<int>(2));
        dp[0][0] = 0;  // 0 表示为未持有
        dp[0][1] = -prices[0]; // 1 表示持有
        for(int i = 1; i < len; i++){
            dp[i][0] = max(dp[i-1][0], dp[i-1][1] + prices[i] - fee);
            dp[i][1] = max(dp[i-1][1], dp[i-1][0] - prices[i]);
        }
        return max(dp[len-1][0], dp[len-1][1]);
    }
};