#include<iostream>
using namespace std;
int main(){
    string s;
    int a,t,temp;
    cin>>s>>a;
    int len = s.length();
    t = (s[0]-'0')/a;
    if(t!=0 && len>1 || len==1){
        cout<<t;
    }
    temp = (s[0]-'0')%a;
    for(int i=1;i<len;i++){
        t = (temp*10 + s[i]-'0')/a;
        temp = (temp*10 + s[i]-'0')%a;
        cout<<t;
    }
    cout<<" "<<temp;
    
}