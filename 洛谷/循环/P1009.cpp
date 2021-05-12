#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, res = 0, temp = 1;
    cin>> n;
    for(int i = 1; i <= n; i++){
        temp *= i;
        res += temp;
    }
    cout<< res;
    return 0;
}