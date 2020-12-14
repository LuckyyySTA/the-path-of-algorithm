#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
      if(nums.size() <= 1)
        return nums.size();
      nums = del_dup(nums);
      if(nums.size() <= 2)
        return nums.size();
      int diff = nums[1] - nums[0], res = 2;
      for(int i = 2; i < nums.size(); i++){
        if((nums[i] - nums[i-1]) * diff < 0){
          res++;
          diff = nums[i] - nums[i-1];
        }
      }
      return res;
    }

private:
    vector<int> del_dup(vector<int>& nums){
      vector<int> res = {nums[0]};
      for(int i = 1; i < nums.size(); i++){
        if(nums[i] != nums[i-1]){
          res.push_back(nums[i]);
        }
      }
      return res;
    }
};

int main(){
  vector<int> nums = {1,17,5,10,13,15,10,5,16,8};
  cout<<Solution().wiggleMaxLength(nums)<<endl;
}