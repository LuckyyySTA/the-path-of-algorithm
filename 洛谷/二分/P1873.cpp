#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N, M;
vector<ll> arr;
int main(){
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        int num;
        cin >> num; 
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    ll left = 0, right = arr[N-1], mid, sum;
    while(left <= right){
        mid = left + (right - left)/2;
        sum = 0;
        for(int i = 0; i < N; i++){
            if(arr[i] > mid){
                sum += (arr[i] - mid);
            }     
        }
        if(sum < M){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    cout<<right;
}