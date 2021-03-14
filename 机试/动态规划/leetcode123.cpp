class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0){
            return 0;
        }
        int len = prices.size();
       vector<vector<int>> dp(len, vector<int>(5));
       dp[0][0] = 0;
       dp[0][1] = -prices[0];
       dp[0][2] = 0;
       dp[0][3] = -prices[0];
       dp[0][4] = 0;
       for(int i = 1; i < prices.size(); i++){
           dp[i][0] = dp[i-1][0]; //初始状态
           dp[i][1] = max(dp[i-1][1], dp[i-1][0] - prices[i]); //第一次买入
           dp[i][2] = max(dp[i-1][2], dp[i-1][1] + prices[i]);   //第一次卖出
           dp[i][3] = max(dp[i-1][3], dp[i-1][2] - prices[i]);//第二次买入
           dp[i][4] = max(dp[i-1][4], dp[i-1][3] + prices[i]);//第二次卖出
       }
       return max(max( max(dp[len-1][0], dp[len-1][1]), max(dp[len-1][2], dp[len-1][3]) ), dp[len-1][4]);
    }
};