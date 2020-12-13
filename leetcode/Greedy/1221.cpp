#include<iostream>

using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int left = 0, right = 0, res = 0;
        for(char c : s){
            if( c == 'L')
                left++;
            else right++;
            if( left == right){
                res++;
                left = right = 0;
            }
        }
        return res;
    }
};

int main(){
    string s = "RLRRLLRLRL";
    cout<<Solution().balancedStringSplit(s)<<endl;
}