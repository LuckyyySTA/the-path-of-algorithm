class Solution {
public:
    vector<string> res;
    void backTrack(string S, string path, vector<bool>& used){
        if(path.length() == S.length()){
            res.push_back(path);
            return;
        }
        for(int i = 0; i < S.length(); i++){
            if(i > 0 && S[i] == S[i - 1] && used[i - 1] == false){
                continue;
            }
            if(used[i] == false){
                used[i] = true;
                path += S[i];
                backTrack(S, path, used);
                path = path.substr(0, path.length() - 1);
                used[i] = false;
            }
        }
    }
    vector<string> permutation(string S) {
        string path = "";
        sort(S.begin(), S.end());
        vector<bool> used(S.length(), false);
        backTrack(S, path, used);
        return res;
    }
};