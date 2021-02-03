class Solution {
public:
    vector<string> res;
    void backTrack(string s, string path, vector<bool>& used){
        if(path.length() == s.length()){
            res.push_back(path);
            return;
        }
        for(int i = 0; i < s.length(); i++){
            if(i > 0 && s[i] == s[i - 1] && used[ i - 1 ] == false){
                continue;
            }
            if(used[i] == false){
                used[i] = true;
                path += s[i];
                backTrack(s, path, used);
                used[i] = false;
                path = path.substr(0, path.length() - 1);
            }
        }
    }
    vector<string> permutation(string s) {
        string path = "";
        sort(s.begin(), s.end());
        vector<bool> used(s.length(), false);
        backTrack(s, path, used);
        return res;
    }
};