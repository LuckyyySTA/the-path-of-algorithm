#include<iostream>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        int left = 1, right = x;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(mid > x/mid){
                right = mid - 1;
            }else if(mid < x/mid){
                if((mid + 1) > x/(mid + 1)){
                    return mid;
                }
                left = mid + 1;
            }
            else{
                return mid;
            }
        }
        return 0;
    }
};
int main(){
  int n = 8;
  cout<<Solution().mySqrt(n);
}