#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
struct point{
    int dis;
    int id;
};
bool cmp(point p1, point p2){
    if(p1.dis == p2.dis){
        return p1.id < p2.id;
    }
    return p1.dis < p2.dis;
}
int main(){
    int n, x, y;
    cin>>n>>x>>y;
    point point[n];
    for(int i = 0 ; i < n; i++){
        int a,b;
        cin>>a>>b;
        point[i].dis = (a - x)*(a - x) + (b - y)*(b - y);
        point[i].id = i+1;
    }
    sort(point, point + n, cmp);
    for(int i = 0; i < 3; i++){
        cout<<point[i].id<<endl;
    }
}