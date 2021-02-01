#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());
    int res = 0;
    for(int i = n; i >= 1; i--){
        if(vec[n - i] > i){
            res = i;
            break;
        }
    }
    cout<<res;
    return 0;
}