class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        vector<int> dp(n);
        int res = INT_MIN;
        dp[0] = nums[0];
        for(int i = 1; i < n; i++){
            dp[i] = max(dp[i-1] + nums[i], nums[i]);
        }
        for(int i = 0; i < n; i++){
            res = max(res, dp[i]); 
        }
        return res;
    }
};