#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> map;
        for(string s : strs){
            string key = s;
            sort(key.begin(),key.end());
            map[key].push_back(s);
        }
        //  想要拷贝元素：for(auto x : range)
       //   想要修改元素 :  for(auto& x : range)
       //   想要只读元素：for(const auto& x : range) 
        for(const auto& p : map){
            res.push_back(p.second);
        }
        return res;
    }
};
void print_vec(vector<vector<string>>& s){
    for(vector<string> vec : s){
        for(string c : vec){
            cout<<c<<' ';
        }
        cout<<endl;
    }
}
int main(){

}
