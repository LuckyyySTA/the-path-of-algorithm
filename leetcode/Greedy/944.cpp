#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& A) {
      int m = A.size();
      if( m == 0 || m == 1 ){
        return 0;
      }
      int n = A[0].size();
      if( n == 0 ){
        return 0;
      }
      int res = 0;
    for( int i = 0; i < n;   i++ ){
        for( int j = 0; j < m - 1; j++ ){
          if(A[j][i] > A[j+1][i]){
            res++;
            break;
          }
        }
      }
      return res;
    }
};

int main(){
  // s = ["cba", "daf", "ghi"]
  vector<string> s{"zyx", "wvu", "tsr"};
  cout<<Solution().minDeletionSize(s);
  return 0;
}