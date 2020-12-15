#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
      vector<string> words = split(s);
      if(words.size() != pattern.size()){
        return false;
      }
      unordered_map<char,string> map1;
      unordered_map<string,char> map2;
      for(int i = 0; i < pattern.size(); i++){
        if(map1.find(pattern[i]) == map1.end()){
          if(map2.find(words[i]) != map2.end()){
            return false;
          }
          map1[pattern[i]] = words[i];
          map2[words[i]] = pattern[i];
        }else{
          string str = map1[pattern[i]];
          if(str != words[i]){
            return false;
          }
        }
      }
      return true;
    }
private:
    vector<string> split(const string& s){
        vector<string> res;
        int start = 0;
        for(int i = start + 1 ; i <= s.size() ; )
          if(i == s.size() || s[i] == ' '){
              res.push_back(s.substr(start, i - start));
              start = i + 1;
              i = start + 1;
          }
          else
              i ++;
         return res;
    }
};

int main(){
  string pattern = "abba";
  string s = "dog cat cat dog";
  cout<<Solution().wordPattern(pattern, s);
}