#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, res = 1;
    cin >> n;
    while(n != 1){
        n = n/2;
        res++;
    }
    cout<<res;
    return 0;
}