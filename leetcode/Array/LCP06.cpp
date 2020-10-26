class Solution {
public:
    int minCount(vector<int>& coins) {
        int res = 0;
        for(int i = 0; i < coins.size(); i++){
            while(coins[i]){
                if(coins[i] == 1){
                    coins[i] -= 1;
                }else {
                    coins[i] -= 2;
                }
                res++;
            }
        }
        return res;
    }
};