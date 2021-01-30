#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,int> map;
    while(n--){
        int num, score;
        cin>>num>>score;
        map[num] += score;
    }
    int index = 1, maxn = 0;
    for(int i = 1; i <= map.size(); i++){
        if(map[i] > maxn){
            maxn = map[i];
            index = i;
        }
    }
    cout<<index<<" "<<maxn;
    return 0;
}