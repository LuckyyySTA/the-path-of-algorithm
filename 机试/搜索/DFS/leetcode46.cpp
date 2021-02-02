class Solution {
public:
    vector<vector<int>> res;
    void backTrack(vector<int>& nums, vector<int>& path, vector<bool>& used){
        if(path.size() == nums.size()){
            res.push_back(path);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(used[i]){
                continue;
            }else{
                used[i] = true;
                path.push_back(nums[i]);
                backTrack(nums, path, used);
                used[i] = false;
                path.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> path;
        vector<bool> used(nums.size(), false);
        backTrack(nums, path, used);
        return res;
    }
};