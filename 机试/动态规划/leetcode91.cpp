class Solution {
public:
    int numDecodings(string s) {
        int len = s.length();
        if(len == 0){
            return 0;
        }
        vector<int> dp(len+1);
        // 前i个串的解密方式
        dp[0] = 1; //空串只有一种解密方式
        for(int i = 1; i <= len; i++){
            dp[i] = 0;
            if(s[i-1] >= '1' && s[i-1] <= '9'){
                dp[i] += dp[i-1];
            }
            if(i > 1){
                int t = (s[i-2] - '0') * 10 + (s[i-1] - '0');
                if (t >= 10 && t <= 26){
                    dp[i] += dp[i-2];
                }
            }
        }
        return dp[len];
    }
};