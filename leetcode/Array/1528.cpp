#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      unordered_map<int,char> map;
      string res;
      for(int i = 0; i < indices.size(); i++){
        map[indices[i]] = s[i];
      }
      for(int i = 0; i < indices.size(); i++){
          res += map[i];
      }
      return res;
    }
};
int main(){
  string s = "codeleet";
  vector<int> indices = {4,5,6,7,0,2,1,3};
  cout<<Solution().restoreString(s, indices);
  return 0;
}