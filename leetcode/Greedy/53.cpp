#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0], res = nums[0];
        for(int i = 1; i < nums.size(); i++){
          if(sum + nums[i] < nums[i]){
            sum = nums[i];
          }else{
            sum += nums[i];
          }
          res = max(sum, res);
        }
        return res;
    }
};

int main(){
  // vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  vector<int> nums = {-2, 1};
  cout<<Solution().maxSubArray(nums);
}