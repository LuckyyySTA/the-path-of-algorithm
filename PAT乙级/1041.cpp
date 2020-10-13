#include<iostream>
using namespace std;
int main(){
    string stu[1005][2],s1,s2;
    int t,n,m;
    cin>>n;
    while(n--){
        cin>>s1>>t>>s2;
        stu[t][0] = s1;
        stu[t][1] = s2;
    }
    cin>>m;
    while(m--){
        cin>>t;
        cout<<stu[t][0]<<" "<<stu[t][1]<<endl;
    }
    return 0;
}