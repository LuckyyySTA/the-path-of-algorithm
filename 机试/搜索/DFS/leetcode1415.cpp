class Solution {
public:
    string res;
    int count = 0;
    string str = "abc";
    void backTrack(int n, int k, string path){
        if(path.length() == n){
            count++;
            if(count == k){
                res = path;
            }
            return;
        }
        if(path.length() > n){
            res = "";
        }
        for(int i = 0; i < str.length(); i++){
            if(path.length() == 0 || path[path.length() - 1] != str[i]){
                path += str[i];
                backTrack(n, k, path);
                path = path.substr(0, path.length() - 1);
            }
        }
    }
    string getHappyString(int n, int k) {
        string path = "";
        backTrack(n, k, path);
        return res;   
    }
};  