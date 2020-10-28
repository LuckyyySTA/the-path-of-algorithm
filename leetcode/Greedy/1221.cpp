class Solution {
public:
    int balancedStringSplit(string s) {
        int num = 0, res = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'L'){
                num++;
            }
            if(s[i] == 'R'){
                num--;
            }
            if(num == 0){
                res++;
            }
        }
        return res;
    }
};