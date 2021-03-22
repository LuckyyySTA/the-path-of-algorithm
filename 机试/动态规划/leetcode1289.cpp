class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        
        vector<vector<int>> dp(m, vector<int>(n));
        for(int i = 0; i < n; i++){
            dp[m-1][i] = arr[m-1][i];
        }
        for(int i = m-2; i >= 0; i--){
            for(int j = 0; j < n; j++){
                dp[i][j] = arr[i][j];
                int temp = INT_MAX;
                for(int k = 0; k < n; k++){
                    if(k != j){
                        if(dp[i+1][k] < temp){
                            temp = dp[i+1][k];
                        }
                    }
                }
                dp[i][j] += temp;
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