#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> score, solution;
    for(int i = 0; i < m; i++){
        int sc;
        cin>>sc;
        score.push_back(sc);
    }
    for(int i = 0; i < m; i++){
        int flag;
        cin>>flag;
        solution.push_back(flag);
    }
    while(n--){
        int sum = 0;
        for(int i = 0; i < m; i++){
            int ans;
            cin>>ans;
            if(ans == solution[i]){
                sum += score[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}