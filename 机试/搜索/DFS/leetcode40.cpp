class Solution {
public:
    vector<vector<int>> res;
    void backTrack(int start, vector<int>& path, vector<int>& candidates, int target){
        if(target < 0){
            return;
        }
        if(target == 0){
            res.push_back(path);
        }
        for(int i = start; i < candidates.size(); i++){
            if(i > start && candidates[i] == candidates[i - 1])
                continue;
            path.push_back(candidates[i]);
            backTrack(i + 1, path, candidates, target - candidates[i]);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> path;
        sort(candidates.begin(), candidates.end());
        backTrack(0, path, candidates, target);
        return res;
    }
};