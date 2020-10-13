class Solution {
public:
    int getSum(int n){
        int sum = 0;
        while(n){
            sum += (n%10)*(n%10);
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int,bool> mp;
        while(1){
            int sum = getSum(n);
            if(sum == 1){
                return true;
            }else if(mp[sum]){
                return false;
            }
            mp[sum] = true;
            n = sum;
        }
        return false; 
    }
};