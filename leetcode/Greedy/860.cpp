#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
      int five = 0, ten = 0, twenty = 0;
      for(int bill : bills){
        if(bill == 5){
          five++;
        }else if(bill == 10){
          ten++;
          if(five == 0){
            return false;
          }
          five--;
        }else if(bill == 20){
          twenty++;
          if(ten > 0 && five > 0){
            ten--;
            five--;
          }else if(five >=3){
            five -= 3;
          }else{
            return false;
          }
        }
      }
      return true;
    }
};

int main(){
  // vector<int> bills = {5,5,5,10,20};
  vector<int> bills = {10,10};
  cout<<Solution().lemonadeChange(bills);
}