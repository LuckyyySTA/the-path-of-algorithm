class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<unordered_map<char,int>> vec(A.size());
        vector<string> res;
        for(int i = 0; i < A.size(); i++){
            for( auto c : A[i]){
                vec[i][c]++;
            }
        }
        for( auto pair : vec[0]){
            int n = pair.second;
            for(int i = 1; i < A.size(); i++){
                n = min(n, vec[i][pair.first]);
            }
            while(n--){
                res.push_back(string(1,pair.first));
            }
        }
        return res;
    }
};

