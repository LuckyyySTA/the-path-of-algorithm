class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(prices.size() == 0 || k==0){
            return 0;
        }
        int len = prices.size();
        vector<vector<int>> dp(len, vector<int>(2*k+1));
        dp[0][0] = 0;
        for(int i = 0; i < 2*k+1; i++){
            if(i%2 == 0)
                dp[0][i] = 0;
            else 
                dp[0][i] = -prices[0]; 
        } 
        for(int i = 1; i < len; i++){
            dp[i][0] = dp[i-1][0];
            for(int j = 1; j < 2*k + 1; j++){
                if(j%2)
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-1] - prices[i]);
                else
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-1] + prices[i]);
            }
        }
        int res = dp[len-1][1];
        for(int i = 2; i < 2*k + 1; i++){
            if(res < dp[len-1][i]){
                res = dp[len-1][i];
            }
        }
        return res;
    }
};