class Solution {
public:
    vector<string> res;
    void backTrack(string path, int left, int right){
        if(left == 0 && right == 0){
            res.push_back(path);
            return;
        }
        if(left){
            backTrack(path + '(', left - 1, right);
        }
        if(right && left < right){
            backTrack(path + ')', left, right - 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        string path;
        backTrack(path, n, n);
        return res;
    }
};
