#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[50010], ans[50010];
int main(){
    ll len, sum, cnt;
    cin >> len >> sum >> cnt;
    arr[0] = 0;
    for(int i = 1; i <= sum; i++){
        int num;
        cin >> num;
        arr[i] = num - arr[i-1];
    }// 2 9 3 3 4 4
    arr[sum+1] = len - arr[sum];
    for(int i = 1; i <= cnt; i++){
        for(int j = 1; j <= sum; j++){
            if()
        }
    }
}