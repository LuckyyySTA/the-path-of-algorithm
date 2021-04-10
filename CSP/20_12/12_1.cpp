#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int sum = 0;
  while(n--){
    int w, score;
    cin>>w>>score;
    sum += w*score;
  }
  if(sum > 0){
    cout<<sum;
  }else{
    cout<<0;
  }
}