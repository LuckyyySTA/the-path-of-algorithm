#include<bits/stdc++.h>
using namespace std;
char arr[101][101];
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n ;i++){
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
        }
    }
    int res[n+2][m+2] = {0};
    for(int i = 0; i <= n+1; i++){
        for(int j = 0; j <= m+1; j++){
            if(arr[i][j] == '*'){
                res[i-1][j-1]++;
                res[i-1][j]++;
                res[i-1][j+1]++;
                res[i][j-1]++;
                res[i][j+1]++;
                res[i+1][j-1]++;
                res[i+1][j]++;
                res[i+1][j+1]++;
                }
            }
        }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(arr[i][j] == '*'){
                cout<<arr[i][j];
            }
            else{
                cout<<res[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}