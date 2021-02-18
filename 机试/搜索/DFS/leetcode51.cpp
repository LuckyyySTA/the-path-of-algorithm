class Solution {
public:
    vector<vector<string>> res;
    vector<vector<string>> solveNQueens(int n) {
        vector<int> col(n, false);
        vector<int> row;
        vector<int> dia1(2 * n - 1, false);
        vector<int> dia2(2 * n - 1, false);
        dfs(n, 0, row, col, dia1, dia2);
        return res;
    }
    void dfs(int n, int index, vector<int>& row, vector<int>& col, vector<int>& dia1, vector<int>& dia2){
        if(n == index){
            res.push_back(generateBoard(n, row));
            return;
        }
        for(int i = 0; i < n; i++){
            if(!col[i] && !dia1[index + i] && !dia2[index - i + n - 1]){
                row.push_back(i);
                col[i] = true;
                dia1[index + i] = true;
                dia2[index - i + n - 1] = true;
                dfs(n, index+1, row, col, dia1, dia2);
                col[i] = false;
                dia1[index + i] = false;
                dia2[index - i + n - 1] = false;
                row.pop_back();
            }
        }
        return;
    }
vector<string> generateBoard(int n, vector<int>& row){
    vector<string> board(n, string(n, '.'));
    for(int i = 0; i < n; i++){
        board[i][row[i]] = 'Q';
    }
    return board;
}
};