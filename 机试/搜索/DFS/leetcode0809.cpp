class Solution {
public:
    vector<string> res;
    void backTrack(int left, int right, string path){
        if(left == 0 && right == 0){
            res.push_back(path);
        }
        if(left){
            backTrack(left - 1, right, path + '(');
        }
        if(right && left < right){
            backTrack(left, right - 1, path + ')');
        }
    }
    vector<string> generateParenthesis(int n) {
        int left = n, right = n;
        string path = "";
        backTrack(left, right, path);
        return res;
    }
};