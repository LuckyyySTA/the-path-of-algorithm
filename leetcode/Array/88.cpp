#include<iostream>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      for(int i = n+m-1; i>=n; i--){
        nums1[i] = nums1[i - n];
      }
      int i = n;
      int j = 0;
      int k = 0;
      while(k < n + m){
        if(i >= n+m){
          nums1[k++] = nums2[j++];
        }else if(j >= n){
          nums1[k++] = nums1[i++];
        }else if(nums1[i] < nums2[j]){
          nums1[k++] = nums1[i++];
        }else{
          nums1[k++] = nums2[j++];
        }
      }
    }
};