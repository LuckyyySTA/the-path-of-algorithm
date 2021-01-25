class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      if(nums.size() == 0){
        return {-1,-1};
      }
      int first = firstOccurance(nums,target);
      if(first == -1){
        return {-1,-1};
      }
      int last = lastOccurance(nums,target);
      return {first, last};
   }
private:
  int firstOccurance(const vector<int>& nums, int target){
    int left = 0, right = nums.size() - 1;
    while(left < right){
      int mid = left + (right - left)/2;\
      if(nums[mid] < target){
        // [mid + 1 , right]
        left = mid + 1;
      }else{ // nums[mid] >= target  [left,mid]
        right = mid;
      }
    }
    if(nums[left] == target){
      return left;
    }
    return -1;
  }
  
  int lastOccurance(const vector<int>& nums, int target){
    int left = 0, right = nums.size() - 1;
    while(left < right){
      int mid = left + (right - left + 1)/2;
      if(nums[mid] > target){
        // [left, mid - 1]
        right = mid - 1;
      }else{
        // nums[mid] <= target [mid,right]
        left = mid;
      }
    }
    return left;
  }
};