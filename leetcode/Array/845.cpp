class Solution {
public:
    int longestMountain(vector<int>& A) {
        if(A.size() <= 2){
            return 0;
        }
        int res = 0;
        for(int i = 1; i < A.size() - 1; i++){
            if(A[i - 1] < A[i] && A[i] > A[i + 1]){
                int left = i - 1;
                int right = i + 1;
                while(left > 0 && A[left - 1] < A[left]){
                    left--;
                }
                while(right < A.size() - 1 && A[right] > A[right + 1]){
                    right++;
                }
                res = max(res, (right - left + 1));
            }
        }
        return res;
    }
};