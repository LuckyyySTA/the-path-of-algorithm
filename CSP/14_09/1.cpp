#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
int res = 0;
int main(){
    cin>>n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n-1; i++){
        if(arr[i+1] == arr[i] + 1){
            res++;
        }
    }
    cout<<res;
    return 0;
}