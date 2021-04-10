#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0); 
    int n,a,b;
    cin>>n>>a>>b;
    long long res = 0;
    map<int,int> m;
    int index, value;
    for(int i = 0; i < a; i++){
        cin>>index>>value;
        m[index] = value;
    }
    for(int j = 0; j < b; j++){
        cin>>index>>value;
        if(m.find(index) == m.end()){
            continue;
        }
        res += m[index]*value;
    }
    cout<<res;
    return 0;
}