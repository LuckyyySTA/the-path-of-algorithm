#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m, n;
queue<int> q;
int main(){
    cin >> m >> n;
    int cnt = 1;
    for(ll i = 1; i <= m; i++){
        q.push(i);
    }
    while(!q.empty()){
        if(cnt != n){
            cnt++;
            int num = q.front();
            q.pop();
            q.push(num);
        }else{
            int num = q.front();
            cout<<num<<" ";
            q.pop();
            cnt = 1;
        }
    }
    return 0;
}