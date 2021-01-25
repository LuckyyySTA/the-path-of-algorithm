#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
      int left = 0, right = letters.size() - 1;
      while(left < right){
          int mid = left + (right - left)/2;
          if(letters[mid] <= target){
              left = mid + 1;
          }else{
              right = mid;
          } 
      }
      return letters[left] > target ? letters[left] : letters[0];
    }
};
int main(){
  // vector<char> letters = {'c','f','j'};
  vector<char> letters = {'a','b','d'};
  char target = 'c';
  cout<<Solution().nextGreatestLetter(letters,target);
}