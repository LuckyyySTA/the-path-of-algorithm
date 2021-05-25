#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 100005;
struct{
    int s = 0;//已存s个物品
    vector<int> num, w;//第i个柜子的第num个格子放入了w
}desk[MAX];
int main(){
    ll  n, q;
    cin >> n >> q;
    for(int ii = 0; ii < q; ii++){
        int num,i, j ,k;
        cin >> num;
        if(num == 1){
            cin >> i >> j >> k;
            desk[i].s++;
            desk[i].num.push_back(j);
            desk[i].w.push_back(k);
        }
        if(num == 2){
            cin >> i >> j;
            for(int jj = desk[i].s - 1; jj >= 0; jj--){
                if(desk[i].num[jj] == j){
                    cout<<desk[i].w[jj]<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}