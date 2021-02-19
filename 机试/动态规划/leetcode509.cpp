class Solution {
public:
    int fib(int n) {
        if(n < 1){
            return 0;
        }
        if(n == 1 || n == 2){
            return 1;
        }
        int pre = 1, cur = 1;
        for(int i = 3; i <= n; i++){
            int sum = pre + cur;
            pre = cur;
            cur = sum;
        }
        return cur;
    }
};