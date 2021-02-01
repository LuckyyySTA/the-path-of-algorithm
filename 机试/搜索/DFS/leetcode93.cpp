class Solution {
public:
    vector<string> res;
    vector<int> ip;
    void backTrack(string s, vector<int>& ip, int index){
        if(index == s.length()){
            if(ip.size() == 4){
                res.push_back(get_string(ip));
            }
            return;
        }
        if(index == 0){
            ip.push_back(s[0] - '0');
            backTrack(s, ip, index + 1);
        }else{
            int next = ip.back() * 10 + (s[index] - '0');
            if(next <= 255 && ip.back() != 0){
                ip.back() = next;
                backTrack(s, ip, index + 1);
                ip.back() /= 10;
            }
            if(ip.size() < 4){
                ip.push_back(s[index] - '0');
                backTrack(s, ip, index + 1);
                ip.pop_back();
            }    
        }
    }
    string get_string(const vector<int>& ip){
        string res = to_string(ip[0]);
        for(int i = 1; i < ip.size(); i ++)
            res += "." + to_string(ip[i]);
        return res;
    }
    vector<string> restoreIpAddresses(string s) {
        backTrack(s, ip, 0);
        return res;
    }
};