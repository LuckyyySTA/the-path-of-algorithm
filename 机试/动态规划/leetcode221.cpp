class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> dp(m, vector<int>(n));
        // 以(i, j)为右下角，最大的全1正方形的边长
        int res = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == '0'){
                    dp[i][j] = 0;
                }else if(matrix[i][j] == '1'){
                    if( i == 0 || j == 0){
                        dp[i][j] = 1;
                    }
                    if( i > 0 && j > 0){
                        dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
                    }
                }
                if(res < dp[i][j]){
                    res = dp[i][j];
                }
            }
        }
        return res * res;
    }
};