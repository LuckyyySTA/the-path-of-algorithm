#include<iostream>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
      int index = -1;
      for(char c : s){
        // string.find(char,index)是从index开始，查找char在string中的下标，如果没找到则返回npos
        index = t.find(c,index+1);
        if(index == string::npos){
          return false;
        }
      }
      return true;
    }
};

int main(){
  string s = "abc", t = "ahbgdc";
  cout<<Solution().isSubsequence(s,t)<<endl;
}