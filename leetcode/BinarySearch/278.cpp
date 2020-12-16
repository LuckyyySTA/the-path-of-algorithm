#include<iostream>
using namespace std;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version)#
class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while(left<right){ // 1 2 3 
          int mid = left + (right - left)/2;
          if(isBadVersion(mid)){
            // [left, mid]
            right = mid;
          }else{
            // [mid+1,right]
            left = mid + 1;
          }
        }
        return left;
    }
};