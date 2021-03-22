class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        if(len == 0){
            return 0;
        }
        vector<int> dp_max(len);
        vector<int> dp_min(len);
        dp_max[0] = nums[0];
        dp_min[0] = nums[0];
        for(int i = 1; i < len; i++){
            dp_max[i] = max(dp_min[i-1]*nums[i], max(dp_max[i-1]*nums[i], nums[i]));
            dp_min[i] = min(dp_min[i-1]*nums[i], min(dp_max[i-1]*nums[i], nums[i]));
        }
        return *max_element(dp_max.begin(), dp_max.end());
    }
};