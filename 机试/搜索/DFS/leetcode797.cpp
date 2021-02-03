class Solution {
public:
    vector<vector<int>> res;
    void backTrack(vector<vector<int>>& graph, vector<int>& path, int start){
        if(start == graph.size() - 1){
            res.push_back(path);
            return;
        }
        for(int i = 0; i < graph[start].size(); i++){
            int next = graph[start][i];
            path.push_back(next);
            backTrack(graph, path, next);
            path.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> path = {0};
        backTrack(graph, path, 0);
        return res;
    }
};