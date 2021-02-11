class Solution {
public:
    vector<string> res;
    void backTrack(string S, int index){
        if(index == S.length()){
            res.push_back(S);
            return;
        }
        if(!isalpha(S[index])){
            backTrack(S, index + 1);
        }
        else{
            S[index] = tolower(S[index]);
            backTrack(S, index + 1);
            S[index] = toupper(S[index]);
            backTrack(S, index + 1);
        }
    }
    vector<string> letterCasePermutation(string S){
        backTrack(S, 0);
        return res;
    }
};