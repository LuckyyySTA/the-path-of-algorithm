#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
      int row = A.size(), col = A[0].size();
      for(int i = 0; i < row; i++){
        if(A[i][0] == 0){
          flipRow(A, i);
        }
      }
      for(int j = 1; j < col; j++){
        int zero = zeroInCol(A, j);
        if(zero > row/2){
          flipCol(A, j);
        }
      }
      int res = 0;
      for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
          if(A[i][j] == 1){
            res += (1<< (col - 1 - j));
          }
        }
      }
      return res;
    }

    void flipRow(vector<vector<int>>& A, int row){
      for(int i = 0; i < A[0].size(); i++){
        A[row][i] = 1 - A[row][i];
      }
    }

    void flipCol(vector<vector<int>>& A, int col){
      for(int i = 0; i < A.size(); i++){
        A[i][col] = 1 - A[i][col];
      }
    }
    
    int zeroInCol(vector<vector<int>>& A, int col){
      int zero = 0;
      for(int i = 0; i < A.size(); i++){
        zero += (A[i][col] == 0 ? 1 : 0);
      }
      return zero;
    }
};

int main(){
  vector<vector<int>> A = {{0,0,1,1},{1,0,1,0},{1,1,0,0}};
  cout<<Solution().matrixScore(A);
}