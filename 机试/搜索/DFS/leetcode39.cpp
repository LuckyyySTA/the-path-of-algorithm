class Solution {
public:
    vector<vector<int>> res;
    void backTrack(int start, vector<int>& path, vector<int>& candidates, int target){
        if(target < 0){
            return;
        }
        if(target == 0){
            res.push_back(path);
            return;
        }
        for(int i = start; i < candidates.size(); i++){
            path.push_back(candidates[i]);
            backTrack(i, path, candidates, target - candidates[i]);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> path;
        backTrack(0, path, candidates, target);
        return res;
    }
};