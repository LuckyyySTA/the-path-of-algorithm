class Solution {
public
    int minOperations(int n) {
    1 3 5 7 9 11
    int res = 0;
    for(int i = 0; i  n2; i++){
        res += n - (2  i + 1);
    }
    return res;
    }
};