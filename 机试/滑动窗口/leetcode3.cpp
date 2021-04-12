#include<iostream>
#include<string.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> lookup;
        if(s.length() == 0){
            return 0;
        }
        int left = 0, ans = 0;
        for(int i = 0; i < s.length(); i++){
            while(lookup.find(s[i]) != lookup.end()){
                lookup.erase(S[left]);
                left++;
            }
            lookup.insert(s[i]);
            ans = max(ans, i - left + 1);
        }
        return ans;
    }
};
int main(){
    string s = "abcabcbb";
    cout<<Solution().lengthOfLongestSubstring(s)<<endl;
}