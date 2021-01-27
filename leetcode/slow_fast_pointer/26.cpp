class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int slow = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] != nums[i+1]){
                nums[++slow] = nums[i+1];
            }
        }
        return slow + 1;
    }
};