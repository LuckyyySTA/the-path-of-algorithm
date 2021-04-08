#include<iostream>
using namespace std;
int arr[101][101];
int main(){
    int n, res = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        for(int j = x1; j < x2; j++){
            for(int k = y1; k < y2; k++){
                arr[j][k] = 1;
            }
        }
    }
    for(int i = 0; i < 101; i++){
        for(int j = 0; j < 101; j++){
            if(arr[i][j] == 1){
                res++;
            }
        }
    }
    cout<<res;
    return 0;
}