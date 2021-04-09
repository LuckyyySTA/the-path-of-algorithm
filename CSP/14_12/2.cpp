#include<iostream>
using namespace std;
const int Max = 501;
int matrix[Max][Max];
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int num;
            cin>>num;
            matrix[i][j] = num;
        }
    }
    return 0;
}