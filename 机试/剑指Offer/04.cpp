#include<bits/stdc++.h>

using namespace std;

int main(){
    class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0){
            return false;
        }
        int row = matrix.size();
        int col = matrix[0].size();
        int x = 0, y = col - 1;
        while(x <= row-1 && y >= 0){
            if(matrix[x][y] == target){
                return true;
            }else if(matrix[x][y] < target){
                x++;
            }else{
                y--;
            }
        }
        return false;
    }
};
}