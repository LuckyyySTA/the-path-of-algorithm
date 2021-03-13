// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         if(prices.size() == 0){
//             return 0;
//         }
//         int res = 0;
//         int min_price = prices[0];
//         for(int i = 1; i < prices.size(); i++){
//             res = max(res, prices[i] - min_price);
//             min_price = min(prices[i], min_price);
//         }
//         return res;
//     }

// };

// dp[i][0] 到第i天为止，没有持有 
// dp[i][1] 到第i天为止，持有
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0){
            return 0;
        }
        int len = prices.size();
        vector<vector<int>> dp(len, vector<int>(2));
        dp[0][0] = 0;
        dp[0][1] = -prices[0];
        for(int i = 1; i < prices.size(); i++){
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i]);
            dp[i][1] = max(-prices[i], dp[i-1][1]);
        } 
        return dp[len - 1][0];
    }

};
