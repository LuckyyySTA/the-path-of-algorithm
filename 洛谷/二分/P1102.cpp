#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[200010];
unordered_map<int, int> mp;
int main(){
    ll N, C, cnt = 0;
    cin>>N>>C;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for(int i = 0; i < N; i++){
        arr[i] -= C;
        cnt += mp[arr[i]];
    }
    cout<<cnt;
    return 0;
}