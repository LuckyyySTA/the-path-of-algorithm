#include<iostream>
using namespace std;
const int Max = 1001;
int arr[Max+1];
int ans[Max+1];
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int num;
        cin>>num;
        arr[num+1]++;
        ans[i] = arr[num+1];
    }
    for(int i = 0; i < n; i++){
        cout<<ans[i]<<" ";
    }
}