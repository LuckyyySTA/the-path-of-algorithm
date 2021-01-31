#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int team[1001] = {0};
    while(N--){
        int tnum,snum,score;
        scanf("%d-%d %d",&tnum,&snum,&score);
        team[tnum] += score;
    }
    int max = 0, index = 0;
    for(int i = 0; i < 1001; i++){
        if(team[i] > max){
            max = team[i];
            index = i;
        }
    }
    cout<<index<<" "<<max;
    return 0;
}