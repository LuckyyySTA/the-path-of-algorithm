class Solution {
public:
    vector<vector<int>> res;
    void backTrack(int start, vector<int>& path, vector<int>& nums){
        res.push_back(path);
        for(int i = start; i < nums.size(); i++){
            if(i > start && nums[i] == nums[i - 1] )
                continue;
            path.push_back(nums[i]);
            backTrack(i+1, path, nums);
            path.pop_back();
            }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> path;
        sort(nums.begin(), nums.end());
        backTrack(0, path, nums);
        return res;
    }
};