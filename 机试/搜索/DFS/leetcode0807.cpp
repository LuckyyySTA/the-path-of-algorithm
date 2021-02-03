class Solution {
public:
    vector<string> res;
    void backTrack(string S, string path, vector<bool>& used){
        if(path.length() == S.length()){
            res.push_back(path);
            return;
        }
        for(int i = 0; i < S.length(); i++){
            if(used[i]){
                continue;
            }else{
                used[i] = true;
                path += S[i];
                backTrack(S, path, used);
                used[i] = false;
                path = path.substr(0, path.length() - 1);
            }
        }
    }
    vector<string> permutation(string S) {
        string path = "";
        vector<bool> used(S.length(), false);
        backTrack(S, path, used);
        return res;
    }
};