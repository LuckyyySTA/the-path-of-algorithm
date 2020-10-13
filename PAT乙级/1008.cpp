//移动数组元素可以用reverse函数
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    m = m%n;
    if(m!=0){
        reverse(begin(arr),begin(arr)+n);
        reverse(begin(arr),begin(arr)+m);
        reverse(begin(arr)+m,begin(arr)+n);
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-1];
    return 0;
}