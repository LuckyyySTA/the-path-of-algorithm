class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> hashmap;
        vector<string> res;
        string str = "qwertyuiopQWERTYUIOPasdfghjklASDFGHJKLzxcvbnmZXCVBNM";
        for(int i=0;i<str.length();i++){
            if(i<20){
                hashmap[str[i]] = 1;
            }else if(i<38){
                hashmap[str[i]] = 2;
            }else{
                hashmap[str[i]] = 3;
            }
        }
        for(int i = 0; i < words.size(); i++){
            int temp = hashmap[words[i][0]];
            int flag = 0;
            for(int j = 1; j < words[i].size(); j++){
                if(hashmap[words[i][j]] != temp){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};