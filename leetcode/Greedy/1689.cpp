#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
      return *max_element(n.begin(), n.end()) - '0';
    }
};

int main(){
  string n = "32";
  cout<<Solution().minPartitions(n)<<endl;
}