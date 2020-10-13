class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cur=1,len = nums.size();
        vector<int> ans(len);
        for(int i = 0; i < len; i++){
            ans[i] = cur;
            cur *= nums[i];
        }
        cur = 1;
        for(int i = len-1; i >= 0; i--){
            ans[i] *= cur;
            cur *= nums[i];
        }
        return ans;
    }
};