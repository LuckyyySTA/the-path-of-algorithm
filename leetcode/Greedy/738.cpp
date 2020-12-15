#include<iostream>
#include<string>

using namespace  std;

class Solution {
public:
    int monotoneIncreasingDigits(int N) {
      if( N < 10 ){
        return N;
      }
      string s = to_string(N);
      int flag = s.size();
      for(int i = s.size() - 2; i >= 0; i--){
        if( s[i] > s[i+1]){
          flag = i+1;
          s[i]--;
        }
        for(int i = flag; i < s.size(); i++){
          s[i] = '9';
        }
      }
      return stoi(s);
    }
};

int main(){
  int N = 332;
  cout<<Solution().monotoneIncreasingDigits(N);
}