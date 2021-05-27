#include<bits/stdc++.h>
using namespace std;
int main(){
    class Solution {
public:
    int numWays(int n) {
        int mod = 1e9+7;
        if(n == 0 || n == 1){
            return 1;
        }
        vector<int> arr(n+1, 0);
        arr[1] = 1;
        arr[2] = 2;
        if(n == 2){
            return arr[2];
        }
        for(int i = 3; i <= n; i++){
            arr[i] = (arr[i-1] + arr[i-2])%mod;
        }
        return arr[n];
    }
};
    return 0;
}