class Solution {
public:
    vector<vector<int>> res;
    void backTrack(int start, vector<int>& path, int k, int n, vector<int>& nums){
        if(n < 0){
            return;
        }
        if(n == 0 && path.size() == k){
            res.push_back(path);
        }
        for(int i = start; i < nums.size(); i++){
            path.push_back(nums[i]);
            backTrack(i+1, path, k, n - nums[i], nums);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {1, 2, 3, 4, 5, 6, 7 ,8, 9};
        vector<int> path;
        backTrack(0, path, k, n, nums);
        return res;
    }
};