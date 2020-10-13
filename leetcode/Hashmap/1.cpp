class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            auto it = mp.find(target - nums[i]);
            if(it != mp.end()){
                res.push_back(it->second);
                res.push_back(i);
                break;
            }
            mp[nums[i]] = i; 
        }
        return res;
    }
};