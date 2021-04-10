#include<iostream>
#include<vector>
using namespace std;
int main(){
  long int m;
  cin>>m;
  vector<long int> y;
  vector<long int> result;
  while(m--){
    long int a,b;
    cin>>a>>b;
    y.push_back(a);
    result.push_back(b);
  }
  long int maxNum = 0;
  long int res;
  for(long int i = 0; i < y.size(); i++){
    long int count = 0;
    for(long int j = 0; j < result.size(); j++){
      if((y[j] >= y[i] && result[j] == 1) || y[j] < y[i] && result[j] == 0){
        count++;
      }
    }
    if(count >= maxNum){
      maxNum = count;
      res = y[i];
      
    }
  }
  cout<<res;
  return 0;
}