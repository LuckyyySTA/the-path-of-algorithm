#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
      int left = 0, right = letters.size() - 1;
      while(left < right){
        int mid = left + (right - left)/2;
        if(letters[mid] > target){
          // [left, mid]
          right = mid;
        }else{
          // [mid + 1, right]
          left = mid + 1;
        }
      }
      return letters[left] <= target ? letters[0] : letters[left];
    }
};
int main(){
  // vector<char> letters = {'c','f','j'};
  vector<char> letters = {'a','b','d'};
  char target = 'c';
  cout<<Solution().nextGreatestLetter(letters,target);
}