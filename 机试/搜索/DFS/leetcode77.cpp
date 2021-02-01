class Solution {
public:
    vector<vector<int>> res;
    void backTrack(int start, vector<int>& path, int n, int k){
        if(path.size() == k)
            res.push_back(path);
        for(int i = start; i <= n; i++){
            path.push_back(i);
            backTrack(i+1, path, n, k);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> path;
        backTrack(1, path, n, k);
        return res;
    }
};