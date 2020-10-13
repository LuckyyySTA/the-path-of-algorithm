#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    char C;
    cin>>C;
    for(int i = 0; i < (N+1)/2; i++){
        if(i == 0 || i == (N+1)/2 -1){
            for(int j = 0; j < N; j++){
                cout<<C;
            }
        }
        else{
            cout<<C;
            for(int k = 0; k < N-2; k++){
                cout<<" ";
            }
            cout<<C;
        }
        cout<<endl;
    }
    return 0;
}