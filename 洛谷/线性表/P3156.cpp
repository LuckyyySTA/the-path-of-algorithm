#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[2000010];

int main(){
    ll n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= m; i++){
        ll num;
        cin >> num;
        cout<<arr[num]<<endl;
    }
    return 0;
}