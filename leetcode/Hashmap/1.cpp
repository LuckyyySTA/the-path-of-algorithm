#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> record;
        for(int i = 0; i < nums.size(); i++){
            record[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++){
            unordered_map<int,int>::iterator iter = record.find(target - nums[i]);
            if(iter != record.end() && iter->second != i){
                return {i, iter->second};
            }
        }
        throw invalid_argument("the input has no solution");
    }
};
