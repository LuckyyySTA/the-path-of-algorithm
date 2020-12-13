#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
      unordered_map<int,vector<int>> map;
      vector<vector<int>> res;
      for(int i = 0; i < groupSizes.size(); i++){
        map[groupSizes[i]].push_back(i);
        if(map[groupSizes[i]].size() == groupSizes[i]){
          res.push_back(map[groupSizes[i]]);
          map[groupSizes[i]].clear();
        }
      }
      return res;
    }
};
void print_vec(const vector<vector<int>>& v){
    for(vector<int> e: v) {
      for(int i : e){
        cout<< i << " ";
      }
      cout<<endl;
    }
}
int main(){
  vector<int> groupSizes = {3,3,3,3,1,3,3};
  print_vec(Solution().groupThePeople(groupSizes));
}