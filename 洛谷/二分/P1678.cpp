#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m, n;
vector<ll> arr;
int main(){
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        ll score;
        cin >> score;
        arr.push_back(score);
    }
    sort(arr.begin(), arr.end());
    ll sum = 0;
    for(int i = 0; i < n; i++){
        ll num;
        cin >> num;
        if(num > arr[m-1]){
            sum += num - arr[m-1];
            continue;
        }
        if(num < arr[0]){
            sum += arr[0] - num;
            continue;
        }
        ll left = 0 , right = m-1, mid;
        while(left < right){
            mid = left + (right - left)/2;
            if(arr[mid] < num){
                left = mid + 1;
            }else{
                right = mid;
            }
        }
        if(right > 0){
            if(num - arr[right - 1] <  arr[right] - num){
                sum += (num - arr[right-1]);
            }else{
                sum += (arr[right] - num);
            }
        }
        else sum += (arr[right] - num);
    }
    cout<<sum;
    return 0;
}