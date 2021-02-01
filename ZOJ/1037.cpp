#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i = 0; i < N; i++){
        int m, n;
        cin>>m>>n;
        cout<<"Scenario #"<<i+1<<":"<<endl;
        cout<<m*n;
        if( m%2 == 1 && n%2 == 1){
            cout<<".41"<<endl;
        }else{
            cout<<".00"<<endl;
        }
        cout<<endl;
    }
    return 0;
}