class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        int res;
        for(int i=0;i < nums.size(); i++){
            mp[nums[i]]++;
        }
        unordered_map<int,int>::iterator it = mp.begin();
        for(; it!=mp.end();it++){
            if(it->second == 1){
                res = it->first;
            }
        }
        return res;
    }
};