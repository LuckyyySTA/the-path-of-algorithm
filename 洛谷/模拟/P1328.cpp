#include<bits/stdc++.h>
using namespace std;
const int N = 210;
int A[N];
int B[N];
int main(){
    vector< vector<int> > arr(5, vector<int>(5, 1));
    arr[0][0] = arr[1][1] = arr[2][2] = arr[3][3] = arr[4][4] = 0;
    arr[0][1] = arr[1][2] = arr[2][3] = arr[1][4] = arr[0][4] = arr[2][0] = arr[3][0] = arr[3][1] = arr[4][2] = arr[4][3] = -1;
    int n, na, nb;
    cin >> n >> na >> nb;
    for(int i = 0; i < na; i++){
        cin >>A[i];
    }
    for(int i = 0; i < nb; i++){
        cin >> B[i];
    }
    int scoreA = 0, scoreB = 0;
    for(int i = 0; i < n ; i++){
        if(arr[A[i%na]][B[i%nb]] == 1){
            scoreA++;
        }else if(arr[A[i%na]][B[i%nb]] == -1){
            scoreB++;
        }
    }
    cout<<scoreA<<" "<<scoreB;
    return 0;
}