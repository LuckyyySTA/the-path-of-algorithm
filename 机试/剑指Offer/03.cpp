#include<bits/stdc++.h>

using namespace std;

int main(){
// solution 1: sort compare
    class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return nums[i];
            }
        }
        return -1;
    }
};

//solution 2: map
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > 1){
                return nums[i];
            }
        }
        return -1;
    }
};

// solution 3: exchage
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size();){
            // 当索引和值相等时
            if(nums[i] == i){
                i++;
                continue;
            }
            //当数组值与索引处的值相同，则返回
            if(nums[i] == nums[nums[i]]){
                return nums[i];
            }else{
                //交换至索引处
                swap(nums[i], nums[nums[i]]);
            }
        }
        return -1;
    }
};
}