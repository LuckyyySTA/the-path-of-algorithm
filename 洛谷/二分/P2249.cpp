#include<bits/stdc++.h>
using namespace std;
int arr[1000001];
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        arr[i] = x;
    }
    for(int i = 0; i < m; i++){
        int num;
        cin >> num;
        int left = 1, right = n;
        int mid;
        while(left < right){
            mid = left + (right - left)/2;
            // cout<<left<<" "<<right<<" "<<mid<<endl;
            if(arr[mid] < num){
                left = mid+1;
            }else{
                right = mid;
            }
            
        }
        // cout<<"出循环"<<left<<" "<<right<<" "<<mid<<endl;
        // cout<<"chu循环"<<arr[left]<<" "<<num<<endl;
        if(arr[left] == num){
            cout<<left<<" ";
        }else
            cout<<"-1 ";
    }
    return 0;
}