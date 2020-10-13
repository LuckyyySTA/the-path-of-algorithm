class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int> map;
        int sum = 0;
        for(int i = 0; i < J.length(); i++){
            map[J[i]]++;
        }
        for(int i = 0; i < S.length(); i++){
            if(map[S[i]]){
                sum++;
            }
        }
        return sum;
    }
};