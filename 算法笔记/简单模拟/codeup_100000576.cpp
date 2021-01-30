#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    while(n--){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    int ret,i;
    cin>>ret;
    for(i = 0; i < arr.size(); i++){
        if(arr[i] == ret){
            cout<<i;
            break;
        }
    }
    if(i == arr.size())
        cout<<"-1"<<endl;
    return 0;
}