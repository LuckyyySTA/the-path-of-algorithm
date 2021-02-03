class Solution {
public:
    vector<string> map = {"a","e","i","o","u"};
    int res;
    void dfs(int n, int start){
        if( n == 0 ){
            res++;
            return;
        }
        for(int i = start; i < map.size(); i++){
            dfs(n - 1, i);
        }

    }
    int countVowelStrings(int n) {
        dfs(n, 0);
        return res;
    }
};