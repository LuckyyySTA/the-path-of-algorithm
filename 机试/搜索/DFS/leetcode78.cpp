class Solution {
public:
    vector<vector<int>> res;
    void backTrack(int start, vector<int>& path, vector<int>& nums){
        res.push_back(path);
        for(int i = start; i < nums.size(); i++){
            path.push_back(nums[i]);
            backTrack(i+1, path, nums);
            path.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.size() == 0){
            return res;
        }
        vector<int> path;
        backTrack(0, path, nums);
        return res;
    }
};