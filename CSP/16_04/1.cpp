#include<iostream>
const int Max = 1001;
int arr[Max];
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int num;
        cin>>arr[i];
    }
    for(int i = 1; i < n-1; i++){
        if((arr[i] < arr[i+1] && arr[i] < arr[i-1]) || 
        (arr[i] > arr[i+1] && arr[i] > arr[i-1])){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}