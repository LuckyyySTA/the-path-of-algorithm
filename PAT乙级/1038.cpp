#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N,score,num,search;
    scanf("%d",&N);
    vector<int> map(101);
    for(int i = 0; i < N; i++){
        cin>>score;
        map[score]++;
    }
    scanf("%d",&num);
    for(int i = 0; i < num; i++){
        scanf("%d",&search);
        if(i!=0){
            cout<<" ";
        }
        cout<<map[search];
    }
    return 0;
}