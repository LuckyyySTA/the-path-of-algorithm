class Solution {
public:
    vector<string> str = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> res;
    void backTrack(string path, string digits, int index){
        if(index == digits.length()){
            res.push_back(path);
            return;
        }
        char ch = digits[index];
        string letters = str[ch-'0'];
        for(int i = 0; i < letters.length(); i++){
            backTrack(path + letters[i], digits, index + 1);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0){
            return res;
        }
        string path = "";
        backTrack(path, digits, 0);
        return res;
    }
};