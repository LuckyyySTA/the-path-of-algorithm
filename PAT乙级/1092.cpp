#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int M,N,sell;
    cin>>M>>N;
    vector<int> res(M);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin>>sell;
            res[j] += sell;
        }
    }
    int max = res[0];
    vector<int> ans;
    for(int i = 1; i < res.size(); i++){
        if(res[i] > max){
            max = res[i];
        }
    }
    cout<<max<<endl;
    for (int i = 0; i < res.size(); i++)
        if (res[i] == max) ans.push_back(i+1);
    for (int i = 0; i < ans.size(); i++) {
        if (i != 0) cout << " ";
        cout << ans[i];
    }
    return 0;
}