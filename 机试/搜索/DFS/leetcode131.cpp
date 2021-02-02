class Solution {
public:
    bool isHuiWen(string s){
        for(int i = 0, j = s.length() - 1; i <= j; i++, j--){
            if(s[i] != s[j])
                return false;
        }
        return true;
    }
    vector<vector<string>> res;
    vector<string> path;
    void backTrack(string s, int index, vector<string>& path){
        if(index == s.length()){
            res.push_back(path);
            return;
        }
        for(int i = index; i < s.length(); i++){
            if(isHuiWen(s.substr(index, i - index + 1))){
                string str = s.substr(index, i - index + 1);
                path.push_back(str);
            }else{
                continue;
            }
            backTrack(s, i + 1, path);
            path.pop_back();
        }
    }
    vector<vector<string>> partition(string s) {
        backTrack(s, 0, path);
        return res;
    }
};