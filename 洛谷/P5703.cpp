#include<iostream>
using namespace std;
int main(){
  int a,b,res = 0;
  cin>>a>>b;
  for(int i = 0; i < a; i++){
    for(int j = 0; j < b; j++){
      res++;
    }
  }
  cout<<res;
}