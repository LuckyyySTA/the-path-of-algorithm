class Solution {
public:
    vector<vector<int>> res;
    void backTrack(vector<int>& nums,vector<int>& vec,vector<bool> used){
        if(nums.size() == vec.size()){
            res.push_back(vec);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(used[i]==false){
                used[i] = true;
                vec.push_back(nums[i]);
                backTrack(nums,vec,used);
                vec.pop_back();
                used[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> vec;
        vector<bool> used(nums.size(),false);
        backTrack(nums,vec,used);
        return res;
    }
};