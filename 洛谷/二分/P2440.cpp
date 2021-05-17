#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k, sum = 0;
ll arr[100010];
int main(){
    //查找右边界
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll left = 0, right = 100000001, mid, cnt;
    while(left < right){
        mid = left + (right - left)/2 + 1;
        cnt = 0;
        for(int i = 0; i < n; i++){
            cnt += arr[i]/mid;
        }
        if(cnt >= k){
            left = mid;
        }else{
            right = mid - 1;
        }
    }
    cout<<left; 
}