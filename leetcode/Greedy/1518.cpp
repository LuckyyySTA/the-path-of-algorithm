#include<iostream>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
      int res = numBottles;
      while(numBottles >= numExchange){
        int temp = numBottles % numExchange;
        numBottles = numBottles/numExchange;
        res += numBottles;
        numBottles += temp;
      }
      return res;
    }
};

int main(){
  cout<< Solution().numWaterBottles(15,8);
}