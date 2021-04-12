#include<bits/stdc++.h>
using namespace std;
int arr[105][105] = {0};
int main(){
    int n,m,r;
    cin>>n>>m>>r;
    int count = 0;
    for(int i = 0; i < m; i++){
        int x, y;
        cin>>x>>y;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                double dis = sqrt((x - i)*(x - i) + (y - j)*(y - j));
                if(dis <= r){
                    arr[i][j] = 1;
                }
        }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}