class Solution {
public:
    vector<int> partitionLabels(string S) {
        unordered_map<char, int> map;
        for(int i = 0; i < S.length(); i++){
            map[S[i]] = i;
        }
        int start = 0, end = 0;
        vector<int> res;
        for(int i = 0; i < S.length(); i++){
            end = max(end, map[S[i]]);
            if(end == i){
                res.push_back(end - start + 1);
                start = end + 1;
            }
        }
        return res;
    }
};