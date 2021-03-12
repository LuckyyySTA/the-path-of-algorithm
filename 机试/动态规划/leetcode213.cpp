class Solution {
public:
    int rob(vector<int>& nums) {
      if(nums.size() == 0){
          return 0;
      }
      if(nums.size() == 1){
          return nums[0];
      }
      return max(helper(nums,0, nums.size() - 2), helper(nums, 1, nums.size() - 1));
    }
    int helper(vector<int>& nums, int start, int end){
        vector<int> dp(nums.size());
        if(start == end){
            return nums[start];
        }
        dp[start] = nums[start];
        dp[start + 1] = max(nums[start], nums[start + 1]);
        for(int i = start + 2; i <= end; i++){
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return dp[end];
    }
};