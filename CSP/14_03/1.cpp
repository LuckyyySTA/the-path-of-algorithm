#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int, int> map;
int ans = 0;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int num;
        cin>>num;
        if(map.find(-num) == map.end()){
            map[num]++;
        }else{
            ans++;
        }
        
    }
    cout<<ans;
}