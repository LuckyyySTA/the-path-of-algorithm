#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int N;
    cin>>N;
    unordered_map<int,int> map;
    while(N--){
        int num,score;
        cin>>num>>score;
        map[num] += score;
    }
    int max = map[1], index = 1;
    for(int i = 1; i < map.size(); i++){
        if(map[i] > max){
            max = map[i];
            index = i;
        }
    }
    cout<<index<< " "<<max;
    return 0;
}