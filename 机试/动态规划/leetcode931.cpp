class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<vector<int>> dp(m, vector<int>(n));
        for(int i = 0; i < n; i++){
            dp[m-1][i] = matrix[m-1][i];
        }
        for(int i = m-2; i >= 0; i--){
            for(int j = 0; j < n; j++){
                if(j == 0){
                    dp[i][j] = matrix[i][j] + min(dp[i+1][j], dp[i+1][j+1]);
                }else if(j == n-1){
                    dp[i][j] = matrix[i][j] + min(dp[i+1][j-1], dp[i+1][j]);
                }else{
                    dp[i][j] = matrix[i][j] + min(dp[i+1][j-1], min(dp[i+1][j], dp[i+1][j+1]));
                }
            }
           
        }
        int res = INT_MAX;  
        for(int i = 0; i < n; i++){
            if(res > dp[0][i]){
                res = dp[0][i];
            }
        }
        return res;
    }
};