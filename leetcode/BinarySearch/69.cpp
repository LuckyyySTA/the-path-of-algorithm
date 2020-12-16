#include<iostream>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
      if(x == 1){
        return 1;
      }
      int left = 0, right = x;
      while(left <= right){
        long long  mid = left + (right - left)/2;
        if(mid*mid == x){
          return mid;
        }else if(mid*mid < x){
          if((mid+1)*(mid+1) > x){
            return mid;
          }
          left = mid + 1;
        }else{
          right = mid - 1;
        }
      }
      return -1;
    }
};
int main(){
  int n = 8;
  cout<<Solution().mySqrt(n);
}