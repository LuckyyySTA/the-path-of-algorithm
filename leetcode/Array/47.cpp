
class Solution {
public:
    vector<vector<int>> res;
    void backTrack(vector<int>& nums,vector<int>& vec,vector<bool>& used){
        if(vec.size()==nums.size()){
            res.push_back(vec);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(i > 0 && nums[i] == nums[i-1] && used[i-1]==false){
                continue;
            }
            if(used[i]==false){
                used[i] = true;
                vec.push_back(nums[i]);
                backTrack(nums,vec,used);
                vec.pop_back();
                used[i] = false;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) { 
        vector<int> vec;
        vector<bool> used(nums.size(),false);
        sort(nums.begin(),nums.end());
        backTrack(nums,vec,used);
        return res;
    }
};