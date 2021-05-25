#include<bits/stdc++.h>
using namespace std;
int main(){
    class Solution {
public:
    string replaceSpace(string s) {
        string ans;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                ans += "%20";
            }else{
                ans += s[i];
            }
        }
        return ans;
    }
};
    return 0;
}