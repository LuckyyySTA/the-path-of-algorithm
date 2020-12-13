#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
      sort(A.begin(), A.end());
      int neg = 0, zero = 0;
      for(int i = 0; i < A.size(); i++){
        if(A[i] < 0){
          neg++;
        }else if(A[i] == 0){
          zero++;
        }
      }
      //  首先求负数和翻转次数K的最小值，先将负数翻转一下
      int t = min(K, neg);
      for(int i = 0; i < t; i++){
        A[i] = -A[i];
      }
      K -= t;
      //  如果还剩余翻转次数，且剩余翻转次数为奇数且没有0元素，由于可以反复翻转则直接直接对最小的元素进行翻转
      if(K && !zero && K%2 ){
        sort(A.begin(), A.end());
        A[0] = -A[0];
      }
      //  其他情况包括：
      //  1.还有剩余情况，且剩余情况为偶数次的，直接输出原数组即可
      //  2.还有剩余情况，且里面还有0元素的，直接输出原数组即可
      return accumulate(A.begin(), A.end() , 0);
    }
};

int main(){
  vector<int> A = {4,2,3};
  int K = 1;
  cout<<Solution().largestSumAfterKNegations(A,K);
}