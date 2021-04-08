class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>> dp(strs.size() + 1, vector<vector<int>>(m, vector<int>(n)));
        for(int i = 1; i <= strs.size(); i++){
            vector<int> count = countZero(strs[i-1]);
            for(int j = 0; j < m; j++){
                for(int k = 0; k < n; k++){
                    int zero = count[0];
                    int one = count[1];
                    dp[i][j][k] = dp[i-1][j][k];
                    if(j >= count[0] && k >= count[1]){
                        dp[i][j][k] = max(dp[i][j][k], dp[i-1][j-zero][k-one]);
                    }
                }
            }
        }
        return dp[strs.size()][m][n];
    }
    vector<int> countZero(string s){
        vector<int> count(2);
        for(int j = 0; j < s.length(); j++){
            count[s[j] - '0']++;
        }       
        return count;
    }
};