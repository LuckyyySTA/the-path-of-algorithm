class Solution {
public:
// 需要剪枝
    string res;
    int count = 0;
    void backTrack(string path, int n, int k, vector<bool>& used){
        if(path.length() == n){
            count++;
            if(count == k)
                res = path;
            return;
        }
        for(int i = 1; i <= n; i++){
            if(used[i - 1]){
                continue;
            }else{
                used[i - 1] = true;
                path += to_string(i);
                backTrack(path, n, k, used);
                used[i - 1] = false;
                path = path.substr(0, path.length() - 1);
            }
        }
    }
    string getPermutation(int n, int k) {
        string path = "";
        vector<bool> used(n, false);
        backTrack(path, n, k, used);
        return res;
    }
};