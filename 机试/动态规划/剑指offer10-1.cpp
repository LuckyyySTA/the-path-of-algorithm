class Solution {
public:
    int fib(int n) {
        if(n < 1){
            return 0;
        }
        if(n == 1 || n == 2){
            return 1; 
        }
        int pre = 1, curr = 1;
        for(int i = 3; i <= n; i++){
            int sum = pre + curr;
            pre = curr;
            curr = sum;
            curr = curr % 1000000007;
        }
        return curr;
    }
};