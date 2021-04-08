#include<iostream>
using namespace std;
int n, m;
const int x = 2560;
const int y = 1440;
int arr[x][y] = {-1};
int order[10];

int main(){
    cin>>n>>m;
    for(int i = 1; i <= n; i++){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        for(int j = x1; j <= x2; j++){
            for(int k = y1; k <= y2; k++){
                arr[j][k] = i; 
            }
        }
        order[i] = i;
    }
    for(int i = 1; i <= m; i++){
        int x, y;
        cin>>x>>y;
        if(arr[x][y] >= 1){         
            cout<<order[arr[x][y]]<<endl; 
            order[arr[x][y]] = n;
            for(int i = arr[x][y]+1; i <= n; i++){
                order[i]--;
            }
        }
        else{
            cout<<"IGNORED"<<endl;
        }
    }
}