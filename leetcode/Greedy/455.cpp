/*
**  贪心算法 首先对两个数组排序 先满足饥饿感最小的孩子 
*/
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int gi = 0, si = 0, res = 0;
        while(gi < g.size() && si < s.size()){
            if(s[si] >= g[gi]){
                res++;
                si++;
                gi++;
            }
            else{
                si++;
            }
        }
        return res;
    }
};