#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        long long int a,b,c;
        cin>>a>>b>>c;
        if(a+b>c){
            cout<<"Case #"<<i+1<<": true"<<endl;
        }else{
            cout<<"Case #"<<i+1<<": false"<<endl;
        }
    }
    return 0;
}