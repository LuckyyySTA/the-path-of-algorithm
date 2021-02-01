#include<iostream>
#include<cmath>
#include<unordered_map>
using namespace std;
bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if( n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    unordered_map<int,int> rank;
    for(int i = 0; i < n; i++){
        int id;
        cin>>id;
        rank[id] = i+1;
    }
    int k;
    cin>>k;
    for(int i = 0; i < k; i++){
        int search;
        cin>>search;
        printf("%04d: ", search);
        if(rank[search] == -1){
            cout<<"Checked"<<endl;
        }else{
            if(rank[search] == 1){
                cout<<"Mystery Award"<<endl;
                rank[search] = -1;
            }else if(rank[search] == 0){
                cout<<"Are you kidding?"<<endl;
            }else if(isPrime(rank[search])){
                cout<<"Minion"<<endl;
                rank[search] = -1;
            }else{
                cout<<"Chocolate"<<endl;
                rank[search] = -1;
            }
        }
    }
    return 0;
}