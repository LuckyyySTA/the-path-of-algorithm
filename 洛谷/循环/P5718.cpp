#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    int res = INT_MAX;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num < res){
            res = num;
        }
    }
    cout << res;
    return 0;
}