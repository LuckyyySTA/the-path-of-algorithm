#include<iostream>
#include<stack>
using namespace std;
int main(){
    long long int a,b;
    int d;
    stack<int> s;
    cin>>a>>b>>d;
    int sum = a+b;
    if(sum==0){
        cout<<0;
    }
    while(sum!=0){
        s.push(sum%d);
        sum = sum/d;
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}