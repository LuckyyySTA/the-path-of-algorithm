class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp,temp;
        int sum = 0, flag=0;
        for(int i=0; i < chars.length(); i++){
            mp[chars[i]]++;
        }
        for(int i=0; i < words.size(); i++){
            temp = mp;
            for(int j=0; j < words[i].size(); j++){
                if(temp[words[i][j]]==0){
                    flag = 1;
                    break;
                }
                temp[words[i][j]]--;
            }
            if(flag == 0){
                sum += words[i].size(); 
            } 
            flag = 0; 
        }
        return sum;
    }
};