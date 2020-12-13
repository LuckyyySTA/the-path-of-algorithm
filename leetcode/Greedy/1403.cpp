#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
      // 升序用begin(), 倒叙用rbegin()
      sort(nums.rbegin(), nums.rend());
      int sum = 0, total = 0;
      vector<int> res;
      for(int i =0; i < nums.size(); i++){
        sum += nums[i];
      }
      for(int i = 0; i < nums.size(); i++){
        res.push_back(nums[i]);
        total += nums[i];
        if(total > sum - nums[i]){
          return res;
        }else{
          sum -= nums[i];
        }
      }
      return res;
    }
};

void print_vec(const vector<int>& v){
    for(int e: v) cout << e << " "; cout << endl;
}

int main(){
  vector<int> nums = {4, 4, 7, 6, 7};
  print_vec(Solution().minSubsequence(nums));
}